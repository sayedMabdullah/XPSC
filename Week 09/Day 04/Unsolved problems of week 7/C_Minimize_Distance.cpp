/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "20-05-2024"
 * Time: "09:38:50"
 *
 * File: "C_Minimize_Distance.cpp"
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

    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x < 0)
            neg.push_back(abs(x));
        else
            pos.push_back(x);
    }

    sort(pos.rbegin(), pos.rend());
    sort(neg.rbegin(), neg.rend());

    if (neg.empty())
    {
        int ans = 0;
        for (int i = 0; i < pos.size(); i += k)
        {
            ans += pos[i] * 2;
        }
        ans -= pos[0];

        cout << ans << nl;
    }
    else if (pos.empty())
    {
        int ans = 0;
        for (int i = 0; i < neg.size(); i += k)
        {
            ans += neg[i] * 2;
        }
        ans -= neg[0];

        cout << ans << nl;
    }
    else
    {
        int ans = 0;
        for (int i = 0; i < pos.size(); i += k)
        {
            ans += pos[i] * 2;
        }
        for (int i = 0; i < neg.size(); i += k)
        {
            ans += neg[i] * 2;
        }

        ans -= max(neg[0], pos[0]);

        cout << ans << nl;
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
    }

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}