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
    int n;
    cin >> n;

    vector<int>a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    set<int>s;

    int ans = 0;

    for (int i = 0; i < n;)
    {
        if (a[i] < 0)
        {
            while (a[i] < 0 and i < n)
            {
                s.insert(a[i]);
                i++;
            }
        }
        else
        {
            while (a[i] > 0 and i < n)
            {
                s.insert(a[i]);
                i++;
            }
        }

        ans += *s.rbegin();;

        s.clear();

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
}