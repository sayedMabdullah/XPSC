/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "25-05-2024"
 * Time: "20:41:20"
 *
 * File: "A_Bazoka_and_Mocha_s_Array.cpp"
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
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int brk = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
            continue;
        else
            brk++;
    }

    if (a[0] < a[n - 1])
        brk++;

    if (brk > 1)
        No;
    else
        Yes;
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