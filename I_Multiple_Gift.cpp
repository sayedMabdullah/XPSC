/**
 * Title: sayed_m_abdullah
 * Date: "16-03-2024" Time:"22:49:25"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;

    ll ans = x;
    ll count = 0;

    while (ans <= y)
    {
        ans = ans * 2;
        // cout << ans << " ";
        count++;
    }
    cout << endl
         << count;

    return 0;
}