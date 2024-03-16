/**
 * Title: sayed_m_abdullah
 * Date: "16-03-2024" Time:"11:23:10"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    int arr[n + 1];

    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        arr[a[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
            cout << i;
        // cout << arr[i] << " ";
    }

    return 0;
}