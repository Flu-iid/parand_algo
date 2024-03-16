#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    n = 64;
    int sum = 0;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    n = sum;
    while (sum > 9)
    {
        sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    cout << sum;
}