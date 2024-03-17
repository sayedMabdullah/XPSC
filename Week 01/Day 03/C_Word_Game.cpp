/**
 * Title: sayed_m_abdullah
 * Date: "17-03-2024" Time:"07:11:38"
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
        map<string, int> cnt;
        string p1, p2, p3;

        cin.ignore();
        getline(cin, p1);
        getline(cin, p2);
        getline(cin, p3);

        stringstream s1(p1);
        stringstream s2(p2);
        stringstream s3(p3);

        string word1;

        while (s1 >> word1)
        {
            cnt[word1]++;
        }
        string word2;

        while (s2 >> word2)
        {
            cnt[word2]++;
        }
        string word3;

        while (s3 >> word3)
        {
            cnt[word3]++;
        }

        int ans1 = 0, ans2 = 0, ans3 = 0;

        stringstream ss1(p1);
        stringstream ss2(p2);
        stringstream ss3(p3);

        while (ss1 >> word1)
        {
            if (cnt[word1] == 2)
                ans1 += 1;
            else if (cnt[word1] == 1)
                ans1 += 3;
        }
        while (ss2 >> word2)
        {
            if (cnt[word2] == 2)
                ans2 += 1;
            else if (cnt[word2] == 1)
                ans2 += 3;
        }
        while (ss3 >> word3)
        {
            if (cnt[word3] == 2)
                ans3 += 1;
            else if (cnt[word3] == 1)
                ans3 += 3;
        }

        cout << ans1 << " " << ans2 << " " << ans3 << " " << endl;
    }
    return 0;
}