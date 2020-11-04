#include <iostream>
#include <string>

#include<bits/stdc++.h> 
#include <jsoncpp/json/json.h>

#include "parser.cpp"
//#include "src/json/reader_Json.cpp"
#include "src/json/MetaObject.h"


#ifndef SHAPE_CPP
#define SHAPE_CPP

//file contents
#include "reader_Json.cpp"

#endif

using std::cout;
using std::string;


typedef void (*func_parse)(char ch);

void pars(char ch)
{
    cout << ch << '\n';
}

void run(string str, func_parse foo)
{
  if(foo == nullptr
  || str.length() == 0)  return;


  for(int i = 0; i < str.length(); ++i)
  {
     foo(str[i]);
  }
}



int main(int argc, char* argv[])
{

    /*
    string str = "10 + 2 * 8";
    calculator::Parsers ps;
    ps.Run(str);
    */

    //readerJson();
    //writeJson();



   //auto vec = readerRulles();

   //cout << vec[1] << '\n';
   //readerObject();


//---------------------------------------------------
   
   /*
   string path = "../data/TokenTable.json";
   Reader<Json::Value> rd(path);
   auto res = rd.ReaderToken("fullTokenTable");
*/

//---------------------------------------------------



/*
   for(auto it  = res.begin(); it < res.end(); ++it)
   {
     cout << (*it) << '\n';
   }
   */
/*
std::vector<string> nameParameters;
auto resV = rd.GetNamesMember(nameParameters);
//cout << resV.size() << '\n';
*/

   string path = "../data/TokenTable.json";
   TokenTable tt(path, "fullTokenTable");
   
   auto vec = tt.typeParam;
   cout << vec.size() << '\n';

   cout << vec[0].first << '\n';
   for(int i = 0; i < vec.size(); ++i)
   cout << vec[i].second.name << " " << vec[i].second.type << " " << vec[i].second.param << '\n';
   
  
    return 0;
}



