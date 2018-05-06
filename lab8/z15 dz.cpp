#include <string>
#include <iostream>
int main()
{
	std::string str;
	getline(std::cin,str);
	int x=str.find("{");
	int N=0, len=0;
	
	bool a = true;//след скобка открывающая
    if(x!=-1){
    	
    	while(x!=-1){
		    std::string c;
		    c=str.substr(len, 1);
    	    if(c=="}"){
    	    	a=false;
    	    }
    	    else{
    	    	a=true;
    	    } 
			if(a){
    	    	N=N+1;
    	    	std::cout << N;
    	    	
    	    }
		    else{
		    	N=N-1;
		        std::cout << N;
		    }
		    len=len+1;
		    x=str.find("}",len);
	     }
	    if(N>0){
	    	std::cout << "Neogidanny konec stroky";
	    }
	    if(N<0){
	    	std::cout << "Neogidannaya zakryvauschaya scobka";
	    }
    }
    
}
    
