#include <iostream>
using namespace std;

int main()
{
    char n[4], m[4]; // use 4 element to fill last with null
    cin >> n >> m;
    n[3] = '\0'; // use null to signal end of char array
    m[3] = '\0';
    for (int i = 2; i >= 0; i--)
    {
        if (n[i] < m[i])
        {
            cout << n << " < " << m;
            break;
        }
        else if (n[i] > m[i])
        {
            cout << m << " < " << n;
            break;
        }
        else if (n[i] == m[i] and i == 0)
        {
            cout << m << " = " << n;
        }
    }
}

// arsham_mahdiun @Arshamm1997

//

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