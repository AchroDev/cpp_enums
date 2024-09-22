#include <iostream>

class Log
{
    // separating the variables and methods helps keep the code clean in a class
public:
    // using an enum here instead of using the integers
    enum Level
    {
        // The '=0' is not necessary, helps with readability
        Error = 0,
        Warning,
        Info
    };

    // private member variable to maintain the log level only accessible to the class
private:
    Level m_LogLevel = Info; // Now as the type 'Level' the value is require to be one of the enum values

    // notice that public is written here again, separating the public methods from the public variables
public:
    void SetLevel(Level level)
    {
        m_LogLevel = level; // sets the member variable with the 'level' int parameter
    }

    void Warn(const char *message)
    {
        if (m_LogLevel >= Warning)
            std::cout << "[WARNING]: " << message << std::endl; // defining how the warning message should be displayed
    }

    void Error(const char *message)
    {
        if (m_LogLevel >= Error)
            std::cout << "[ERROR]: " << message << std::endl; // defining how the error message should be displayed
    }

    void Info(const char *message)
    {
        if (m_LogLevel >= Info)
            std::cout << "[INFO]: " << message << std::endl; // defining how the information message should be displayed
    }
};

int main()
{
    Log log;                             // Initiating the log
    log.SetLevel(Log::Error);            // Setting a warning level for the log messages
    log.Warn("A Warning!!");             // Example/Test warning message
    log.Error("An Error!!!");            // Example error message
    log.Info("Just some information.."); // Example info message
    std::cin.get();                      // Waits for the return key before exiting
}
