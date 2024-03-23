/**
 * Title: sayed_m_abdullah
 * Date: "23-03-2024" Time:"15:00:23"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += a[r];

        if (sum <= s)
        {
            ans += r - l + 1;
        }
        else
        {
            while (sum > s and l < r)
            {
                sum -= a[l];
                l++;
            }

            if (sum <= s)
            {
                ans = max(ans, sum);
            }
        }
        r++;
    }

    cout << ans << "\n";

    return 0;
}