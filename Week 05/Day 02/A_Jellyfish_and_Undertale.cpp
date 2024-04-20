/**
 * Title: sayedMabdullah
 * Date: "20-04-2024" Time:"13:10:57"
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
    ll a, b, n;
    cin >> a >> b >> n;

    vector<ll> ab(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ab[i];
        if (ab[i] < a)
            b += ab[i];
        else
            b += a - 1;
    }

    cout << b << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}