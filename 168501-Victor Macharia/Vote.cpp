#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Please Enter the age: ";
    cin>>age;

    if(age>=18 && age<=120){
        cout<<"Qualified To Vote!";
    }else{
        cout<<"Not Qualified!";
    }
    return 0;
}