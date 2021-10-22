#include <iostream>
int main()
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char in[80];
    std::cin.getline(in, 80);
    for (int j = 0; in[j] != '\0'; j++)
    {
        if (in[j] == 'a')
        {
            a++;
            continue;
        }
        else if (in[j] == 'e')
        {
            e++;
            continue;
        }
        else if (in[j] == 'i')
        {
            i++;
            continue;
        }
        else if (in[j] == 'o')
        {
            o++;
            continue;
        }
        else if (in[j] == 'u')
        {
            u++;
            continue;
        }
    }
    std::cout << a << " " << e << " " << i << " " << o << " " << u << std::endl;
    return 0;
}
