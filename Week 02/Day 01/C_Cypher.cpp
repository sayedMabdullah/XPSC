/**
 * Title: sayed_m_abdullah
 * Date: "22-03-2024" Time:"06:41:36"
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;

            for (int j = 0; j < x; j++)
            {
                if (s[j] == 'D')
                {
                    a[i]++;
                    a[i] = a[i] % 10;
                }
                else
                {
                    a[i]--;
                    if (a[i] < 0)
                        a[i] = 9;
                    a[i] = a[i] % 10;
                }
            }
        }

        // mod krte hbe..

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}