/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "06-07-2024"
 * Time: "18:17:30"
 *
 * File: "B_Sets_and_Union.cpp"
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

    vector<int> a[n];

    set<int> all;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        for (int j = 0; j < x; j++)
        {
            // cin >> a[i][j];
            int xx;
            cin >> xx;
            a[i].push_back(xx);
            all.insert(xx);
            mp[xx]++;
        }
    }

    int ans = 0;

    for (int x = 1; x <= 50; x++)
    {
        if (mp.find(x) == mp.end())
        {
            continue;
        }

        set<int> alltr;
        for (int i = 0; i < n; i++)
        {
            if (binary_search(a[i].begin(), a[i].end(), x))
            {
                continue;
            }
            for (int j = 0; j < a[i].size(); j++)
            {

                alltr.insert(a[i][j]);
            }
        }

        ans = max(ans, (long long)alltr.size());
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