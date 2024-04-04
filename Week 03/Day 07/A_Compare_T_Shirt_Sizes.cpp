/**
 * Title: sayedMabdullah
 * Date: "04-04-2024" Time:"10:55:02"
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

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    // actual sizz
    char A = s1.back();
    char B = s2.back();
    // countiing zero
    int a = 0, b = 0;

    for (int i = 0; i < s1.size() - 1; i++)
    {
        a++;
    }
    for (int i = 0; i < s2.size() - 1; i++)
    {
        b++;
    }

    // cout << A << " " << a << " " << B << " " << b << endl;

    if (A == B)
    {
        if (A == 'S')
        {
            if (a > b)
                cout << "<" << endl;
            else if (a < b)
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
        else if (A == 'L')
        {
            if (a > b)
                cout << ">" << endl;
            else if (a < b)
                cout << "<" << endl;
            else
                cout << "=" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    else if (A != B)
    {
        if ((A == 'S' and B == 'M') || (A == 'S' and B == 'L'))
        {
            cout << "<" << endl;
        }
        else if (A == 'L')
        {
            cout << ">" << endl;
        }
        else if (A == 'M')
        {
            if (B == 'S')
                cout << ">" << endl;
            else
                cout << "<" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}