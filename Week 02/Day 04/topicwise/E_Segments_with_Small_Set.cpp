/**
 * Title: sayedMabdullah
 * Date: "25-03-2024" Time:"23:35:50"
 * do you have any query ?? sayedmabdullah13@gmail.com
 *
 * ---I'm starting in the name of Almighty ALLAH---
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define pl pair<ll, ll>
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
    map<ll, ll> cnt;

    while (r < n)
    {
        cnt[a[r]]++;

        if (cnt.size() <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (cnt.size() > k)
            {
                cnt[a[l]]--;
                if (cnt[a[l]] == 0)
                {
                    cnt.erase(a[l]);
                }
                l++;
                if (cnt.size() <= k)
                {
                    ans += (r - l + 1);
                }
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
    t = 1;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everythings */
}