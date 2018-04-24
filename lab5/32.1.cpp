#include "stdio.h"

int main()
{
	int x1, y1, x2, y2, h1, w1, h2, w2, true1x=0, true2x=0, true3x=0, true4x=0, true1y=0, true2y=0, true3y=0, true4y=0;
	scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &h1, &w1, &x2, &y2, &h2, &w2);
	if(x1<0 or x2<0 or y2<0 or y1<0 or w1<=0 or w2<=0 or h1<=0 or h2<=0){
		printf("znachenie nepravil'noe");	
	}
	if((x2<x1+w1 & x1<x2+w2 & x2+w2>x1+w1) or (x2==x1 & w2+x2>w1+x1)){
		true1x=1;
	}
	if(x1+w1>x2+w2 & x2>x1){
		true2x=1;
	}
	if((x2+w2==x1+w1 & x2<=x1) or (x1==x2 &x1+w1>=x2+w2) or (x1>x2 & x2+w2>x1 & x2+w2<x1+w1)){
		true3x=1;
	}
	if(x1>x2 & x2+w2>x1+w1){
		true4x=1;
	}
	
	
	if((y2<y1+h1 & y1<y2+h2 & y2+h2>h1+h1) or (y2==y1 & h2+y2>h1+y1)){
		true1y=1;
	}	
	if(y1+h1>y2+h2 & y2>y1){
		true2y=1;
	}
	if((y2+h2==y1+h1 & y2<=y1) or (y1==y2 &y1+h1>=y2+h2) or (y1>y2 & y2+h2>y1 & y2+h2<y1+h1)){	
	    true3y=1;
    }
	if(y1>y2 & y2+h2>y1+h1){ 
	    true4y=1;
	}
	
	
	if(true1x==1 & true1y==1){
		printf("{\"x\":%d, \"w\":%d", x2, (x1+w1-x2));
		 printf("{\"y\":%d, \"h\":%d", y1, h1);
	}
	if(true1x==1  & true2y==1){
		printf("{\"x\":%d, \"w\":%d", x2, (x1+w1-x2));
		printf("{\"y\":%d, \"h\":%d", y2, h2);
	}
	if(true1x==1 & true3y==1){
		printf("{\"x\":%d, \"w\":%d", x2, (x1+w1-x2));
		printf("{\"y\":%d, \"h\":%d", y1, (y2+h2-y1));
	}
    if(true1x==1 &true4y==1){
    	printf("{\"x\":%d, \"w\":%d", x2, (x1+w1-x2));
    	printf("{\"y\":%d, \"h\":%d", y1, h1);
    }
    
    
	if(true2x==1 &true1y==1){
		printf("{\"x\":%d, \"w\":%d", x2, w2);
		 printf("{\"y\":%d, \"h\":%d", y1, h1);
	}	
	if(true2x==1 &true2y==1){
		printf("{\"x\":%d, \"w\":%d", x2, w2);
		printf("{\"y\":%d, \"h\":%d", y2, h2);
	}
	if(true2x==1 &true3y==1){
		printf("{\"x\":%d, \"w\":%d", x2, w2);
		printf("{\"y\":%d, \"h\":%d", y1, (y2+h2-y1));
	}
	if(true2x==1 &true4y==1){
		printf("{\"x\":%d, \"w\":%d", x2, w2);
		printf("{\"y\":%d, \"h\":%d", y1, h1);
	}
	
		
	if(true3x==1 &true1y==1){
		 printf("{\"x\":%d, \"w\":%d", x1, (x2+w2-x1));
		 printf("{\"y\":%d, \"h\":%d", y1, h1);
	}	
	if(true3x==1 &true2y==1){
		printf("{\"x\":%d, \"w\":%d", x1, (x2+w2-x1));
		printf("{\"y\":%d, \"h\":%d", y2, h2);
	}
	if(true3x==1 &true3y==1){
		printf("{\"x\":%d, \"w\":%d", x1, (x2+w2-x1));
		printf("{\"y\":%d, \"h\":%d", y1, (y2+h2-y1));
	}
	if(true3x==1 &true4y==1){
		printf("{\"x\":%d, \"w\":%d", x1, (x2+w2-x1));
		printf("{\"y\":%d, \"h\":%d", y1, h1);
	}
	
	
	if(true4x==1 &true1y==1){
		 printf("{\"x\":%d, \"w\":%d", x1, w1);
		 printf("{\"y\":%d, \"h\":%d", y1, h1);
	}	
	if(true4x==1 &true2y==1){
		printf("{\"x\":%d, \"w\":%d", x1, w1);
		printf("{\"y\":%d, \"h\":%d", y2, h2);
	}
	if(true4x==1 &true3y==1){
	    printf("{\"x\":%d, \"w\":%d", x1, w1);
		printf("{\"y\":%d, \"h\":%d", y1, (y2+h2-y1));
	}
	if(true4x==1 &true4y==1){
		printf("{\"x\":%d, \"w\":%d", x1, w1);
		printf("{\"y\":%d, \"h\":%d", y1, h1);
	}
	
	if(true1x==0 & true2x==0 & true3x==0 & true4x==0 & true1y==0 & true2y==0 & true3y==0 & true4y==0){
		 printf("ne peresekautsa");
	}
}
	
	
	
	
