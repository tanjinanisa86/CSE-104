#include<stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		if(N%i==0){printf("%d\n",i);
		}
		}

return 0;
}
//3.Write a C program to find all the divisors of a given integer N using a for loop.
//Sample Input:
//5
//6

//Sample Output:
//1,5
//1,2,3,6
