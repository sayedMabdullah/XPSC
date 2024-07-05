/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "05-07-2024"
 * Time: "17:52:06"
 *
 * File: "B_Morning_Jogging.cpp"
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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> ans(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;

            a[i][j] = x;
        }
    }

    for (int i = 0; i < n; i++)
    {
        sort(a[i].begin(), a[i].end());
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << nl;
    // }

    for (int i = 0; i < m; i++)
    {
        int val = INT_MAX;
        int indx = -1;

        for (int j = 0; j < n; j++)
        {
            if (a[j][0] < val)
            {
                val = a[j][0];
                indx = j;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (j == indx)
            {
                ans[j].push_back(val);
                a[j].erase(a[j].begin());
            }
            else
            {
                ans[j].push_back(a[j][a[j].size() - 1]);
                a[j].pop_back();
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << nl;
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