//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k)
{
    vector<long long> v;
    deque<long long> dq;
    long long l = 0, r = 0;
    while (r < n)
    {
        if (arr[r] < 0)
            dq.push_back(arr[r]);

        if (r - l + 1 == k)
        {
            if (dq.size() == 0)
                v.push_back(0);
            else
            {
                v.push_back(dq.front());

                if (arr[l] == dq.front())
                {
                    dq.pop_front();
                }
            }
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    return v;
}
// Driver program to test above functions
int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
