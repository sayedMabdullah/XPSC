/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "24-05-2024"
 * Time: "15:09:24"
 *
 * File: "D_Coprime.cpp"
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

// co prime pre
vector<int> cop[1001];
void coprime()
{
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
            {
                cop[i].push_back(j);
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> Mxxindx(1001, -1);

    for (int i = 0; i < n; i++)
    {
        // one based Mxxindx
        Mxxindx[a[i]] = i + 1;
    }

    int ans = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (Mxxindx[i] != -1)
        {

            if (i == 1)
            {
                // for value of one..
                ans = max(ans, 2 * Mxxindx[i]);
            }
            else
                for (auto p : cop[i])
                {
                    if (Mxxindx[p] != -1)
                    {
                        ans = max(ans, Mxxindx[i] + Mxxindx[p]);
                    }
                }
        }
    }

    if (!ans)
        cout << -1 << nl;
    else
        cout << ans << nl;
}

signed main()
{
    totallyfast;

    int t;
    t = 1;
    cin >> t;
    vector<int> cop[1001];
    coprime();
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