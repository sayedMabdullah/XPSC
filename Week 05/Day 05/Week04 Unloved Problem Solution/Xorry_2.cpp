/**
 * Title: sayedMabdullah
 * Date: "23-04-2024" Time:"09:35:59"
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
    ll a = (__lg(n)) * 2;
    ll count = __lg(n);

    // cout << a << " " << count << endl;

    ll ans = 1;

    bool found = false;

    for (int i = count - 1; i >= 0; i--)
    {
        if ((n & (1 << i)))
        {
            found = true;
        }
        else
        {

            if (found)
                ans = ans * 2;
        }
    }

    cout << ans << endl;
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