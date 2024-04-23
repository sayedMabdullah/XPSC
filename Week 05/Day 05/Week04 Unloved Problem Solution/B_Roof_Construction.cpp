/**
 * Title: sayedMabdullah
 * Date: "23-04-2024" Time:"19:18:38"
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

    if (n == 2)
    {
        cout << 1 << " " << 0;
    }
    else
    {
        int s = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (__lg(n - 1) == __lg(i))
            {
                cout << i << " ";
                s++;
            }
            else
            {
                break;
            }
        }

        for (int i = 0; i < n - s; i++)
        {
            cout << i << " ";
        }
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
        cout << endl;
    }

    return 0;

    /* Alhamdulillah For Everything */
}