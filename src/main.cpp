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

    if (password == retypePassword){
        std::cout << "Password successfully updated.";
    } else{
        std::cout << "Re-typed password is incorrect, try again.";
    }
    
    // std::cout << "Welcome, " << username << ".";

}