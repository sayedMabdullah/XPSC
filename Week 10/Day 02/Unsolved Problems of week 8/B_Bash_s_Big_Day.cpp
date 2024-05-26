/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "26-05-2024"
 * Time: "14:01:04"
 *
 * File: "B_Bash_s_Big_Day.cpp"
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

    map<int, int> mp;
    for (auto x : a)
    {
        set<int> s;

        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                while (x % i == 0)
                {
                    s.insert(i);
                    x /= i;
                }
            }
        }
        if (x > 1)
            s.insert(x);

        for (auto m : s)
        {
            mp[m]++;
        }
    }

    int ans = 1;

    for (auto x : mp)
    {
        if (x.second > ans)
        {
            ans = x.second;
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