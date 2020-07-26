#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
 double n, p, k;
 while(scanf("%lf %lf", &n, &p) == 2) {
  k = exp(log(p)/n);
  printf("%.0f\n", k);
 }
    return 0;
}
