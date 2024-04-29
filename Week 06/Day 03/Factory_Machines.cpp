/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "29-04-2024"
 * Time: "19:07:25"
 *
 * File: "Factory_Machines.cpp"
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

bool ok(int m, int n, vector<int> a, int t)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += (m / a[i]);
        if (total >= t)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    int n, t;
    cin >> n >> t;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // ____lamda function_____
    // auto ok = [&](int m)
    // {
    //     int total = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         total += (m / a[i]);
    //         if (total >= t)
    //         {
    //             return true;
    //         }
    //     }
    //     return false;
    // };

    int l = 1, r = 1e18, ans, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid, n, a, t))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
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