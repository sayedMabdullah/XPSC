/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "19-05-2024"
 * Time: "22:22:47"
 *
 * File: "C_MEX_Repetition.cpp"
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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // find the missing element
    auto miss = [&]()
    {
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }

        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                return i;
            }
        }
    };

    int msElement = miss();

    int x = k % (n + 1);

    if (x == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << nl;
        return;
    }
    for (int i = n - x + 1; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << msElement << " ";

    for (int i = 0; i < n - x; i++)
    {
        cout << a[i] << " ";
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