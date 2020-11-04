#include "MetaObject.h"

TokenTable::TokenTable(string path, string nameToken)
{
   auto rd = Reader<Json::Value>(path);
   auto res = rd.ReaderToken(nameToken);
   nameParameters = rd.GetNamesMember(nameParameters);  
   //std::cout << res[0] << '\n';
   for(auto it = res.begin(); it < res.end(); ++it)
   {
     auto names = it->getMemberNames();
     Json::Value tu;
     string name{""};
     string type{""};
     for(auto i = names.begin(); i < names.end(); ++i)
     {
           name = (*i);
           tu = (*it)[name];
          typeParam.push_back(InitPair(name, Is_number_str(tu.asString()), tu.asString()));
     }
     
   }
     
}

std::pair<string, data> TokenTable::InitPair(string name, string type, string param)
{
     data d;
     d.name = name;
     d.type = type;
     d.param = param;
    return std::make_pair(name, d);;
}

std::string TokenTable::Is_number_str(const string& s)
{
    if(Is_number(s))
    {
      return "number";
    }
    else
    {
      return "string";
    }
    
}

bool TokenTable::Is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
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