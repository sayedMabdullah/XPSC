/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "15-05-2024"
 * Time: "20:43:50"
 *
 * File: "2.cpp"
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

    string x;

    for (char a : s)
    {
        if (a == 'R')
        {
            x.push_back('P');
        }
        else if (a == 'S')
        {
            x.push_back('R');
        }
        else
        {
            x.push_back('S');
        }
    }

    int count = 0;
    for (int i = 0; i < x.size() - 1; i++)
    {
        if (x[i] == x[i + 1])
            x[i + 1] = 'D';
    }
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == 'D')
            count++;
    }

    cout << n - count << nl;
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