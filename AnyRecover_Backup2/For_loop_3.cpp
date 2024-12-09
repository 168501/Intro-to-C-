#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers between 12 and 50 are: " << endl;
    
    for (int i = 12; i <= 50; i += 2) { 
        cout << i << " ";
    }
    
    cout << endl;
    return 0;
}
