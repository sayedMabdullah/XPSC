/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "01-05-2024"
 * Time: "10:29:58"
 *
 * File: "C_Sum_of_Cubes.cpp"
 *
 **/

#include <bits/stdc++.h>
#define totallyfast                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
// #define long long long long
#define nl "\n"
#define yes cout << "YES" << nl
#define Yes cout << "Yes" << nl
#define no cout << "NO" << nl
#define No cout << "No" << nl
using namespace std;

vector<long long> pw;
void cubes()
{

    for (long long i = 1; i <= 1e4; i++)
    {
        pw.push_back(pow(i, 3));
    }
}
void solve()
{
    long long n;
    cin >> n;

    for (long long i = 0; i < 1e4; i++)
    {
        if (pw[i] >= n)
        {
            break;
        }

        // binary scerch

        long long l = 0, r = 1e4 - 1, mid;

        // need b^3 value. (a^3 = x-b^3)
        long long need = n - pw[i];

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (pw[mid] == need)
            {
                yes;
                return;
            }
            else if (pw[mid] > need)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }

    no;
}

signed main()
{
    totallyfast;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //  save the cubes value .
    cubes();

    long long t;
    t = 1;
    cin >> t;

    for (long long i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}