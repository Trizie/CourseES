#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------

include sources.mk

PLATFORM = HOST

TARGET = c1m4

# Platform Overrides
ifeq ($(PLATFORM),HOST)
CC = gcc
else
CC = arm-none-eabi-gcc
endif



ifeq ($(PLATFORM),MSP432)

# Architectures Specific Flags
LINKER_FILE = msp432p401r.lds
CPU = cortex-m4
ARCH = mthumb
SPECS = nosys.specs

# Compiler Flags and Defines
CFLAGS = -Wall -Werror -g -O0 -std=c99 -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfloat-abi=hard -mfpu=fpv4-sp-d16 --specs=nosys.specs
LDFLAGS = -T msp432p401r.lds
LD = arm-none-eabi-ld

else
CFLAGS = -Wall -Werror -g -O0 -std=c99 

LDFLAGS = -Wl,-Map=$(TARGET).map 

SIZE = size

endif



CPPFLAGS = -DHOST -DCOURSE1 -DVERBOSE $(INCLUDES)  
# -MD -MP -MM


OBJS = $(SOURCES:.c=.o)
ASM = $(SOURCES:.c=.asm)
DEP = $(SOURCES:.c=.d)
PRE = $(SOURCES:.c=.i)


%.o: %.c 
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -o $@

%.asm: %.c
	$(CC) -S $< $(CFLAGS) $(CPPFLAGS) -o $@
	
%.i: %.c
	$(CC) -E $< $(CPPFLAGS) -o $@

%.d: %.c
	$(CC) -E -M $< $(CPPFLAGS) -o $@


.PHONY: compile-all

compile-all: $(OBJS)


.PHONY: build

build: $(TARGET).out

$(TARGET).out: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@
	$(SIZE) $@


.PHONY: clean
clean:
	rm -f $(OBJS) $(ASM) $(DEP) $(PRE) $(TARGET).out $(TARGET).map





