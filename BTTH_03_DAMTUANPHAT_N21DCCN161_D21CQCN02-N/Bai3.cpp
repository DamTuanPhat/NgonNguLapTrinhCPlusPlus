#include<iostream>

using namespace std;

class Car {
    private:
        string brand;
        int weight; // Khoi luong khong tai
        int seats;
    
    public:
        Car() {
            this->brand = "N/A";
            this->seats = 0;
            this->weight = 0;
        }
        
        Car(string brand, int weight, int seats) {
            this->brand = brand;
            this->weight = weight;
            this->seats = seats;
        }
        
        void setBrand(string brand) {
            this->brand = brand;
        }
        
        string getBrand(){
            return brand;
        }
        
        void setWeight(int w){
            this->weight = w;
        }
        
        int getWeight(){
            return weight;
        }
        
        void setSeats(int s){
            this->seats = s;
        }
        
        int getSeats(){
            return seats;
        }
        
        void show() {
            cout << endl << "Thong tin cua xe: " << endl;
            cout << "Hang xe: " << getBrand() << endl;
            cout << "Khoi luong khong tai: " << getWeight() << endl;
            cout << "So cho ngoi: " << getSeats() << endl << endl;
        }
        
};

int main() {
    int n;
    cout << "Nhap so luong xe cua cong ty: ";
    cin >> n;
    Car arr[n];

    for(int i = 0; i < n; i++) {
        string brand;
        int weight;
        int seats;
        cout << "Hang xe: ";
        cin >> brand;
        cout << "Khoi luong khong tai: ";
        cin >> weight;
        cout << "So cho ngoi: ";
        cin >> seats;
        
        (arr + i)->setBrand(brand);
        (arr + i)->setWeight(weight);
        (arr + i)->setSeats(seats);
    }

    for(int i = 0; i < n; i++) {
        (arr + i)->show();

    }

    return 0;
}
