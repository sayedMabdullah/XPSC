/**
 * Title: sayed_m_abdullah
 * Date: "15-03-2024" Time:"16:21:15"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    int freq[26];
    memset(freq, 0, sizeof(freq));

    for (char x : s)
    {
        int index = x - 'a';
        freq[index]++;
    }

    int anss = -1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            anss = i;
            break;
        }
    }

    if (anss == -1)
    {
        cout << "None"
             << "\n";
    }
    else
    {
        cout << char(anss + 'a') << "\n";
    }

    return 0;
}