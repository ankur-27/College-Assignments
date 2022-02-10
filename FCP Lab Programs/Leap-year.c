#include<stdio.h>

int main()
{
    int a;
    printf("Enter any year to check its leap year or not. ");
    scanf("%d",&a);
    if (a%4==0)
        printf("The given year is a leap year.");
        else
        printf("The given year is not a leap year.");
}
