/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "08-06-2024"
 * Time: "22:59:50"
 *
 * File: "C_Two_TVs.cpp"
 *
 **/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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

// // LCM
// int lcm(int a, int b)
// {
//     return a / __gcd(a, b) * b;
// }

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;

    while (n--)
    {
        int s, e;
        cin >> s >> e;

        mp[s]++;
        mp[e + 1]--;
    }

    bool ans = true;
    int sum = 0;

    for (auto [x, y] : mp)
    {
        sum += y;
        if (sum > 2)
        {
            no;
            return;
        }
    }

    yes;
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