/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "15-05-2024"
 * Time: "21:02:54"
 *
 * File: "3.cpp"
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

vector<int> pre(9);
void precount()
{

    pre[0] = 0;
    for (int i = 1; i <= 9; i++)
    {
        pre[i] = pre[i - 1] + i;
    }
}

void solve()
{
    int n;
    cin >> n;

    if (n < 9)
    {
        cout << pre[n] << nl;
    }
    else
    {
        int x = n / 9;
        int y = n % 9;

        cout << (pre[9] * x) + pre[y] << nl;
    }
}

signed main()
{
    totallyfast;

    int t;
    t = 1;
    cin >> t;

    precount();

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