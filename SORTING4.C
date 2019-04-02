/* merge sorting */
#include<stdio.h>
#include<conio.h>
#define max 5
void main()
{
	int i,k,j,p,n,temp,arr1[max],arr2[max],arr3[10];
	i=j=k=p=n=0;
	clrscr();
	printf("Enter first array data=\n");
	for(i=0;i<max;i++)
	{
	  printf("Enter data[%d]=",(i+1));
	  scanf("%d",&arr1[i]);
	  for(j=0;j<i;j++)
	  {
	     if(arr1[j]>arr1[i])
	     {
		 temp=arr1[j];
		 arr1[j]=arr1[i];
		 arr1[i]=temp;
	     }
	  }
	}
	printf("\nEnter second array data=\n");
	for(i=0;i<max;i++)
	{
	     printf("Enter data[%d]=",(i+1));
	     scanf("%d",&arr2[i]);
	     for(j=0;j<i;j++)
	     {
		if(arr2[j]>arr2[i])
		{
		  temp=arr2[j];
		  arr2[j]=arr2[i];
		  arr2[i]=temp;
		}
	     }
	}
	printf("Sorting of first array data=");
	for(i=0;i<max;i++)
	  printf("%4d",arr1[i]);
	printf("\nSorting second array data=");
	for(i=0;i<max;i++)
	   printf("%4d",arr2[i]);
	  for(;p<max && n<max;)
	  {
		 if(arr1[p]>arr2[n])
		   arr3[k++]=arr2[n++];
		 else
		   arr3[k++]=arr1[p++];
	  }
	  while(n<max)
	  arr3[k++]=arr2[n++];
	  while(p<max)
	   arr3[k++]=arr1[p++];
	printf("\nmerge sorting=");
	for(i=0;i<10;i++)
	printf("%4d",arr3[i]);
getch();
}


