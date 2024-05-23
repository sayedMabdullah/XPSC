/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "23-05-2024"
 * Time: "17:15:19"
 *
 * File: "B_Different_Divisors.cpp"
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

int n = 1000000;
vector<int> prime;
// sieve algo... prime check O(NLoglogN)
void isPrime1()
{
    vector<bool> prm(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (prm[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prm[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prm[i])
            prime.push_back(i);
    }
}

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

void solve()
{
    int d;
    cin >> d;

    int fstvalue = 1, jindx = -1, lstvalue = 1;

    // fst value
    for (int i = 0; i < prime.size(); i++)
    {
        if (prime[i] - 1 >= d)
        {
            fstvalue *= prime[i];
            jindx = i;
            // lstvalue = prime[i];
            break;
        }
    }

    // lst value
    for (int i = jindx; i < prime.size(); i++)
    {
        if (prime[i] - fstvalue >= d)
        {
            lstvalue *= prime[i];
            break;
        }
    }

    cout << fstvalue * lstvalue << nl;
}

signed main()
{
    totallyfast;

    int t;
    t = 1;
    cin >> t;
    isPrime1();
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