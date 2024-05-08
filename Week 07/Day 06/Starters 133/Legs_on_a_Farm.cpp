/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "08-05-2024"
 * Time: "20:33:40"
 *
 * File: "Legs_on_a_Farm.cpp"
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

    if (n == 2)
        cout << 1 << nl;
    else if (n % 4 == 0)
    {
        cout << n / 4 << nl;
    }
    else
    {
        int c = n / 4;
        int ch = (n - (4 * c)) / 2;

        cout << c + ch << nl;
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