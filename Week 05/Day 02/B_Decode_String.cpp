/**
 * Title: sayedMabdullah
 * Date: "20-04-2024" Time:"11:32:06"
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

    string inn;
    cin >> inn;

    string ans;
    for (int i = n - 1; i >= 0; i--)
    {

        // cout << inn[i] - '0' << " ";
        if (inn[i] == '0')
        {
            int x = (inn[i - 2] - 48) * 10 + (inn[i - 1] - 48);
            // cout << char(x - 1 + 97) << " ";
            ans.push_back(char(x - 1 + 97));
            i -= 2;
        }
        else
        {
            int x = inn[i] - 48;
            ans.push_back(char(x - 1 + 97));
            // cout << char(x - 1 + 97) << " ";
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    in >> t;

    for (ll i = 0; i < t; i++)
    {
        // cout << "test case" << i << " ";
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}