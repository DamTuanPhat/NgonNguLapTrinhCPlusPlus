#include<iostream>

using namespace std;

class Car {
    private:
        string brand;
        int weight; // Khoi luong khong tai
        int seats;
        int travelers;
        string* travelers_list;
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

        void setTravelers(int travelers) {
            this->travelers = travelers;
            travelers_list = new string[travelers];

            for(int i = 0; i < travelers; i++) {
                cout << "Nhap ma hanh khac thu " << i + 1 << " :";
                cin >> *(travelers_list + i);
            }
        }

        int getTravelers() {
            return travelers;
        }

        void showTravelers_list() {
            for(int i = 0; i < travelers; i++) {
                cout << "Ma hanh khach thu " << i + 1 << " : " << *(travelers_list + i) << endl;
            }
        }

        void show() {
            cout << endl << "Thong tin cua xe: " << endl;
            cout << "Hang xe: " << getBrand() << endl;
            cout << "Khoi luong khong tai: " << getWeight() << endl;
            cout << "So cho ngoi: " << getSeats() << endl << endl;
            cout << "So luong hanh khach: " << getTravelers() << endl;
            cout << "Danh sach ma hanh khach: " << endl;
            showTravelers_list();
        }

        ~Car() {
            delete [] travelers_list;
        }

};

int main() {
    int n;
    cout << "Nhap so luong xe cua cong ty: ";
    cin >> n;
    Car arr[1000];

    for(int i = 0; i < n; i++) {
        string stringTemp;
        int intTemp;

        cout << "Hang xe: ";
        cin >> stringTemp;
        (arr + i)->setBrand(stringTemp);
        
        cout << "Khoi luong khong tai: ";
        cin >> intTemp;
        (arr + i)->setWeight(intTemp);
        
        cout << "So cho ngoi: ";
        cin >> intTemp;
        (arr + i)->setSeats(intTemp);
        
        cout << "So hanh khach: ";
        cin >> intTemp;
        (arr + i)->setTravelers(intTemp);
    }

    for(int i = 0; i < n; i++) {
        (arr + i)->show();

    }

    return 0;
}
