#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int num;
    int grade[4];
    int average;

public:
    void init(string str)
    {
        string tmp;
        stringstream in;
        in << str;
        getline(in, this->name, ',');
        getline(in, tmp, ',');
        age = stoi(tmp);
        getline(in, tmp, ',');
        num = stoi(tmp);
        getline(in, tmp, ',');
        grade[0] = stoi(tmp);
        getline(in, tmp, ',');
        grade[1] = stoi(tmp);
        getline(in, tmp, ',');
        grade[2] = stoi(tmp);
        getline(in, tmp, ',');
        grade[3] = stoi(tmp);
    }
    void print()
    {
        cout << name << ","
             << age << ","
             << num << ",";
    }
    void average_cal()
    {
        int sum = 0;
        for (int i = 0; i < 4; i++)
        {
            sum += grade[i];
        }
        average = sum / 4;
        cout << average << endl;
    }
};

int main()
{
    string str;
    cin >> str;
    Student s;
    s.init(str);
    s.print();
    s.average_cal();
    return 0;
}
