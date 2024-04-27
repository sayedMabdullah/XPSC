/**
 * Title: sayedMabdullah
 * Date: "27-04-2024" Time:"12:59:30"
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

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll neg = 0;
    ll pos = 0;

    for (ll x : a)
    {
        if (x < 0)
        {
            if (pos == 0)
            {
                neg += abs(x);
            }
            else
            {
                if (pos <= abs(x))
                {
                    neg += abs(pos + x);
                    pos = 0;
                }
                else
                {
                    pos += x;
                }
            }
        }
        else
        {
            pos += x;
        }
    }

    cout << pos << endl;
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