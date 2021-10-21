#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = n;
    double a = 0, b = 0, c = 0, d = 0;
    while (n--)
    {
        int input;
        cin >> input;
        if (input >= 1 && input <= 18)
        {
            a++;
        }
        else if (input >= 19 && input <= 35)
        {
            b++;
        }
        else if (input >= 36 && input <= 60)
        {
            c++;
        }
        else if (input >= 60)
        {
            d++;
        }
    }

    printf("1-18: %.2f%\n", 100 * a / count);
    printf("19-35: %.2f%\n", 100 * b / count);
    printf("36-60: %.2f%\n", 100 * c / count);
    printf("60-: %.2f%\n", 100 * d / count);

    return 0;
}
