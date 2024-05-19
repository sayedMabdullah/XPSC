/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "18-05-2024"
 * Time: "09:51:21"
 *
 * File: "C_Grandma_Capa_Knits_a_Scarf.cpp"
 *
 **/

#include <bits/stdc++.h>
#define totallyfast                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define int long long
#define nl "\n"
#define yes cout << "YES" << nl
#define Yes cout << "Yes" << nl
#define no cout << "NO" << nl
#define No cout << "No" << nl
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    set<int> st;
    for (char i = 'a'; i <= 'z'; i++)
    {
        int l = 0, r = n - 1, count = 0;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                l++, r--;
            }
            else if (s[l] == i)
            {
                count++;
                l++;
            }
            else if (s[r] == i)
            {
                count++;
                r--;
            }
            else
            {
                count = -1;
                break;
            }
        }

        if (count != -1)
            st.insert(count);
        // cout << i << " " << count << nl;
    }

    if (!st.empty())
    {
        cout << *st.begin() << nl;
    }
    else
    {
        cout << -1 << nl;
    }
}

signed main()
{
    totallyfast;

    int t;
    t = 1;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /**
     * ___Alhamdulillah For Everything___
     * do you have any query ? ? sayedmabdullah13 @gmail.com
     **/
}