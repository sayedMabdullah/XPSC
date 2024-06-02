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
    int n, m, x;
    cin >> n >> m >> x;

    vector<int>thrw(m);
    vector<char>made(m);

    for (int i = 0; i < m; i++)
    {
        cin >> thrw[i] >> made[i];
    }

    set<int>a, ans;
    a.insert(x); // who threw the ball first

    for (int i = 0; i < m; i++)
    {
        // clock wise move
        if (made[i] == '0')
        {
            set<int>preans;
            for (auto v : a)
            {
                int x = v + thrw[i];

                if (x > n) x -= n;
                preans.insert(x);

                if (i == m - 1) // last index
                {
                    ans.insert(x);
                }
            }
            a = preans;
        }
        //anti clockwise move
        else if (made[i] == '1')
        {
            set<int>preans;
            for (auto v : a)
            {
                int x = v - thrw[i] + n;

                if (x > n) x -= n;
                preans.insert(x);

                if (i == m - 1) // last index
                {
                    ans.insert(x);
                }
            }
            a = preans;
        }
        // both move
        else
        {
            set<int>preans;
            for (auto v : a)
            {
                int x = thrw[i] + v;

                if (x > n) x -= n;
                preans.insert(x);

                if (i == m - 1) // last index
                {
                    ans.insert(x);
                }


                x = v - thrw[i] + n;

                if (x > n) x -= n;
                preans.insert(x);

                if (i == m - 1) // last index
                {
                    ans.insert(x);
                }
            }

            a = preans;
        }
    }

    cout << ans.size() << nl;

    for (auto xx : ans)
    {
        cout << xx << " ";
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