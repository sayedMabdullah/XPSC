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

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += abs(a[i] - a[i + 1]);
    }

    // cout << sum << nl;
    int ans = sum;
    for (int i = 0; i < n; i++)
    {
        int newsum = 0;
        int oneSum = 0, kthSum = 0;

        if (i > 0)
        {
            newsum += abs(a[i] - a[i - 1]);

            oneSum += abs(1 - a[i - 1]);
            kthSum += abs(k - a[i - 1]);
        }
        if (i < n - 1)
        {
            newsum += abs(a[i] - a[i + 1]);

            oneSum += abs(1 - a[i + 1]);
            kthSum += abs(k - a[i + 1]);

        }

        int xx = sum - newsum + oneSum;
        int yy = sum - newsum + kthSum;

        ans = max({ ans, max(xx, yy) });
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