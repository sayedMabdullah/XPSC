/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "29-04-2024"
 * Time: "23:00:53"
 *
 * File: "C_Another_Good_String.cpp"
 *
 **/

#include <bits/stdc++.h>
#define totallyfast                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define int long long
#define nl "\n"
#define yes cout << "YES" << nl
#define Yes cout << "Yes" << nl
#define no cout << "NO" << nl
#define No cout << "No" << nl
using namespace std;

bool cmp(pair<char, int> &a,
         pair<char, int> &b)
{
    return a.second > b.second;
}

void solve()
{
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    int c = 1, mx = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
        else
        {
            mx = max(mx, c);

            c = 1;
        }
    }

    mx = max(mx, c);

    cout << mx << " ";

    while (q--)
    {
        char ch;
        cin >> ch;
        s.push_back(ch);

        if (s[n - 1] == ch)
        {
            c++;
        }
        else
        {
            c = 1;
        }
        mx = max(mx, c);

        n++;

        cout << mx << " ";
    }
}

signed main()
{
    totallyfast;

    int t;
    t = 1;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
        cout << endl;
    }

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}