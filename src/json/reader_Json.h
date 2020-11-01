#include <iostream>
#include <fstream>
#include <vector>
#include <jsoncpp/json/json.h>

using std::vector;
using std::string;

template<class T>
    class  Reader
    {
    private:
        string pathJeson;
        vector<T> res;
        Json::Value obj;
    public:
        void GetNamesMember(std::vector<string> nameParameters);
        Reader(string path);
        vector<T> ReaderToken(string nameArr);
        std::vector<Json::Value> booksByPeter(const Json::Value& root, string nameArr);
        
    };