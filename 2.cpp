#include <iostream>
#include <cmath>

using namespace std; 

class oval
{
    double x1, x2, x3, x4, y1, y2, y3, y4, a, b;
    double space = 0;
    double perimeter = 0;
    string name = "Oval";
    bool flag = false;
public :
    oval()
    {
        get();
        if (flag == true) print();
    }
    
    void get()
    {
        cout << "Enter name of oval : ";
        cin >> name;
        cout << "Enter x1 and y1 for " << name << " as top or bottom point of it : ";
        cin >> x1 >> y1;
        cout << "Enter x2 and y2 for " << name << " : ";
        cin >> x2 >> y2;
        cout << "Enter x3 and y3 for " << name << " : ";
        cin >> x3 >> y3;
        cout << "Enter x4 and y4 for " << name << " : ";
        cin >> x4 >> y4;
        if (x1 == x2 && ((x1 < x3 && x1 > x4)||(x1 > x3 && x1 < x4)) && y3 == y4) {
            if (x3 - x1 == x1 - x4) {
                flag = true;
                a = abs(y1 - y2) / 2;
                b = abs(x3 - x4) / 2;
                space = a * b;
                perimeter = a + b;
            }
        }
        else if (x1 == x3 && ((x1 < x2 && x1 > x4) || (x1 > x2 && x1 < x4)) && y2 == y4) {
            if (x2 - x1 == x1 - x4) {
                flag = true;
                a = abs(y1 - y3) / 2;
                b = abs(x2 - x4) / 2;
                space = a * b;
                perimeter = a + b;
            }
        }
        else if (x1 == x4 && ((x1 < x3 && x1 > x2) || (x1 > x3 && x1 < x2)) && y3 == y2) {
            if (x3 - x1 == x1 - x2) {
                flag = true;
                a = abs(y1 - y4) / 2;
                b = abs(x3 - x4) / 2;
                space = a * b;
                perimeter = a + b;
            }
        }
        if (flag == false) {
            cout << "Entered numbers cannot make an oval!" << endl;
        }
    }
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "First radius is : " << a << endl;
        cout << "Second radius is : " << b << endl;
        cout << "Space is : " << space << "pi" << endl;
        cout << "Perimeter is : " << perimeter << "pi" << endl;
    }
};

class pentagon
{
    double x1, x2, x3, x4, x5, y1, y2, y3, y4, y5, x;
    double space = 0;
    double perimeter = 0;
    string name = "Pentagon";
    bool flag = false;
public :
    pentagon()
    {
        get();
        if (flag == true) print();
    }

    void get()
    {
        cout << "Enter name of pentagon : ";
        cin >> name;
        cout << "Please enter points of this pentagon in order.." << endl;
        cout << "Enter x1 and y1 for " << name << " : ";
        cin >> x1 >> y1;
        cout << "Enter x2 and y2 for " << name << " : ";
        cin >> x2 >> y2;
        cout << "Enter x3 and y3 for " << name << " : ";
        cin >> x3 >> y3;
        cout << "Enter x4 and y4 for " << name << " : ";
        cin >> x4 >> y4;
        cout << "Enter x5 and y5 for " << name << " : ";
        cin >> x5 >> y5;
        if (sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)) == sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2))) {
            if (sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2)) == sqrt(pow((x3 - x4), 2) + pow((y3 - y4), 2))) {
                if (sqrt(pow((x3 - x4), 2) + pow((y3 - y4), 2)) == sqrt(pow((x4 - x5), 2) + pow((y4 - y5), 2))) {
                    if (sqrt(pow((x4 - x5), 2) + pow((y4 - y5), 2)) == sqrt(pow((x1 - x5), 2) + pow((y1 - y5), 2))) {
                        flag = true;
                        x = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
                        space = pow(x, 2) * sqrt(25 + 10 * sqrt(5)) / 4;
                        perimeter = x * 5;
                    }
                }
            }
        }
        if (flag == false) {
            cout << "Entered numbers cannot make a pentagon!" << endl;
        }
    }
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Size of a single side is : " << x << endl;
        cout << "Space is : " << space << endl;
        cout << "Perimeter is : " << perimeter << endl;
    }
};

class trapezius
{
    double x1, x2, x3, x4, y1, y2, y3, y4, h;
    double space = 0;
    double perimeter = 0;
    string name = "Trapezius";
    bool flag = false;
public :
    trapezius()
    {
        get();
        if (flag == true) print();
    }

    void get()
    {
        cout << "Enter name of trapezius : ";
        cin >> name;
        cout << "Enter x1 and y1 for " << name << "(top left point) : ";
        cin >> x1 >> y1;
        cout << "Enter x2 and y2 for " << name << "(top right point) : ";
        cin >> x2 >> y2;
        cout << "Enter x3 and y3 for " << name << "(bottom left point) : ";
        cin >> x3 >> y3;
        cout << "Enter x4 and y4 for " << name << "(bottom right point) : ";
        cin >> x4 >> y4;
        if (y1 == y2 && y3 == y4 && y2 != y3) {
            flag = true;
            h = abs(y3 - y2);
            space = (abs(x2 - x1) + abs(x4 - x3)) * h / 2;
            perimeter = abs(x2 - x1) + abs(x4 - x3) + sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)) + sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));
        }
        if (flag == false) {
            cout << "Entered numbers cannot make a trapezius!" << endl;
        }
    }
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Height is : " << h << endl;
        cout << "Space is : " << space << endl;
        cout << "Perimeter is : " << perimeter << endl;
    }
};

int main()
{
    cout << "---\nthis code just can calculate Horizontal ( ofoghi ) shapes..\n---" << endl;
    oval o1;
    pentagon p1;
    trapezius t1;
}

