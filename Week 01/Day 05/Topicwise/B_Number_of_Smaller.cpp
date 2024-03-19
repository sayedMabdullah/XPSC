/**
 * Title: sayed_m_abdullah
 * Date: "19-03-2024" Time:"11:51:09"
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

    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0, ans = 0;

    while (j < m)
    {
        while (a[i] < b[j])
        {
            if (i < n)
            {
                ans++;
                i++;
            }
            else
            {
                break;
            }
        }

        j++;
        cout << ans << " ";
    }

    return 0;
}