/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "07-05-2024"
 * Time: "10:38:09"
 *
 * File: "B_Array_Decrements.cpp"
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

    vector<int> a(n);
    vector<int> b(n);

    int ZeroMxDfr = 0;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            ZeroMxDfr = max(ZeroMxDfr, a[i]);
        }
        else if (b[i] > a[i])
        {
            no;
            return;
        }
        else if (b[i] != 0)
        {
            s.insert(a[i] - b[i]);
        }
    }

    if (s.size() == 0)
    {
        yes;
    }
    else if (s.size() == 1)
    {
        for (auto x : s)
        {
            if (x >= ZeroMxDfr)
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }
    else
    {
        no;
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
    }

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}