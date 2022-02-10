#include <iostream>
using namespace std;

void SelSort(int arr[], int size)
{
    int small, pos, tmp;
    for (int i = 0; i < size - 1; i++)
    {
        small = arr[i];
        pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < small)
            {
                small = arr[j];
                pos = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = tmp;
    }
}

int main()
{
    int n;
    cout << "\nEnter Number of Element you wnat in the array : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter Array elements...";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    SelSort(arr, n);
    cout << "\n\nThe Sorted array is as shown below...\n ";
    for (int k = 0; k < n; k++)
        cout << arr[k] << "  ";
    cout << endl;
    return 0;
}
