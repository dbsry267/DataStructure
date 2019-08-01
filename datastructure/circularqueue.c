//
// Created by Jung Yun Gyo on 2019-07-28.
//

#include "circularqueue.h"
#include <stdlib.h>
#include <stdio.h>

void error(char *message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}

CircularQueue circularqueue_create(int size)
{
    CircularQueue cq;
    cq.size = -1;
    cq.front = 0;
    cq.rear = 0;
    cq.maxSize = size;
    cq.data = (char *) malloc(sizeof(char) * cq.maxSize);
    return cq;
}

int circularqueue_empty(CircularQueue* cq)
{
    return (cq->size == -1);
}

int circularqueue_full(CircularQueue* cq)
{
    return (cq->size + 1 == cq->maxSize);
}

int circularqueue_size(CircularQueue* cq)
{
    return cq->size + 1;
}

int circularqueue_push(CircularQueue* cq, char data)
{
    if (circularqueue_full(cq)) error("CircularQueue is full");
    else {
        ++cq->rear;
        cq->rear %= cq->maxSize;
        cq->data[cq->rear] = data;
        ++cq -> size;
        return 1;
    }
}

int circularqueue_pop(CircularQueue* cq)
{
    if (circularqueue_empty(cq)) error("CircularQueue is empty");
    else {
        cq->data[cq->front++] = '\0';
        cq->front %= cq->maxSize;
        --cq -> size;
        return 1;
    }
}

char circularqueue_front(CircularQueue* cq)
{
    if (circularqueue_empty(cq)) error("CircularQueue is empty");
    else {
        return cq->data[(cq->front + 1) % cq->maxSize];
    }
}

char circularqueue_back(CircularQueue* cq)
{
    if (circularqueue_empty(cq)) error("CircularQueue is empty");
    else {
        return cq->data[cq->rear];
    }
}

int circularqueue_delete(CircularQueue* cq)
{
    free(cq -> data);
    return 1;
}