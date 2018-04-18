#include <string>
#include <iostream>
int main()
{
	std::string data = "abcdefwxyz";
	std::string x;
	std::cin >> x;// scanf;
	int result = data.find(x);
    if (result == -1){
    	std::cout<<"not found";// printf
    	
    }	
    else{
    	std::cout<<result;
    }
}
