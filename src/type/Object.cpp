#include <string>
using std::string;

template<class T>
class Object
{
        
    public:
    T obj;
    T *s_obj;
    inline T& operator= (const T i);
    T operator+ ( const T& i);
    Object();
};


template<class T>
inline T& Object<T>::operator=(const T i){    
    obj = i;
    s_obj = &obj;
    return obj;    
}

template<class T> 
T Object<T>::operator+(const T& i)
{
    Object res;
    res = this->obj + i.obj;
    return res;

}



template<class T>
Object<T>::Object(){}