#include <iostream>

void operatorDecision();
void Cal(std::string);

int main(){
    //choose an operator
    std::cout << "Choose an operator to use: + - x /" << std::endl;
    operatorDecision();
    //Input two numbers

}

void operatorDecision(){
    std::string input = "";
    
    while(true){
    std::cin >> input;

    if(input == "+"){
        std::cout << "Addition was selected" << std::endl;
        Cal(input);
        break;
    }

    if(input == "-"){
        std::cout << "Subtraction was selected" << std::endl;
        Cal(input);
        break;
    }

    if(input == "x"){
        std::cout << "Multiplication was selected" << std::endl;
        Cal(input);
        break;
    }

    if(input == "/"){
        std::cout << "Division was selected" << std::endl;
        Cal(input);
        break;
    }
    else
    std::cout << "try inputting only + - x /" << std::endl;
    }
}

void Cal(std::string op){
    int x;
    int y;
    
    int z;

    std::cout << "Input two numbers you would like to operate with" << std::endl;
    std::cin >> x >> y;

    if(op == "+")
        z = x + y;

    if(op == "-")
        z = x - y;

    if(op == "x")
        z = x * y;
        
    if(op == "/")
        z = x / y;
    
    std::cout << "Your answer is : " << z << std::endl;
} 