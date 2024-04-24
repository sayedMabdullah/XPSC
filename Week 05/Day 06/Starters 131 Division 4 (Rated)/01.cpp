#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to generate d of a number's digits
vector<int> generated(int num)
{
    vector<int> digits;
    while (num > 0)
    {
        digits.push_back(num % 10);
        num /= 10;
    }
    sort(digits.begin(), digits.end());
    vector<int> d;
    do
    {
        int perm = 0;
        for (int digit : digits)
        {
            perm = perm * 10 + digit;
        }
        d.push_back(perm);
    } while (next_permutation(digits.begin(), digits.end()));
    return d;
}

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to find the maximum common prime factor of two numbers
int maxCommonPrimeFactor(int X, int Y)
{
    vector<int> permsX = generated(X);
    vector<int> permsY = generated(Y);
    int maxPrimeFactor = 1;
    for (int permX : permsX)
    {
        for (int permY : permsY)
        {
            int gcd = __gcd(permX, permY);
            if (isPrime(gcd))
            {
                maxPrimeFactor = max(maxPrimeFactor, gcd);
            }
        }
    }
    return maxPrimeFactor;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        cout << maxCommonPrimeFactor(X, Y) << endl;
    }
    return 0;
}
