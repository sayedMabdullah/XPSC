/**
 * Title: sayed_m_abdullah
 * Date: "25-03-2024" Time:"11:38:16"
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    in >> n >> s;
    vector<ll> a(n);

    loop in >> a[i];

    // for (int i = 0; i < n; i++)
    // {
    //     in >> a[i];
    // }

    ll l = 0, r = 0, ans = 0;

    multiset<ll> mls;

    while (r < n)
    {
        mls.insert(a[r]);

        ll mn = *mls.begin(), mx = *mls.rbegin();

        if ((mx - mn) <= s)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l < r)
            {
                mn = *mls.begin();
                mx = *mls.rbegin();
                if ((mx - mn) <= s)
                {
                    break;
                }
                auto it = mls.find(a[l]);
                mls.erase(it);
                l++;
            }
            mn = *mls.begin();
            mx = *mls.rbegin();
            if ((mx - mn) <= s)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }
    out << ans << endl;

    return 0;
}