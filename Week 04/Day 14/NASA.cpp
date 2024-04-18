/**
 * Title: sayedMabdullah
 * Date: "18-04-2024" Time:"12:54:53"
 * do you have any query ?? sayedmabdullah13@gmail.com
 *
 * ---I'm starting in the name of Almighty ALLAH---
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define pl pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define out cout
#define in cin
#define loop for (ll i = 0; i < n; i++)

using namespace std;
const ll maxN = (1 << 15);

vector<ll> allPalindrom;

void palindrom()
{
    for (ll i = 0; i < maxN; i++)
    {
        string s = to_string(i);
        string check = s;
        reverse(s.begin(), s.end());
        if (check == s)
        {
            allPalindrom.push_back(i);
        }
    }
}

void solve()
{

    ll n;
    cin >> n;

    unordered_map<ll, ll> mp;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        mp[a[i]]++;
        for (ll j = 0; j < allPalindrom.size(); j++)
        {
            ll xrr = a[i] ^ allPalindrom[j];
            ans += mp[xrr];
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    in >> t;

    palindrom();

    for (ll i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}