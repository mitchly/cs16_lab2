#include <iostream>
using namespace std;

int main(){
    int integer1, integer2, integer3;
    cin >> integer1 >> integer2 >> integer3;
    if ((integer1 > integer2) && (integer1 > integer3)){
        cout << integer1 << " ";
        if (integer2 > integer3){
            cout << integer2 << " " << integer3;
        }
        else if (integer3 > integer2){
            cout << integer3 << " " << integer2;
        }
        else {
            cout << integer2 << " " << integer3;
        }
    }
    else if ((integer2 > integer1) && (integer2 > integer3)){
        cout << integer2 << " ";
        if (integer1 > integer3){
            cout << integer1 << " " << integer3;
        }
        else if (integer3 > integer1){
            cout << integer3 << " " << integer1;
        }
        else{
            cout << integer1 << " " << integer3;
        }
    }
    else if ((integer3 > integer1) && (integer3 > integer2)){
        cout << integer3 << " ";
        if (integer1 > integer2){
            cout << integer1 << " " << integer2;
        }
        else{
            cout << integer2 << " " << integer1;
        }
    }
    else if ((integer1 == integer2) && (integer2 == integer3)){
        cout << integer1 << " " << integer1 << " " << integer1;
    }
    else{
        return -1;
    }
        return 0;
    }