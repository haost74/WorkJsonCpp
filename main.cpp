#include <iostream>
#include <string>

#include<bits/stdc++.h> 
#include <jsoncpp/json/json.h>

#include "parser.cpp"
#include "src/readerJeson.cpp"
//#include "src/json/reader_Json.cpp"
#include "src/json/MetaObject.cpp"


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


//--------------------------------------

//{"simvol": "("
struct data : Json::Value
{
  string simvol;
};

//--------------------------------------


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

   
   string path = "../data/TokenTable.json";
   Reader<Json::Value> rd(path);
   auto res = rd.ReaderToken("fullTokenTable");



/*
   for(auto it  = res.begin(); it < res.end(); ++it)
   {
     cout << (*it) << '\n';
   }
   */
std::vector<string> nameParameters;
auto resV = rd.GetNamesMember(nameParameters);
//cout << resV.size() << '\n';


   TokenTable tt(path, "fullTokenTable");
  
    return 0;
}



