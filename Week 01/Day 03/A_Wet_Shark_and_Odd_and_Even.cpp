/**
 * Title: sayed_m_abdullah
 * Date: "17-03-2024" Time:"08:41:39"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> v;
    ll evenval = 0;

    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            evenval += x;
        }
        else
        {
            v.push_back(x);
        }
    }

    sort(v.begin(), v.end());

    if (v.size() % 2 == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            evenval += v[i];
        }
    }
    else
    {
        for (int i = 1; i < v.size(); i++)
        {
            evenval += v[i];
        }
    }

    cout << evenval;

    return 0;
}
