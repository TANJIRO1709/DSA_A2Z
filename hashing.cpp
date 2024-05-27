// hashing concepts
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    /*
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }
*/
    // string hashing
    /*
    string s;
    cin >> s;
    int hash[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c] << endl;
    }
*/
    // mapping time complexity = log(N)
    /*
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] += 1;
    }
    for (auto it : mpp)
    {
        cout << it.first << "=>" << it.second << endl;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
*/
    return 0;
}