/**
 * Title: sayed_m_abdullah
 * Date: "17-03-2024" Time:"23:13:02"
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
        ll n;
        cin >> n;
        ll arr[n];
        ll sum = 0;
        ll mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            mn = min(mn, arr[i]);
        }

        sum = (sum - ((n - 1) * mn)) - mn;
        cout << sum << "\n";
    }

    return 0;
}