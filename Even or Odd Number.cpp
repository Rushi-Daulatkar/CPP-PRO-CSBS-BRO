// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num;
    cout << "Enter any Number : " << endl;
    cin >> num;
    
    if(num % 2 == 0){
        cout << num << " is a Even Number";
    }
    else{
        cout << num << " is a odd Number";
    }
    return 0;
}
