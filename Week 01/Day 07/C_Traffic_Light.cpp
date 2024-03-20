/**
 * Title: sayed_m_abdullah
 * Date: "21-03-2024" Time:"04:14:31"
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
        cin.ignore();
        char f;
        string s;
        cin >> f >> s;

        s += s;

        int l = 0, r = 0, cnt = 0, ans = 0;
        vector<int> v;

        while (r < s.size())
        {
            while (s[r] != f and r < s.size())
            {
                l++;
                r++;
                cnt = 0;
            }

            while (s[r] != 'g' and r < s.size())
            {

                r++;
                cnt++;
            }

            if (s[r] == 'g')
            {
                ans = max(ans, cnt);
                cnt = 0;
            }
            l++;
            r++;
        }

        cout << ans << endl;
    }

    return 0;
}