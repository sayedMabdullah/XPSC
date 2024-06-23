/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "23-06-2024"
 * Time: "21:30:18"
 *
 * File: "B_Matrix_Stabilization.cpp"
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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    bool found = true;

    while (found)
    {
        found = false;
        vector<vector<int>> newmat = mat;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int t = 0, l = 0, b = 0, r = 0;

                if (i > 0)
                {
                    t = mat[i - 1][j];
                }
                if (j > 0)
                {
                    l = mat[i][j - 1];
                }
                if (i < n - 1)
                {
                    b = mat[i + 1][j];
                }
                if (j < m - 1)
                {
                    r = mat[i][j + 1];
                }

                int mx = max({t, l, b, r});

                if (mat[i][j] > mx)
                {
                    newmat[i][j] = mx;
                    found = true;
                }
                else
                {
                    newmat[i][j] = mat[i][j];
                }
            }
        }

        mat = newmat;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << nl;
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