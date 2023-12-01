#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#include <cctype>

int main()
{
   std::string str("7two4six63fas");
   std::string both_nums;

         auto first_num = std::find_if(str.begin(), str.end(), [] (const char& elem) 
         {
            if(std::isdigit(elem))
            {
               return true;
            }
            return false;
         });
         both_nums += *first_num;

         std::reverse(str.begin(), str.end());

         auto last_num = std::find_if(str.begin(), str.end(), [] (const char& elem) 
         {
            if(std::isdigit(elem))
            {
               return true;
            }
            return false;
         });

         both_nums += *last_num;

   //std::cout << both_nums;

   auto THENUMBERSJASON = std::stoi(both_nums);

   std::cout << THENUMBERSJASON;

}