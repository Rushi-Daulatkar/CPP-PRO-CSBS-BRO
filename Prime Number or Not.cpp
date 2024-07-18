// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int num , count , i;
    count = 0;
    cout << "Enter any Number  : " << endl;
    cin >> num;
    for(i=1 ; i<=num ; i++){
        if(num % i == 0){
            count ++;
        }
    }
    if(count == 1 || count == 2){
        cout << num << " is a Prime Number" << endl;
    }else{
        cout << num << " is NOT a Prime Number" << endl;
    }
    return 0 ;
}
