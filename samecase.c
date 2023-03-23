#include <stdio.h>

int smallcaseProfit(double rate, int principle, int year)
{
    double total = 0;

    while (year--)
    {
        if (total == 0)
            total = total + (principle + principle * (rate / 100));
        else
            total = total + (total * (rate / 100));
    }

    return total;
}

int main()
{
    int a = smallcaseProfit(15.45, 600, 0);
    printf("%d\n", a);
    return 0;
}