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

    vector<int>a(n);
    vector<pair<int, int>>v;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
        v.push_back({ a[i], i + 1 });
    }

    sort(v.begin(), v.end());

    for (int l = 0; l < n; l++)
    {
        int f = l + 1, r = n - 1;

        while (f < r)
        {
            int sum = v[l].first + v[f].first + v[r].first;

            if (sum == k)
            {
                cout << v[l].second << " " << v[f].second << " " << v[r].second << nl;
                return;
            }

            else if (sum < k)
            {
                f++;
            }
            else { r--; }
        }

    }
    cout << "IMPOSSIBLE" << nl;
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