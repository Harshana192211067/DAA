#include<stdio.h>
int main(){
	int a[100];
	int n,i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
		if (a[i] < a[j]){
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
		}}
	}
	int l=a[n-1];
	printf(" Largest number : %d",l);
}