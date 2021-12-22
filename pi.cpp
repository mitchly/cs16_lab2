#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int terms = 1;
    double pivalue = 0;
    while (terms > 0){
        int terms = 1;
        double pivalue = 0;
        cout << "Enter the number of terms to approximate (or zero to quit):" << endl;
        cin >> terms;
        if (terms == 0){
            return 0;
        }
        for (int i = 1; i <= terms; i++){
            if (i % 2 == 0){
                pivalue = pivalue + (1.0/(i * 2.0 + 1));
            }
            else{
                pivalue = pivalue - (1.0/(i * 2.0 + 1));
            }
        }
        pivalue = (pivalue + 1) * 4;
        cout << "The approximation for Leibniz's Formula is " << pivalue << " using " << terms << " terms." << endl;
    }
}
