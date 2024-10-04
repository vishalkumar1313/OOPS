

#include <exception>
#include <string>

class CustomException 
{
    std::string _msg;

public:
    CustomException() = delete;
    explicit CustomException(std::string msg) : _msg(msg) {}
    std::string what() { return _msg; }
};


