//2. Programs to implement ceiling and floor functions.

#include <stdio.h>

int Floor(float);
int Ceil(float);

int main()
{
    float a;
    printf("Enter any floating point number: ");
    scanf("%f", &a);

    printf("Floor : %d\n", Floor(a));
    printf("Ceiling : %d\n", Ceil(a));

    return 0;
}

int Floor(float a)
{
    if(a < 0) 
		return ((int)a + 1);
    else 
		return ((int)a);
}

int Ceil(float a)
{
    if(a > 0) 
		return ((int)a + 1);
    else 
		return ((int)a);
}
