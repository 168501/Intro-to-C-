#include<iostream>
using namespace std;

int main() 
{
    //Arithmetic/Mathematical Operators
    int num1=50,num2=10;
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl; //Addition
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl; //Subtraction
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl; //Multiplication
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl; //Division
    cout<<num1<<"%"<<num2<<"="<<num1%num2<<endl; //Modulus
    cout<<num1<<"+="<<num2<<"="<<(num1+=num2) <<endl; //Add then assign
    cout<<num1<<"-="<<num2<<"="<<(num1-=num2) <<endl; //Subtract then assign
    cout<<num1<<"="<<num2<<"="<<(num1=num2) <<endl; //Multiply then assign
    cout<<num1<<"/="<<num2<<"="<<(num1/=num2) <<endl; //Divide then assign
    cout<<num1<<"++"<<num2<<"="<<(num1++) <<endl; //Increment by 1
    cout<<num1<<"--"<<num2<<"="<<(num1--) <<endl; //Decrement by 1
    cout<<num1<<"++"<<num2<<"="<<(++num1) <<endl; //Increment
    cout<<num1<<"--"<<num2<<"="<<(--num1) <<endl; //Decremtent
    //comparison operators
    cout <<num1<< " > " <<num2<<"="<< ( num1>num2 ) << endl; //greater than
    cout <<num1<< " > " <<num2<<">="<< ( num1>=num2 ) << endl; //greater or equal to
    cout <<num1<< " > " <<num2<<"<"<< ( num1<num2 ) << endl; //less than
    cout <<num1<< " > " <<num2<<"!="<< ( num1!=num2 ) << endl; //not equal to
    //BOOLEAN OPERATORS
    cout <<"true and true"<<" = "<<(true&&true)<<endl; //&& is and
    cout<<"true and false"<< "=" <<(true&&false)<<endl;
    cout<<"true or true"<< "=" << (true||true) endl; // || is or
     cout<<"true not false"<< "=" << (true|.true) endl; // |.  is not

    return 0;
}