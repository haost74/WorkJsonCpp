#ifndef PROPERTY_NUM
#define PROPERTY_NUM

class PropertyNum
{
    private:
    long double& val_str;
    public:
    operator const long double&() const;
    PropertyNum& operator= (const long double& str);
    PropertyNum(long double& str);
};

#endif