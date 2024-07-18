// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num1 , num2 , num3;
    cout << "Enter any 3 Numbers : " << endl;
    cin >> num1 >> num2 >> num3;
    if(num1 > num2 || num1 > num3){
        cout << num1 << " is the Largest Number" << endl;
    }
    else{
        if(num2 > num3){
            cout << num2 << " is the Largest Number" << endl;
        }
        else{
            cout << num3 << " is the Largest Number" << endl;
        }
    }
    return 0;
}
