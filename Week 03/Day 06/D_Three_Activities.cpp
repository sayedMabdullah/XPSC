/**
 * Title: sayedMabdullah
 * Date: "03-04-2024" Time:"11:55:16"
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
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);

    vector<pair<int, int>> a1;
    vector<pair<int, int>> b2;
    vector<pair<int, int>> c3;

    loop in >> a[i], a1.push_back({a[i], i});
    loop in >> b[i], b2.push_back({b[i], i});
    loop in >> c[i], c3.push_back({c[i], i});

    sort(a1.rbegin(), a1.rend());
    sort(b2.rbegin(), b2.rend());
    sort(c3.rbegin(), c3.rend());

    int okk = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (a1[i].second != b2[j].second and a1[i].second != c3[k].second and b2[j].second != c3[k].second)
                {
                    okk = max(okk, a1[i].first + b2[j].first + c3[k].first);
                }
            }
        }
    }

    cout << okk << endl;
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