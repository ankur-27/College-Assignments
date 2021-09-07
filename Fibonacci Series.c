#include<stdio.h>

int main()
{
    int a=0,b=1,c,d;
    printf("Enter the no. of elements which you want in Fibonacci Series. ");
    scanf("%d",&d);
    printf("\t%d\t%d",a,b);
    for(int i=2; i<d; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\t%d",c);
    }
}
