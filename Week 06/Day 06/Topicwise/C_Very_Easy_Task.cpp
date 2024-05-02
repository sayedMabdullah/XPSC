/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "02-05-2024"
 * Time: "18:42:27"
 *
 * File: "C_Very_Easy_Task.cpp"
 *
 **/

#include <bits/stdc++.h>
#define totallyfast                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define int long long
#define nl "\n"
#define yes cout << "YES" << nl
#define Yes cout << "Yes" << nl
#define no cout << "NO" << nl
#define No cout << "No" << nl
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    auto Ok = [&](int M)
    {
        if (M < min(x, y))
            return false;

        int cnt = 1;
        M -= min(x, y);
        cnt += M / x + M / y;

        return cnt >= n;
    };

    int l = 0, r = max(x, y) * n, mid, ans;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (Ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;
}

signed main()
{
    totallyfast;

    int t;
    t = 1;
    // cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}