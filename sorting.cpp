#include <iostream>
using namespace std;
int main()
{
    // Selection Sort
    /*
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n - 2; i++)
    {
        int mmi = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mmi])
            {
                mmi = j;
            }
                }
        int tem = arr[mmi];
        arr[mmi] = arr[i];
        arr[i] = tem;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    */
    // Bubble sort
    /*
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    */
    // Insertion Sort
    /*
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    */
    return 0;
}