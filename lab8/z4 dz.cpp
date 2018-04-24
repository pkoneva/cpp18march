#include <string>
#include <iostream>
int main()
{
	std::string data = "abcdacadbacdaabaadc";
	std::string x;
	std::cin >> x;// scanf;
	int index = data.find(x); 
    if(index!=-1 ){
        index = data.find(x);
		std::cout<<index;
		index=index+1;
		if(data.find(x, index)!=-1){
		    index=data.find(x, index);
	    	std::cout<<"\n"<<index;
		}
		
     }
     else{
	     std::cout<<"not found";
     }
	
	
}
