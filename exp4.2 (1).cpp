#include <iostream>
using namespace std;

class construct {
public:
    float area;
    construct() {
        area = 0;
    }


int main() {
    cout << "Name: sanika sanjay ghodake" << endl;
    cout << "Roll No: 116" << endl;
    cout << "Division: S.Y. B CSE" << endl;
    construct(int a, int b) {
        area = a * b;
    }

    void disp() {
        cout << area << endl;
    }
};
    cout << "-----------------------------" << endl;

    construct o1;          
    construct o2(10, 20);  
    o1.disp();  
    o2.disp();  
    return 0;
}
