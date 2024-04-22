/**
 * Title: sayedMabdullah
 * Date: "22-04-2024" Time:"14:04:53"
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
    ll n, k;
    cin >> n >> k;

    vector<int> a(n);

    int c = 0;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((a[i] & k) == k)
        {
            c++;
            b.push_back(a[i]);
        }
    }

    if (c == 0)
    {
        no;
    }
    else
    {
        int ans = b[0];
        for (int i = 1; i < b.size(); i++)
        {
            ans &= b[i];
        }

        if (ans == k)
            yes;
        else
            no;
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