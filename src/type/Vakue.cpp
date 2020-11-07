#include "Value.h"

// Value  Value::operator== (const Value& vl)
// {

// }

Value::Value()
{
   this->type= "";
   this->param_d = 0;
   this->param_s  = "";
}

Value& Value::operator=(const Value & val)
{
   this->type = val.type;
   this->param_s = val.param_s;
    this->param_d = val.param_d;
   return *this;
}

Value Value::operator+(const Value & val)
{
   Value res;
   res.param_d = this->param_d + val.param_d;
   res.param_s = this->param_s + val.param_s;
   return res;
}