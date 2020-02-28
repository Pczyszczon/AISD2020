#include <iostream>
#include <vector>

using namespace std;

double f(double factors[], int n,  double x){
    double result = factors[n];
    for (int i=n-1; i >= 0 ; i--)
        result = result * x + factors[i];
    return result;
}

int main(){
    const int n = 5;
    double factors[n] = {3, 5, 6, 7, 8};
    cout << f(factors, n, 10) << endl;

    return 0;
}
