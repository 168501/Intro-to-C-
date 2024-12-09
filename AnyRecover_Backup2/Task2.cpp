#include <iostream>
using namespace std;

int main(){
    int Bprice,Sprice,profit;
    cout<<"Enter Bprice:"<<endl;
    cin>>Bprice;

    cout<<"Enter Sprice:"<<endl;
    cin>>Sprice;

    profit = Sprice - Bprice;
    cout << "Profit is: " << profit << endl;
    return 0;
}
