//3. Programs to implement fuzzy set operations.

#include<stdio.h>
#include<math.h>

float Max(float a, float b);
float Min(float a, float b);
float Not(float a);
void print(float set[], int n);

int main(){
	int i,n;
	float A[20],B[20];
	float max[20], min[20], notA[20], notB[20];
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	printf("Enter elements of set A:\n");
	for(i=0; i<n; i++){
		scanf("%f",&A[i]);
	}
	
	printf("Enter elements of set B:\n");
	for(i=0; i<n; i++){
		scanf("%f",&B[i]);
	}
	
	for(i=0; i<n; i++){
		max[i]=Max(A[i],B[i]);
		min[i]=Min(A[i],B[i]);
		notA[i]=Not(A[i]);
		notB[i]=Not(B[i]);
	}
	
	printf("Max value: \n");
	print(max, n);

	printf("\nMin value: \n");
	print(min, n);
	
	printf("\nComplement of A: \n");
	print(notA, n);
	
	printf("\nComplement of B: \n");
	print(notB, n);

}

float Max(float a, float b){
	if(a>b)
		return a;
	else
		return b;
}

float Min(float a, float b){
	if(a<b)
		return a;
	else
		return b;
}

float Not(float a){
	return 1-a;
}

void print(float set[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%.2f\n",set[i]);
	}
}
