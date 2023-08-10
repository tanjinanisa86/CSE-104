#include<stdio.h>
int main()
{
    int a,b,n,c=1;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
return 0;
}



//sample output
//7
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
//16 17 18 19 20 21
//22 23 24 25 26 27 28
