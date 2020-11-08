#ifndef PROPERTY_STR
#define PROPERTY_STR

#include <string>
using std::string;

class PropertyStr
{
    private:
    string& val_str;
    public:
    operator const string&() const;
    PropertyStr& operator= (const string& str);
    PropertyStr(string& str):val_str(str){};
};

#endif