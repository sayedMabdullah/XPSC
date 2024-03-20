/**
 * Title: sayed_m_abdullah
 * Date: "20-03-2024" Time:"13:43:57"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
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

    while (l < n || r < m)
    {
        if (a[l] < b[r] && l < n)
        {
            cout << a[l] << " ";
            l++;
        }
        else if (r < m)
        {
            cout << b[r] << " ";
            r++;
        }
        else if (l < n)
        {
            cout << a[l] << " ";
            l++;
        }
    }

    return 0;
}
