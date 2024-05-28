#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Merge the two halves into temp
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy the remaining elements of left half, if any
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy the remaining elements of right half, if any
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the merged elements back into the original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    // Merge sort
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
