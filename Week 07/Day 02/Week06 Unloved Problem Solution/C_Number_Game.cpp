/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "04-05-2024"
 * Time: "19:58:28"
 *
 * File: "C_Number_Game.cpp"
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

    auto yeap = [&](int m)
    {
        multiset<int> ms;

        for (int aa : a)
        {
            ms.insert(aa);
        }
        for (int i = 1; i <= m; i++)
        {
            // alice move
            if (ms.empty())
            {
                return false;
            }

            int x = m - i + 1;

            auto it = ms.upper_bound(x);
            // 1st element ???
            if (it == ms.begin())
            {
                return false;
            }
            it--;
            ms.erase(it);

            // bob moves
            if (!ms.empty())
            {
                it = ms.begin();

                int xx = *it + x;

                ms.erase(it);
                ms.insert(xx);
            }
        }
        return true;
    };

    int l = 0, r = n, ans, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (yeap(mid))
        {
            ans = mid;
            l = mid + 1;
            // cout << ans << endl;
        }
        else
        {
            r = mid - 1;
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