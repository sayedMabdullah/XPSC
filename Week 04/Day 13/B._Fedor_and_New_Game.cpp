/**
 * Title: sayedMabdullah
 * Date: "17-04-2024" Time:"13:01:06"
 * do you have any query ?? sayedmabdullah13@gmail.com
 *
 * ---I'm starting in the name of Almighty ALLAH---
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define pl pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define out cout
#define in cin
#define loop for (int i = 0; i < n; i++)
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<string> b;

    for (int j = 0; j <= m; j++)
    {
        int x;
        cin >> x;

        string xx;

        for (int k = 0; k < n; k++)
        {
            if ((x >> k) & 1)
            {
                // cout << "1" << " ";
                xx.push_back('1');
            }
            else
            {
                xx.push_back('0');
            }
        }

        b.push_back(xx);
    }

    string fedor = b[m];

    // for (char c : fedor)
    // {
    //     cout << c << " ";
    // }

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        string x = b[i];
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if (fedor[k] != x[k])
                cnt++;
        }

        if (cnt <= k)
            ans++;
    }

    cout << ans << endl;
    // cout << b.size() << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}