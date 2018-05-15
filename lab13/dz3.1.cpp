#include <iostream>
#include <string>
#include <math.h>
#include <stdexcept>


int lab6task31(int y){
	int n=0, i=0;
    if(y<0 or y>20){
    	throw std::invalid_argument("nepravilnoe znachenie");
    }
    else{
    	while(i<10){
    		while(n<y){ 
			    std::cout<< i;
    	        n=n+1;
			}
    		n=0;
			std::cout<<"\n";
			i=i+1;	
    	}
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

