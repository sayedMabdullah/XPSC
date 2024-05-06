/**
 * ---I'm starting in the name of Almighty ALLAH---
 *
 * Date: "06-05-2024"
 * Time: "20:06:39"
 *
 * File: "G_Student_Councils.cpp"
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
    int perCouncilMember, numberofGrp;
    cin >> perCouncilMember >> numberofGrp;

    // per group members
    vector<int> a(numberofGrp);

    for (int i = 0; i < numberofGrp; i++)
    {
        cin >> a[i];
    }

    // sort(a.rbegin(), a.rend());

    auto make = [&](int md)
    {
        int sum = 0;
        for (int i = 0; i < numberofGrp; i++)
        {
            // student er songkha besi hole mid poriman newa hbe or sobaik newa hbe
            if (a[i] > md)
            {
                sum += md;
            }

            else
            {
                sum += a[i];
            }
        }
        // total avarege student jodi perconcil e jawa jabe er cye besi ba soman hoi tahole mid poriman council kora jabe.
        if ((sum / md) >= perCouncilMember)
            return true;
        else
            return false;
    };

    int l = 0, r = 25 * 1e9, ans = 0, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (make(mid))
        {
            ans = mid;
            {
                l = mid + 1;
            }
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << nl;
}

signed main()
{
    totallyfast;

    int t;
    t = 1;
    // cin >> t;

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