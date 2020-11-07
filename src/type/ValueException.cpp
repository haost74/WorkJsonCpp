#include "ValueException.h"


ValueException::ValueException(string error)
                               :m_error(error)
{

}

const char* ValueException::what()
const noexcept {return m_error.c_str();}
