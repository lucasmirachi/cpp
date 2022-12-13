#include <iostream>

using namespace std;

int value;
int N50, N10, N1 = 0;

int main() {
    cout << "Please enter a value you want to calculate the change: $";
    cin >> value;

    if (value > 0) { 
            for (value; value >0; ){
            
            if ((value - 50) > 0) {
                value = value - 50;
                N50 += 1;
            }
            else if ((value - 10) > 0){
                value = value - 10;
                N10 += 1;
            }
            else if ((value - 1) > 0){
                value = value - 1;
                N1 += 1;
            }
        cout << "It will be necessary:\n " << N50 << " $50 bills, " <<
        N10 << " 10$ bills and " << endl << N1 << "$1 bills." << endl;
            }
    }
    else {
        cout << "Please enter a value higher than zero!\n";
    }

    return 0;
}