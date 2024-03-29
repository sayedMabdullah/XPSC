/**
 * Title: sayedMabdullah
 * Date: "29-03-2024" Time:"14:59:17"
 * do you have any query ?? sayedmabdullah13@gmail.com
 *
 * ---I'm starting in the name of Almighty ALLAH---
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define pl pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define out cout
#define in cin
#define loop for (int i = 0; i < n; i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    deque<char> q;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'm' || s[i] == 'e' || s[i] == 'o' || s[i] == 'w')
        {
            if (q.empty() || q.back() != s[i])
            {
                q.push_back(s[i]);
            }
        }
        else
        {
            q.push_back(s[i]);
        }
    }

    // cout << q.size();

    string check, ans = "meow";

    while (!q.empty())
    {
        check.push_back(q.front());
        q.pop_front();
    }

    if (check == ans)
        yes;
    else
        no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    // t = 1;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}