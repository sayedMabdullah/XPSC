/**
 * Title: sayed_m_abdullah
 * Date: "22-03-2024" Time:"04:14:48"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;

    vector<ll> v;

    for (ll i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
        if (y == x)
            v.pop_back();
    }

    if (!v.empty())
    {
        for (auto xx : v)
        {
            cout << xx << " ";
        }
    }
    else
    {
        cout << "\n";
    }

    return 0;
}