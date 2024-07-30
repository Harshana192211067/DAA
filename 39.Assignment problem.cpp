#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define N 4 // Number of jobs and workers

// A utility function to find the minimum cost assignment using Branch and Bound.
void findMinCost(int costMatrix[N][N], int *minCost, int assigned[N], int worker, int curCost) {
    if (worker == N) {
        if (curCost < *minCost) {
            *minCost = curCost;
        }
        return;
    }
    for (int job = 0; job < N; job++) {
        if (!assigned[job]) {
            assigned[job] = 1;
            findMinCost(costMatrix, minCost, assigned, worker + 1, curCost + costMatrix[worker][job]);
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

    int minCost = INT_MAX;
    int assigned[N] = {0};

    findMinCost(costMatrix, &minCost, assigned, 0, 0);

    printf("The minimum cost is: %d\n", minCost);

    return 0;
}

