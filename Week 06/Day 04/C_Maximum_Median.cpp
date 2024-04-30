/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "30-04-2024"
 * Time: "16:09:34"
 *
 * File: "C_Maximum_Median.cpp"
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

    int a[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }

    sort(a, a + n);

    auto possible = [&](int M)
    {
        int count = 0;

        for (int i = (n / 2); i < n; i++)
        {
            if (a[i] < M)
                count += M - a[i];
        }
        if (count <= k)
            return true;
        else
            return false;
    };

    int l = 1, r = 2e9, ans = a[n / 2], mdl;

    while (l <= r)
    {
        mdl = l + (r - l) / 2;
        if (possible(mdl))
        {

            ans = mdl;
            l = mdl + 1;
        }
        else
        {
            r = mdl - 1;
        }
    }

    cout << ans << endl;
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
        cout << endl;
    }

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}