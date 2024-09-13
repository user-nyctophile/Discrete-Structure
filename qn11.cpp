//11.Programs to generate permutations and combinations.

#include<stdio.h>
long long factorial(int n);
long permutation(int n, int r);
long combination(int n, int r);

int main(){
	int n,r;
	long p, c;
	printf("Enter value of n and r: \n");
	scanf("%d%d",&n,&r);
	
	p = permutation(n,r);
	c = combination(n,r);
	
	printf("Permutation P(%d, %d) = %ld\n",n,r,p);
	printf("Combination C(%d, %d) = %ld",n,r,c);
	
	return 0;
}

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long permutation(int n, int r){
	return factorial(n) / factorial(n - r);
}

long combination(int n, int r){
	return factorial(n) / (factorial(r) * factorial(n - r));
}
