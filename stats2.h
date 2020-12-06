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
 * @file stats.h 
 * @brief header file for the file stats.c
 *
 * the unsigned char array test is defined in this file, as well as 7 functions:
 * 1. print_array()
 * 2. sort_array()
 * 3. find_median()
 * 4. find_mean()
 * 5. find_max()
 * 6. find_min()
 * 7. print_statistics()
 *
 * @author Patrizia Stutzenstein
 * @date 02/12/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

unsigned char test[40] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88, 45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


/**
 * @brief function to print values of an array
 *
 * This function takes a pointer to an array and an integer (size of the array).
 * It then prints each value of the array.
 *
 * @param *a A unsigned char pointer to an n-element data array
 * @param n integer size of the array
 *
 * @return no return, void function
 */

void print_array(unsigned char *a, int n);



/**
 * @brief function to sort values of an array from highest to lowest
 *
 * This function takes a pointer to an array and an integer (size of the array).
 * It then sorts each value of the array from highest to lowest.
 *
 * @param *a A unsigned char pointer to an n-element data array
 * @param n integer size of the array
 *
 * @return no return, void function
 */

void sort_array(unsigned char *a, int n);



/**
 * @brief function to find the median value of an array 
 *
 * This function takes a pointer to an array and an integer (size of the array).
 * It then finds the median value of the array by either taking the middle value of n or computing the median between the two middle values (is n is an even number). The array has to be sorted before this function is applied. 
 *
 * @param *a A unsigned char pointer to an n-element data array
 * @param n integer size of the array
 *
 * @return the float median
 */

float find_median(unsigned char *a, int n);


/**
 * @brief function to find the mean value of an array 
 *
 * This function takes a pointer to an array and an integer (size of the array).
 * It then finds the mean value of the values of an array by calculating the sum of all values in 
 * the array and dividing it by n. 
 *
 * @param *a A unsigned char pointer to an n-element data array
 * @param n integer size of the array
 *
 * @return the float mean
 */

float find_mean(unsigned char *a, int n);


/**
 * @brief function to find the maximum value of an array 
 *
 * This function takes a pointer to an array and an integer (size of the array).
 * It then finds the maximum value of an array by going trough the array, comparing a value to 
 * an index value. The higher value is always saved in the index value. In the end, the 
 * index value is the maxium value.
 *
 * @param *a A unsigned char pointer to an n-element data array
 * @param n integer size of the array
 *
 * @return the int max
 */

int find_max(unsigned char *a, int n);


/**
 * @brief function to find the minimum value of an array 
 *
 * This function takes a pointer to an array and an integer (size of the array).
 * It then finds the minimum value of an array by going trough the array, comparing a value to 
 * an index value. The lower value is always saved in the index value. In the end, the 
 * index value is the minimum value.
 *
 * @param *a A unsigned char pointer to an n-element data array
 * @param n integer size of the array
 *
 * @return the int min
 */
int find_min(unsigned char *a, int n);


/**
 * @brief function to display statistical values of an array 
 *
 * This function takes a pointer to an array and an integer (size of the array).
 * It then uses different existing functions (see functions above) to display the minimum,   
 * maximum, mean and median value of an array. The values are also printed in this function.
 *
 * @param *a A unsigned char pointer to an n-element data array
 * @param n integer size of the array
 *
 * @return void function
 */

void print_statistics(unsigned char *a, int n);


#endif /* __STATS_H__ */
