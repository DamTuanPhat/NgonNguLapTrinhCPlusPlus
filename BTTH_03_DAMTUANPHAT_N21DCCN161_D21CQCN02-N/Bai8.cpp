#include<iostream>
#include<math.h>

using namespace std;

class diem {
    private:
        string name;
        int x, y;
    public:
        diem() {
            this->x = 0;
            this->y = 0;
        }

        diem(int x, int y) {
            this->x = x;
            this->y = y;
        }

        diem(string name, int x, int y) {
            this->name = name;
            this->x = x;
            this->y = y;
        }

        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return name;
        }

        void setX(int x) {
            this->x = x;
        }

        int getX() {
            return x;
        }

        void setY(int y) {
            this->y = y;
        }

        int getY() {
            return y;
        }

        float distance(diem diem) {
            float distance;
            distance = sqrt(pow((x - diem.getX()), 2) + pow((y - diem.getY()), 2));
            return distance;
        }

        void show() {
            cout << "Ten diem: " << getName() << endl;
            cout << "Toa do: (" << getX() << ", " << getY() << ")" << endl;
        }
};

int main() {
    int n;
    cout << "Nhap so diem trong mat phang: ";
    cin >> n;
    diem arr[1000];

    for(int i = 0; i < n; i++) {
        string name;
        int x,y;
        cout << "Nhap ten diem: ";
        cin >> name;
        arr[i].setName(name);
        cout << "Nhap toa do cua diem: ";
        cin >> x >> y;
        arr[i].setX(x);
        arr[i].setY(y);
    }

    float distanceList[1000];
    for(int i = 0; i < n; i++) {
        float sumDistance = 0;
        for(int j = 0; j < n; j++) {
            if (i != j) {
                sumDistance += arr[i].distance(arr[j]);
            }
        }
        distanceList[i] = sumDistance;
    }

    float minDistance = distanceList[0];
    int trongTamIndex = 0;
    for(int i = 0; i < n; i++) {
        if (distanceList[i] < minDistance) {
            minDistance = distanceList[i];
            trongTamIndex = i;
        }
    }

    cout << "Diem trong tam cua he toa do la: " << endl;
    arr[trongTamIndex].show();

    return 0;
}
