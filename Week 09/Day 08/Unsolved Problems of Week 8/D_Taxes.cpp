/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "24-05-2024"
 * Time: "17:21:00"
 *
 * File: "D_Taxes.cpp"
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

// prime check O(sqer(n))
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << 1 << '\n';
    }
    else if (n % 2 == 0 || isPrime(n - 2))
    {
        cout << 2 << '\n';
    }
    else
    {
        cout << 3 << '\n';
    }
}

signed main()
{
    totallyfast;

    int t;
    t = 1;
    // cin >> t;

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