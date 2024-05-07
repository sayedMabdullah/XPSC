/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "06-05-2024"
 * Time: "23:58:58"
 *
 * File: "String_Game.cpp"
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
    string s;
    cin >> s;

    int zero = 0, one = 0;
    for (char x : s)
    {
        if (x == '0')
            zero++;
        else
            one++;
    }

    int ans = min(zero, one);

    if (ans % 2 != 0)
    {
        cout << "Zlatan" << nl;
    }
    else
    {
        cout << "Ramos" << nl;
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