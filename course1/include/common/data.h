/**
 * @file memory.h
 * @brief functions for int to ASCII conversion
 *
  
 *
 * @author 
 * @date 
 *
 */

#include <stdint.h>
#include <stdlib.h>

#ifndef __DATA_H__
#define __DATA_H__

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

uint8_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);

#endif /* __DATA_H__ */
