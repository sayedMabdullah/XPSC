/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "24-05-2024"
 * Time: "16:06:14"
 *
 * File: "C_Paint_the_Array.cpp"
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
    int evnIndxGcd = 0, oddIndxGcd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            evnIndxGcd = __gcd(evnIndxGcd, a[i]);
        }
        else
        {
            oddIndxGcd = __gcd(oddIndxGcd, a[i]);
        }
    }

    // problem found bool
    bool f1 = false, f2 = false;

    // odd gcd to evn indx chk
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % evnIndxGcd == 0)
        {
            f1 = true;
            break;
            ;
        }
    }

    // enen gcd to odd indx check

    for (int i = 0; i < n; i += 2)
    {
        if (a[i] % oddIndxGcd == 0)
        {
            f2 = true;
            break;
            ;
        }
    }

    if (f1 and f2)
    {
        cout << 0 << nl;
    }
    else if (f1)
    {
        cout << oddIndxGcd << nl;
    }
    else
    {
        cout << evnIndxGcd << nl;
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