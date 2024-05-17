/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "17-05-2024"
 * Time: "22:08:56"
 *
 * File: "testing.cpp"
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

    vector<int> a(n);

    map<int, int> mp, done;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // count
        mp[a[i]]++;
    }

    vector<int> make;

    for (auto it : mp)
    {
        int fval = it.first;
        int avl = it.second;
        // value n er choto soman hole ekta care bakigolo make korte hbe, na hoi sob golo k make krte hbe.
        if (fval <= n)
        {
            for (int i = 1; i < avl; i++)
                // meed to make
                make.push_back(fval);
            // already makeed
            done[fval] = 1;
        }
        else
        {
            for (int i = 1; i <= avl; i++)
                // need to make
                make.push_back(fval);
        }
    }

    int cnt = 1;
    int ans = 0;

    for (int i = 0; i < make.size(); i++)
    {
        for (int j = cnt; j <= n; j++)
        {
            if (done[j] == 1)
                cnt++;
            else
                break;
        }
        // make value ta koto porjontu value banate parbo.
        // if make of i = 9 so 9,1,2,3,4....
        int f = (make[i] - 1) / 2;

        if (cnt <= f)
        {
            cnt++;
            ans++;
        }
        else
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
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