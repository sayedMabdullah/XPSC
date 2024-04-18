/**
 * Title: sayedMabdullah
 * Date: "18-04-2024" Time:"20:15:23"
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
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int xooor = a[0];

    for (int i = 1; i < n; i++)
    {
        xooor ^= a[i];
    }

    // new array means array value changes
    for (int i = 0; i < n; i++)
    {
        a[i] ^= xooor;
    }

    int newXoor = a[0];

    for (int i = 1; i < n; i++)
    {
        newXoor ^= a[i];
    }

    if (newXoor == 0)
        cout << xooor << endl;
    else
        cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}