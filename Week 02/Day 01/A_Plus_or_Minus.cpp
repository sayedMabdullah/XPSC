/**
 * Title: sayed_m_abdullah
 * Date: "22-03-2024" Time:"04:26:57"
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
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
            cout << "+" << endl;
        else
            cout << "-" << endl;
    }

    return 0;
}