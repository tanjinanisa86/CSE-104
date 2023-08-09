#include<stdio.h>
int main()
{
	int i,N;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
	printf("1/%d+",i);
	if(i==N) {printf("1/%d\n",i);
	}
	}
return 0;
}

//Write a C program to print harmonic series up to N using a for loop.
//Sample Input:
//5
//6
//Sample Output:
//1+1/2+1/3+1/4+1/5

//1+1/2+1/3+1/4+1/5+1/6
