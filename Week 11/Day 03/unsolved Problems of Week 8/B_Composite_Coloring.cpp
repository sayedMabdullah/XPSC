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

    vector<int>prime = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };
    map<int, int>mp;
    int cntColor = 0;
    vector<int>ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        for (int j = 0; j < prime.size(); j++)
        {
            if (a[i] % prime[j] == 0)
            {
                if (!mp[prime[j]])
                {
                    cntColor++;
                    mp[prime[j]] = cntColor;
                }
                ans[i] = mp[prime[j]];
                break;
            }
        }

    }

    cout << cntColor << nl;

    for (auto x : ans)
    {
        cout << x << " ";
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