/**
 * Title: sayed_m_abdullah
 * Date: "22-03-2024" Time:"09:53:33"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R')
            {
                if (s2[i] != 'R')
                    ans = false;
            }
            if (s2[i] == 'R')
            {
                if (s1[i] != 'R')
                    ans = false;
            }
        }

        if (ans)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}