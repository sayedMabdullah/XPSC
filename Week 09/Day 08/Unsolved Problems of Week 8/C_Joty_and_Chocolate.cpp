/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "24-05-2024"
 * Time: "17:20:46"
 *
 * File: "C_Joty_and_Chocolate.cpp"
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

int lcm(int a, int b)
{
    return ((a / __gcd(a, b)) * b);
}

void solve()
{
    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    int ans = 0, dblcount;

    ans += ((n / a) * p);
    ans += ((n / b) * q);
    dblcount = (n / lcm(a, b));
    ans -= (dblcount * min(p, q));

    cout << ans << nl;
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