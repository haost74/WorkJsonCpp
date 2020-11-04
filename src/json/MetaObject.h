#ifndef SHAPE_CPP
#define SHAPE_CPP
#include "reader_Json.cpp"
#endif


#ifndef MAKEDATA_H
#define MAKEDATA_H

#include <string>
#include <jsoncpp/json/json.h>
#include <iostream>
#include <utility>
#include <fstream>
#include <iomanip>


struct data
{
  string name;
  string type;
  string param_s;  
  long double param_d;

  bool IsNumber(){return type == "number"; }

};


using std::string;

class TokenTable
{
    public:

     template <typename T>
     auto get_value(T t); 

      TokenTable(string path, string nameToken);
      void InitData(Json::Value vl);
      std::vector<std::pair<string, data>> typeParam;
      std::vector<std::vector<std::pair<string, data>>> ArrData;
    private:
      //std::vector<std::pair<string, void*>> typeParam;
      bool isOnlyDouble(const char* str);
     std::string isOnlyDouble_s(const char* str);
      std::vector<string> nameParameters;
       Reader<Json::Value> * GetReader(string path);
       bool Is_number(const string& s);
       std::string Is_number_str(const string& s);
       std::pair<string, data> InitPair(string name, string type, string param);
};

#endif

