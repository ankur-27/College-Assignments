#include<stdio.h>

int main()
{
    float a,b;
    printf("Enter Temperature in Celsius. ");
    scanf("%f",&a);
    b= (a*9/5)+32;
    printf("%f Celsius in Fahrenheit is %f.",a,b);
}
