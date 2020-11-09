#include "Value.h"


Value::Value()
:Type_s(type), Param_s(param_s), Param_d(param_d)
//:Type(_type), Param_s(_param_s), Param_d(_param_d)
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

   //this->Type_s = static_cast<string>(val.Type_s);
    
   return *this;
}

Value Value::operator+(const Value & val)
{
   Value res;
   res.param_d = this->param_d + val.param_d;
   res.param_s = this->param_s + val.param_s;
   return res;
}

Value Value::operator-(const Value & val)
{
   Value res;
   if(this->type == "string")
   {
      std::cout << 1024 << '\n';
      throw ValueException("отсутствует оператор -, соответствующий этим операндам -- типы операндов: std::string - std::stringC/C++(349)");
   }else
   {
      res.param_d = this->param_d - val.param_d;
   }

   return res;
}
