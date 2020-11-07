#ifndef VALUE_CPP
#define VALUE_CPP

#include <iostream>
#include <string>
#include "ValueException.h"
#include "src/utility/Property.cpp"

using std::string;

class Value
{

   private:
    string _type;
    string _param_s;
    long double _param_d;

    public:
      string type;
      string param_s;      
      long double param_d;
      Value& operator= (const Value& vl);
      Value operator+ (const Value& vl);
      Value operator- (const Value& vl);
      Value ();
      Property<string> Type;
      Property<string> Param_s;
      Property<long double> Param_d;
};


#endif

