#ifndef PROPERTY_STR
#define PROPERTY_STR

#include <iostream>
using std::iostream;
#include <string>
using std::string;

class PropertyStr
{
    private:
    string& val_str;
    public:
    operator const string&() const;
    //friend std::iostream& operator<<(std::iostream& os, const PropertyStr& str);

    PropertyStr& operator= (const string& str);
    PropertyStr(string& str):val_str(str){};
};
/*
inline std::iostream& operator<<(std::iostream& os, 
const PropertyStr& str)
{
  os << str.val_str << '\n';
  return os;
}
*/

#endif