/**
 * Title: sayed_m_abdullah
 * Date: "24-03-2024" Time:"22:32:22"
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
        int a, x;
        cin >> a >> x;

        if (a > x)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}