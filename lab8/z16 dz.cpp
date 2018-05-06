#include <string>
#include <iostream>
int main()
{
	std::string str;
	getline(std::cin,str);
	int len=0;
	int a=str.length();
	
	int w=str.find(">");
	int x=str.find("<");
	int y=str.find(">=");
	int z=str.find("<=");
	
	std::string variableW=str.substr(0, w);
	std::string variableX=str.substr(0, x);
	std::string	variableY=str.substr(0, y);
	std::string variableZ=str.substr(0, z);
	
	std::string constW=str.substr(w+1, a);
	std::string constX=str.substr(x+1, a);
	std::string constY=str.substr(y+2, a);
	std::string constZ=str.substr(z+2, a);
	
    
   

    	if(w==-1 & x==-1 & y==-1 & z==-1){
    	std::cout << "net znaka sravneniya";
    }
    else{
    	if((w!=-1 & x!=-1) or (w!=-1 & y!=-1) or (w!=-1 & z!=-1) or (x!=-1 & y!=-1) or (x!=-1 & z!=-1) or (y!=-1 &z!=-1)){
    	    std::cout << "zakov sravneniya bol'she 1";
        }
        else{
	      	if(w!=-1 or x!=-1 or y!=-1 or z!=-1){
	    	
	    	     while(w!=-1 or x!=-1 or y!=-1 or z!=-1){
				    std::string C;
				    C=str.substr(len, 1);
				    std::string B;
				    B=str.substr(len,2);
					if(B==">="){
		    	    	std::cout << "znachenie peremennoy " <<  variableY << " bol'she ili ravno " << constY;
		    	    }
		    	    else{
					    if(C==">"){
		    	    	    std::cout << "znachenie peremennoy " <<  variableW << " bol'she " << constW;
		    	        }
		    	    }
		    	    if(B=="<="){
		    	    	std::cout << "znachenie peremennoy " <<  variableZ << " men'she ili ravno " << constZ;
		    	    }
		    	    else{
		    	    	if(C=="<"){
			    	    	std::cout << "znachenie peremennoy " <<  variableX << " men'she " << constX;
			    	    }
		    	    }
		    	    
		    	  	len=len+1;
				    x=str.find(">",len);
				    w=str.find(">", len);
			        x=str.find("<", len);
		            y=str.find(">=", len);
			        z=str.find("<=", len);
		        }
		   
	          }
        }
    
    }
    
    
   
   
   
    
    
}
    
