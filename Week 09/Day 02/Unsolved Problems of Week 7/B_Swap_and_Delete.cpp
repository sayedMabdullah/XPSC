/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "19-05-2024"
 * Time: "12:04:49"
 *
 * File: "B_Swap_and_Delete.cpp"
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

    int one = 0, zero = 0;

    for (auto x : s)
    {
        if (x == '0')
            zero++;
        else
            one++;
    }
    for (auto x : s)
    {
        if (x == '0')
            if (one == 0)
                break;
            else
                one--;
        else if (zero == 0)
            break;
        else
            zero--;
    }

    cout << one + zero << nl;
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