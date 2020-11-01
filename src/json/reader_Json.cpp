#include <iostream>
#include <fstream>
#include <vector>
#include <jsoncpp/json/json.h>
using std::string;
using std::vector;

using std::iostream;

//#include "reader_Json.h"

    template<class T>
    class  Reader
    {
    private:
    
        string pathJeson;
        vector<T> res;
    public:
        Json::Value obj;
        std::vector<string>  GetNamesMember(std::vector<string> nameParameters);
        Reader(string path);
        Reader();
        vector<T> ReaderToken(string nameArr);
        std::vector<Json::Value> booksByPeter(const Json::Value& root, string nameArr);
        
    };

    template<class T>
    std::vector<string>  Reader<T>::GetNamesMember(std::vector<string> nameParameters)
    {
     //if(obj == nullptr) return;
     for (auto const& id : obj.getMemberNames()) {
                nameParameters.push_back(id);
                
                }

      return nameParameters;
     
     }


    template<class T>
    vector<T> Reader<T>::ReaderToken(string nameArr)
    {
    fstream ifs(pathJeson);
    Json::Reader reader;
    //Json::Value obj;
    reader.parse(ifs, obj);

    auto items = booksByPeter(obj, nameArr);
    auto temp = items[0];
    
    for(auto it = items.begin(); it < items.end(); ++it)
    {
        res.push_back((*it));
    }

    return res;
    }
    template<class T>
    std::vector<Json::Value> Reader<T>::booksByPeter(const Json::Value& root, string nameArr)
    {
    std::vector<Json::Value> res;
    
    for(const Json::Value& token : root[nameArr])
    {
        res.push_back(token);
    }
    return res;
    }

    template<class T>
    Reader<T>::Reader(string path)
    {
        pathJeson = path;
    }
    
    template<class T>
    Reader<T>::Reader()
    {

    }
