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
    string s;
    cin >> s;

    string rvs;
    rvs = s;
    reverse(rvs.begin(), rvs.end());

    if (s == rvs) { cout << 0 << nl; return; }

    int n = s.size();

    cout << 3 << nl;
    cout << "L" << " " << n - 1 << nl;
    cout << "R" << " " << n - 1 << nl;
    cout << "R" << " " << n + n - 1;
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
}