#include<stdio.h>

int main()
{
    int x,temp;
    printf("Enter total number of values. ");
    scanf("%d",&x);
    int a[x];
    printf("Enter that values. ");
    for(int i=0; i<x; i++)
        scanf("%d",&a[i]);
    for(int y=0; y<x-1; y++)
        if(a[y]>a[y+1])
        {
            temp=a[y];
            a[y]=a[y+1];
            a[y+1]=temp;
        }
    printf("The largest element of the given array is %d.",a[x-1]);
}
