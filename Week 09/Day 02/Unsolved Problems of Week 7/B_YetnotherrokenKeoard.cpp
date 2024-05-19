/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "19-05-2024"
 * Time: "13:04:34"
 *
 * File: "B_YetnotherrokenKeoard.cpp"
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

bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second < b.second;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    vector<pair<char, int>> ups, lws, ans;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
        {
            if (s[i] == 'B')
            {
                if (!ups.empty())
                    ups.pop_back();
            }
            else if (s[i] != 'B')
                ups.push_back({s[i], i});
        }
        else if (s[i] >= 'a' and s[i] <= 'z')
        {
            if (s[i] == 'b')
            {
                if (!lws.empty())
                    lws.pop_back();
            }
            else if (s[i] != 'b')
                lws.push_back({s[i], i});
        }
    }

    for (auto x : ups)
    {
        ans.push_back(x);
        // cout << x.first << " " << x.second << nl;
    }
    for (auto x : lws)
    {
        ans.push_back(x);
        // cout << x.first << " " << x.second << nl;
    }

    sort(ans.begin(), ans.end(), cmp);

    for (auto x : ans)
    {
        cout << x.first;
    }
    cout << nl;
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
    }

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}