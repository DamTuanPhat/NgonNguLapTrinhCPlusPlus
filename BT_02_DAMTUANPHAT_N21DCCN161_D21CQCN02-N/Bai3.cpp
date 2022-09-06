#include<iostream>
#include<math.h>

using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;
    cout << "Enter the coordinates of point A(x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of point B(x2, y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of point C(x3, y3): ";
    cin >> x3 >> y3;

    bool isTriangle = false;
    float AB = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));                
    float BC = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));              
    float AC = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    if( !((x1 == x2 && y1 == y2) || (x2 == x3 && x3 == y3) || (x1 == x3 && y1 == y3))) {
        if  ((AB + BC) > AC && (AC + AB) > BC && (AC + BC) > AB) {
            isTriangle = true;
        }
    }

    if(!isTriangle) {
        cout << "Three points A, B, C do not form a triangle!" << endl;
    }
    else {
        float g1 = (x1 + x2 + x3) / 3,
              g2 = (y1 + y2 + y3) / 3;
        float perimeter = AB + BC + AC;               
        float p = perimeter / 2;
        float area = sqrt(p * (p - AB) * (p - BC) * (p - AC));
        cout << "The centroid G of triangle ABC is: (" << g1 << ", " << g2 << ")." << endl;
        cout << "Area of Triangle: " << area << endl;
        cout << "Perimeter of Triangle: " << perimeter << endl;
    }

    return 0;
}
