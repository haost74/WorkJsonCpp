#include <string>
#include <jsoncpp/json/json.h>
#include <iostream>

#ifndef SHAPE_CPP
#define SHAPE_CPP

//file contents
#include "reader_Json.cpp"

#endif


using std::string;
class TokenTable
{
    public:
     
      TokenTable(string path, string nameToken);
      void InitData(Json::Value vl);
    private:
      std::vector<std::pair<string, void*>> typeParam;
      std::vector<string> nameParameters;
       Reader<Json::Value> * GetReader(string path);
};


TokenTable::TokenTable(string path, string nameToken)
{
   auto rd = Reader<Json::Value>(path);
   auto res = rd.ReaderToken(nameToken);
   nameParameters = rd.GetNamesMember(nameParameters);  
   //std::cout << res[0] << '\n';
   for(auto it = res.begin(); it < res.end(); ++it)
   {
     auto names = it->getMemberNames();

     for(auto i = names.begin(); i < names.end(); ++i)
     {
          auto name = (*i);
          auto tu = (*it)[name];
          std::cout <<  name <<  " " <<  tu << '\n';
     }
     
   }
}


Reader<Json::Value> * TokenTable::GetReader(string path)
{
    Reader<Json::Value> rd(path);
    auto a_rd = &rd;
    return a_rd;
}

void TokenTable::InitData(Json::Value vl)
{
        for (auto const& id : vl.getMemberNames()) {
            nameParameters.push_back(id);
        }

}