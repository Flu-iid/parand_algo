#include <iostream>
using namespace std;

int main()
{
    int a[8];
    int temp;
    int answer = 0;
    for (int i = 0; i < 8; i++)
        cin >> a[i];
    for (int i = 0; i < 8; i++)
    {
        cin >> temp;
        answer += temp && a[i];
    }
    cout << answer;
}