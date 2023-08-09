#include<stdio.h>
int main()
{
	int i,N;
	scanf("%d",&N);
	int sum=0;
	for(i=3;i<=N;i=i+4){
	
		sum+=i;
	}
	printf("%d\n",sum);
	

return 0;	
	
}
//Write a C program to find the sum of every second odd number from 1 to N using a for loop.
//Sample Input:
//12
//Sample Output:
//21
