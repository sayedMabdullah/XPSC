/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "07-05-2024"
 * Time: "17:13:31"
 *
 * File: "B_3_palindrome.cpp"
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

    if (n < 2)
    {
        cout << 'a' << nl;
    }
    else
    {
        string s;

        s.push_back('a');
        s.push_back('b');

        for (int i = 2; i < n; i++)
        {
            if (s[i - 2] == 'a')
            {
                s.push_back('b');
            }
            else
            {
                s.push_back('a');
            }
        }

        cout << s << nl;
    }
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