/**
 * Title: sayed_m_abdullah
 * Date: "19-03-2024" Time:"13:02:43"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    long long ans = 0;

    while (r < m && l < n)
    {
        int count1 = 0, count2 = 0, current = a[l];

        while (a[l] == current && l < n)
        {
            count1++;
            l++;
        }

        while (b[r] < current && r < m)
        {
            r++;
        }

        while (b[r] == current && r < m)
        {
            count2++;
            r++;
        }

        ans += (1ll * count1 * count2);
    }

    cout << ans << "\n";

    return 0;
}