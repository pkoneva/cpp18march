#include<iostream>
#include<math.h>

using namespace std;

struct Range{
	int x;
	int y;
		bool contains(int a){
		     if(a>x & a<y){
		     	return true;
		     }
		     else{
		     	return false;
		     }
		}
		
		
		bool contains2(int a){
		    bool result = a>x & a<y;
			return result;
		}
};

int main(){
	Range c;
	c.x =10;
	c.y = 100;
	cout << c.contains(14);
	
	cout<<c.contains2(104);
	
	return 0;
}
