#include <stdio.h>

int isEven(int n)
{
    if (n % 2 == 0)
        return 0;
    else
        return 1;
}

void sort(int n, int *array)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (array[j] > array[i])
            {
                int tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }
}

int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    sort(10, array);

    int even[10], odd[10];
    int count_e = 0, count_o = 0;

    for (int i = 0; i < 10; i++)
    {
        if (isEven(array[i]) == 0)
        {
            even[count_e] = array[i];
            count_e++;
        }
        else
        {
            odd[count_o] = array[i];
            count_o++;
        }
    }

    for (int i = 0; i < count_o; i++)
    {
        printf("%d ", odd[i]);
    }
    for (int i = 0; i < count_e; i++)
    {
        printf("%d ", even[i]);
    }
    return 0;
}
