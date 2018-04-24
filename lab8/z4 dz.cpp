#include <string>
#include <iostream>
int main()
{
	std::string data = "abcdacadbacdaabaadc";
	std::string x;
	std::cin >> x;// scanf;
	int index = data.find(x);
    while(index<17){ 
    	
        if(index!=-1 ){
		    index = data.find(x);
            std::cout<<index;
         
	    }
	    else{
	        std::cout<<"not found";
	    }
	    index=index+1;
	}
	
}
