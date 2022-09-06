#include<iostream>

using namespace std;

int main() {
    float math, physic, english, chemistry, literature, biology;
    cout << "Nhap diem mon Toan: ";
    cin >> math;
    cout << "Nhap diem mon Van: ";
    cin >> literature;
    cout << "Nhap diem mon Ly: ";
    cin >> physic;
    cout << "Nhap diem mon Hoa: ";
    cin >> chemistry;
    cout << "Nhap diem mon Sinh: ";
    cin >> biology;
    cout << "Nhap diem mon Anh: ";
    cin >> english;

    float average = (math*3 + literature*2 + physic*2 + english*2 + chemistry + biology) / 11;

    cout << "Diem trung binh cua nam cua sinh vien la: " << average << endl;

    return 0;
}
