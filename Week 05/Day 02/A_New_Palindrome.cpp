/**
 * Title: sayedMabdullah
 * Date: "20-04-2024" Time:"09:58:09"
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
    string s;
    cin >> s;

    ll len = s.size();
    bool yeap = false;
    if (len > 3)
    {

        int l = 0, r = len / 2 - 1;
        while (l < r)
        {
            if (s[l] != s[l + 1])
            {
                yeap = true;
                break;
            }
            l++;
        }

        if (yeap)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    else
    {
        no;
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