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

    cout << "Кількість букв а у останьому  слові  файла t.txt.TXT: " << Count() << endl;

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
        if (s[i] != 'а')
            break;
        for (i; i < s.length(); i++)
            if (s[i] == 'а')
                for (i; i < s.length(); i++)
                    if (s[i] != 'а')
                    {
                        k++;
                        break;
                    }
    }
    return k + 1;
}