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

/* Add Your Declarations and Function Comments here 

unsigned char test[40] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88, 45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


*/
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





#endif /* __STATS_H__ */
