/******************************************************************************

*******************************************************************************/
#include <stdio.h>

int main()
{
  int array[100], n, c;
  printf("Enter The Size of Array\n");
  scanf("%d", &n); // n is number of elements in the array.
  printf("Enter The Elements in Array\n");
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
  int end=n-1,t,i;
for(i=0;i<n/2;i++)//Swapping Elements
{
t=array[i];
array[i]=array[end];
array[end]=t;
  end--;
}
printf("Reversed array elements are:\n");

  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
  return 0;

}

