//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// Driver Code Ends
// User function template for C++

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        int l = 0, r = 0, ans = 0, n = s.length();
        map<char, int> mp;

        while (r < n)
        {
            mp[s[r]]++;

            if (mp.size() == k)
            {
                ans = max(ans, (r - l + 1));
            }
            else if (mp.size() > k)
            {
                while (mp.size() > k)
                {
                    mp[s[l]]--;
                    if (mp[s[l]] == 0)
                    {
                        mp.erase(s[l]);
                    }
                    l++;
                }
            }
            r++;
        }

        if (ans != 0)
            return ans;
        else
            return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends