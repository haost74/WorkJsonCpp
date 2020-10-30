#include <string>
#include <iostream>
using std::string;

namespace calculator
{
   class Parsers
   {
       private:
         string strNum{""};
         inline bool isInteger(const std::string & s)
            {
            if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;

            char * p;
            strtol(s.c_str(), &p, 10);

            return (*p == 0);
            }

            //-------------------------------------------
public:
            bool IsScipe(string str)
            {                     
               return str.find("(") <= str.length() 
                   && str.find(")") <= str.length();
            }

        public:
        void parse(char ch)
            {
                string s1{ch};
                if(isInteger(s1))
                {
                    strNum += s1;
                }
                else
                {  

                    if(strNum != "") 
                    {                                
                        int i = std::stoi(strNum);
                        //std::cout << i << '\n';
                        strNum = "";
                    }
                }
                
            }

        void Run(string str)
        {
            if(IsScipe(str))
            {
                std::cout << 1024 << '\n';

            }else
            {                
                str += " ";
                for(int i = 0; i < str.length(); ++i)
                {                
                    parse(str[i]);
                }
            }                        
        }

        //------------------------------------------

        

        //------------------------------------------
   };
   
}