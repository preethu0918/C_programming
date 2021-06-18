#include<stdio.h>
#define x 3
#define y 3
int main()
{
	int arr[x][y];
	int i,j;
	int *ptr=arr;
	int Sum=0;
	int Sum1=0;
	printf(" Enter elements in matrix of size %dx%d \n", x, y);
	for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
        	printf(" element[%d][%d] : ",i,j);
            scanf(" %d", ptr);
            ptr++;
        }
    }
    ptr=arr;
    printf(" The matrix is :\t");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%d ", *ptr);
            ptr++;
        }
    }
    //since we know diagonal matrix or the elements are a[0][0],a[1][1],a[2][2] and a[0][2],a[1][1],a[2][0]
	for(i=0; i<x; i++)
  	{
   		Sum = Sum + arr[i][i];
  	}
    printf("\n  It's the sum of diagonal a[0][0],a[1][1],a[2][2]");
 	printf("\n The Sum of 1st Diagonal Elements of a Matrix =  %d", Sum );    
 	int size=x;
 	for(i=0; i<=size+1; i++)
  	{
   		Sum1 = Sum1 + arr[i][size-1];
   		size--;
  	}
    printf("\n  It's the sum of diagonal a[0][2],a[1][1],a[2][0]");
 	printf("\n The Sum of 2st Diagonal Elements of a Matrix =  %d", Sum1 );    
	return 0;
}
