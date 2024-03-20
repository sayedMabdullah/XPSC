//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        vector<int> a(26);
        vector<int> b(26);
        for (char x : pat)
        {
            b[x - 'a']++;
        }

        int l = 0, r = 0, cnt = 0;

        while (r < txt.size())
        {
            a[txt[r] - 'a']++;
            if (r - l + 1 == pat.size())
            {
                bool found = true;
                for (int i = 0; i < 26; i++)
                {
                    // cout << a[i] << " ";
                    if (a[i] != b[i])
                        found = false;
                }
                cout << endl;

                if (found)
                {
                    cnt++;
                }

                a[txt[l] - 'a'] -= 1;

                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends