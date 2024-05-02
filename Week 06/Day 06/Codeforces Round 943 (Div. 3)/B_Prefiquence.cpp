/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "02-05-2024"
 * Time: "21:25:24"
 *
 * File: "B_Prefiquence.cpp"
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

    string s1, s2;
    cin >> s1 >> s2;

    int i = 0, j = 0, ans = 0;
    while (i < m and j < n)
    {
        if (s2[i] == s1[j])
        {
            j++;
            ans++;
        }
        i++;
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