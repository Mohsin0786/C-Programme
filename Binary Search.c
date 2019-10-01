/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int c,n,search,array[100],j,i,t;
 printf("Enter the Size of Array\n");
 scanf("%d",&n); //number of elements in the array
printf("Enter The Elements in Array\n");
 for (c = 0; c < n; c++)
 {
 scanf("%d",&array[c]);
   }
   printf("Enter Element To Search\n");
 scanf("%d", &search); //The element to search is given
 for(i=0;i<n-1;i++)//Sorting the given elements to implement binary search using bubble sort
 {
     for(j=0;j<n-1-i;j++)
     {
         if(array[j]>array[j+1])
         {
             t=array[j];
             array[j]=array[j+1];
             array[j+1]=t;
         }
     }
 }
int beg=0,end=n-1,loc,count=0,mid;
mid=(beg+end)/2;
while(beg<=end)
{
  if(array[mid]==search)
  {
    loc=mid;
    count=count+1;
    printf("%d found at location %d.\n",search,loc+1);
    break;
  }
  else if(array[mid]>search)
  {
    end=mid-1;
  }
  else
  {
  beg=mid+1;
  }
  mid=(beg+end)/2;
}
if(count==0)
  printf("Not found! %d isn't present in the list.\n",search);
  return 0;
}


