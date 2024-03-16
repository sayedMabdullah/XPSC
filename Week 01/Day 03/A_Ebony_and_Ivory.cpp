/**
 * Title: sayed_m_abdullah
 * Date: "17-03-2024" Time:"01:00:04"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    bool ans = false;
    int mx = max(a, b);
    int mn = min(a, b);

    if (a == c || b == c || c % (a + b) == 0 || c % a == 0 || c % b == 0)
    {
        ans = true;
    }
    else
    {
        while (mx <= c)
        {
            c = c - mx;
            if (c % mn == 0)
            {
                ans = true;
                break;
            }
        }
    }

    if (ans)
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";

    return 0;
}