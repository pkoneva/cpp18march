#include <string>
#include <iostream>
int main()
{
	int i=1;
	std::string str;
	std::cin>>str;
	int x=str.find(",");
	if(x!=-1){
		while(x!=-1){
		    x=x+1;
			x=str.find(",", x);
			i=i+1;
			
		}
	}
	
	std::cout<<i;
}
