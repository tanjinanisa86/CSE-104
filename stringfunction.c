#include <stdio.h>

#include <string.h>

void greetWithAge(char name[], int age) {

printf("Hello, %s Your age is %d.\n", name, age);

}

int main() {

char userName[50];

int userAge;

printf("Enter your name: ");

gets(userName);

printf("Enter your age: ");

scanf("%d", &userAge);

greetWithAge(userName, userAge);

return 0;

}
