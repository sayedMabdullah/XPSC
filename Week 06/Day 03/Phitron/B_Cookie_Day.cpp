/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "29-04-2024"
 * Time: "22:47:56"
 *
 * File: "B_Cookie_Day.cpp"
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
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] >= k)
            ans.push_back(a[i]);
    }

    int an = INT_MAX;
    for (int x : ans)
    {
        // cout << x << " ";

        int b = x % k;
        an = min(an, b);
    }

    if (an != INT_MAX)
        cout << an << endl;
    else
        cout << -1 << endl;
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