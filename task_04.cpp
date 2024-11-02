#include <iostream>
using namespace std;

int main() {
    int number = 3;
    int days = 7;

    for (int i = 1; i <= number; i++) {
        cout << "Week " << i << ":" << endl;
        
        for (int j = 1; j <= days; j++) {
            cout << "\tDay " << j << endl;    
        }
        cout << endl;
    }

    return 0;
}
