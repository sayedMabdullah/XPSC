/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "06-05-2024"
 * Time: "22:40:11"
 *
 * File: "H_Hamburgers.cpp"
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
    string rcp;
    cin >> rcp;

    int stkB, stkS, stkC;
    cin >> stkB >> stkS >> stkC;

    int mprcB, mprcS, mprcC;
    cin >> mprcB >> mprcS >> mprcC;

    int blnc;
    cin >> blnc;

    int B = 0, S = 0, C = 0;
    for (char x : rcp)
    {
        if (x == 'B')
            B++;
        else if (x == 'S')
            S++;
        else
            C++;
    }

    auto make = [&](int md)
    {
        int needB = md * B, needS = md * S, needC = md * C;

        int buyB = (needB - stkB), buyS = (needS - stkS), buyC = (needC - stkC);
        if (buyB < 0)
        {
            buyB = 0;
        }
        if (buyS < 0)
        {
            buyS = 0;
        }
        if (buyC < 0)
        {
            buyC = 0;
        }

        if ((buyB * mprcB) + (buyC * mprcC) + (buyS * mprcS) > blnc)
        {
            return false;
        }
        else
        {
            return true;
        }
    };

    int l = 1, r = 1e13, ans = 0, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (make(mid))
        {
            ans = mid;
            l = mid + 1;
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