/*
Ho va Ten: Dam Tuan Phat
MSSV: N21DCCN161
Lop: D21CQCN02-N
*/
#include<iostream>

using namespace std;

class Car {
    public:
        string brand;
        int weight; // Khoi luong khong tai
        int seats;

        void show() {
            cout << "Hang xe: " << brand << endl;
            cout << "Khoi luong khong tai: " << weight << endl;
            cout << "So cho ngoi: " << seats << endl << endl;
        }

        Car() {
            this->brand = "N/A";
            this->seats = 0;
            this->weight = 0;
        }

        Car(string brand, int weight,  int seats) {
            this->brand = brand;
            this->weight = weight;
            this->seats = seats;
        }
};

int main() {
    Car car1("Ford", 1200, 7);
    Car car2("Toyota", 1000, 4);
    Car car3("Isuzu", 1200, 4);

    car1.show();
    car2.show();
    car3.show();

    return 0;
}
