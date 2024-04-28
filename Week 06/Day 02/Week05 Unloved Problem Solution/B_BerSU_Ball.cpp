/**
 * Title: sayedMabdullah
 * Date: "28-04-2024" Time:"16:29:14"
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
    int n;
    cin >> n;
    vector<int> boy(n);

    for (int i = 0; i < n; i++)
    {
        cin >> boy[i];
    }
    int m;
    cin >> m;
    vector<int> girl(m);

    for (int i = 0; i < m; i++)
    {
        cin >> girl[i];
    }

    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end());

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(boy[i] - girl[j]) <= 1)
            {
                girl[j] = 105;
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;
    // in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}