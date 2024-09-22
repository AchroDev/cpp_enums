#include <iostream>

class Log
{
    // separating the variables and methods helps keep the code clean in a class
public:
    const int LogLevelError = 0;   // first level
    const int LogLevelWarning = 1; // second level
    const int LogLevelInfo = 2;    // third level

    // private member variable to maintain the log level only accessible to the class
private:
    int m_LogLevel = LogLevelInfo; // declaring the int for the log level is default to printing information

    // notice that public is written here again, separating the public methods from the public variables
public:
    void SetLevel(int level)
    {
        m_LogLevel = level; // sets the member variable with the 'level' int parameter
    }

    void Warn(const char *message)
    {
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl; // defining how the warning message should be displayed
    }

    void Error(const char *message)
    {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl; // defining how the error message should be displayed
    }

    void Info(const char *message)
    {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl; // defining how the information message should be displayed
    }
};

int main()
{
    Log log;                             // Initiating the log
    log.SetLevel(log.LogLevelError);     // Setting a warning level for the log messages
    log.Warn("A Warning!!");             // Example/Test warning message
    log.Error("An Error!!!");            // Example error message
    log.Info("Just some information.."); // Example info message
    std::cin.get();                      // Waits for the return key before exiting
}
