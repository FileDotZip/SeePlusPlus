#include <iostream>

class Logger{
    public:
    enum Level{
        LevelInfo = 0, LevelWarning, LevelError
    };

    private:
    int LogLevel = LevelInfo;

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
        if(LogLevel <= LevelInfo){
            std::cout << "INFO      : " << message << std::endl;
        }
    }

    //WARNING : LOG LEVEL 1
    void WARN(const char* message){
        if(LogLevel <= LevelWarning){
            std::cout << "WARNING   : " << message << std::endl;
        }
    }

    //ERROR : LOG LEVEL 2
    void ERR(const char* message){
        if(LogLevel <= LevelError){
            std::cout << "ERROR     : " << message << std::endl;
        }
    }
};

int main(){
    Logger Log;
    Log.setLogLevel(Logger::LevelWarning);
    Log.INFO("TEST");
    Log.WARN("Warning Test");
    Log.ERR("Error Test");
}