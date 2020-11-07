#ifndef VALUE_CPP
#define VALUE_CPP

#include <string>
using std::string;

class Value
{
    public:
      string type;
      string param_s;      
      long double param_d;
      Value& operator= (const Value& vl);
      Value operator+ (const Value& vl);
      Value ();
};


#endif

