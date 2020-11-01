#include <iostream>
#include <fstream>
#include <vector>
#include <jsoncpp/json/json.h>



using namespace std;

void readerJson()
{
    ifstream ifs("../data/ruless.json");
    Json::Reader reader;
    Json::Value obj;

    reader.parse(ifs, obj);
    cout << "Last name: " << obj["competitors"]["away"]["name"].asString() << '\n'; 
    cout << "Last name: " << obj["competitors"]["away"]["code"][0].asInt() << '\n'; 
}

vector<string> readerRulles()
{
    ifstream ifs("../data/TokenTable.json");
    Json::Reader reader;
    Json::Value obj;

     reader.parse(ifs, obj);
     vector<string> res;
    
     /*
     auto dof = *obj.begin();
          Json::FastWriter fastWriter;
          std::string output = fastWriter.write(dof);
          */
          
const Json::Value dataArray = obj["tokenTable"];

string a = dataArray[0].asString();

for(int i = 0; i < dataArray.size(); ++i)
{
    res.push_back(dataArray[i].asString());
}

     
      return res;

}

void readerObject()
{
    fstream ifs("../data/TokenTable.json");
    Json::Reader reader;
    Json::Value obj;
     reader.parse(ifs, obj);

     const Json::Value dataArray = obj["fullTokenTable"];
     auto data = dataArray[0];
     cout << dataArray.size() << '\n';
}

void Rdata()
{
    fstream ifs("../data/test2.json");
    Json::Reader reader;
    Json::Value obj;
    reader.parse(ifs, obj);
}

std::vector<Json::Value> booksByPeter(const Json::Value& root) {
    std::vector<Json::Value> res;
    for (const Json::Value& book : root["books"])  // iterate over "books"
    {
        if (book["author"].asString() == "Petr")   // if by "Petr"
        {
            res.push_back(book);                   // take a copy
        }
    }
    return res;                                    // and return
}

void readerTest()
{
    fstream ifs("../data/test2.json");
    Json::Reader reader;
    Json::Value obj;
     reader.parse(ifs, obj);

     auto vec = booksByPeter(obj);
     cout << vec[0]["author"] << '\n';
}

void writeJson()
{
    ofstream ofs("../data/ruless.json");
    Json::Value event;   
    Json::Value vec(Json::arrayValue);
    vec.append(Json::Value(1));
    vec.append(Json::Value(2));
    vec.append(Json::Value(3));

    event["competitors"]["home"]["name"] = "Liverpool";
    event["competitors"]["away"]["code"] = 89223;
    event["competitors"]["away"]["name"] = "Aston Villa";
    event["competitors"]["away"]["code"]=vec;

   //ofs << event;   

    std::cout << event << std::endl;
}