#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int num = 0;
    cout << "Number to be input: ";
    cin >> num;

    if (num == 0){
        cout << "0000" << "\n";
        return 0;
    }
    else if(num < 0){
        cout << "Invalid negative number" << "\n";
        return 0;
    }

    int len = ceil(log10(num) / log10(2));

    string bin = "";

    for(int i=len-1;i>-1;i--){
        
        if (num - pow(2,i) >= 0){
            num = num - pow(2,i);
            bin = bin + "1";
        }
        else{
            bin = bin + "0";
        }
    }

    cout << bin << "\n";
}
