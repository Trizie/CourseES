/**
 * @file data.c
 * @brief int <---> ASCII conversion functions
 *
 *  
 *
 * @author 
 * @date 
 *
 */

#include "data.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "memory.h"
#include <stdbool.h>

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){

	int i = 0;
	bool isNegative = false;

	if(data == 0)
	{
		ptr[i++] = '0';
        	ptr[i] = '\0';
        	return ptr;
    	}

	if (data < 0 && base == 10)
	{
        	isNegative = true;
        	data = -data;
	}

	while (data != 0)
    	{
        	int rem = data % base;
        	ptr[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        	data = data/base;
    	}

	if (isNegative)
        	ptr[i++] = '-';
  
    	ptr[i] = '\0'; //terminator
  
    
    	reverse(ptr, i);
  
    	return ptr;
}

uint8_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){

	uint8_t res = 0; 
	int i = 1, rem, x;

	for(x = 0; x <= digits; x++){
	while(ptr[x] != 0){
		
		rem = ptr[x] % base;
		res = res + (i * rem);
		ptr[x] = ptr[x] / base;
		i = i * 10;
		}

	return res;
}

}
