#include <iostream>
#include <string>

using namespace std;

int main(){

    int age;
    int graduated;
    int elegAge;

    cout << "You can enter the club if you are 18 or older, and graduated from highschool" << endl;
    
    cout << "Enter age: ";
    cin >> age;
    
    cout << "Enter if you are elegible or not (0/No, 1/Yes)";
    cin >> graduated;

    if (age >= 18 && graduated  == 1){

        cout << "You are old enough to be admitted and have graduated. Welcome to the club!" << endl;

    }else{

        elegAge = 18 - age;

        cout << "You are not old enough or you have not graduated. Try again in "<< elegAge <<" years." << endl;

    }
}