#include <string>
#include <iostream>

int main()
{
	std::string str = "abcdacadbacdaabaadc";
	std::string a;
	std::cin >> a;
	int lengthStr=str.length();
	int lengthA=a.length();
	int index=str.find(a,0); 
	if(lengthA>2){
		std::cout<<"not right"; 
	}
	else{
		if(index!=-1){
		    std::string str1=str.replace(index, 2, " ");
		    do{	
			    lengthA=lengthA+1;
		        index=str1.find(a);
			    str1=str.replace(index, 2, " ");
		    }
		    while(lengthA<=lengthStr & index!=-1);
			std::cout << str1;
		}
		
    }
	
}

