/**
 * Title: sayedMabdullah
 * Date: "01-04-2024" Time:"21:37:34"
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
    ll n;
    cin >> n;

    string s;
    cin >> s;

    // total maximum value
    ll total = 0;

    // total changes
    ll cng = 0;

    // differ of change or not  change
    vector<ll> differ;

    for (int i = 0; i < n; i++)
    {
        ll L = i;
        ll R = n - i - 1;

        if (s[i] == 'L')
        {
            if (R > L)
            {
                total += R;
                cng++;
                differ.push_back(R - L);
            }
            else
            {
                total += L;
            }
        }
        else
        {
            if (L > R)
            {
                total += L;
                cng++;
                differ.push_back(L - R);
            }
            else
            {
                total += R;
            }
        }
    }

    sort(differ.begin(), differ.end(), greater<ll>());

    vector<ll> ans(n);

    // cout << cng << endl;

    for (int i = cng - 1; i < n; i++)
    {
        ans[i] = total;
    }

    for (int i = cng - 2; i >= 0; i--)
    {
        total -= differ.back();
        ans[i] = total;
        differ.pop_back();
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
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