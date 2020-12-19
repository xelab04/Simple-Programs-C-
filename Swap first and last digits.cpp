#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num = 0;
    cout << "Input a number ";
    cin >> num;

    int num_length = 0;
    num_length = floor(log10(num)) + 1;

    int pow_10 = pow(10,num_length-1);

    int last_digit = 0;
    last_digit = num / pow_10;

    int first_digit = 0;
    first_digit = (num % 10);

    int new_num = 0;
    new_num = num - (last_digit * pow_10);
    new_num = new_num + (first_digit * pow_10);

    new_num = new_num - first_digit + last_digit;

    cout << "New Number is: " << new_num << "\n";
}