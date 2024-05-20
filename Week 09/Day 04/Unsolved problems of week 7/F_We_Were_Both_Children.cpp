/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "20-05-2024"
 * Time: "15:52:07"
 *
 * File: "F_We_Were_Both_Children.cpp"
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
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= n)
            mp[a[i]]++;
    }

    vector<int> ans(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 0)
            continue;
        for (int j = i; j <= n; j += i)
        {
            ans[j] += mp[i];
        }
    }

    sort(ans.rbegin(), ans.rend());

    cout << ans.front() << nl;
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