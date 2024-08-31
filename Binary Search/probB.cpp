#include <stdio.h>

double total(double num){
	double result = 1.0/6.0*num*(num+1)*(2*num+1);
	return result;
}

double binarySearch(double left, double right, double target){
    double temp2;
    while (left <= right){
        unsigned long long mid = (left + right)/2;
        double temp = total(mid);
        if (temp>=target){
            temp2 = mid;
            right = mid-1;
        }else{
            left = mid+1;
        }
    }

    return temp2;
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i <= tc; i++){
		double M;
		scanf("%lf", &M);
		double result = binarySearch(0, 1000000000000000001, M);
		printf("Case #%d: %.0lf\n", i, result);
	}
	return 0;
}
