#include "stdio.h"

int main()
{
	int w, h, c, d, X, Y;
	scanf("%d %d %d %d", &w, &h, &c, &d);
	
	
	    if(w<=0 or h<=0 or c<=0 or d<=0 or c<d or w<c or w<d or h<d or h<c){
		    printf("znachenie nepravil'noe");
	    }
        
	    else{
		    X=(w/c)*(h/d);
            Y=(w/d)*(h/c);
	        if(X>Y){
		        printf("%d, C  vdol' W", X);
	        }
	    
	        else{
		        printf("%d, C vdol' H", Y);
	        }
	    }
	
	
	return 0;
}
