#include<iostream>
#include<cstdlib>
#include<stdlib.h> 
#include <cmath>

using namespace std;


void fibIter(int n, int fibArr[]){
    long long a = 0, b = 1;

    fibArr[0] = 0;

    for (int i = 1; i <= n; i++){
        b += a;
        a = b-a;
        fibArr[i] = a; 
        fibArr[i+1] = b; 
    }
}

void fib(int a, int n){
    int max = abs(a) > n ? abs(a) : abs(n);
    int fibArr[n];
    fibIter(max, fibArr);
    for (int i = a; i <= n; i++){
        if (i < 0){
            cout << fibArr[abs(i)] * pow(-1, i+1) << " ";
        } else {
            cout << fibArr[i] << " ";
        }
    }
}

int main(int argc, char *argv[]) 
{ 

    fib(atoi(argv[1]), atoi(argv[2]));
    return 0; 
} 



// -832040 514229 -317811 196418 -121393 75025 -46368 28657 -17711 10946 -6765 4181 -2584 1597 -987 
// 610 -377 233 -144 89 -55 34 -21 13 -8 5 -3 2 -1 1 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 
// 1597 2584 4181 6765 10946 17711 28657 46368 75025 121393 196418 317811 514229 832040
