/**
 * Title: sayedMabdullah
 * Date: "02-04-2024" Time:"22:43:32"
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
    ll d;
    cin >> d;

    ll a = d / 7;
    ll b = d % 7;

    if (b != 0)
    {
        if (b >= 2)
        {
            cout << a + 1 << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    else
    {
        cout << a << endl;
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