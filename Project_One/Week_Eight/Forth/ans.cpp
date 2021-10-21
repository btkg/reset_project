#include <cstdio>
int main()
{
    double n;
    double k;
    double home = 200;
    double money;
    int flag = 0;
    int a;
    scanf("%lf %lf", &n, &k);
    for (int i = 2; i <= 20; i++)
    {
        home *= (1 + k / 100);
        money = n * i;
        if (money >= home)
        {
            flag = 1;
            a = i;
            break;
        }
    }

    if (flag == 1)
    {
        printf("%d\n", a);
    }
    else
    {
        printf("Impossible\n");
    }

    return 0;
}