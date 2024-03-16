/**
 * Title: sayed_m_abdullah
 * Date: "15-03-2024" Time:"14:03:31"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << "0"
             << "\n";
    }
    else
    {
        int ans = (b - a) + 1;
        cout << ans;
    }

    return 0;
}