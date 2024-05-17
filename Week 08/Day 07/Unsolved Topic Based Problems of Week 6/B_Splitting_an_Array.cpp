/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "16-05-2024"
 * Time: "19:04:37"
 *
 * File: "B_Splitting_an_Array.cpp"
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
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto yeap = [&](int md)
    {
        int c = 1;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > md)
                return false;

            if (sum + a[i] > md)
            {
                sum = a[i];
                c++;
            }
            else
            {
                sum += a[i];
            }
        }

        return c <= m;
    };

    int l = 1, r = 1e18, ans, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (yeap(mid))
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