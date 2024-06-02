/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "28-05-2024"
 * Time: "11:21:29"
 *
 * File: "E_String_Reversal.cpp"
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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string x = s;
    reverse(x.begin(), x.end());

    map<char, vector<int>> posS, posX;

    for (int i = 0; i < n; i++)
    {
        posS[s[i]].push_back(i);
        posX[x[i]].push_back(i);
    }

    vector<int> permutation(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < posS[ch].size(); i++)
        {
            permutation[posX[ch][i]] = posS[ch][i];
        }
    }

    pbds<int> p;
    long long ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }
    cout << ans << nl;
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