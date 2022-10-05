// Problem description
// Find the k-th smallest number in an given array


#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the no of elements: " << endl;
    int n;
    cin >> n;
    cout << "Enter the value of K: " << endl;
    int k;
    cin >> k;
    int arr[50];
    cout << "Enter all the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int *a = &arr[j];
                int *b = &arr[j + 1];
                int temp = *a;
                *a = *b;
                *b = temp;
            }
        }
    }
    cout << "The " << k << " smallest element is: " << arr[k - 1] << endl;
}