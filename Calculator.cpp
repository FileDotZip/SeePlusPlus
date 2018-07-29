#include <iostream>

void operatorDecision();
void Cal(std::string);

class Logger{
    int LogLevel = 0; //Default Log Level = 0 Shows everything

    void PrintLogLevel(){
        if(LogLevel == 0){
            std::cout << "Log Level : " << LogLevel << " = INFO+" << std::endl;
        }
        if(LogLevel == 1){
            std::cout << "Log Level : " << LogLevel << " = WARNING+" << std::endl;
        }
        if(LogLevel == 2){
            std::cout << "Log Level : " << LogLevel << " = ERROR+" << std::endl;
        }
    }

public:
    void setLogLevel(int UserSetLevel){
        LogLevel = UserSetLevel;
        PrintLogLevel();
    }

    //INFO : LOG LEVEL 0
    void INFO(const char* message){
        if(LogLevel <= 0){
            std::cout << "INFO      : " << message << std::endl;
        }
    }

    //WARNING : LOG LEVEL 1
    void WARN(const char* message){
        if(LogLevel <= 1){
            std::cout << "WARNING   : " << message << std::endl;
        }
    }

    //ERROR : LOG LEVEL 2
    void ERR(const char* message){
        if(LogLevel <= 2){
            std::cout << "ERROR     : " << message << std::endl;
        }
    }
};

    Logger log;

int main(){

    
    log.setLogLevel(0);
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
        log.INFO("ADDITION Was Selected");
        std::cout << "Addition was selected" << std::endl;
        Cal(input);
        break;
    }

    if(input == "-"){
        log.INFO("SUBTRACTION Was Selected");
        std::cout << "Subtraction was selected" << std::endl;
        Cal(input);
        break;
    }

    if(input == "x"){
        log.INFO("MULTIPLICATION Was Selected");
        std::cout << "Multiplication was selected" << std::endl;
        Cal(input);
        break;
    }

    if(input == "/"){
        log.INFO("DIVISION Was Selected");
        std::cout << "Division was selected" << std::endl;
        Cal(input);
        break;
    }
    else{
        log.ERR("You must input charecters \"+(plus) -(minus) x(multiply) /(divide)\" ");
        std::cout << "try inputting only + - x /" << std::endl;
        }
    }
}

void Cal(std::string op){
    int x;
    int y;
    
    int z;

    std::cout << "Input two numbers you would like to operate with" << std::endl;
    std::cin >> x >> y;
    log.INFO("CALCULATING");

    if(op == "+")
        z = x + y;

    if(op == "-")
        z = x - y;

    if(op == "x")
        z = x * y;
        
    if(op == "/")
        z = x / y;
    
    log.INFO("PRINTING");
    std::cout << "Your answer is : " << z << std::endl;
} 