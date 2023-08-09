#include<stdio.h>
#include<math.h>
int main()
{
	int i,N;
	scanf("%d",&N);
	for (i=1;i<=N;i++){
		int square = pow(i,2);
		int cube = pow(i,3);
		printf("Square and Cube of %N : %d %d\n",square,cube);
		}	

	
return 0;	
	
	
}

//Write a C program to print squares and cubes of all numbers from 1 to N using a for loop and the output should be shown following the pattern below:
//Sample Input:
//4
//Sample Output:
//Square and cube of 1 : 1 1
//Square and cube of 2 : 4 8
//Square and cube of 3 : 9 27
//Square and cube of 4 : 16 64
