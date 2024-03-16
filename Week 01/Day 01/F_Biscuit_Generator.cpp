/**
 * Title: sayed_m_abdullah
 * Date: "15-03-2024" Time:"16:06:05"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;

    int c = 0;

    int ans = a;
    for (int i = 2; ans <= t; i++)
    {
        ans = a * i;
        c++;
    }

    cout << c * b;

    return 0;
}