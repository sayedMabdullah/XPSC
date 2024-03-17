/**
 * Title: sayed_m_abdullah
 * Date: "17-03-2024" Time:"23:42:40"
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
        int n, s;
        cin >> n >> s;

        list<int> myl;

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            myl.push_back(x);

            sum += x;
        }
        if (sum <= s)
        {
            if (sum == s)
            {
                cout << "0"
                     << "\n";
            }
            else if (sum < s)
            {
                cout << "-1"
                     << "\n";
            }
        }
        else
        {
            int ans = sum;
            int count = 0;
            for (int i = 1; i <= s; i++)
            {
                if (i % 2 != 0)
                {
                    sum -= myl.front();
                    myl.pop_front();
                    count++;
                    if (sum == s)
                    {
                        break;
                    }
                }
                else
                {
                    sum -= myl.back();
                    myl.pop_back();
                    count++;
                    if (sum == s)
                    {
                        break;
                    }
                }
            }

            if (sum == s)
            {
                cout << count << "\n";
            }
            else
            {
                cout << ans << "\n";
            }

            // if (sum <= s)
            // {
            //     if (sum == s)
            //     {
            //         cout << s
            //              << "\n";
            //     }
            //     else if (sum < s)
            //     {
            //         cout << sum
            //              << "\n";
            //     }
            // }
            // else
            // {
            //     cout << ans << "\n";
            // }
        }
    }

    return 0;
}