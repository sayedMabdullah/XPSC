/**
 * Title: sayedMabdullah
 * Date: "18-04-2024" Time:"18:01:55"
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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 0, ans = 0;
    deque<ll> odd;
    while (r < n)
    {
        if (a[r] % 2 != 0)
        {
            odd.push_back(a[r]);
        }
        if (r - l + 1 == k)
        {
            if (odd.size() > 0)
            {
                ans++;
                if (a[l] == odd.front())
                {
                    odd.pop_front();
                }
                l++;
            }
            else
            {
                l++;
            }
        }

        r++;
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