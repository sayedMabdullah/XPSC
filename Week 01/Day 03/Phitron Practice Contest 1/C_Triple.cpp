/**
 * Title: sayed_m_abdullah
 * Date: "17-03-2024" Time:"22:54:34"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

bool cmp(pair<int, int> a,
         pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }
    else
    {
        return a.second > b.second;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            mp[a[i]]++;
        }
        vector<pair<int, int>> v;

        for (auto &it : mp)
        {
            v.push_back(it);
        }
        sort(v.begin(), v.end(), cmp);

        if (n < 3 || v[0].second < 3)
        {
            cout << "-1"
                 << "\n";
        }
        else
        {
            cout << v[0].first << "\n";
        }
    }

    return 0;
}