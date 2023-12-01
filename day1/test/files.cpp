#include<iostream>
#include<fstream>
#include<string>

int main()
{
   //write to file
   std::fstream file;
   file.open("testfile.txt", std::ios::out);
   if(file.is_open())
   {
      file << "Hello" << std::endl;
      file.close();
   }

   //append to file
   file.open("testfile.txt", std::ios::app);
   if(file.is_open())
   {
      file << "here is some appended text";
      file.close();
   }

   //read file
   file.open("testfile.txt", std:: ios::in);
   if(file.is_open())
   {
      std::string line;
      while(getline(file, line)) //reads line from file a line of text and stores it into line
      {
         std::cout << "here is the line: " << line << std::endl;
      }
   }

   return 0;
}