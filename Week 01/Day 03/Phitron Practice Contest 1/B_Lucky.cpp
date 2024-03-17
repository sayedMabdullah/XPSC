/**
 * Title: sayed_m_abdullah
 * Date: "17-03-2024" Time:"22:44:08"
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
        string s;
        cin >> s;

        int one = 0, two = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i < 3)
            {
                one += int(s[i]);
            }
            else
            {
                two += int(s[i]);
            }
        }

        if (one == two)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}