/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "27-05-2024"
 * Time: "19:12:08"
 *
 * File: "C_Turtle_Fingers_Count_the_Values_of_k.cpp"
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

vector<int> divisor(int x)
{
    vector<int> div;
    for (int i = 1; i * i <= x; i++)
    {

        if (x % i == 0)
        {
            if (x / i == i)
            {
                div.push_back(i);
            }
            else
            {
                div.push_back(i);
                div.push_back(x / i);
            }
        }
    }
    return div;
}
void solve()
{
    int a, b, l, comp;
    cin >> a >> b >> l;

    vector<int> divi = divisor(l);

    vector<int> x, y;

    for (int j = 0; j <= 20; j++)
    {
        if (pow(a, j) <= 1e6)
        {
            x.push_back(pow(a, j));
        }
    }
    for (int j = 0; j <= 20; j++)
    {
        if (pow(b, j) <= 1e6)
        {
            y.push_back(pow(b, j));
        }
    }

    int ans = 0;
    for (int d = 0; d < divi.size(); d++)
    {
        bool found = false;
        for (int i = 0; i < x.size(); i++)
        {
            for (int j = 0; j < y.size(); j++)
            {

                if (divi[d] * x[i] * y[j] == l)
                {
                    ans++;
                    found = true;
                    break;
                }
            }
            if (found)
            {
                break;
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