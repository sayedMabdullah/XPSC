/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "30-04-2024"
 * Time: "00:20:11"
 *
 * File: "D_K_Odd_Sum.cpp"
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

    int i = 1;

    while (i <= k)
    {
        cout << i << " ";
        i++;
    }

    i = k + 2;
    while (i <= n)
    {
        cout << i << " ";
        i += 2;
    }
    i = k + 1;
    while (i <= n)
    {
        cout << i << " ";
        i += 2;
    }
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
        cout << nl;
    }

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}