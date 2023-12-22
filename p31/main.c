/*
 * main.c
 *
 *  Created on: 21-Dec-2023
 *      Author: lenovo
 */
//3.1
//write a version with only one tesr inside the loop

//#include <stdio.h>
//
//int binarySearch(int a[], int x, int low, int high) {
//  while (low <= high)
//  {
//    int mid = low + (high - low) / 2;
//
//    if (a[mid] == x)
//      return mid;
//
//    if (a[mid] < x)
//      low = mid + 1;
//
//    else
//      high = mid - 1;
//  }
//
//  return -1;
//}
//
//int main(void) {
//  int a[] = {3, 4, 5, 6, 7, 8, 9};
//  int n = sizeof(a) / sizeof(a[0]); //number of elements
//  int x = 5;
//  int result = binarySearch(a, x, 0, n - 1);
//  if (result == -1)
//    printf("Not found");
//  else
//    printf("Element is found at index %d", result);
//  return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
	char s[]={1,2,3,4,5,6,7,8,9};
	int i=0;
	int lower=s[i];
	for(i=0;s[i];i++);
	printf("total length=%d\n",i);
	int upper=i;
	printf("lower value of array=%d\n",lower);
	//scanf("%d",&lower);
	fflush(stdout);
	printf("upper value of array=%d\n",upper);
	//scanf("%d",&upper);
	fflush(stdout);
	int mid=((upper-lower)/2);
	int x=2;
	if (s[mid]==x)
	{
		return mid;
	}
	if(s[mid]>x)
	{
		upper=s[mid]-1;
	}
	else
	{
		lower=s[mid]+1;
	}
	printf("binarysearch value is=%d",s[mid]);
}




































