#include<iostream>
#include <sstream>
#include <math.h>
using namespace std;


struct Circle{
	int x, y, R;
	
    bool contains(Circle b){
    	if(R+b.R > sqrt(x*b.x + y*b.y)){
    		return true;
    	}
    	else{
    		return false;
    	}
    }
    
    void move(int w, int h){
    	x = x+w;
    	y = y+h;
    }
};

int main(){
	Circle a;
	a.x = 3;
	a.y = 5;
	a.R = 6;
	
	Circle b;
	b.x = 4;
	b.y = 12;
	b.R = 7;
	
	
	
	Circle f;
	f.x=1; f.y=1; f.R=1;
	
	Circle g;
	g.x=100; g.y=190; g.R=3;
	if(b.contains(a)){
		cout << "+" << "\n";
	}
	else{
		cout << "-"<< "\n";
	}
	
	if(g.contains(f)){
		cout << "+"<< "\n";
	}
	else{
		cout << "-"<< "\n";
	}
	
	a.move(2, 3);
	cout << a.x << " " << a.y << "\n";
}
