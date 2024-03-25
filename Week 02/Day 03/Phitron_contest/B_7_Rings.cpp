/**
 * Title: sayed_m_abdullah
 * Date: "24-03-2024" Time:"22:38:11"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        ll s = x * y;

        if ((s / 10000) >= 1 and (s / 10000) <= 9)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}