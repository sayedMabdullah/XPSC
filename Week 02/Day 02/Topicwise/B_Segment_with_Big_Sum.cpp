/**
 * Title: sayed_m_abdullah
 * Date: "23-03-2024" Time:"14:37:29"
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

    ll l = 0, r = 0, sum = 0, ans = INT_MAX;
    while (r < n)
    {
        sum += a[r];
        if (sum >= s)
        {
            ans = min(ans, r - l + 1);

            while (sum >= s and l <= r)
            {
                sum -= a[l];
                l++;

                if (sum >= s)
                {
                    ans = min(ans, r - l + 1);
                }
            }
        }
        r++;
    }

    if (ans <= n)
    {
        cout << ans << "\n";
    }
    else
    {
        cout << "-1"
             << "\n";
    }

    return 0;
}