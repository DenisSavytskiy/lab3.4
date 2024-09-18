// Lab_03_4.cpp
// Савицький Денис
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 27

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R; // вхідний параметр

    cout << "R = ";cin >> R;
    cout << "x = ";cin >> x;
    cout << "y = ";cin >> y;

    // розгалуження в повній формі
    if ((x>=-2*R && x<=0 && y>=0 && y<=2*R && x*x+(y*y)<=R*R) || (x>=0 && x<=2*R && y>=-R && y<=0)) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}