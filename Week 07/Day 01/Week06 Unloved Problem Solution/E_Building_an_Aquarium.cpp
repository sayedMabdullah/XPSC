/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "03-05-2024"
 * Time: "16:53:54"
 *
 * File: "E_Building_an_Aquarium.cpp"
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
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

        auto max_h = [&](int m)
    {
        int xx = 0;
        for (int i = 0; i < n; i++)
        {
            if (m > a[i])
                xx += m - a[i];
        }

        return xx <= x;
    };

    int l = 1, r = 2e9, ans, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (max_h(mid))
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
    cin >> t;

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