/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "25-05-2024"
 * Time: "19:03:27"
 *
 * File: "C_Non_coprime_Split.cpp"
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

// // prime check O(sqer(n))
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

// // sieve algo... prime check O(NLoglogN)
// vector<bool> isPrime1(int n)
// {
//     vector<bool> prm(n + 1, true);
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (prm[i])
//         {
//             for (int j = i + i; j <= n; j += i)
//             {
//                 prm[j] = false;
//             }
//         }
//     }
//     return prm;
// }

// // prime factorizations
// vector<int> primeFctr(int n)
// {
//     vector<int> factor;
//     map<int, int> mp;

//     for (int i = 2; i * i <= n; i++)
//     {

//         if (n % i == 0)
//         {
//             while (n % i == 0)
//             {
//                 mp[i]++;
//                 n /= i;
//             }
//         }
//     }

//     if (n > 1)
//         mp[n]++;

//     for (auto x : mp)
//     {
//         while (x.second != 0)
//         {
//             // cout << x.first << " ";
//             factor.push_back(x.first);
//             x.second--;
//         }
//     }
//     return factor;
// }

int divisor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}

void solve()
{
    int l, r;
    cin >> l >> r;

    if (l <= 3 and r <= 3)
    {
        cout << -1 << nl;
    }

    else if (r - l != 0)
    {
        if (r % 2 == 0)
        {
            cout << r / 2 << " " << r / 2 << nl;
        }
        else if (r % 2 == 1)
        {
            r--;
            cout << r / 2 << " " << r / 2 << nl;
        }
    }
    else
    {
        if (divisor(l) == l)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << divisor(l) << " " << l - divisor(l) << nl;
        }
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