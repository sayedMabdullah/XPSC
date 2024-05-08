/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "08-05-2024"
 * Time: "20:43:19"
 *
 * File: "Maximum_Alternating_Sum.cpp"
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
    vector<int> b(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    int sum = 0;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {

            // cout << b[i] << " " << a[i] << nl;
            sum += b[i] - a[i];
        }

        cout << sum << nl;
    }
    else
    {
        for (int i = 0; i < (n / 2); i++)
        {

            // cout << b[i] << " " << a[i] << nl;
            sum += b[i] - a[i];
        }

        cout << sum + a[n / 2] << nl;
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