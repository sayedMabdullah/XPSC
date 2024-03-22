/**
 * Title: sayed_m_abdullah
 * Date: "22-03-2024" Time:"07:14:16"
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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = 0;
                for (int k = 0; k < m; k++)
                {
                    int def = abs(int(v[i][k]) - int(v[j][k]));
                    sum += def;
                }
                ans = min(ans, sum);
            }
        }

        cout << ans << endl;
    }

    return 0;
}