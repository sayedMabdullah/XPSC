/**
 * Title: sayedMabdullah
 * Date: "19-04-2024" Time:"17:09:12"
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

    string s;
    cin >> s;

    string ans(n + 1, '0');

    ll pairCount = 0, NotPair = 0;

    ll l = 0, r = n - 1;

    while (l < r)
    {
        if (s[l] != s[r])
        {
            NotPair++;
        }
        else
        {
            pairCount += 2;
        }

        l++;
        r--;
    }

    if (n % 2 != 0)
    {
        pairCount++;
    }

    // cout << NotPair << " " << pairCount << endl;

    for (int i = 0; i <= n; i++)
    {
        if (i <= NotPair + pairCount and i >= NotPair)
        {
            ans[i] = '1';
        }
    }

    if (n % 2 == 0)
    {
        for (int i = NotPair + 1; i <= n - NotPair; i += 2)
        {

            ans[i] = '0';
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