#include<bits/stdc++.h>
using namespace std;


int main(){
    double a;
    while(scanf("%lf", &a) != EOF){

        double z = a*a - sqrt(3.0)*a*a/4.0 - a*a*M_PI/6.0;
        double zp = 4*z;

        double y = a*a - a*a*M_PI/4 - 2*z;
        double yp = 4*y;

        double x = a*a - 4*z - 4*y;

        printf("%.3lf %.3lf %.3lf\n", x, yp, zp);
    }
}
