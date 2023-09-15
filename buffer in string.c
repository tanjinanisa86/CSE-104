/*#include <stdio.h>

int main() {

int secret_number = 42;

char buffer[3];

printf("Enter your name: ");

scanf("%s", buffer);

printf("Hello, %s! Your secret number is: %d\n", buffer, secret_number);

return 0;

}*/


//solution of danger scanf
#include <stdio.h>

int main() {

int secret_number = 42;

char buffer[10];

printf("Enter your name: ");

scanf("%9s", buffer);

printf("Hello, %s! Your secret number is: %d\n", buffer, secret_number);

return 0;

}
