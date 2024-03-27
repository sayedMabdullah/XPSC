/**
 * Title: sayedMabdullah
 * Date: "27-03-2024" Time:"15:48:12"
 * do you have any query ?? sayedmabdullah13@gmail.com
 *
 * ---I'm starting in the name of Almighty ALLAH---
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define pl pair<ll, ll>
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define out cout
#define in cin
#define loop for (int i = 0; i < n; i++)
using namespace std;

bool isPalindrom(vector<int> v)
{
    int i = 0, j = v.size() - 1;
    while (i < j)
    {

        if (v[i] != v[j])
        {
            return false;
            break;
        }

        i++;
        j--;
    }

    return true;
}

void solve()
{
    int n;
    in >> n;
    vector<int> a(n);
    loop in >> a[i];

    int i = 0, j = n - 1;
    int firstVal, secondVal;
    bool found = true;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            found = false;
            firstVal = a[i];
            secondVal = a[j];
            break;
        }
        i++;
        j--;
    }

    if (found)
        yes;
    else
    {
        vector<int> v1, v2, cloneV1, cloneV2;

        for (int x : a)
        {
            if (x != firstVal)
                v1.push_back(x);
            if (x != secondVal)
                v2.push_back(x);
        }

        if (isPalindrom(v1) || isPalindrom(v2))
            yes;
        else
            no;
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