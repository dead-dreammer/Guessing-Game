#include <iostream>

using namespace std;

int main(){
    // generating random numbers

    // initialize random generator
    srand(time(NULL));

    int num = rand() % 1;
    // % 6 means that the number must range from 0 - 6

    cout << "Random number: " << num << endl;

    cout << "*********GUESSING GAME**********" << endl;

    int number = rand() % 100;
    int guess, trys;

    do{
        cout << "Enter a number between 0 - 100: ";
        cin >> guess;

        if (guess > number){
            cout << "Number is too high" << endl;
        }
        else if( guess < number){
            cout << "Number is too low" << endl;
        }
        else{
            cout << "CORRECT";
        }
    }while (guess != number);


    return 0;
}