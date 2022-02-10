#include <iostream>
using namespace std;

int Binarysearch(int arr[], int size, int item)
{
    int f, l, mid;
    f = 0;
    l = size - 1;
    while (f <= l)
    {
        mid = (f + l) / 2;
        if (item == arr[mid])
            return mid;
        else if (item > arr[mid])
            f = mid + 1;
        else
            l = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "\nEnter desired array size : ";
    cin >> n;
    int arr[n], item;
    cout << "Enter Array elements(must be Sorted in Ascending Order) : \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter Element to be searched for : ";
    cin >> item;
    int index = Binarysearch(arr, n, item);
    if (index == -1)
        cout << "\nSorry!! Given element could not be found.\n ";
    else
        cout << "\nElement found at index no. : " << index << " , Position : " << index + 1 << "." << endl;
    return 0;
}
