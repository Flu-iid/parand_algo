#include <stdio.h>
int main()
{
    char n[4], m[4]; // use 4 element to fill last with null
    scanf("%s", n);
    scanf("%s", m);
    n[3] = '\0'; // use null to signal end of char array
    m[3] = '\0';
    for (int i = 2; i >= 0; i--)
    {
        if (n[i] < m[i])
        {
            printf("%s < %s", n, m);
            break;
        }
        else if (n[i] > m[i])
        {
            printf("%s < %s", m, n);
            break;
        }
        else if (n[i] == m[i] && i == 0)
        {
            printf("%s = %s", n, m);
        }
    }
}

// arsham_mahdiun @Arshamm1997