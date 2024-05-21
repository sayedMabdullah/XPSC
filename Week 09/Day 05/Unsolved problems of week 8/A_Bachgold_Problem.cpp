/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "21-05-2024"
 * Time: "13:28:21"
 *
 * File: "A_Bachgold_Problem.cpp"
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

// bool isPrime(int n)
// {
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

void solve()
{
    int n;
    cin >> n;

    if (!(n % 2))
    {
        cout << n / 2 << nl;

        for (int i = 1; i <= n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        cout << n / 2 << nl;

        for (int i = 1; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
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