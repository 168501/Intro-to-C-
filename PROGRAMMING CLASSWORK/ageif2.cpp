#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Please enter age;"<<endl;
    cin>>age;

    if(age>=4){
        cout<<"Accepted!"<<endl;
    }
    else{
        cout<<"Declined!"<<endl;
    }
    return 0;
}