/**
 * Title: sayedMabdullah
 * Date: "27-03-2024" Time:"14:34:19"
 * do you have any query ?? sayedmabdullah13@gmail.com
 *
 * ---I'm starting in the name of Almighty ALLAH---
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define pl pair<ll, ll>
#define endl "\n"
#define out cout
#define in cin
#define loop for (int i = 0; i < n; i++)
using namespace std;

bool cmp(pair<int, int> a,
         pair<int, int> b)
{
    return a.second > b.second;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> cnt;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    vector<pair<ll, ll>> b(n);
    for (auto it : cnt)
    {
        b.push_back(it);
    }

    sort(b.begin(), b.end(), cmp);

    ll mx = b[0].second;

    ll ans = 0;
    ll sz = n - mx;

    while (mx < n)
    {
        ans++;
        mx *= 2;
    }
    cout << ans + sz << endl;
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