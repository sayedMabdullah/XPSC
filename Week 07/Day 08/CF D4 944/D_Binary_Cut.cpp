/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "10-05-2024"
 * Time: "21:15:22"
 *
 * File: "D_Binary_Cut.cpp"
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
    string s;
    cin >> s;

    int n = s.size();

    int count = 0;
    bool found = false;

    for (int i = 0; i < n; i++)
    {

        string xx = s.substr(i, 2);

        if (xx == "01" or xx == "10")
            count++;

        if (xx == "01")
            found = true;
    }

    if (found)
        cout << count << nl;
    else
        cout << count + 1 << nl;
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