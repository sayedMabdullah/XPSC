/**
 * Title: sayed_m_abdullah
 * Date: "15-03-2024" Time:"14:29:47"
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
    if (a == b)
    {
        cout << a * 2 << "\n";
    }
    else
    {
        cout << max(a, b) + max(a, b) - 1 << "\n";
    }

    return 0;
}