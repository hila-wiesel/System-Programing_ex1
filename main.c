

#include "myMath.h"
#include <stdio.h>


int main(){ 
    
    double x;
	char c;
    printf("Please inset a real number: \n");
	while (scanf("%lf", &x)==0){
		scanf("%c", &c);
		printf("Not a real number. Please try again.  \n");
	}
	
	
	int x_int = (int)x;
    
    //   f(𝑥) = 𝑒^𝑥 aa+ 𝑥 ^3 -2:
    double ans1 = sub(add(Exp(x_int), Pow(x,3)), 2);
    printf("The value of  f(x) = e^x + x^3 -2  at the point %.4lf is %.4lf \n", x, ans1);
    
    //  f(x) = 3x + 2X^2:
    double ans2 = add( mul(x,3), mul(Pow(x,2),2));
    printf("The value of  f(x) = 3x + 2X^2  at the point %.4lf is %.4lf \n", x, ans2);
        
    //f(x) = (4x^3)/5 -2x :
    double up = mul(Pow(x,3),4);
    double ans3 = sub( div(up,5) , mul(x,2) );
    printf("The value of  f(x) = (4x^3)/5 -2x  at the point %.4lf is %.4lf \n", x, ans3);

    
    return 0;
}