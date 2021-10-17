#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            bool leftIsEven = a[j - 1] % 2 == 0;
            bool rightIsEven = a[j] % 2 == 0;
            // 与刚才的冒泡排序不同，我们不只是通过较数字的大小决定顺序
            // 如果左边的为偶数，右边的为奇数，那么顺序也需要颠倒
            if ((leftIsEven && !rightIsEven) || (leftIsEven == rightIsEven && a[j - 1] > a[j]))
            {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
