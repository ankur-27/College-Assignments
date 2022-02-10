#include<stdio.h>

int main()
{
    char a;
    printf("Enter any character. ");
    scanf("%c",&a);
    if (a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'|| a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')
        printf("The entered character '%c' is a vowel.",a);
    else
        printf("The entered character is '%c' not a vowel.",a);
}
