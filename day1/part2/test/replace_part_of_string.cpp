#include<iostream>
#include<string>
#include<algorithm>

//functions
void replace(std::string&, const std::string&, const std::string&);


int main()
{
	std::string str {"i love men"};
	
	replace(str, "men", "girls");

	std::cout << str << std::endl;

	return 0;
}

void replace(std::string& the_string, const std::string& begin_old_substr, const std::string& new_substr)
{
	size_t start_pos_old_substr = the_string.find(begin_old_substr);
	if(start_pos_old_substr != std::string::npos)	//idk what this does
	{
		the_string.replace(start_pos_old_substr, begin_old_substr.length(), new_substr);
	}
}

