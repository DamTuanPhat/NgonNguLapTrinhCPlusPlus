#include<iostream>

using namespace std;

int main() {
    int numberOfStudents;
    cout << "Enter number of students: ";
    cin >> numberOfStudents;

    float gPAOfStudent[numberOfStudents];
    float sumGPAOfStudent = 0;
    for(int i = 0; i < numberOfStudents; i++) {
        cout << "Enter GPA of student " << i + 1 << " : ";
        cin >> gPAOfStudent[i];
        sumGPAOfStudent += gPAOfStudent[i];
    }

    float gPAOfStudents = sumGPAOfStudent / (float) numberOfStudents;
    cout << "GPA of Students is: " << gPAOfStudents << endl;
    return 0;
}
