#include <iostream>
using namespace std;
    int main() {
    int a,b,temp;
        cout << "Enter any two Numbers = ";
        cin >>a>>b;
        cout << "Before swapping a = " << a << " , b = " << b <<std::endl;
            temp=a;
            a=b;
            b=temp;
        cout << "After swapping a = " << a << " , b = " << b;
     return 0;
}
