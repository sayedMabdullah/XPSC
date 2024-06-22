/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "22-06-2024"
 * Time: "19:42:28"
 *
 * File: "D_Ingenuity_2.cpp"
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

    string s;
    cin >> s;
    string ans = "";
    int nR = 0, sR = 0, eR = 0, wR = 0; // for r
    int nH = 0, sH = 0, eH = 0, wH = 0; // for h

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
        {
            if (nR <= nH)
            {
                nR++;
                ans += 'R';
            }
            else
            {
                nH++;
                ans += 'H';
            }
        }
        if (s[i] == 'S')
        {
            if (sR <= sH)
            {
                sR++;
                ans += 'R';
            }
            else
            {
                sH++;
                ans += 'H';
            }
        }
        if (s[i] == 'E')
        {
            if (eR >= eH)
            {
                eH++;
                ans += 'H';
            }
            else
            {
                eR++;
                ans += 'R';
            }
        }
        if (s[i] == 'W')
        {
            if (wR >= wH)
            {
                wH++;
                ans += 'H';
            }
            else
            {
                wR++;
                ans += 'R';
            }
        }
    }

    if ((nR + sR + eR + wR == 0) || (nH + sH + eH + wH == 0))
    {
        no;
        return;
    }

    int mn = min(nR, sR);

    nR -= mn;
    sR -= mn;

    mn = min(eR, wR);

    eR -= mn;
    wR -= mn;

    mn = min(nH, sH);

    nH -= mn;
    sH -= mn;

    mn = min(eH, wH);

    eH -= mn;
    wH -= mn;

    if ((nR != nH) || (sR != sH) || (eR != eH) || (wR != wH))
    {
        no;
    }
    else
    {
        cout << ans << nl;
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