#include <iostream>

int main(){

    // user info

    std::string username { };
    std::string password { };
    std::string retypePassword { };

    std::cout << '\n' << "Enter your username: ";
    std::cin >> username;
    std::cout << "\nEnter your password: ";
    std::cin >> password;
    std::cout << "Re-type your password: ";
    std::cin >> retypePassword;

    while(retypePassword != password){

        if(retypePassword == password){
            std::cout << "Password Successfully updated.\n\n";
        }

        std::cout << "Password is incorrect, try again.\n\n";
        std::cout << "Enter your password again: ";
        std::cin >> retypePassword;
    }

}