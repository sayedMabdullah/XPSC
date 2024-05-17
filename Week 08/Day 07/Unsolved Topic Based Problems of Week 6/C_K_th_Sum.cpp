/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "17-05-2024"
 * Time: "20:55:19"
 *
 * File: "C_K_th_Sum.cpp"
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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    auto yeap = [&](int md)
    {
        int c = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < md)
            {
                int dif = md - a[i];
                int x = lower_bound(b.begin(), b.end(), dif) - b.begin();
                c += x;
            }
        }

        return c < k;
    };

    int l = 1, r = 1e18, ans, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (yeap(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << nl;
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