#include <iostream>
using namespace std;

int main() {
    int row = 5;
    int seats = 10;

    for (int i = 1; i <= row; i++) {
        cout << "Row Number:- " << i<<"\t";
        cout<<endl << "Seat: " <<endl<< "\t" ;
        for (int j = 1; j <= seats; j++) {
            cout << j << ",";
        }
        cout << endl<<endl;
    }

    return 0;
}
