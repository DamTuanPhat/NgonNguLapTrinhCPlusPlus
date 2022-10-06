#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <cmath>
#include <string>
#include <numeric>
#include <map>
#include <iomanip>
#include <set>

using namespace std;
#define int long long
#define endl "\n"
const int mod = 1e9 + 7;
const int MIN = mod;
const int MAX = -1;
void xoa(char a[])
{
    vector<int> v;
    bool ok = false;
    for (int i = 0; i < strlen(a); i++)
    {
        if (!ok && a[i] == ' ')
        {
            v.push_back(i);
            ok = 1;
        }
        else if (a[i] != ' ')
        {
            v.push_back(i);
            ok = 0;
        }
        else if (a[i] == ' ' && ok == 1) continue;
           
    }
    if (!ok)
    {
        if(a[0] != ' ') cout << a[0];
        for (int i = 1; i < v.size(); i++)
        {
            cout << a[v[i]];
        }
    }
    
    else {
        if(a[0] != ' ') cout << a[0];
         for (int i = 1; i < v.size() - 1; i++)cout << a[v[i]];
    }  
            
}

signed main()
{
    char a[100];
    cin.getline(a, 100);
    xoa(a);
}
