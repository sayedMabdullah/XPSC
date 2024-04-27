/**
 * Title: sayedMabdullah
 * Date: "27-04-2024" Time:"09:07:35"
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
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    // t = 1;
    // in >> t;
    ll t = 1;
    while ((cin >> n and cin >> q))
    {
        if (n != 0 and q != 0)
        {

            vector<ll> a(n);

            for (int i = 0; i < n; i++)
            {
                /* code */ cin >> a[i];
            }
            sort(a.begin(), a.end());

            cout << "CASE# " << t << ":" << endl;
            while (q--)
            {
                int x;
                cin >> x;

                auto it = lower_bound(a.begin(), a.end(), x);
                // cout << *it << endl;
                if (*it == x)
                {
                    cout << *it << " found at " << lower_bound(a.begin(), a.end(), x) - a.begin() + 1 << endl;
                }
                else
                {
                    cout << x << " not found" << endl;
                    ;
                }
            }
            t++;
        }
    }

    return 0;

    /* Alhamdulillah For Everything */
}