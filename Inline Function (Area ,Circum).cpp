#include <iostream>
using namespace std;

inline int area(int x){
    int c;
    float pi = 3.142;
    c = pi * (x * x);
    return c;
}

inline int circum(int x){
    int d;
    float pi = 3.142;
    d = 2 * pi * x;
    return d;
}
int main() {
    int m , o , p;
    cout << "Enter any Number:" << endl;
    cin >> m;
    o = area(m);
    cout << "The Area of Circle  is : " << o << " Sq.fts" << endl;
    p = circum(m);
    cout << "The Circumference of Circle is : " << p << " Sq.fts" << endl;
}
