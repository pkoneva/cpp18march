#include<iostream>
#include<math.h>

using namespace std;

struct Point{
	int x; 
	int y; 
	
	double distanceTo(Point *p){
		int dx = p->x-x;
		int dy = p->y-y;
		return sqrt(dx*dx +dy*dy);
	}
    
    void setCoordinates(int g,int h){
    	x = g;
    	y = h;
    }
   
   
   //ф-я конструктор 
    Point(int r,int t){
    	x=r;
    	y=t;
    }
    
    Point(){
    	
    }
}; 

int main(){
	Point start;
	
	start.setCoordinates(4, 7);
	
	Point *end;
	cout<< end->x<< "\n";
	end=new Point(56, 98);
	cout<< end->x<< "\n";
	cout << start.distanceTo(end);
	

	return 0;
}
