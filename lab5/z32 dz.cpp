#include "stdio.h"

int main()
{
	int x1, y1, x2, y2, h1, w1, h2, w2;
	scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &h1, &w1, &x2, &y2, &h2, &w2);
	if(x1<0 or x2<0 or y2<0 or y1<0 or w1<=0 or w2<=0 or h1<=0 or h2<=0){
		printf("znachenie nepravil'noe");	
	}
	else{
		if((x2<x1+w1 & x1<x2+w2 & x2+w2>x1+w1) or (x2==x1 & w2+x2>w1+x1)){
			printf("{\"x\":%d, \"w\":%d", x2, (x1+w1-x2));
		}
		else{
			if(x1+w1>x2+w2 & x2>x1){
				printf("{\"x\":%d, \"w\":%d", x2, w2);
			}
			else{
				if((x2+w2==x1+w1 & x2<=x1) or (x1==x2 &x1+w1>=x2+w2) or (x1>x2 & x2+w2>x1 & x2+w2<x1+w1)){
				    printf("{\"x\":%d, \"w\":%d", x1, (x2+w2-x1));
				}
				else{
					if(x1>x2 & x2+w2>x1+w1){
					     printf("{\"x\":%d, \"w\":%d", x1, w1);	
					}
					else{
					    printf("ne peresekautsa");
					}
			    	
			    }
			}
	     	
		}
	if((y2<y1+h1 & y1<y2+h2 & y2+h2>h1+h1) or (y2==y1 & h2+y2>h1+y1)){
			printf("{\"y\":%d, \"h\":%d", y2, (y1+h1-y2));
		}
    else{
		if(y1+h1>y2+h2 & y2>y1){
			printf("{\"y\":%d, \"h\":%d", y2, h2);
		}
		else{
			if((y2+h2==y1+h1 & y2<=y1) or (y1==y2 &y1+h1>=y2+h2) or (y1>y2 & y2+h2>y1 & y2+h2<y1+h1)){
			    printf("{\"y\":%d, \"h\":%d", y1, (y2+h2-y1));
			}
			else{
				if(y1>y2 & y2+h2>y1+h1){
				    printf("{\"y\":%d, \"h\":%d", y1, h1);	
				}
				else{
				    printf(" ");
				}	
			}
	    }
	}
}
	return 0;
}
