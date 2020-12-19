#include <iostream> 
#include <string>
using namespace std;

int main(){
    float num1 = 0;
    int length_name = 0;
    string name = "";
    string new_name = "";

    cout << "Name please ";
    getline(cin,name);
    cout << "Hello " << name << "\n";

    length_name = name.length();

    for(int i=length_name;i>=0;i--){
        new_name = new_name + name[i];
    }
    cout << new_name << "\n";
}