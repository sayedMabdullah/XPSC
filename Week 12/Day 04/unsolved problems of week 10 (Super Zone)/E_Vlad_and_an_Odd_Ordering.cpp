/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "11-06-2024"
 * Time: "13:21:07"
 *
 * File: "E_Vlad_and_an_Odd_Ordering.cpp"
 *
 **/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= (log2(n) + 1); i++)
    {
        int x = pow(2, i);
        int y = (n + (x / 2)) / x;

        if (y >= k)
        {
            cout << (x / 2) + ((k - 1) * x) << nl;
            return;
        }
        else
        {
            k -= y;
        }
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