/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief 8 functions handling an array
 *
 * 8 funtions were written: 
 *	1. print_statistics() - A function that prints the statistics of an array including  
 *         minimum, maximum, mean, and median
 *	2. print_array() - Given an array of data and a length, prints the array to the screen
 *	3. find_median() - Given an array of data and a length, returns the median value
 *	4. find_mean() - Given an array of data and a length, returns the mean
 *	5. find_maximum() - Given an array of data and a length, returns the maximum
 *	6. find_minimum() - Given an array of data and a length, returns the minimum
 *	7. sort_array() - Given an array of data and a length, sorts the array from largest to 
 *	   smallest. (The zeroth Element is the largest value, and the last element (n-1) 
 *	   is the smallest value.)
 *	8. main()-function
 *	
 *
 * @author Patrizia Stutzenstein 
 * @date 02\12\2020 
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {


  /* Other Variable Declarations Go Here */

    int n = SIZE;
    float median, mean;
    int max, min;

  /* Statistics and Printing Functions Go Here */
    printf("\n");

    printf("The unsorted array: ");
    print_array(test, n);
    printf("\n");

    sort_array(test, n);
    printf("\n");
    printf("The sorted array: ");
    print_array(test, n);
    printf("\n");
    printf("\n");

    printf("\n");
    print_statistics(test, n);
    printf("\n");
}

/* Add other Implementation File Code Here */


void print_statistics(unsigned char *a, int n){

    float median, mean;
    int max, min;

    printf("Statistical values of the array: ");
    printf("\n");

    min = find_min(test, n);
    printf("The minimum value is %d." , min);
    printf("\n");

    max = find_max(test, n);
    printf("The maximum value is %d." , max);
    printf("\n");

    mean = find_mean(test, n);
    printf("The mean is %f." , mean);
    printf("\n");

    sort_array(test, n);
    median = find_median(test, n);
    printf("The median is %f.", median);
    printf("\n");

}


void print_array(unsigned char *a, int n){

    for(int i = 0; i < n; i++)
      printf("%d ", a[i]);
}


float find_median(unsigned char *a, int n){
   
    float median;
    
    if(n%2 == 0)

      median = (a[(n-1)/2] + a[n/2])/2.0;

    else median = a[n/2];
    
    
    return median;
}


float find_mean(unsigned char *a, int n){

    float sum = 0, mean;

    for (int i = 0; i < n; ++i) 
      sum += a[i];
	

    mean = sum/n;

    return mean;
}


int find_max(unsigned char *a, int n){
    int index = 0;
    int max;

    for (int i = 1; i < n; i++)
      if (a[i] > a[index])
        index = i;

    max = a[index];

    return max;
}


int find_min(unsigned char *a, int n){
    int index = 0;
    int min;

    for (int i = 1; i < n; i++)
      if (a[i] < a[index])
        index = i;

    min = a[index];

    return min;
}


void sort_array(unsigned char *a, int n) 
{ 
    int i=0 , j=0 , temp=0;

    for(i=0 ; i<n ; i++)
      {
        for(j=0 ; j<n ; j++)
          {
            if(a[j]<a[j+1])
              {
                temp        = a[j];
                a[j]        = a[j+1];
                a[j+1]      = temp;
              }
          }
      }
}



