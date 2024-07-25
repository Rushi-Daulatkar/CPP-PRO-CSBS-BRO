#include <iostream>
using namespace std;

inline int sub(int x,int y){
    int c;
    c = x - y;
    return c;
}

inline int divi(int x,int y){
    int d;
    d = x / y;
    return d;
}
int main() {
    int m , n , o , p;
    cout << "Enter any Two Numbers :" << endl;
    cin >> m >> n;
    o = sub(m,n);
    cout << "The Substraction is : " << o << endl;
    p = divi(m,n);
    cout << "The Division is : " << p << endl;
}
