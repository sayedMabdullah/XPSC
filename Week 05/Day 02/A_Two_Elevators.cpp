/**
 * Title: sayedMabdullah
 * Date: "20-04-2024" Time:"09:42:51"
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
    ll a, b, c;
    cin >> a >> b >> c;

    ll liftA = a - 1;
    ll liftB = abs(b - c) + c - 1;

    if (liftA < liftB)
    {
        cout << 1 << endl;
    }
    else if (liftA > liftB)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
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