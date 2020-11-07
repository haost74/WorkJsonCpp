template<typename T>
class Property
{
private:
    T& _value;

public:
    Property(T& value) : _value(value)
    {
    }   // eo ctor

    Property<T>& operator = (const T& val)
    {
        _value = val;
        return *this;
    };  // eo operator =

    operator const T&() const
    {
        return _value;
    };  // eo operator ()
};

/*

class Test
{
private:
    std::string _label;
    int         _width;

public:
    Test() : Label(_label)
           , Width(_width)
    {
    };

    Property<std::string> Label;
    Property<int>         Width;
};

Test a;
a.Label = "blah";
a.Width = 5;

std::string label = a.Label;
int width = a.Width;

*/