/**
 * Title: sayedMabdullah
 * Date: "28-04-2024" Time:"10:16:58"
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

    int m = (n * (n - 1)) / 2;
    vector<int> b(m), a;

    for (int i = 0; i < m; i++)
    {
        // cout << i << " ";
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    int x = 1, ind = 0;
    int fromBtoA = n - x;

    for (int i = 0; i < n - 1; i++)
    {
        a.push_back(b[fromBtoA - 1]);
        x++;
        fromBtoA += n - x;
    }

    a.push_back(1e9);

    for (int x : a)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    // t = 1;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}