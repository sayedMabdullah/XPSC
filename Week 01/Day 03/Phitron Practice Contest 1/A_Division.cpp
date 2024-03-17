/**
 * Title: sayed_m_abdullah
 * Date: "17-03-2024" Time:"22:39:27"
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
        int x;
        cin >> x;

        if (x < 1400)
            cout << "Division 4" << endl;
        else if (x < 1600)
            cout << "Division 3" << endl;
        else if (x < 1900)
            cout << "Division 2" << endl;
        else
            cout << "Division 1" << endl;
    }

    return 0;
}