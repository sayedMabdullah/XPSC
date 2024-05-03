/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "03-05-2024"
 * Time: "17:42:08"
 *
 * File: "C_Save_More_Mice.cpp"
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
    int n, k;
    cin >> n >> k;
    vector<int> v(k);

    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    int time = 0, ans = 0;

    for (int i = 0; i < k; i++)
    {

        if (time < v[i])
        {
            time += n - v[i];
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans << "\n";
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