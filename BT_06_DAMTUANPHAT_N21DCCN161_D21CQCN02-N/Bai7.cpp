#include <iostream>
#include <string.h>

using namespace std;

void maxwords(char s[])
{
    int i;
    int maxx = 0, maxi = 0;
    int len = strlen(s);
    if (s[0] == ' ') {
        for (i = 0; i < len - 1; i++)
        {
            if ((s[i] == ' ') && (s[i + 1] != ' ')) {
                int j = i + 1;
                int dem = 0;
                while ((s[j] != ' ') && (s[j] != '\0')) {
                    dem++;
                    j++;
                }
                if (dem > maxx) {
                    maxx = dem;
                    maxi = i + 1;
                }
                i = j - 1;
            }
        }
    }
    else {
        i = 0;
        int dem = 0;
        while ((s[i] != ' ') && (s[i] != '\0')) {
            dem++;
            i++;
        }
        if (dem > maxx) {
            maxx = dem;
            maxi = 0;
        }
        for (i = maxx - 1; i < len - 1; i++) {
            if ((s[i] == ' ') && (s[i + 1] != ' '))
            {
                int j = i + 1;
                int de = 0;
                while ((s[j] != ' ') && (s[j] != '\0')) {
                    de++;
                    j++;
                }
                if (de > maxx) {
                    maxx = de;
                    maxi = i + 1;
                }
                i = j - 1;
            }
        }
    }
    for (int i = maxi; i < (maxi + maxx); i++) {
       cout << s[i];
    }
}

int main()
{
    char s[100];
    cout << "Nhap xau: ";
    cin.getline(s, 100);

    maxwords(s);
    return 0;
}
