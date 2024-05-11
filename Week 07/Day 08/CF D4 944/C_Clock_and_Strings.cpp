/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "10-05-2024"
 * Time: "20:48:26"
 *
 * File: "C_Clock_and_Strings.cpp"
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int count = 0;
    if ((c > a and c < b) || (c < a and c > b))
    {
        count++;
    }
    if ((d > a and d < b) || (d < a and d > b))
    {
        count++;
    }
    if (c == a or c == b or d == a or d == b)
    {
        count = 0;
    }

    if (count == 1)
        yes;
    else
        no;
    // cout << count << nl;
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