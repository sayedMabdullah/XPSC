/**
 * Title: sayed_m_abdullah
 * Date: "22-03-2024" Time:"10:11:09"
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> st;

        for (char x : s)
        {
            if (x == '(')
            {
                st.push(x);
            }
            else
            {
                if (!st.empty())
                {
                    st.pop();
                }
            }
        }
        cout << st.size() << "\n";
    }

    return 0;
}