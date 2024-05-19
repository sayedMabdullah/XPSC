/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "19-05-2024"
 * Time: "23:22:16"
 *
 * File: "B_Special_Numbers.cpp"
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

int power(int base, int n)
{
    int result = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            result = (result * base) % 1000000007;
            n--;
        }
        else
        {
            base = (base * base) % 1000000007;
            n /= 2;
        }
    }
    return result % 1000000007;
}
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((k >> i) & 1)
        {
            ans += power(n, i) % 1000000007;
            ans = ans % 1000000007;
        }
    }

    cout << ans << nl;
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