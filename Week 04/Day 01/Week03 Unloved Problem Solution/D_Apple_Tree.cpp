/**
 * Title: sayedMabdullah
 * Date: "05-04-2024" Time:"08:34:21"
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

const int N = 2e5 + 5;

vector<ll> a[N];
ll lcont[N];
bool visit[N];

ll ans(ll src)
{
    visit[src] = true;
    // leafnode store
    ll cc = 0;

    // leaf node track
    bool foundleaf = true;

    for (auto cNode : a[src])
    {
        if (!visit[cNode])
        {
            foundleaf = false;
            cc += ans(cNode);
        }
    }

    // leaf node
    if (foundleaf)
    {
        return lcont[src] = 1;
    }
    else
    {
        return lcont[src] = cc;
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll e = n - 1;
    while (e--)
    {
        ll v, v1;
        cin >> v >> v1;
        a[v].push_back(v1);
        a[v1].push_back(v);
    }

    memset(lcont, 0, sizeof(lcont));
    memset(visit, false, sizeof(visit));

    ll q;
    cin >> q;
    ans(1);
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        cout << lcont[x] * lcont[y] << endl;
    }

    // a->clear();

    for (ll i = 0; i <= n; i++)
    {
        a[i].clear();
    }
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