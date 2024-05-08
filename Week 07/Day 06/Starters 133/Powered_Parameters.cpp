/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "08-05-2024"
 * Time: "21:19:18"
 *
 * File: "pwed_Parameters.cpp"
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
const int P = 1e9;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 1)
        {
            int pw = 1;
            for (int j = 0; j < n; j++)
            {
                pw *= a[i];
                if (P < pw)
                    break;
                else if (pw <= a[j])
                {
                    ans++;
                }
            }
        }
        else
            ans += n;
    }

    cout << ans << nl;
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