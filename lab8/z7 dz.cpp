#include <string>
#include <iostream>

int main()
{
	std::string str;
	std::cin >> str;
	int length = str.length();
	if(length==13){
		std::string str1 = str.substr(0, 2);
		std::string str2 = str.substr(3, 3);
		std::string str3 = str.substr(7, 4);
		std::string  str4 = str.substr(12, 2);
		std::cout << "kod strany:" << str1 << "\nkod izgotovirela:" << str2  << "\nkod tovara:"  << str3  << "\nkontrolnoe chislo:" << str4;

	}
	else{
		std::cout << "not right";
	
	}
return 0;
}
