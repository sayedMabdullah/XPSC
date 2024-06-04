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

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int>a(n);
    vector<int>c(k);

    multiset<int>p;



    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        p.insert(a[i]);
    }

    // sort(a.begin(), a.end());

    for (int i = 0; i < k; i++)
    {
        cin >> c[i];
    }

    for (auto x : c)
    {
        auto it = p.upper_bound(x);

        if (it == p.begin())
        {
            cout << -1 << nl;
        }
        else
        {
            it--;
            cout << *it << nl;
            p.erase(it);
        }

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
}