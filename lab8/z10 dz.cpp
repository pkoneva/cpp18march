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
		    std::string str1=str;
		    do{	
		        str1=str1.replace(index, 2, " ");
				index=str1.find(a);
			    lengthStr=lengthStr+1;
		    }
		    while(lengthA<=lengthStr & index!=-1);
			std::cout << str1;
		}
		
    }
	
}

