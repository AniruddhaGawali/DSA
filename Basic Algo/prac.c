#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    int n;
    scanf("%d", &n);
    while (t--)
    {
        char name[n];
        char name1[n / 2];
        char name2[n / 2];

        int len, i, j, flag = 0;

        scanf("%s", name);
        len = n / 2;

        for (i = 0; i < len; i++)
        {
            name1[i] = name[i];
        }

        for (j = 0; j != len; j++)
        {
            name2[j] = name[len + j];
        }

        // printf("%s", name1);
        // printf("%s", name2);

        for (i = 0; i < len; i++)
        {
            if (name1[i] == name2[i])
                flag = 1;
            else
                flag = 0;
        }

        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
