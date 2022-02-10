#include<stdio.h>

int main()
{
    long int b=1;
    int a,c;
    printf("Enter any no. of which you want Factorial. ");
    scanf("%d",&a);
    c=a;
    for(int i=0; i<a; i++)
    {
        b=b*c;
        c=c-1;
    }
    printf("The Factorial of given number is %d.",b);
}
