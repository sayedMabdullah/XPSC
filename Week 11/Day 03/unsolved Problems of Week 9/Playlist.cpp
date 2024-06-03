#include <bits/stdc++.h>
#define totallyfast                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define int long long
#define nl "\n"
#define yes cout << "YES" << nl
#define Yes cout << "Yes" << nl
#define no cout << "NO" << nl
#define No cout << "No" << nl
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

    map<int, int>mp;
    int ans = 0, l = 0, r = 0, count = 0;

    while (r < n)
    {
        if (!mp[a[r]])
        {
            mp[a[r]]++;
            count++;

            ans = max(ans, count);
        }
        else
        {
            while (mp[a[r]])
            {
                count--;
                mp.erase(a[l]);
                l++;
            }
            mp[a[r]]++;
            count++;
            ans = max(ans, count);
        }
        r++;
    }

    cout << ans << nl;

}

signed main()
{
    totallyfast;

    int t;
    t = 1;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

}
