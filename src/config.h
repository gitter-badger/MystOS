#ifndef CONFIG_H
#define CONFIG_H

#define MYSTOS_INT_TOTAL 512 //Total interrupts set
#define KERNEL_CODE_SEGMENT 0x08 //Code segment
#define KERNEL_DATA_SEGMENT 0x10 //Data segment
#define MYSTOS_HEAP_TOTAL_SIZE 104857600
#define MYSTOS_HEAP_BLOCK_SIZE 4096
#define MYSTOS_HEAP_ADDRESS 0x01000000
#define MYSTOS_HEAP_TABLE_ADDRESS 0x00007E00
#define sti 1
#define cli 0

#endif