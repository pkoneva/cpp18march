#include <string>
#include <iostream>
int main()
{
	std::string data = "abcdefwxyz";
	int ca, cb;
	std::cin >> ca;// scanf;
	std::cin >> cb;
	if(ca>cb or ca<0 or cb>9){
		std::cout<<"not right"; 
	}
    else{    
        std::string str = data.substr(ca, cb-ca+1);
        std::cout<< str;
    }
}
	
		
     	
