int goTo(int destination){

    if(destination == 1){

        std::cout << "\n\nGUEST INFORMATION\n\n";

        
    } else if(destination == 2){
        
        std::cout << "\n\nGUEST REQUESTS\n\n";

    } else if(destination == 3){
        
        std::cout << "\n\nGUEST APPROVAL\n\n";

    } else{
        
        std::cout << "\n\nWrong menu number entered, please choose a number from 1 to 3\n\n";

    }

    return 0;
}