/**
 * Title: sayedMabdullah
 * Date: "28-03-2024" s:"21:31:58"
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
    string s;
    cin >> s;

    string h = s, m = s;

    h.resize(2);
    m.erase(0, 2);

    int hr = stoi(s.substr(0, 2));

    int mnt = stoi(s.substr(3, 2));

    // hour printing
    if (hr == 0)
    {
        cout << "12"
             << ":" << setw(2) << setfill('0') << mnt;
    }
    else if (hr > 12)
    {
        cout << setw(2) << setfill('0') << hr - 12 << ":" << setw(2) << setfill('0') << mnt;
    }
    else if (hr <= 12)
    {
        cout << setw(2) << setfill('0') << hr << ":" << setw(2) << setfill('0') << mnt;
    }

    // am pm printing
    if (hr < 12)
    {
        cout << " "
             << "AM";
    }
    else
    {
        cout << " "
             << "PM";
    }

    cout << endl;
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