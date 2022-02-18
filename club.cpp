#include <iostream>
#include <string>

using namespace std;

int main(){

    int age;
    int graduated;

    cout << "You can enter the club if you are older than 18 and graduated from highschool" << endl;
    
    age = 20;
    graduated = 1;

    if (age > 18 && graduated  == 1){

        cout << "You are old enough to be admitted and have graduated. Welcome to the club!" << endl;

    }else{
        cout << "You are not old enough or you have not graduated. Try again another year." << endl;
    }
}