/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "10-06-2024"
 * Time: "14:00:19"
 *
 * File: "A_Greg_and_Array.cpp"
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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<pair<pair<int, int>, int>> op;

    for (int i = 0; i < m; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;

        op.push_back({{x, y}, z});
    }

    vector<int> kthDis(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        kthDis[x]++;
        kthDis[y + 1]--;
    }
    for (int i = 0; i < m; i++)
    {
        kthDis[i + 1] = kthDis[i] + kthDis[i + 1];
    }

    for (int i = 1; i <= m; i++)
    {
        op[i - 1].second = op[i - 1].second * kthDis[i];
        // cout << op[i - 1].first.first << " ";
    }

    vector<int> ans(n + 2, 0);

    for (int i = 0; i < m; i++)
    {
        // cout << op[i].second << " ";
        ans[op[i].first.first] += op[i].second;
        ans[op[i].first.second + 1] -= op[i].second;
    }

    for (int i = 1; i < n; i++)
    {
        // cout << ans[i] << " ";
        ans[i + 1] = ans[i] + ans[i + 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] + a[i - 1] << " ";
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