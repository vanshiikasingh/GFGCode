// Partition points in an unsorted array
// Partition point is an element in an array such that all elements to its right are larger and all elemnts to its left are smaller

#include <iostream>
using namespace std;

void partitionElement(int arr[], int n)
{
    int i, gel[n - 1], ser[n - 1];
    gel[0] = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > gel[i - 1])
            gel[i] = arr[i];
        else
            gel[i] = gel[i - 1];
    }
    ser[n - 1] = arr[n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        if (arr[i] < ser[i + 1])
            ser[i] = arr[i];
        else
            ser[i] = ser[i + 1];
    }
    cout << "Leader elements are :" << endl;
    for (int i = 0; i < n; i++)
    {
        if ((i == 0 && arr[i] < ser[i + 1]) ||
            (arr[i] > gel[i - 1] && arr[i] < ser[i + 1]) ||
            (i == n - 1 && arr[i] > gel[i - 1]))
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int a[50], n;
    cout << "Enter size of array :" << endl;
    cin >> n;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    partitionElement(a, n);
    return 0;
}
