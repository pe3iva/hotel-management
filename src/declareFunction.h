int goTo(int destination){

    switch(destination){
        case 1: 
            std::cout << "\n\nGUEST INFORMATION\n\n";
        break;

        case 2:
            std::cout << "\n\nGUEST REQUESTS\n\n";
        break;

        case 3:
            std::cout << "\n\nGUEST APPROVAL\n\n";
        break;

        default:
            std::cout << "\n\nWrong menu number entered, please choose a number from 1 to 3\n\n";

    }

    return 0;
}