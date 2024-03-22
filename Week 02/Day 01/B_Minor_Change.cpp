/**
 * Title: sayed_m_abdullah
 * Date: "22-03-2024" Time:"04:22:02"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2)
        cout << "0" << endl;
    else
    {
        ll c = 0;
        for (ll i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
                c++;
        }
        cout << c << endl;
    }
    return 0;
}