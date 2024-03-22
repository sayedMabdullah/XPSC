/**
 * Title: sayed_m_abdullah
 * Date: "22-03-2024" Time:"04:56:20"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string S = "Timur";
    sort(S.begin(), S.end());

    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (s != S)
            cout << "NO"
                 << "\n";
        else
            cout << "YES"
                 << "\n";
    }

    return 0;
}