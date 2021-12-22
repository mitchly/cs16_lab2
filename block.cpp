#include <iostream>
using namespace std;

int main(){
    int num1, num2, i, j;
    num1 = 1;
    num2 = 1;
    while ((num1 > 0) || (num2 > 0)){
        cout << "Enter number of rows and columns:" << endl;
        cin >> num1 >> num2;
        if (num1 == 0 && num2 == 0){
            return 0;
        }
        for (i = 0; i < num1; i++){
            for (j = 0; j < num2; j++){
                cout << "X.";
            }
            cout << endl;
        }
        
    }
    return 0;
}