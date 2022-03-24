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
#include <assert.h>

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

/// que_destroy completely frees any memory associated with the 
/// given queue
void que_destroy(QueueADT queue) {
    assert(queue != 0);
    if(queue->contents != 0) {
        free(queue->contents);
    }
    free(queue);
}

/// que_clear removes all contents from queue and resets values
void que_clear(QueueADT queue) {
    assert(queue != 0);
    if(queue->contents != 0) {
        free(queue->contents);
        queue->contents = 0;
    }
    queue->capacity = 0;
    queue->num = 0;
}

void que_insert(QueueADT queue, void *data) {

}

/// que_remove removes and returns the first element in the list
void* que_remove(QueueADT queue) {
    int n;
    void *data;
    assert(!que_empty);
    n = stack->num -= 1;
    data = stack ->contents[n];
    return data;
}

/// que_empty tells whether given queue has any contents
bool que_empty(QueueADT queue) {
    return (queue->num == 0);
}
