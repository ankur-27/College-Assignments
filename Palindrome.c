#include<stdio.h>
#include<string.h>

int main()
{
    char a[50];
    int x,y=0;

    printf("Enter any string. ");
    scanf("%s",&a);
    x=strlen(a);

    for(int i=0; i<x; i++)
        if(a[i]!=a[x-i-1])
            y=1;

    if(y==0)
        printf("The given string '%s' is Palindrome.",a);
    else
        printf("The given string '%s' is not Palindrome.",a);
}
