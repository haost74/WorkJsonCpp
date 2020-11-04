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




int main(int argc, char* argv[])
{


   string path = "../data/TokenTable.json";
   TokenTable tt(path, "fullTokenTable");
   
   auto vec = tt.typeParam;
   /*
   for(int i = 0; i < vec.size(); ++i)
   cout << vec[i].second.name << " " << vec[i].second.type << " " << vec[i].second.param << '\n';
   */
  
    return 0;
}



