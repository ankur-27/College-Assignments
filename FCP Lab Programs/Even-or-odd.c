#include<stdio.h>

int main()
{
    int a;
    printf("Enter any no. ");
    scanf("%d",&a);
    if(a%2==0)
        printf("The entered number is even.");
    else
        printf("The entered number is odd.");
}
