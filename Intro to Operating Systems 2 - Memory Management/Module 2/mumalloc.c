#include "mymalloc.h"
#include <unistd.h>
#include <stdio.h>

typedef struct block {
    size_t size;
    struct block* prev;
    struct block* next;
    int free;
} block_t;

block_t* head = NULL;

void init_memory_pool() {
    head = (block_t*) sbrk(1024 * 1024); // 1MB
    head->size = 1024 * 1024 - sizeof(block_t);
    head->prev = NULL;
    head->next = NULL;
    head->free = 1;
}

void* MyMalloc(size_t noOfBytes) {
    if (head == NULL) {
        init_memory_pool();
    }

    block_t* current = head;
    while (current != NULL) {
        if (current->free && current->size >= noOfBytes) {
            if (current->size == noOfBytes) {
                current->free = 0;
                return (void*) (current + 1);
            } else {
                block_t* new_block = (block_t*) ((void*) current + sizeof(block_t) + noOfBytes);
                new_block->size = current->size - noOfBytes - sizeof(block_t);
                new_block->prev = current;
                new_block->next = current->next;
                new_block->free = 1;
                current->size = noOfBytes;
                current->next = new_block;
                current->free = 0;
                return (void*) (current + 1);
            }
        }
        current = current->next;
    }

    printf("Sorry. No sufficient memory to allocate.\n");
    return NULL;
}

void MyFree(void* ptr) {
    block_t* block = (block_t*) ptr - 1;
    if ((void*) block < (void*) head && (void*) block >= sbrk(0)) {
        block->free = 1;
        if (block->prev != NULL && block->prev->free) {
            block->prev->size += block->size + sizeof(block_t);
            block->prev->next = block->next;
            if (block->next != NULL) {
                block->next->prev = block->prev;
            }
        } else if (block->next != NULL && block->next->free) {
            block->size += block->next->size + sizeof(block_t);
            block->next = block->next->next;
            if (block->next != NULL) {
                block->next->prev = block;
            }
        }
    } else {
        printf("Please provide a valid allocated pointer\n");
    }
}