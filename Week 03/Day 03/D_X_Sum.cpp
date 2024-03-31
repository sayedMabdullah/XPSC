/**
 * Title: sayedMabdullah
 * Date: "31-03-2024" Time:"17:04:29"
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

int n, m;
ll mat[201][201];

// checking valid
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
// leftTop
int leftTop(int i, int j)
{
    if (!valid(i, j))
    {
        return 0;
    }

    ll lTsum = mat[i][j];
    ll newSum = leftTop(i - 1, j - 1);
    return lTsum + newSum;
}
// leftDown
int leftDown(int i, int j)
{
    if (!valid(i, j))
    {
        return 0;
    }

    ll lTsum = mat[i][j];
    ll newSum = leftDown(i + 1, j - 1);
    return lTsum + newSum;
}
// rightTop
int rightTop(int i, int j)
{
    if (!valid(i, j))
    {
        return 0;
    }

    ll lTsum = mat[i][j];
    ll newSum = rightTop(i - 1, j + 1);
    return lTsum + newSum;
}
// rightDown
int rightDown(int i, int j)
{
    if (!valid(i, j))
    {
        return 0;
    }

    ll lTsum = mat[i][j];
    ll newSum = rightDown(i + 1, j + 1);
    return lTsum + newSum;
}

void solve()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // leftTop, leftDown, rightTop, rightDown
            // {-1,-1}, {1,-1},   {-1,1},   {1,1};
            ll leftT = 0, leftD = 0, rightT = 0, rightD = 0;

            // leftTop
            if (valid(i - 1, j - 1))
            {
                leftT = leftTop(i - 1, j - 1);
            }
            // leftDown
            if (valid(i + 1, j - 1))
            {
                leftD = leftDown(i + 1, j - 1);
            }
            // RightTop
            if (valid(i - 1, j + 1))
            {
                rightT = rightTop(i - 1, j + 1);
            }
            // RightDown
            if (valid(i + 1, j + 1))
            {
                rightD = rightDown(i + 1, j + 1);
            }

            ll sum = mat[i][j] + leftT + leftD + rightT + rightD;

            ans = max(ans, sum);
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}
