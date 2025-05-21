#include <iostream>
#include "declareFunction.h"

int goTo(int destination);

int main(){

    // user info

    std::string username { };
    std::string password { };
    std::string retypePassword { };

    std::cout << '\n' << "Enter your username: ";
    std::cin >> username;
    std::cout << "\nEnter your password: ";
    std::cin >> password;
    std::cout << "\nRe-type your password: ";
    std::cin >> retypePassword;

    while(retypePassword != password){

        if(retypePassword == password){
            std::cout << "Password Successfully updated.\n\n";
        }

        std::cout << "Password is incorrect, try again.\n\n";
        std::cout << "Enter your password again: ";
        std::cin >> retypePassword;
    }

    std::cout << "MAIN MENU\n\n";
    std::cout << "Welcome, " << username << ".\n\n";
    std::cout << "What are you going to do?\n\n";

    std::cout << "1. Guest information\n";
    std::cout << "2. Guest requests\n";
    std::cout << "3. Guest approval\n";

    int userDestination { };
    std::cin >> userDestination;

    goTo(userDestination);

}