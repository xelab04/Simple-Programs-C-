#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num;
    cout << "Input a number --> ";
    cin >> num;
    int new_num = 1;

    for(int i=num; i>0; i--){
        new_num = new_num * i;
    }
    cout << new_num << "\n";
}