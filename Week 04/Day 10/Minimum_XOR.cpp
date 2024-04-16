/**
 * Title: sayed_m_abdullah
 * Date: "14-04-2024" Time:"11:28:58"
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
        int n;
        cin >> n;
        vector<int> a(n);
        int Txor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            Txor = Txor ^ a[i];
        }
        int ans = Txor;

        for (int i = 0; i < n; i++)
        {
            ans = min(ans, Txor ^ a[i]);
        }

        cout << ans << endl;
    }

    return 0;
}