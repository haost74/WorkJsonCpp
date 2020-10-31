#include <iostream>
#include <string>

#include<bits/stdc++.h> 

#include "parser.cpp"
#include "src/readerJeson.cpp"
#include "src/reader_Json.cpp"

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

//{"simvol": "("}
class data
{
  public:
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

   readerTest();
   string path = "../data/TokenTable.json";
   Reader<data> rd(path);
   auto res = rd.ReaderToken("fullTokenTable");

    return 0;
}



