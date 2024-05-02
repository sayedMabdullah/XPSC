/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "02-05-2024"
 * Time: "22:17:51"
 *
 * File: "C_Assembly_via_Remainders.cpp"
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

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n - 1);

    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    vector<int> ans;
    ans.push_back(501);
    for (int i = 0; i < a.size(); i++)
    {
        int x = ans[i] + a[i];
        ans.push_back(x);
    }

    for (int xx : ans)
    {
        cout << xx << " ";
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
        cout << nl;
    }

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}