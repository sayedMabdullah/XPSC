/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "10-05-2024"
 * Time: "20:35:50"
 *
 * File: "A_My_First_Sorting_Problem.cpp"
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
    int x, y;
    cin >> x >> y;
    vector<int> a;
    a.push_back(x);
    a.push_back(y);

    sort(a.begin(), a.end());

    for (int x : a)
    {
        cout << x << " ";
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