/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "18-05-2024"
 * Time: "12:01:18"
 *
 * File: "B_Keep_it_Beautiful.cpp"
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

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> make;
    string ans;

    bool fatal = false;

    for (int i = 0; i < n; i++)
    {
        if (make.empty())
        {
            make.push_back(a[i]);
            ans.push_back('1');
        }
        else
        {
            if (!fatal)
            {
                if (a[i] >= make.back())
                {
                    make.push_back(a[i]);
                    ans.push_back('1');
                }
                else
                {
                    if (a[i] <= make[0])
                    {
                        make.push_back(a[i]);
                        ans.push_back('1');
                        fatal = true;
                    }
                    else
                    {
                        ans.push_back('0');
                    }
                }
            }
            else
            {
                if (a[i] < make.back())
                {
                    ans.push_back('0');
                }
                else
                {
                    if (a[i] <= make[0])
                    {
                        make.push_back(a[i]);
                        ans.push_back('1');
                    }
                    else
                    {
                        ans.push_back('0');
                    }
                }
            }
        }
    }

    cout << ans << nl;
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