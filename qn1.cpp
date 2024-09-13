 //1.Programs to implement set operations union, intersection, difference, and Cartesian product. 

#include <stdio.h>
#include <conio.h>

void Union(int a[], int b[], int c[]);
void intersect(int a[], int b[], int c[]);
void difference(int a[], int b[], int c[]);
void cartesianProduct(int a[], int b[]);

void create(int set[]){
	int i,n,x;
	
	set[0] = 0;
	printf("Number Of Element: ");
	scanf("%d",&n);
	printf("Enter elements: \n");
	for(i=1;i<=n;i++)
		scanf("%d",&set[i]);
	set[0]=n;
}	

int member(int set[], int x){
	int i,n;
	n=set[0];
	for(i=1; i<=n; i++){
		if(x==set[i])
			return (1);
	}
	return (0);
}

void print(int set[]){
	int i,n;
	n = set[0];
	printf("{");
	for(i=1; i<=n; i++){
		printf("%d",set[i]);
		if(i<n)
			printf(",");
		}
	printf("}");
}

int main(){
		
	int set1[20], set2[20], set3[20];
	
	set1[0]=0;
	set2[0]=0;
	set3[0]=0;
	printf("For set one:\n");
	create(set1);
	printf("\nFor set two:\n");
	create(set2);
	
	Union(set1,set2,set3);
	printf("\nUnion : ");
	print(set3);

	
	// For Intersection
	intersect(set1, set2, set3);
	printf("\nIntersection : ");
	print(set3);
	
	// For Difference
	difference(set1,set2,set3);
	printf("\nDifference : ");
	print(set3);
	
	cartesianProduct(set1,set2);
	
	return 0;
}

void Union(int a[], int b[], int c[]){
	int i,n;
	c[0]=0;
	n=a[0];
	
	/* Union of set1, set2 = set1 + (set2-set1) */
	for(i=0; i<=n; i++)
		c[i]=a[i];
		
	n=b[0];
	for(i=1; i<=n; i++){
		if(!member(c,b[i]))
			c[++c[0]]=b[i];
	}
}

void intersect(int a[], int b[], int c[]){
	int i,n;
	c[0]=0;
	n=a[0];
	
	for(i=1; i<=n; i++){
		if(member(b,a[i]))
			c[++c[0]]=a[i];
	}
}

void difference(int a[], int b[], int c[]){
	int i,n;
	c[0]=0;
	n=a[0];
	for(i=1; i<=n; i++){
		if(!member(b, a[i]))
			c[++c[0]]=a[i];
	}
}

void cartesianProduct(int a[], int b[]) {
	int i,j,x,y;
	x = a[0];
	y = b[0];
    printf("\nCartesian Product: { ");
    for (i = 0; i < x; i++) {
        for ( j = 0; j < y; j++) {
            printf("(%d, %d) ", a[i], b[j]);
        }
    }
    printf("}\n");
}
