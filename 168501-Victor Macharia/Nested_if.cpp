#include <iostream>
#include <string>
using namespace std;

int main() {
    int age,yob;
    string interest;
    cout<<"....CLUB ADMISSION PROGRAM....";
    cout << "Please enter the child's yob: ";
    cin>>yob;

    
    age = 2025-yob;

    // pick the interest
    if(age >=4 && age<=10){
        //pick an interest
        cout<< "Enter the child's interest i.e soccer: "<<endl;
        cin>>interest;
        //check interest and assign the group
        if(interest=="Soccer"){
            cout<<"Assign to Soccer"<<endl;
        }else if(interest=="art"){
            cout<<"Assign to art"<<endl;
        }else{
            cout<<"Assign to other play group"<<endl;
        }
    }else{
        cout<<"Invalid age!, You Can't be Assiged!,NEXT!";
    }
    return 0;
}