//
// File: QueueADT.c
// QueueADT.c implements the interface QueueADT.h
//
// @author Ming Creekmore mec5765
// 
// @date 3/24/2022
//
// // // // // // // // // // // // // // // // // // // //

#define _QUEUE_IMPL_
#include "QueueADT.h"


static struct stackStruct {
    void **contents;
    size_t capacity;
    size_t num;
    int (*cmp)(const void *a, const void *b);
};

typedef struct stackStruct *QueueADT;

/// que_create makes a new QueueADT that will sort data based on
/// the comparision function given
QueueADT que_create(int (*cmp)(const void *a, const void *b)) {
    QueueADT queue;
    queue = (QueueADT) malloc(sizeof(struct stackStruct));
    if(queue != 0) {
        queue->contents = 0;
        queue->capacity = 0;
        queue->num = 0;
        queue->cmp = cmp;
    }
    return queue;
}

void que_destroy(QueueADT queue) {

}

void que_clear(QueueADT queue) {

}

void que_insert(QueueADT queue, void *data) {

}

void* que_remove(QueueADT queue) {

}

bool que_empty(QueueADT queue) {

}
