/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "22-05-2024"
 * Time: "22:44:56"
 *
 * File: "D_Divide_and_Equalize.cpp"
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

    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {

        for (int j = 2; j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                while (a[i] % j == 0)
                {
                    cnt[j]++;
                    a[i] /= j;
                }
            }
        }
        if (a[i] > 1)
        {
            cnt[a[i]]++;
        }
    }

    bool ok = true;

    for (auto x : cnt)
    {
        if (x.second % n != 0)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        yes;
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