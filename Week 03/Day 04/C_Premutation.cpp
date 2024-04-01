/**
 * Title: sayedMabdullah
 * Date: "01-04-2024" Time:"14:16:43"
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

class cmp
{
public:
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        return a.second > b.second;
    }
};

void solve()
{
    int n;
    cin >> n;

    int mat[n][n - 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> mat[i][j];
        }
    }

    vector<map<int, int>> v(n - 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int x = mat[i][j];

            v[j][x]++;
        }
    }

    vector<int> vv;

    unordered_set<int> s;

    for (int i = 0; i < n - 1; i++)
    {
        vector<pair<int, int>> xv;

        for (auto x : v[i])
        {
            xv.push_back(x);
        }
        sort(xv.begin(), xv.end(), cmp());
        for (auto x : xv)
        {
            vv.push_back(x.first);
        }
    }

    auto it = vv.begin();

    while (it != vv.end())
    {
        if (s.find(*it) != s.end())
        {
            it = vv.erase(it);
        }
        else
        {
            s.insert(*it);
            it++;
        }
    }

    for (auto x : vv)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}