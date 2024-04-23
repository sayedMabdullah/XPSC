/**
 * Title: sayedMabdullah
 * Date: "23-04-2024" Time:"22:29:05"
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
int const x = 1e5 + 5;

void solve()
{
    ll n;
    cin >> n;

    vector<int> a(n);

    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    vector<ll> ans(n);

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 0)
        {
            ans[i] = a[i];
            mp[a[i]]++;
        }
        else
        {
            ans[i] = mx;
        }
    }

    for (int sss : ans)
    {
        cout << sss << " ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}