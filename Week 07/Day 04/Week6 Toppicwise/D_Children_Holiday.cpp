/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "06-05-2024"
 * Time: "15:06:54"
 *
 * File: "D_Children_Holiday.cpp"
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
    int m, n;
    cin >> m >> n;

    vector<tuple<int, int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;

        a[i] = make_tuple(t, z, y);
    }

    //
    vector<int> anss(n);
    auto make = [&](int M)
    {
        vector<int> pre(n);
        int totalneed = m;
        for (int i = 0; i < n; i++)
        {

            int t = get<0>(a[i]);
            int z = get<1>(a[i]);
            int y = get<2>(a[i]);

            int total = (t * z) + y;

            int mk = M / total;

            int remnAvl = M % total;

            int premk = (mk * z) + min(z, remnAvl / t);

            // mimnimum make
            premk = min(premk, totalneed);

            totalneed -= premk;

            pre[i] = premk;
        }

        if (!totalneed)
        {
            for (int i = 0; i < n; i++)
            {
                anss[i] = pre[i];
            }
        }
        return (!totalneed);
    };

    int l = 0, r = 1e8, ans, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (make(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }

        /* code */
    }

    cout << ans << nl;

    for (int x : anss)
    {
        cout << x << " ";
    }
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