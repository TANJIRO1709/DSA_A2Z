#include <iostream>
#include <vector>
using namespace std;
// Quick Sort
int f(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partition = f(arr, low, high);
        qs(arr, low, partition - 1);
        qs(arr, partition + 1, high);
    }
}

int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    qs(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}