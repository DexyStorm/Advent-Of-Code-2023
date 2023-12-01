#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <cctype>

int main()
{
   size_t sum {0};

   std::fstream input_file;
   input_file.open("input.txt", std::ios::in);
   if(input_file.is_open())
   {
      std::string line;
      while(getline(input_file, line)) //reads line from file a line of text and stores it into line
      {
         std::string both_nums;
         auto first_num = std::find_if(line.begin(), line.end(), [] (const char& elem) 
         {
            if(std::isdigit(elem))
            {
               return true;
            }
            return false;
         });
         both_nums += *first_num;

         std::reverse(line.begin(), line.end());

         auto last_num = std::find_if(line.begin(), line.end(), [] (const char& elem) 
         {
            if(std::isdigit(elem))
            {
               return true;
            }
            return false;
         });

         both_nums += *last_num;

         auto THENUMBERSJASON = std::stoi(both_nums);

         sum = sum + THENUMBERSJASON;
      }
   }

   std::cout << sum << std::endl;

   return 0;
}