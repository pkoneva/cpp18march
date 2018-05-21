#include<iostream>
#include <sstream>

using namespace std;

struct Range{
	int x; 
	int y;
	int m; 
	int n;
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
	r.n=20;
	r.m=25;
	cout<<r.contains(15, 35)<< "\n";
	cout<<r.contains(25, 30);
	
}
