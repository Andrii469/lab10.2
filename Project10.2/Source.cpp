#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

int Count();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "ʳ������ ���� � � ���������  ����  ����� t.txt.TXT: " << Count() << endl;

    return 0;
}
int Count()
{
    int k = 0;

    ifstream t("t.txt.TXT");
    string s;

    int i;
    while (getline(t, s))
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '�')
            break;
        for (i; i < s.length(); i++)
            if (s[i] == '�')
                for (i; i < s.length(); i++)
                    if (s[i] != '�')
                    {
                        k++;
                        break;
                    }
    }
    return k + 1;
}