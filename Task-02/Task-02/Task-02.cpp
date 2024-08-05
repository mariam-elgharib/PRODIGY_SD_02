#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "Choose The Range of Numbers : " << endl;
    cout << "1.  1-100" << endl;
    cout << "2.  1-1,000" << endl;
    cout << "3.  1-10,000" << endl;

    cin >> n;
    int number;

    while (n != 1 && n != 2 && n != 3) {
        cout << "Enter a valid option." << endl;
        cin >> n;
    }
    if (n == 1) {
        number = rand() % 100 + 1;
        cout << "Guess the number (from 1 to 100) : " << endl;
    }
    else if (n == 2) {
        number = rand() % 1000 + 1;
        cout << "Guess the number (from 1 to 1000) : " << endl;

    }
    else if (n == 3) {
        number = rand() % 10000 + 1;
        cout << "Guess the number (from 1 to 10000) : " << endl;
    }
    int guess;
    int attempts = 0;


    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < number) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Congratulations! Your guess is correct!" << endl;
            cout << "Number of Attempts :  " << attempts << endl;
        }
    } while (guess != number);
    

    return 0;
}
