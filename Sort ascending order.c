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
    for (int y=0; y<x-1; y++)
        for (int z=y+1; z<x; z++)
            if(a[y]>a[z])
            {
                temp=a[y];
                a[y]=a[z];
                a[z]=temp;
            }
    printf("The ascending order of the given number is \n");
    for(int b=0; b<x; b++)
        printf("\t%d",a[b]);
    }
