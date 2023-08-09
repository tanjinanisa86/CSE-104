#include <stdio.h>

int main() {
  int i,N;
  scanf("%d", &N);
  while (i <= N) {
    if (i % 4 == 0) {
      if (i % 100 != 0 || i % 400 == 0) //for checking century years 
	  {
        printf("%d ", i);
      }
    }
    i++;
  }

  return 0;
}

//Write a C program to print all Leap Years from 1 to N using a while loop.
