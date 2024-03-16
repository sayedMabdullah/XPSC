/**
 * Title: sayed_m_abdullah
 * Date: "15-03-2024" Time:"14:39:42"
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

    stack<char> st;

    reverse(s.begin(), s.end());

    for (char x : s)
    {
        st.push(x);
    }

    // cout << st.size();

    while (st.size() != 4)
    {
        st.push('0');
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}