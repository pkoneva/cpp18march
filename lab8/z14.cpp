#include <string>
#include <iostream>
int main()
{
	std::string str;
	getline(std::cin,str);
	int x=str.find("\"");
	bool a = true;//след кавычка открывающая
    if(x!=-1){
    	while(x!=-1){
    	    if(a){
    	    	str.replace(x, 1, "[");
				a=false;
    	    }
		    else{
		        str.replace(x, 1, "]");
				a=true;
		    }
		    x=str.find("\"");
		    
	     }
	     std::cout<<str;
    }
    
}
    
    
