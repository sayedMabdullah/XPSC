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
    int n, k, q;
    cin >> n >> k >> q;

    vector<int>d(k + 1);
    vector<int>t(k + 1);

    d[0] = 0, t[0] = 0;// starting point 

    for (int i = 1; i <= k; i++)
    {
        cin >> d[i];
    }

    for (int i = 1; i <= k; i++)
    {
        cin >> t[i];
    }


    while (q--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            cout << 0 << " "; // 0 point means time 0
            continue;
        }
        if (x == n)
        {
            cout << t[k] << " "; // last point menas time array's last value.
            continue;
        }

        int indx = upper_bound(d.begin(), d.end(), x) - d.begin(); // finding upper bound 

        int ans = t[indx - 1]; // upperbound previous time count.

        // time and dis count
        int dis = d[indx] - d[indx - 1];
        int tim = t[indx] - t[indx - 1];


        // extra need time and dis.. 
        int needDis = x - d[indx - 1];

        int needTime = (tim * needDis / dis);

        ans += needTime;
        cout << ans << " ";
    }

    cout << nl;
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