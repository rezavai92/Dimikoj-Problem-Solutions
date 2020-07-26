#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double base, num;

	while(scanf("%lf\n%lf",&base,&num)!=EOF){
		cout<< exp(log(num)/base)<<endl;
	}

	return 0;
}
