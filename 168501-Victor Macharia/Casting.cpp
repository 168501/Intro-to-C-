#include <iostream>
using namespace std;

int main() {
    char myChar;
    int myInt = 45;
    float myfloat = 4.567;
    int myNum;
    myChar = static_cast<char>(myInt);   // int to char
    myNum = static_cast<int>(myfloat);   // float to integer   
    return 0;
}
