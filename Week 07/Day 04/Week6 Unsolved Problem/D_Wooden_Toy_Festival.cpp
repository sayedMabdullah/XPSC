/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "06-05-2024"
 * Time: "19:51:05"
 *
 * File: "D_Wooden_Toy_Festival.cpp"
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

    sort(a.begin(), a.end());

    auto make = [&](int m)
    {
        int worker = 1;

        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] - a[j]) > (2 * m))
            {
                worker++;
                j = i;
            }
        }

        return worker <= 3;
    };

    int l = 0, r = 1e9, ans, mid;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (make(mid))
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