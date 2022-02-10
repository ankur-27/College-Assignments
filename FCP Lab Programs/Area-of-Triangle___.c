#include<stdio.h>

int main()
{
    int a,b,x,z;
    for(int h=1; h>0; h++)
    {
        printf("\nEnter your choice from 1 to 4\n\t 1. Calculate Area of Triangle\n\t 2. Calculate Area of Circle\n\t 3. Calculate Area of Rectangle\n\t 4. Exit\n\t ");
        scanf("%d",&x);

        switch (x)
        {
        case 1:
            printf("Enter length of base and height of triangle. ");
            scanf("%d%d",&a,&b);
            z=0.5*a*b;
            printf("The Area of triangle is %d\n",z);
            break;

        case 2:
            printf("Enter radius of circle. ");
            scanf("%d",&a);
            z=3.14*a*a;
            printf("The Area of circle is %d\n",z);
            break;

        case 3:
            printf("Enter length of 2 sides of rectangle. ");
            scanf("%d%d",&a,&b);
            z=a*b;
            printf("The Area of rectangle is %d\n",z);
            break;

        case 4:
            return 0;

        default:
            printf("Enter valid choice.");
        }
    }
}
