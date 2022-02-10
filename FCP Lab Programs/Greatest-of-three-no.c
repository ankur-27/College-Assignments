#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter any three different no. ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b)
    {
        if(a>=c)
            printf("%d is greater than %d & %d.",a,c,b);
        else
            printf("%d is greater than %d & %d.",c,a,b);
    }
    else
    {
        if(b>=c)
            printf("%d is greater than %d & %d.",b,c,a);
        else
            printf("%d is greater than %d & %d.",c,b,a);
    }
}
