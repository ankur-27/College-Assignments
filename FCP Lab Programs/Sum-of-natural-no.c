#include<stdio.h>

int main()
{
    int a,b=0;
    printf("Enter value upto which you want sum of natural no. ");
    scanf("%d",&a);
    for (int i=1; i<=a; i++)
        b=b+i;
    printf("The sum of %d natural number is %d.",a,b);
}
