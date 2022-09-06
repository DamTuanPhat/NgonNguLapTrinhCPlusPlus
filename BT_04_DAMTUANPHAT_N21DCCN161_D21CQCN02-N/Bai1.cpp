/*
Ho va Ten: Dam Tuan Phat
MSSV: N21DCCN161
Lop: D21CQCN02-N
*/
#include<iostream>
#include<string.h>
#include<math.h>
#include <cctype>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void toLowerCase() {

    string result = "";
    string str;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length() ; i++) {
        result += tolower(str[i]);
    }

    cout << "String after lower case: " << result << endl;
}

void solvingFirstDegreeEquations() {
    float a, b;
    cout << "Enter 2 parameters of the equation ax + b = 0:";
    cin >> a >> b;
    if (a != 0) {
        float x = - b / a;
        cout << "The equation has a unique solution x = " << x << endl;
    }
    else {
        if (b != 0) {
            cout << "The equation has no solution." << endl;
        }
        else {
            cout << "The equation is always true for all variables x." << endl;
        }
    }
}

void solvingQuadraticEquations() {
    float a, b, c;
    cout << "Enter 3 parameters of the equation ax^2 + bx + c = 0:";
    cin >> a >> b >> c;

    if( a != 0) {
        float delta = pow(b, 2) - 4 * a * c;
        if(delta < 0) {
            cout << "The equation has no solution!" << endl;
        }
        else {
            if(delta == 0) {
                float x = - b / (2 * a);
                cout << "The equation has unique solution x = " << x << endl;
            }
            else {
                float x1 = (-b - sqrt(delta)) / (2 * a);
                float x2 = (-b + sqrt(delta)) / (2 * a);
                cout << "The equation has 2 distinct solutions, x1 = " << x1 << ", x2 = " << x2 << endl; 
            }
        }
    }
    else {
        if(b != 0) {
            float x = -b / c;
            cout << "The equation has unique solution x = " << x << endl;
        }
        else {
            if(c != 0) {
                cout << "The equation has no solution!" << endl;
            }
            else {
                cout << "The equation is always true for all variables x." << endl;
            }
        }
    }
}

void theMinOf4Int() {
    int a, b, c, d;
    cout << "Enter 4 integers:";
    cin >> a >> b >> c >> d;
    cout << min(min(a, b), min(c, d));
}

void swappingTwoValue() {
    int a,b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "a = " << a << " , b = " << b << endl;
    cout << "Swapping..." << endl;
    int c = a;
    a = b;
    b = c;
    cout << "a = " << a << " , b = " << b << endl;
}

void sortFourIntegersASC() {
    int arr[4];
    cout << "Enter 4 integers:";

    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
  
    
    sort(arr, arr + n);
  
    cout << endl << "Array after sorting using default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}


int main() {
    int selectedIndex;

    do {
        cout << endl << "1. To lower case program." << endl;
        cout << "2. Solving first degree equations." << endl;
        cout << "3. Solving quadratic equations." << endl;
        cout << "4. Function to determine the minimum value of 4 integers." << endl;
        cout << "5. Procedure for permutation of two integers." << endl;
        cout << "6. Procedure to sort 4 integers ascending." << endl;
        cout << "0. Exit program." << endl << endl;
 
        cout << "Choose the program: ";
        cin >> selectedIndex;

        switch (selectedIndex)
        {
        case 1:
            toLowerCase();
            break;
        case 2:
            solvingFirstDegreeEquations();
            break;
        case 3:
            solvingQuadraticEquations();
            break;
        case 4:
            theMinOf4Int();
            break;
        case 5:
            swappingTwoValue();
            break;
        case 6:
            sortFourIntegersASC();
            break;
        default:
            break;
        }
        

    }
    while(selectedIndex != 0);
    

    return 0;
}