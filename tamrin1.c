#include<stdio.h>
#include<math.h>

typedef struct
{
    double radius, space, perimeter;
    char name[20];

}circle;

typedef struct
{
    double width, length, space, perimeter;
    char name[20];

}rectangle;

typedef struct
{
    double a, b, c, space, perimeter;
    char name[20];

}triangle;

void largerThanZero(double *x)
{
    while(*x <= 0){
        printf("Entered number is not larger than 0.\nTry again : ");
        scanf("%lf", x);
    }
}

circle getC()
{
    circle c;
    printf("Enter name of circle : ");
    scanf("%s", &c.name);
    printf("Enter Radius of %s(larger than 0) : ");
    scanf("%lf", &c.radius);
    largerThanZero(&c.radius);
    c.space = pow(c.radius, 2);
    c.perimeter = c.radius * 2;
    return c;
}

void printC(circle c)
{
    printf("Name : %s\n", c.name);
    printf("Radius is : %lf\n", c.radius);
    printf("Space is : %lfpi\n", c.space);
    printf("Perimeter is : %lfpi\n", c.perimeter);
}

rectangle getR()
{
    rectangle r;
    printf("Enter name of rectangle : ");
    scanf("%s", &r.name);
    printf("Enter Width of %s(larger than 0) : ", r.name);
    scanf("%lf", &r.width);
    largerThanZero(&r.width);
    printf("Enter Length of %s(larger than 0) : ", r.name);
    scanf("%lf", &r.length);
    largerThanZero(&r.length);
    r.space = r.length * r.width;
    r.perimeter = (r.length + r.width) * 2;
    return r;
}

void printR(rectangle r)
{
    printf("Name : %s\n", r.name);
    printf("Width is : %lf\n", r.width);
    printf("Length is : %lf\n", r.length);
    printf("Space is : %lf\n", r.space);
    printf("Perimeter is : %lf\n", r.perimeter);
}

triangle getT()
{
    triangle t;
    int flag = 0;
    while(flag == 0){
        printf("Enter name of triangle : ");
        scanf("%s", &t.name);
        printf("Enter a for %s(larger than 0) : ", t.name);
        scanf("%lf", &t.a);
        largerThanZero(&t.a);
        printf("Enter b for %s(larger than 0) : ", t.name);
        scanf("%lf", &t.b);
        largerThanZero(&t.b);
        printf("Enter c for %s(larger than 0) : ", t.name);
        scanf("%lf", &t.c);
        largerThanZero(&t.c);
        double big = 0, small = 0, mid = 0;
        if (t.a > t.b) { big = t.a; small = t.b; }
        else { big = t.b; small = t.a; }
        if (t.c > big) { mid = big; big = t.c; }
        else {
            if (t.c < small) { mid = small; small = t.c; }
            else mid = t.c;
        }
        if (small + mid > big) {
            flag = 1;
            t.perimeter = t.a + t.b + t.c;
            double s = t.perimeter / 2;
            t.space = sqrt(s * (s-t.a) * (s-t.b) * (s-t.c));
        }
        else printf("Entered numbers cannot make a triangle!\n");
    }
    return t;
}

void printT(triangle t)
{
    printf("Name : %s\n", t.name);
    printf("A is : %lf\n", t.a);
    printf("B is : %lf\n", t.b);
    printf("C is : %lf\n", t.c);
    printf("Space is : %lf\n", t.space);
    printf("Perimeter is : %lf\n", t.perimeter);
}

int main()
{
    circle c1 = getC();
    printC(c1);
    rectangle r1 = getR();
    printR(r1);
    triangle t1 = getT();
    printT(t1);
}
