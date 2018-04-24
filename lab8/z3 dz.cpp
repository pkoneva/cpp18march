#include <string>
#include <iostream>
int main()
{
	std::string data = "abcdefwxyz";
	std::string x, y;
	std::cin >> x;// scanf;
	std::cin >> y;
	int index = data.find(x);
	int index2 = data.find(y);
	if(index2>index){
	    if(index != -1 & index2 !=-1){ 
	        std::cout<< index2-index-1;
	    }else{
	    	std::cout<<"not found";
		
     	}
    	}
	else{
		if(index != -1 & index2 !=-1){ 
	        std::cout<< index-index2-1;
	    }else{
	    	std::cout<<"not found";
		
     	}
	}
	
	
}
