#include <iostream>
#include <string>

#include<bits/stdc++.h>
#include <jsoncpp/json/json.h>

#include "parser.cpp"
//#include "src/json/reader_Json.cpp"
#include "src/json/MetaObject.h"

#include "src/type/Object.cpp"
#include "src/type/Value.h"




#ifndef SHAPE_CPP
#define SHAPE_CPP

//file contents
#include "reader_Json.cpp"


#endif

using std::cout;
using std::string;

class foo
{
   public:
    string str;
    foo()
    {
            str = "";
    }
};


int main(int argc, char* argv[])
{


   /*
   Value vl;
    vl.param_s = "hello";
    vl.type = "string";

    Value vl1;
    vl1 = vl;
    auto vl2 = vl1 - vl;
    cout << vl2.param_s << '\n';
    */


    Value vl;
    vl.Type_s = "number";
    //vl.Param_d = 10.25;
    //vl.Type_s = "number";
    //cout << vl.Param_d << '\n';
    Value vl1;
    vl1 = vl;
    auto ty = vl1.Type_s;
    cout << static_cast<string>(vl1.Type_s) << '\n';
    
    return 0;


   Object<data> obj;
   Object<data> obj1;

   string path = "../data/TokenTable.json";
   TokenTable tt(path, "fullTokenTable");

   auto vec = tt.typeParam;

   for(int i = 0; i < vec.size(); ++i)
   {
        if(vec[i].second.IsNumber())
        {
                cout << vec[i].second.name << " " << vec[i].second.type << " " << vec[i].second.param_d <<  '\n';
        }
        else
        {
                cout << vec[i].second.name << " " << vec[i].second.type << " " << vec[i].second.param_s << '\n';
        }
   }


    obj = vec[0].second;
    obj1 = vec[1].second;

    //auto dat = obj + obj1;

    return 0;
}
