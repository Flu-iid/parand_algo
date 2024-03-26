#include <iostream>
#include <string>

using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;

    int n = (a[2] - '0') * 100 + (a[1] - '0') * 10 + (a[0] - '0');
    int m = (b[2] - '0') * 100 + (b[1] - '0') * 10 + (b[0] - '0');

    if (n < m)
    {
        cout << a << " < " << b;
    }
    else if (m < n)
    {
        cout << b << " < " << a;
    }
    else
    {
        cout << a << " = " << b;
    }
}

// fatemeh_darvishi @M_darvishi_f
