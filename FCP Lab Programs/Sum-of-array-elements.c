#include<stdio.h>

int main ()
{
    int x,temp;
    printf("Enter total number of elements. ");
    scanf("%d",&x);
    int a[x],b=0;
    printf("Enter that elements. ");
    for(int i=0; i<x; i++)
    {
        scanf("%d",&a[i]);
        b=b+a[i];
    }
    printf("The sum of elements of the given array is %d.",b);
}
