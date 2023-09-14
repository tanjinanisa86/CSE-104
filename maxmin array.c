#include<stdio.h>
int findmax(int arr[],int n){
	int m,i;
	m=arr[0];
	for(i=1;i<=n;i++)
	if(m<arr[i])
	m=arr[i];
return m;
}
int findmin(int arr[],int n){
	int m,i;
	m=arr[0];
	for(i=1;i<n;i++)
	if(m>arr[i])
	m=arr[i];
return m;
}
int main(){
	int a[]={23,86,47,04,99};
	int p=findmax(a,5);
	int q=findmin(a,5);
	printf("Highest : %d\nLowest : %d",p,q);
return 0;
}

