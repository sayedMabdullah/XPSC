/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "01-05-2024"
 * Time: "20:43:03"
 *
 * File: "GAME_11.cpp"
 *
 **/

#include <bits/stdc++.h>
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

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    int xx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        xx += a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        xx += b[i];
    }

    if (n < 4 || m < 4 || n + m < 11)
    {
        cout << -1 << nl;
        return;
    }
    else if (n + m == 11)
    {
        cout << xx << nl;
        return;
    }

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());

    vector<int> nm;
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += a[i];
        sum += b[i];
    }

    for (int i = 4; i < n; i++)
    {
        nm.push_back(a[i]);
    }
    for (int i = 4; i < m; i++)
    {
        nm.push_back(b[i]);
    }
    sort(nm.begin(), nm.end(), greater<int>());

    for (int i = 0; i < 3; i++)
    {
        sum += nm[i];
    }
    cout << sum << endl;
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