#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int x_vector[12] = {0};
    int y_vector[12] = {0};

    int x_points[4] = {0};
    int y_points[4] = {0};

    //INPUT COORDINATES
    for(int i=0;i<4;i++){
        cout << "X" << i << " coordinate value >>> ";
        cin >> x_points[i];

        cout << "Y" << i << " coordinate value >>> ";
        cin >> y_points[i];
        cout << "\n";
    }

    //CALCULATE VECTORS
    int count = 0;
    for(int k=0;k<4;k++){
        int x_v = 0, y_v = 0;

        int x_pt = x_points[k];
        int y_pt = y_points[k];

    //STARTING WITH POINTS 1 THEN 2 THEN 3
        for(int i=0;i<4;i++){
            if(i != k){
                x_v = x_pt - x_points[i];
                y_v = y_pt - y_points[i];

                x_vector[count] = x_v;
                y_vector[count] = y_v;

                count ++;
            }
        }
    }

    bool parallelogram = false;
    for(int k=0;k<6;k++){
        int x_val = x_vector[k];
        int y_val = y_vector[k];

        for(int i=k+1;i<6;i++){
            if((x_val == x_vector[i]) && (y_val == y_vector[i])){
                parallelogram = true;
                break;
            }
        }
    }
    if(parallelogram == true){
        cout << "Parallelogram";
    }
    else{
        cout << "Not Parallelogram";
    }
    cout << "\n";
}