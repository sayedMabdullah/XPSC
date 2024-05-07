/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "07-05-2024"
 * Time: "21:13:21"
 *
 * File: "B_Binary_Parity.cpp"
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

    bitset<32> b1(n);

    int x = b1.count();

    if (x % 2 == 0)
        cout << "EVEN" << nl;
    else
        cout << "ODD" << nl;
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