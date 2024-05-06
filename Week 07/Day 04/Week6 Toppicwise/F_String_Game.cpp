/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "06-05-2024"
 * Time: "16:32:01"
 *
 * File: "F_String_Game.cpp"
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
    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto make = [&](int md)
    {
        vector<bool> x(n + 1);

        for (int i = 0; i < md; i++)
        {
            x[a[i]] = true;
        }

        int j = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            // checking sub sequence
            if (t[i] == p[j] && !x[i + 1])
            {
                j++;
            }
            if (j == m)
            {
                found = true;
                break;
            }
        }

        return found;
    };

    int l = 0, r = n, mid, ans = 0;
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

    cout << ans << '\n';
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