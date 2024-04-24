/**
 * Title: sayedMabdullah
 * Date: "24-04-2024" Time:"15:55:34"
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

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int k = 0; k < (1 << n); k++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (k & (1 << i))
            {
                //     cout << a[i] << " ";
                sum += a[i];
            }
            else
            {
                sum -= a[i];
            }
        }

        if (sum % 360 == 0)
        {
            yes;
            return;
        }
    }
    no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;

    for (int i = 0; i < t; i++)
    {
        solve();
        cout << endl;
    }

    return 0;

    /* Alhamdulillah For Everything */
}