#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a,b;
    printf("Enter the range in which you want prime no. ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    printf("Prime Numbers in the given range are :-\n");
    for(int i=a; i<=b; i++)
    {
        bool c=false;
        for(int j=2; j<i; j++)
            if(i%j==0)
            {
                c=true;
                break;
            }
        if(c==false)
        printf("\t%d",i);
    }
}
