#include<stdio.h>

int main()
{
    float p,r,t,si;
    printf("Enter Principle Amount ");
    scanf("%f",&p);
    printf("Enter Rate of Interest ");
    scanf("%f",&r);
    printf("Enter Time period in years ");
    scanf("%f",&t);

    si=(p*r*t)/100;
    printf("\nThe Simple Interest is %f.",si);

}
