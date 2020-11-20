
# include "myMath.h"

#define EXP 2.71828182846

double Exp (int x){
    return Pow(EXP, x);
}


double Pow(double x , int y){
    double ans = 1;
	int yCopy= y;
    while(y){
        ans = ans*x;
		if (y>0)
			--y;
		if (y<0)
			++y;
    }
	if (yCopy<0)
		ans=1/ans;
    return ans;
}


