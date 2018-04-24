#include <string>
#include <iostream>
int main()
{
	std::string data = "abcdefwxyz";
	int ca, cb;
	std::cin >> ca;// scanf;
	std::cin >> cb;
	if(ca+cb>10 or ca<0 or cb<0){
		std::cout<<"not right"; 
	}
    else{ 
    	   std::string str = data.replace(ca, cb, "");
        std::cout<< str;
    }
}
