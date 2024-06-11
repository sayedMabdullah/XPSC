/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "11-06-2024"
 * Time: "00:15:40"
 *
 * File: "B_Karen_and_Coffee.cpp"
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
// #define int long long
#define nl "\n"
#define yes cout << "YES" << nl
#define Yes cout << "Yes" << nl
#define no cout << "NO" << nl
#define No cout << "No" << nl
using namespace std;

const int N = 200000 + 5;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> l(N), ans(N, 0);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        l[x]++;
        l[y + 1]--;
    }

    for (int i = 1; i < l.size(); i++)
    {
        l[i] = l[i - 1] + l[i];
    }

    for (int i = 0; i < l.size(); i++)
    {
        if (l[i] >= k)
            l[i] = 1;
        else
            l[i] = 0;
    }

    for (int i = 1; i < l.size(); i++)
    {
        l[i] = l[i - 1] + l[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;

        cout << l[y] - l[x - 1] << nl;
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