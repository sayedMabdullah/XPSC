/**
 * Title: sayedMabdullah
 * Date: "02-04-2024" Time:"23:02:37"
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
    string cf, cfina;
    cin >> cf >> cfina;

    ll c = 0, cff = 0;

    for (ll i = 0; i < n; i++)
    {
        if (cf[i] != cfina[i])
        {
            if (cf[i] == 'R')
            {
                if (cfina[i] == 'S')
                {
                    c++;
                }
                else if (cfina[i] == 'P')
                {
                    cff++;
                }
            }
            else if (cf[i] == 'S')
            {
                if (cfina[i] == 'R')
                {
                    cff++;
                }
                else if (cfina[i] == 'P')
                {
                    c++;
                }
            }
            else if (cf[i] == 'P')
            {
                if (cfina[i] == 'S')
                {
                    cff++;
                }
                else if (cfina[i] == 'R')
                {
                    c++;
                }
            }
        }
    }

    if (cff >= c)
    {
        cout << (cff + c) / 2 + 1 - c << endl;
    }
    else
    {
        cout << 0 << endl;
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