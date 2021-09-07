#include<stdio.h>

int y=0;
int ReverseOfNumber(int x)
{
    int z;
    z=x%10;
    x=x/10;
    y=z+(y*10);

    if (x==0)
        return y;
    else
        ReverseOfNumber (x);
}

int main()
{
    int a,b;
    printf("Enter any no. ");
    scanf("%d",&a);
    b=ReverseOfNumber (a);
    printf("The Reverse of the number %d is %d.",a,b);
}
