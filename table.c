#include<stdio.h>
void table(int x){
	int i;
for(i=1;i<=10;i++){
	printf("%d * %d = %d\n",x,i,x*i);
}
}
int main(){
	int x;
	printf("Enter an integer: ");
	scanf("%d",&x);
	table(x);
return 0;
}
