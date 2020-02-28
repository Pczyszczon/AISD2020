#include <cmath>
#include <iostream>

using namespace std;
double epsilon = 0.01;

double fun(double x){
    return x*x-2;
}

double solve(double a, double b, double(*f)(double)){
    double fa = f(a);
    double fb = f(b);
    double x0 = (a+b)/2;
    while (x0!=a || x0!=b){
        x0 = (a+b)/2;
        double f0 = f(x0);
	if ((x0 == a) || (x0 == b))
            break;
        if (fa*f0 < 0)
            b = x0;
        else{
            a = x0;
            fa = f0;
        }
    }
    return x0;
}

int main(){
    cout << solve(0.12, 4.23, fun) << endl;
    cout << solve(0.5, 10.121, fun) << endl;
    return 0;
}
