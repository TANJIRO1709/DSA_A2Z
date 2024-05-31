#include <iostream>
using namespace std;
int main()
{
    // KADANE'S ALGORITHM
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int maxi = INT16_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum < 0)
            sum = 0;
        if (sum > maxi)
        {
            maxi = sum;
        }
    }
    cout << maxi;
    return 0;
}