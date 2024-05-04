/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "04-05-2024"
 * Time: "12:11:57"
 *
 * File: "B_Two_Cakes.cpp"
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
    int ppl, ck1, ck2;
    cin >> ppl >> ck1 >> ck2;

    int t = ck1 + ck2;

    if (t == ppl)
    {
        cout << 1 << endl;
        return;
    }

    auto yeap = [&](int m)
    {
        int x = ck1 / m;
        int y = ck2 / m;

        if (x != 0 and y != 0 and (x + y) >= ppl)
            return true;
        return false;
    };

    int l = 1, r = ck1 + ck2, ans, mid;

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