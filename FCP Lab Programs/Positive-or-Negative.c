#include<stdio.h>

int main()
{
    int a;
    printf("Enter any no. ");
    scanf("%d",&a);
    if (a>0)
        printf("The no. %d is Positive.",a);
    else if(a<0)
        printf("The no. %d is Negative.",a);
    else
        printf("The no. %d is neither Positive nor Negative.",a);
}
