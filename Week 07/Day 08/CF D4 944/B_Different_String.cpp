/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "10-05-2024"
 * Time: "20:42:01"
 *
 * File: "B_Different_String.cpp"
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

    int n;
    n = s.size();

    bool found = false;
    int indx = -1;
    char x = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] != x)
        {
            found = true;
            indx = i;
            break;
        }
    }

    if (found)
    {
        yes;
        swap(s[0], s[indx]);
        cout << s << nl;
    }
    else
    {
        no;
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