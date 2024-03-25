/**
 * Title: sayed_m_abdullah
 * Date: "24-03-2024" Time:"23:57:42"
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
        int a, b;
        cin >> a >> b;

        // if (a < b)
        //     cout << b + (b - 1) << endl;
        // else
        // {
        //     cout << (a * 2) - b << endl;
        // }

        if (a > b)
        {
            cout << (a * 2) - 1 << endl;
        }
        else
        {
            cout << (b * 2) - 1 << endl;
        }
    }

    return 0;
}