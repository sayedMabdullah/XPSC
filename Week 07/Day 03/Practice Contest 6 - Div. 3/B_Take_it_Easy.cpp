/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "05-05-2024"
 * Time: "21:30:56"
 *
 * File: "B_Take_it_Easy.cpp"
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % n != 0)
    {
        no;
    }
    else
    {
        int perUnitNeed = sum / n;
        for (int x : a)
        {
            int chkUnitO = (x - perUnitNeed) % 2;
            if (chkUnitO != 0)
            {
                no;
                return;
            }
        }
        yes;
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