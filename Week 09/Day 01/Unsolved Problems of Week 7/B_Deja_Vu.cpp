/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "18-05-2024"
 * Time: "12:39:01"
 *
 * File: "B_Deja_Vu.cpp"
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
    int n, q;
    cin >> n >> q;

    vector<int> a(n), ans;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        if (!mp.count(x))
        {
            ans.push_back(x);
            mp[x]++;
        }
    }

    for (auto xx : ans)
    {
        for (int i = 0; i < n; i++)
        {
            int modv = pow(2, xx);

            if (a[i] % modv == 0)
            {
                a[i] += pow(2, (xx - 1));
            }
        }
    }

    for (int aa : a)
    {
        cout << aa << " ";
    }
    cout << nl;
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