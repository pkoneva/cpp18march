#include<iostream>
#include <sstream>

using namespace std;

struct Range{
	int x; 
	int y;
		bool contains(int a, int b){
			if(a>x & a<y & b>y){
		     	return true;
		     }
		     else{
		     	return false;
		     }  
		}
};

int main()
{
	Range r;
	r.x=11;
	r.y=18;
	
	Range m;
	m.x=20;
	m.y=25;
	cout<<r.contains(15, 35)<< "\n";
	cout<<m.contains(25, 30);
	
}
