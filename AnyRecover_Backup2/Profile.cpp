#include <iostream>
using namespace std;

int main(){
    string FirstName,LastName,FullName,FavoriteMeal,FavoriteMovie;

    cout << "What's your First Name: ";
    getline(cin, FirstName);

    cout << "What's your Last Name: ";
    getline(cin, LastName);

 
    FullName = FirstName + " " + LastName;
    cout << "What's your Favorite Meal: ";
    getline(cin, FavoriteMeal);

    cout << "What's your Favorite Movie: ";
    getline(cin, FavoriteMovie);

    cout << "Here's your Profile:" << endl;
    cout << "Your First Name is: " << FirstName << endl;
    cout << "Your Last Name is: " << LastName << endl;
    cout << "Your Full Name is: " << FullName << endl;
    cout << "Your Favourite Meal is: " << FavoriteMeal << endl;
    cout << "Your Favourite Movie is: " << FavoriteMovie << endl;
}