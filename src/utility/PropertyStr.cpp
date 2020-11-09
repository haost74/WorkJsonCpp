#include "PropertyStr.h"


PropertyStr& PropertyStr::operator= (const string& str)
{
    val_str = str;
    return *this;
}

PropertyStr::operator const string&() const{
    return val_str;
}



