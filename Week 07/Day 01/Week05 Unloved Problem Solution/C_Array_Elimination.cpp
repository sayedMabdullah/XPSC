/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "03-05-2024"
 * Time: "14:29:31"
 *
 * File: "C_Array_Elimination.cpp"
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

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<int> bt(33);

    for (int i = 0; i < 33; i++)
    {
        bt[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 33; j++)
        {
            if (A[i] & (1 << j))
                bt[j]++;
        }
    }

    vector<int> ans;

    for (int i = 1; i < n + 1; i++)
    {
        bool fnd = true;
        for (int j = 0; j < 33; j++)
        {
            if (bt[j] % i)
            {
                fnd = false;
                break;
            }
        }
        if (fnd)
            ans.push_back(i);
    }

    for (int x : ans)
    {
        cout << x << " ";
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
        cout << nl;
    }

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}