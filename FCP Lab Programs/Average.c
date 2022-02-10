#include<stdio.h>

int main()
{
    int a;
    printf("Enter total number of values. ");
    scanf("%d",&a);
    float x[a],z=0,b;
    printf("Now enter %d values. ",a);
    for(int y=0;y<a;y++)
    {
        scanf("%f",&x[y]);
        z=z+x[y];
    }
    b=a;
    z=z/b;
    printf("The average of %d values is %f.",a,z);
}
