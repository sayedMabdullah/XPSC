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

    map<char, int>mp;

    for (auto x : s)
    {
        mp[x]++;
    }

    string ans1, ans2; bool mid_odd = false; char mid;

    for (auto [x, y] : mp)
    {
        if (y % 2 != 0)
        {
            if (mid_odd)
            {
                cout << "NO SOLUTION" << nl;
                return;
            }
            mid = x;
            mid_odd = true;
        }

        for (int i = 0; i < y / 2; i++)
        {
            ans1.push_back(x);
            ans2.push_back(x);
        }

    }


    reverse(ans2.begin(), ans2.end());

    if (!mid_odd)
    {
        cout << ans1 << ans2 << nl;
    }
    else
    {
        cout << ans1 << mid << ans2 << nl;
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