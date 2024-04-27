/**
 * Title: sayedMabdullah
 * Date: "27-04-2024" Time:"09:33:07"
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
    int q;
    cin >> q;
    while (q--)
    {
        int h;
        cin >> h;
        auto itl = lower_bound(a.begin(), a.end(), h) - a.begin();

        if (itl > 0 and itl <= n)
        {
            cout
                << a[lower_bound(a.begin(), a.end(), h) - a.begin() - 1] << " ";
        }
        else
        {
            cout << "X"
                 << " ";
        }

        auto itU = upper_bound(a.begin(), a.end(), h) - a.begin();
        if (itU > 0 and itU < n)
        {
            cout << a[upper_bound(a.begin(), a.end(), h) - a.begin()] << endl;
        }
        else
        {
            cout << "X" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;
    // in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}