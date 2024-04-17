/**
 * Title: sayedMabdullah
 * Date: "17-04-2024" Time:"20:34:29"
 * do you have any query ?? sayedmabdullah13@gmail.com
 *
 * ---I'm starting in the name of Almighty ALLAH---
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define pl pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define out cout
#define in cin
#define loop for (int i = 0; i < n; i++)
using namespace std;

int swap_digits(int n)
{
    int first_digit = n / 10;
    int second_digit = n % 10;
    int swapped_number = (second_digit * 10) + first_digit;

    return swapped_number;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    // int swapa = swap_digits(a);
    // int swapb = swap_digits(b);

    if (a > b)
    {
        yes;
    }
    else
    {
        int swapa = swap_digits(a);
        if (swapa > b)
        {
            yes;
        }
        else
        {
            int swapb = swap_digits(b);
            if (a > swapb || swapa > swapb)
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}