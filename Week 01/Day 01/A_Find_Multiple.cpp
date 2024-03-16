/**
 * Title: sayed_m_abdullah
 * Date: "15-03-2024" Time:"15:44:00"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c;
    cin >> a >> b >> c;

    queue<ll> q;

    for (int i = 1; i <= 1000; i++)
    {
        q.push(c * i);
    }

    if (!q.empty())
    {
        while (!q.empty())
        {
            if (q.front() >= a and q.front() <= b)
            {
                cout << q.front() << " ";
                q.pop();
                break;
            }
            else if (q.front() > b)
            {
                cout << "-1" << endl;
                q.pop();
                break;
            }

            q.pop();
        }
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}