/**
 * Title: sayedMabdullah
 * Date: "23-04-2024" Time:"21:13:36"
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
    ll n;
    cin >> n;

    vector<ll> o(n);

    for (int i = 0; i < n; i++)
    {
        cin >> o[i];
    }
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll omS = 0, mxOm = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (o[i] > 0)
        {
            omS++;
        }
        else
        {
            omS = 0;
        }

        mxOm = max(mxOm, omS);
    }
    ll AS = 0, mxA = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            AS++;
        }
        else
        {
            AS = 0;
        }

        mxA = max(mxA, AS);
    }

    if (mxA == mxOm)
    {
        cout << "Draw" << endl;
    }
    else if (mxA > mxOm)
    {
        cout << "Addy" << endl;
    }
    else
    {
        cout << "Om" << endl;
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