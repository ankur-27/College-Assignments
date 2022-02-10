#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf("Enter any two no. ");
    scanf("%d%d",&a,&b);
    printf("The Result are as follow :-\n\t Addition %d\n\t Subtraction %d\n\t Multiplication %d\n\t Division %d",a+b,a-b,a*b,a/b);
    getch();
}
