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
            seats = s;
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
    string brand;
    int weight;
    int seats;

    cin.ignore(265, "\n");
    Car car1;
    cout << "Hang xe: ";
    cin >> brand;
    cout << "Khoi luong khong tai: ";
    cin >> weight;
    cout << "So cho ngoi: ";
    cin >> seats;
    car1.setBrand(brand);
    car1.setWeight(weight);
    car1.setSeats(seats);

    cin.ignore(265, "\n");
    Car car2;
    cout << "Hang xe: ";
    cin >> brand;
    cout << "Khoi luong khong tai: ";
    cin >> weight;
    cout << "So cho ngoi: ";
    cin >> seats;
    car2.setBrand(brand);
    car2.setWeight(weight);
    car2.setSeats(seats);

    cin.ignore(265, "\n");
    Car car3;
    cout << "Hang xe: ";
    cin >> brand;
    cout << "Khoi luong khong tai: ";
    cin >> weight;
    cout << "So cho ngoi: ";
    cin >> seats;
    car3.setBrand(brand);
    car3.setWeight(weight);
    car3.setSeats(seats);
    
    car1.show();
    car2.show();
    car3.show();


    return 0;
}
