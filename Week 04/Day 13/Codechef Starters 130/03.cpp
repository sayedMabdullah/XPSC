/**
 * Title: sayedMabdullah
 * Date: "17-04-2024" Time:"20:54:23"
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
    string s;
    cin >> s;

    int count = 0;

    if (n < 2)
        cout << 0 << endl;
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                count++;
        }
        cout << count << endl;
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