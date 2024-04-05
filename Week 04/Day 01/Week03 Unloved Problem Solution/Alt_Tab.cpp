/**
 * Title: sayedMabdullah
 * Date: "05-04-2024" Time:"19:28:55"
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

    // stack<priority_queue<pair<string,int>>> st;
    stack<string> st;

    while (n--)
    {
        string s;
        cin >> s;
        st.push(s);
    }

    unordered_set<string> us;

    stack<string> news;
    while (!st.empty())
    {
        string item = st.top();
        st.pop();
        if (us.find(item) == us.end())
        {
            us.insert(item);
            news.push(item);
        }
    }
    while (!news.empty())
    {
        st.push(news.top());
        news.pop();
    }

    while (!st.empty())
    {
        ll sz = st.top().size();
        cout << st.top()[sz - 2] << st.top()[sz - 1];
        st.pop();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}