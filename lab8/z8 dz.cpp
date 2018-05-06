#include <string>
#include <iostream>

int main()
{
	std::string str = "abcdefwxyz";
	int ca, cb;
	std::cin >> ca;
	std::cin >> cb;
	if(ca>cb or ca<0 or cb>9 or ca+cb>10){
		std::cout<<"not right"; 
	}
	else{
		std::string str1 = str.replace(ca, cb, "");
		std::cout << str1;
	
	}
}
	
