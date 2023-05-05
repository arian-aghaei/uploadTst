#include <iostream>
#include <cmath>
using namespace std;

class circle {
    double radius = 0;
    double space = 0;
    double perimeter = 0;
    bool flag = false;
    string name = "Circle";
public :
    circle() {
        get();
        print();
    }

    void get() {
        cout << "Enter name of circle : ";
        cin >> name;
        flag = false;
        do {
            cout << "Enter Radious of " << name << "(larger than 0) : ";
            cin >> radius;
            if (radius > 0) flag = true;
        } while (flag == false);
        space = pow(radius, 2);
        perimeter = radius * 2;
    }
    void print() {
        cout << endl << "name : " << name << endl;
        cout << "Radious is : " << radius << endl;
        cout << "Space is : " << space << "pi" << endl;
        cout << "Perimeter is : " << perimeter << "pi" << endl << endl;
    }
};


class rectangle {
    double width = 0;
    double length = 0;
    double space = 0;
    double perimeter = 0;
    string name = "Rectangle";
public :
    rectangle() {
        get();
        print();
    }

    void get() {
        cout << "Enter name of rectangle : ";
        cin >> name;
        bool flag = false;
        do {
            cout << "Enter Width of " << name << "(larger than 0) : ";
            cin >> width;
            if (width > 0) flag = true;
        } while (flag == false);
        flag = false;
        do {
            cout << "Enter Length of " << name << "(larger than 0) : ";
            cin >> length;
            if (length > 0) flag = true;
        } while (flag == false);
        space = width * length;
        perimeter = (width + length) * 2;
    }
    void print() {
        cout << endl << "name : " << name << endl;
        cout << "Width is : " << width << endl;
        cout << "Length is : " << length << endl;
        cout << "Space is : " << space << endl;
        cout << "Perimeter is : " << perimeter << endl << endl;
    }
};


class triangle {
    double a = 0;
    double b = 0;
    double c = 0;
    double space = 0;
    double perimeter = 0;
    string name = "Rectangle";
public :
    triangle() {
        get();
        print();
    }

    void get() {
        cout << "Enter name of triangle : ";
        cin >> name;
        bool f1 = false;
        do {
            bool flag = false;
            do {
                cout << "Enter a for " << name << "(larger than 0) : ";
                cin >> a;
                if (a > 0) flag = true;
            } while (flag == false);
            flag = false;
            do {
                cout << "Enter b for " << name << "(larger than 0) : ";
                cin >> b;
                if (b > 0) flag = true;
            } while (flag == false);
            flag = false;
            do {
                cout << "Enter c for " << name << "(larger than 0) : ";
                cin >> c;
                if (c > 0) flag = true;
            } while (flag == false);
            double big = 0, small = 0, mid = 0;
            if (a > b) { big = a; small = b; }
            else { big = b; small = a; }
            if (c > big) { mid = big; big = c; }
            else {
                if (c < small) { mid = small; small = c; }
                else mid = c;
            }
            if (small + mid > big) {
                f1 = true;
                perimeter = a + b + c;
                double s = perimeter / 2;
                space = sqrt(s * (s-a) * (s-b) * (s-c));
            }
            else cout << "Entered numbers cannot make a triangle!" << endl;
        } while (f1 == false);
    }
    void print() {
        cout << endl << "name : " << name << endl;
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "c : " << c << endl;
        cout << "Space is : " << space << endl;
        cout << "Perimeter is : " << perimeter << endl << endl;
    }
};


int main()
{
    circle c1;
    rectangle r1;
    triangle t1;
}


