#include <iostream>
using namespace std;

inline int sq(int x){
    int c;
    c = x * x;
    return c;
}

inline int cube(int x){
    int d;
    d = x * x * x;
    return d;
}
int main() {
    int m , o , p;
    cout << "Enter any Number:" << endl;
    cin >> m;
    o = sq(m);
    cout << "The Square is : " << o << endl;
    p = cube(m);
    cout << "The Cube is : " << p << endl;
}
