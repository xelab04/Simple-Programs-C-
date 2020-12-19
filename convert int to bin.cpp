#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string binary(int asc){
    int list[2] = {0};
    int temp_no = asc;

    int order_2 = 0;
    int remainder = 0;

    while(temp_no > 1){
        temp_no = temp_no / 2;
        order_2 += 1;
    }

    if(temp_no < 1){
        remainder = 1;
        order_2 = order_2 - 1;
    }
    else{remainder = 0;}

    string binary = "00000000";

    while (order_2 > 0){
        if (order_2 >= 7){binary[0]='1';    order_2 -= 7;}
        else if (order_2 >= 6){binary[1]='1';    order_2 -= 6;}
        else if (order_2 >= 5){binary[2]='1';    order_2 -= 5;}
        else if (order_2 >= 4){binary[3]='1';    order_2 -= 4;}
        else if (order_2 >= 3){binary[4]='1';    order_2 -= 3;}
        else if (order_2 >= 2){binary[5]='1';    order_2 -= 2;}
        else if (order_2 >= 1){binary[6]='1';    order_2 -= 1;}
    }
    if (remainder == 1){
        binary[7]='1';
    }
    else {binary[7]='0';}

    return binary;
    //if list[1]<1 then 2^0 = 1 and list[0] decreased by 1
}