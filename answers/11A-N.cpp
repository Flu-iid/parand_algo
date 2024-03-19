#include <iostream>
using namespace std;

int main()
{
    int n, d = 2;
    cin >> n;
    while (n > 1)
    {
        n = n / 2;
        d = d * 2;
    }
    cout << d;
}

// fatemeh_darvishi @M_darvishi_f

#include <iostream>
using namespace std;
int main()
{
    int n, d = 1;
    cin >> n;
    while (n >= d)
        d *= 2;
    cout << d;
}

// arsham_mahdiun @Arshamm1997