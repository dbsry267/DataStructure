//
// Created by Jung Yun Gyo on 2019-07-24.
//
#include <stdlib.h>
#include <string.h>
#include "queue.h"


Queue queue_create(int size)
{
    Queue q;
    q.size = -1;
    q.maxSize = size;
    q.data = (char *) malloc(sizeof(char) * q.maxSize);
    return q;
}

int queue_empty(Queue* q)
{
    return (q->size == -1);
}

int queue_full(Queue* q)
{
    return (q->size+1 == q->maxSize);
}

int queue_size(Queue* q)
{
    return q->size + 1;
}

int queue_push(Queue* q, char data)
{
    if (q->size == q->maxSize) {
        return -1;
    } else {
        q->data[++q->size] = data;
        return 1;
    }
}

int queue_pop(Queue* q)
{
    if (q->size < 1 || q->maxSize < 1) {
        return -1;
    } else {
        memmove(q->data, q->data + 1, q->size--);
        return 1;
    }
}

char queue_front(Queue* q)
{
    if (q->size < 0 || q->maxSize < 1) {
        return '\0';
    } else {
        return *(q->data);
    }
}

char queue_back(Queue* q)
{
    if (q->size < 0 || q->maxSize < 1) {
        return '\0';
    } else {
        return *(q->data + q->size);
    }
}

int queue_delete(Queue* q)
{
    free(q -> data);
    return 1;
}