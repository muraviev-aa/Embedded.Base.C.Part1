#include <stdio.h>

int main()
{
    int a, flag = 0;
    scanf("%d", &a);
    if(a > 1)
    {
        flag++;
        for(int i = 2; i < a; i++)
        {
            if(a%i == 0)
                flag--;
        }
    }
    if(flag == 1)
        printf("%s", "YES");
    else
        printf("%s", "NO");
    return 0;
}