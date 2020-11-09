#include "PropertyNum.h"

PropertyNum& PropertyNum::operator=(const long double & num)
{
 val_num = num;
 return *this;   
}

PropertyNum::operator const long double &()const
{
    return val_num;
}