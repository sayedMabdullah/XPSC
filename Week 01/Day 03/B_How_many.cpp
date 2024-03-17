/**
 * Title: sayed_m_abdullah
 * Date: "17-03-2024" Time:"04:59:56"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int s, t, ans = 0;
    cin >> s >> t;

    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s - i; j++)
        {
            for (int k = 0; k <= s - i - j; k++)
            {
                if (i * j * k <= t)
                    ans++;
            }
        }
    }

    cout << ans;

    return 0;
}