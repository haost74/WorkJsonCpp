#ifndef PROPERTY_NUM
#define PROPERTY_NUM

class PropertyNum
{
    private:
    long double& val_num;
    public:
    operator const long double&() const;
    PropertyNum& operator= (const long double& str);
    PropertyNum(long double& num):val_num(num){};
};

#endif