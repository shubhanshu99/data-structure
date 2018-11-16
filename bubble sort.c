#include<stdio.h>


int main()
{
  int A[100], i, j, k, swp;
 
  printf("Enter number of elements\n");
  scanf("%d", &i);
 
  printf("Enter %d integers\n",i);
 
  for (j = 0; j < i; j++)
    scanf("%d", & A[j]);
 
  for (j = 0 ; j < i - 1; j++)
  {
    for (k = 0 ; k < i - j - 1; k++)
    {
      if (A[k] > A[k+1]) 
      {
        swp       = A[k];
        A[k]   = A[k+1];
        A[k+1] = swp;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (j = 0; j < i; j++)
     printf("%d\n",A[j]);
 
  return 0;
}
