/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "15-05-2024"
 * Time: "20:34:12"
 *
 * File: "1.cpp"
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
    int x, y;
    cin >> x >> y;

    int a = x * 2, b = x + 1000;

    for (int i = 0; i < y - 1; i++)
    {
        a *= 2;
        b += b;
        // cout << b << " ";
    }

    cout << max(a, b) << nl;
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