#include <iostream>
#include <string>
#include <math.h>
#include <stdexcept>
#include <sstream>

std::string lab6task31(int y){
	int n=0, i=0;
    if(y<0 or y>20){
    	throw std::invalid_argument("nepravilnoe znachenie");
    }
    else{
	    std::stringstream x;
    	while(i<10){
    		while(n<y){ 
				x<<i;
    	        n=n+1;
			}
    		n=0;
			x<<"\n";
			i=i+1;	
    	}
		return x.str();
    }
    
}

int main()
{
std::cout<<lab6task31(6)<< "\n";
	try{
	    std::cout<<lab6task31(21) << "\n";
	} catch(std::invalid_argument& e){
		std::cout << e.what() << "\n\n";
	}
}

