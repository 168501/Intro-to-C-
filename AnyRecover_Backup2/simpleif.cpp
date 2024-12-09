#include <iostream>
using namespace std;
int main(){
    double mark;
    cout<<"Please enter mark;"<<endl;
    cin>>mark;

    if(mark>=50){
        cout<<"Passed!"<<endl;
    }
    else{
        cout<<"Failed!"<<endl;
    }
    return 0;
}