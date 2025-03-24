#include <iostream>
#include <string>
using namespace std;

int main(){
    string FullName;
    cout<<"Enter Full Name: "<<endl;
    getline(cin,FullName);

    cout<< "Hey " <<FullName <<", How are you?";

    return 0;
}