/**
 * Title: sayedMabdullah
 * Date: "31-03-2024" Time:"23:17:18"
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

    string s[n];

    set<string> se;

    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];

        se.insert(s[i]);
    }

    for (ll i = 0; i < n; i++)
    {
        bool yeap = false;
        for (ll j = 0; j < s[i].length(); j++)
        {
            string sb = s[i].substr(j);
            string sbb = s[i].substr(0, j);

            if (se.find(sb) != se.end() and se.find(sbb) != se.end())
            {
                yeap = true;
                break;
            }
        }

        cout << yeap;
    }
    cout << endl;
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