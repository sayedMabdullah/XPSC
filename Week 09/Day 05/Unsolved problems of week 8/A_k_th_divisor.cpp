/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "21-05-2024"
 * Time: "11:45:57"
 *
 * File: "A_k_th_divisor.cpp"
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
    int n, k;
    cin >> n >> k;

    set<int> s;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
    }

    if (k > s.size())
    {
        cout << -1 << nl;
    }
    else
    {

        auto it = next(s.begin(), k - 1);
        cout << *it << nl;
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