/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "19-05-2024"
 * Time: "14:53:27"
 *
 * File: "E_Binary_Inversions.cpp"
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto count = [&]()
    {
        int ans = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                one++;
            }
            else
            {
                ans += one;
            }
        }
        return ans;
    };

    // 1 count normal checking
    int final = INT_MIN;
    int call = count();
    final = max(final, call); // maximize

    // 2nd first zero element flip
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            idx = i;
            break;
        }
    }
    int call2 = count();

    final = max(final, call2); // maximize

    // 3rd last one element flip

    if (idx != -1)
    {
        a[idx] = 0;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            break;
        }
    }

    int call3 = count();

    final = max(final, call3); // maximize

    cout << final << nl;
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