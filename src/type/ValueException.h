#ifndef ValueException_cpp
#define ValueException_cpp

#include <iostream>
#include <string>
#include <exception> 


using std::string;

class ValueException: public std::exception
{
    private:
       string m_error;
    public:
      ValueException(string error);
      const char* what() const noexcept;
        
};

#endif