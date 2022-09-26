#include<iostream>

using namespace std;

class Thisinh {
    private:
        string hoten;
        int somonthi;
        float* diem;
        float trungbinh;
    public:
        Thisinh() {
            this->hoten = "N/A";
        }

        Thisinh(string hoten, int somonthi) {
            this->hoten = hoten;
            this->somonthi = somonthi;
        }

        void setHoten(string hoten) {
            this->hoten = hoten;
        }

        string getHoten() {
            return hoten;
        }

        void setSomonthi(int somonthi) {
            this->somonthi = somonthi;
            diem = new float[somonthi];

            for(int i = 0; i < somonthi; i++) {
                cout << "Nhap diem mon thu " << i + 1 << " : ";
                cin >> *(diem + i);
            }
        }

        int getSomonthi() {
            return somonthi;
        }

        float* getDiem() {
            return diem;
        }

        void getDiemList() {
            for(int i = 0; i < somonthi; i++) {
                cout << "Diem mon thu: " << *(diem + i) << endl;
            }
        }

        float tinh_tb() {
            float sum = 0;
            for(int i = 0; i < somonthi; i++) {
                sum += *(diem + i);
            }

            return sum / somonthi;
        }

        bool isPassed() {
            if (tinh_tb() >= 5) {
                for(int i = 0; i < somonthi; i++) {
                    if( *(diem + i) == 0) {
                        return false;
                    }
                }

                return true;
            }

            return false;
        }

        void show() {
            cout << endl << "Ten thi sinh: " << getHoten() << endl;
            cout << "So mon thi: " << getSomonthi() << endl;
            cout << "Diem tung mon: " << endl;
            getDiemList();
            cout << "Diem trung binh: " << tinh_tb() << endl;
        }

        ~Thisinh() {
            delete [] diem;
        }
};

int main() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    Thisinh arr[n];

    for(int i = 0; i < n; i++) {
        string strTemp;
        int intTemp;
        cout << endl << "Thi sinh thu " << i + 1 << endl;
        cout << "Ho ten: ";
        cin >> strTemp;
        (arr + i)->setHoten(strTemp);

        cout << "So mon thi: ";
        cin >> intTemp;
        (arr + i)->setSomonthi(intTemp);
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        if ( (arr + i)->isPassed() ) {
            count++;
            if (count == 1) {
                cout << endl << "Danh sach thi sinh trung tuyen: " << endl;
            }
            (arr + i)->show();
        }
    }

    if (count == 0) {
        cout << endl << "Khong co thi sinh nao qua mon!" << endl;
    }

    return 0;
}
