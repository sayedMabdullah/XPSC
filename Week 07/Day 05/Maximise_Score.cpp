/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "07-05-2024"
 * Time: "00:34:07"
 *
 * File: "Maximise_Score.cpp"
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

    int done = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // alic choce 1st element
        if (i == 0)
        {
            int dif = abs(a[i] - a[i + 1]);
            done = min(done, dif);
        }
        // alic choce 1st element
        else if (i == n - 1)
        {
            int dif = abs(a[i] - a[i - 1]);
            done = min(done, dif);
        }
        else
        {
            int prvdif = abs(a[i] - a[i - 1]);
            int nxtdif = abs(a[i] - a[i + 1]);
            int forBobMx = max(prvdif, nxtdif);

            done = min(done, forBobMx);
        }
    }

    cout << done << nl;
    ;
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