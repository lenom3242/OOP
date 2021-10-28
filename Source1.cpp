#include <iostream>
#include <string>
using namespace std;

class Point {
    int x;
    int y;
public:
    int getx() { return x; }
    void setx(int a) { x = a; }
    int gety() { return y; }
    void sety(int b) { y = b; }
    void print() {
        //cout << "(" << x << "," << y << ")" << endl;
        cout << "New Point";
        print();
        cout << endl;
    }
    Point() : x(0), y(0) {}
    Point(int v1, int v2) : x(v1), y(v2) {}

};

class Cicrle {
    Point seredina;
    int Rad;
public:
    Cicrle(int v1, int v2, int rad) : seredina(v1, v2), Rad(rad) {};
    int getRad() { return Rad; }
    void setRad(int c) { Rad = c; }
    Cicrle() : seredina(0, 0), Rad(1) {
        cout << "New Cicrle";
        seredina.print();
        cout << ",";
        //Rad.print();// у меня тут ошибка
        cout << Rad;
        cout << endl;
    }

};
void main()
{

}