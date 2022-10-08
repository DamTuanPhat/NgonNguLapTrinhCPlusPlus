#include <iostream>
#include <string.h>

using namespace std;

void standard(char s[])
{
    int size = strlen(s);
    int totalCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == ' ')
        {
            totalCount++;
        }
    }

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (s[i] != ' ')
        {
            break;
        }
        if (++count < totalCount)
        {
            for (int j = i; j < size; j++)
            {
                s[j] = s[j + 1];
            }
        }
    }
    for (int i = size - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            break;
        }
        if (++count < totalCount)
        {
            size--;
        }
    }

    for (int k = 0; k < totalCount; k++)
    {

        for (int i = 0; i < size; i++)
        {
            if (s[i] == ' ')
            {
                if (++count < totalCount)
                {
                    for (int j = i; j < size; j++)
                    {
                        s[j] = s[j + 1];
                    }
                }
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << s[i];
    }
}

int main()
{
    char s[100];
    cout << "Nhap xau: ";
    cin.getline(s, 100);

    standard(s);
    return 0;
}
