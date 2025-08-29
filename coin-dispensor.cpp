// Assignment 1
// The purpose of the assignment is to make a coin dispenser.
// Yunus Karatas
// Last edited on 1.26.2024


#include <iostream>
#include <math.h> // round and fmod function
#include <cstdlib> // exit function
using namespace std;

int main(){
    // Setting the variables for the code.
    double money, remains;
    const double quarters = 25, dimes = 10, nickel = 5, penny = 1;

    cout << "Coin dispenser\n";

    // Gets the amount of money input
    cout << "How much money do you have : ";
    cin >> money;

    // Checks if the money put in is less than or equal to 100.
    if(money <= 100){

    // if negative amount of money is input, stops the program.
        if(money < 0){
            exit(1);
        }

        // Prints the value of the inout money, and multiplies money by 100 for the future.
        cout << "value: " << money << "\n";
        double INmoney = money * 100;

        // Gets the number of quarters by dividing money by 25
        int numquarters = INmoney / quarters;
        cout << "Quarter: " << numquarters << "\n";

        // doing money % 25 with the function fmod for the remainder which will be passed to the next line of code.
        remains = fmod(INmoney,quarters);

        // Gets the number of dimes by dividing remains by 10
        int numdimes = remains / dimes;
        cout << "Dime: " << numdimes << "\n";

        //doing remains % 10 with the function fmod for the remainder which will be passed to the next line of code.
        remains = fmod(remains,dimes);

        //Gets the number of nickels by dividing remains by 5
        int numnickel = remains / nickel;
        cout << "Nickel: " << numnickel << "\n";

        //doing remains % 5 with the function fmod for the remainder which will be passed to the next line of code.
        remains = fmod(remains, nickel);

        // Gets the number of pennies by dividing money by 1, use of function round to fully fix the innacuracy of money * 100.
        int numpenny = round(remains / penny);
        cout << "Penny: " << numpenny << "\n";

        // doing remains % 1 with the function fmod for the remainder which will be passed to the next line of code.
        remains = fmod(remains, penny);

    }
    
}

// Used as tests
// 2.01
// 2
// 100
// 0.01
// 0.54
// -1
// 3.68