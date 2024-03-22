/**
 * Title: sayed_m_abdullah
 * Date: "22-03-2024" Time:"09:15:19"
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

        set<int> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        if (n == 1)
            cout << 1 << endl;
        else
        {
            if (s.size() == 1 || n % 2 != 0)
            {
                if (n % 2 == s.size() % 2)
                {
                    cout << s.size() << endl;
                }
                else
                {
                    cout << s.size() - 1 << endl;
                }
            }
            else
            {
                if (s.size() % 2 != 0)
                {
                    cout << s.size() - 1 << endl;
                }
                else
                {
                    cout << s.size() << endl;
                }
            }
        }
    }

    return 0;
}