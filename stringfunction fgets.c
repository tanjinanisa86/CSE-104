#include <stdio.h>

#include <string.h>

void greetUser(char name[]) {

printf("Hello, %s\n", name);

}

int main() {

char userName[50];

printf("Enter your name: ");

fgets(userName, sizeof(userName), stdin);

greetUser(userName);

return 0;

}
