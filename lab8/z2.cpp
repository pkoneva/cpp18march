#include <string>
#include <iostream>
int main()
{
	std::string data = "abcdefwxyz";
	std::string x;
	std::cin >> x;// scanf;
	int index = data.find(x);
	if(index != -1){ 
	std::cout<< data.length()-index-1;
	}
	else{
	    	std::cout<<"not found";
		
	}
    
}
