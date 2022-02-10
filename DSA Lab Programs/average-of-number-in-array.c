#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number of elements you want in array(max. 50) : ");
    scanf("%d", &n);
    int arr[50];
    float avg = 0;
    printf("Enter that elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        avg = avg + arr[i];
    }
    avg = avg / n;
    printf("The Average of Numbers present in the array is : %f", avg);
}