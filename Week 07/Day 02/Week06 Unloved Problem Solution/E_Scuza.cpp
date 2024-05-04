/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "04-05-2024"
 * Time: "15:29:33"
 *
 * File: "E_Scuza.cpp"
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> pre(n + 1);

    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    // meximum length of next step
    for (int i = 1; i < n; i++)
    {
        a[i] = max(a[i - 1], a[i]);
    }

    while (k--)
    {
        int x;
        cin >> x;

        auto it = upper_bound(a.begin(), a.end(), x);
        int ind = it - a.begin();

        if (ind != 0)
            cout << pre[ind - 1] << " ";
        else
            cout << 0 << " ";
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