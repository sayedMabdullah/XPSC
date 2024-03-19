/**
 * Title: sayed_m_abdullah
 * Date: "19-03-2024" Time:"16:15:32"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, m;
        cin >> a >> b >> m;

        cout << (m / a) + (m / b) + 2 << "\n";
    }

    return 0;
}