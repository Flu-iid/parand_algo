#include <iostream>
using namespace std;

int max_index(int a[], int length)
{
    int max_i = 0; // max index. not max element
    for (int i = 0; i < length; i++)
    {
        if (a[i] > a[max_i])
            max_i = i;
    }
    return max_i;
}

int main()
{
    int t; // number of tests
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n; // number of cards
        cin >> n;
        long long power = 0; // total power for the deck
        int stack[n];        // the stack for deck
        for (int i = 0; i < n; i++)
            stack[i] = 0; // fill all with 0
        for (int i = 0; i < n; i++)
        {
            int card;
            cin >> card;
            if (card)
            { // not hero card
                stack[i] = card;
            }
            else
            { // when its hero card ( zero )
                int max_card_index = max_index(stack, i);
                power += stack[max_card_index];
                stack[max_card_index] = 0; // replace with 0
            }
        }
        cout << power << endl;
    }
}

// arsham_mahdiun @Arshamm1997

// 2

#include <iostream>
using namespace std;

int main()
{

    int p, n, max, jmax = 0, a[5002];
    long long power = 0;
    for (int i = 0; i < 5002; i++)
        a[i] = -1; // علامت خالی بودن

    cin >> n; // تعداد تکرار بازی
    for (int i = 0; i < n; i++)
    {
        cin >> p; // تعداد کارت های هر مرحله
        for (int j = 0; j < p; j++)
            cin >> a[j]; // گرفتن شماره کارت ها از ورودی
        int k = 0;
        while (a[k] != -1) // تا زمانیکه به خانه خالی نرسیده ایم
        {
            max = 0;       // بزرگترین عددی که پیدا شده
            jmax = 0;      // شماره ی خانه ی بزرگترین عدد
            if (a[k] == 0) // اگر به کارت صفر برخورد شد
            {
                a[k] = -2;                  // بجای مقدار صفر با منهای 2 علامت بگذار
                for (int j = 0; j < k; j++) // از ابتدا تا نقطه ای که کارت صفر پیدا کردیم بررسی کنیم
                    if (a[j] > max)         // اگر کارت از ماکزیمم قبلی بزرگتر بود آنگاه
                    {
                        max = a[j]; // مقدار را در ماکزیمم بگذاریم
                        jmax = j;   // شماره خانه ماکزیمم را به یاد داشته باشیم
                    }
                power += max; // مقدار بزرگترین عدد پیدا شده تا آن خانه ی کارت صفر دار را به قدرت مان بیافزاییم
                a[jmax] = -3; // آن خانه ای که مقدار ماکزیمم داشته را برای بررسی های بعدی بی اثر کنیم با مقدار دهی منهای 3
            }
            k++; // خانه ی بعدی را در جستجوی کارت صفر بگردیم
        }
        cout << power << endl; // قدرت بدست آمده از کارت های هر مرحله را چاپ کنیم
        power = 0;             // قدرت را برای شروع مرحله بعدی بازی صفر کنیم
    }
    return 0;
}

// saeid_ahmadi