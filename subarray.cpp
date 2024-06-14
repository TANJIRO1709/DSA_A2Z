#include <iostream>
using namespace std;
int main()
{
    // ggogle interview question find lonest subarray system
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = a.size();
    if (k == 0)
        return 0;
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < k; i++)
    {
        st.insert(a[i]);
    }
    for (auto it : st)
    {
        if (st.find(a[i] - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(j) != st.end())
            {
                x++;
                cnt++;
            }
            longest = max(longest, j - a[i]);
        }
    }
    cout << longest;
    return 0;
}