#include <iostream>

/*
Problems in this program:
+User can input a number which is greater than max int size, and program will break.
+User can input charecters which are not numbers and program will determine them equal.
*/

int max();
int min();
void userInterface();
void userSum();

int input1 = 0;
int input2 = 0;

int compare;

int main(){
    userInterface();
    return 0;
}

void userInterface(){
    if(input1 == 0 && input2 == 0)
    std::cout << "Give the program two numbers which are not 0" << std::endl;
    std::cin >> input1 >> input2;
    if(input1 != input2){
        userSum();
    } else
    std::cout << "These two numbers are equal" << std::endl;
}

void userSum(){
    std::string userCommand;
    int sumMax;
    int sumMin;

    while(true){
    std::cout << "Would you like to know what number is [B]igger or [S]maller?" << std::endl;
    std::cin >> userCommand;

    if(userCommand == "b" || userCommand == "B"){
        sumMax = max();
        std::cout << "The bigger number is " << sumMax << std::endl;
        break;
    }

    else if(userCommand == "s" || userCommand == "S"){
        sumMin = min();
        std::cout << "The smaller number is " << sumMin << std::endl;
        break;
        }
    else
    std::cout << "Please enter B for Bigger or S for smaller" << std::endl;
    }
}

int max(){
    if(input1 > input2)
        return input1;
    else
        return input2;
}

int min(){
    if(input1 < input2)
        return input1;
    else
        return input2;
}