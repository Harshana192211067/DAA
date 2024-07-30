#include <stdio.h>
#include <limits.h>

#define N 4 // Number of jobs and workers

int minCost = INT_MAX;
int bestAssignment[N];

// A utility function to find the minimum cost assignment using Branch and Bound.
void findMinCost(int costMatrix[N][N], int assigned[N], int worker, int curCost, int jobAssignment[N]) {
    if (worker == N) {
        if (curCost < minCost) {
            minCost = curCost;
            for (int i = 0; i < N; i++) {
                bestAssignment[i] = jobAssignment[i];
            }
        }
        return;
    }

    for (int job = 0; job < N; job++) {
        if (!assigned[job]) {
            assigned[job] = 1;
            jobAssignment[worker] = job;
            findMinCost(costMatrix, assigned, worker + 1, curCost + costMatrix[worker][job], jobAssignment);
            assigned[job] = 0;
        }
    }
}

int main() {
    int costMatrix[N][N] = {
        {9, 2, 7, 8},
        {6, 4, 3, 7},
        {5, 8, 1, 8},
        {7, 6, 9, 4}
    };

    int assigned[N] = {0};
    int jobAssignment[N] = {0};

    findMinCost(costMatrix, assigned, 0, 0, jobAssignment);

    printf("The minimum cost is: %d\n", minCost);
    printf("The job assignments are:\n");
    for (int i = 0; i < N; i++) {
        printf("Worker %d is assigned to Job %d\n", i, bestAssignment[i]);
    }

    return 0;
}

