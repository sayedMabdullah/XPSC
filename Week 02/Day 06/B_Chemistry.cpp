/**
 * Title: sayedMabdullah
 * Date: "27-03-2024" Time:"19:14:09"
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<char, int> cnt;

    for (char x : s)
    {
        cnt[x]++;
    }

    int oddCount = 0;

    for (auto it : cnt)
    {
        if (it.second % 2 != 0)
            oddCount++;
    }

    if ((oddCount <= k || oddCount - 1 <= k) and k <= n)
        yes;
    else
        no;
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