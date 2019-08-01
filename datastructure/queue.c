//
// Created by Jung Yun Gyo on 2019-07-24.
//
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "queue.h"

void error(char *message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}

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
    if (queue_full(q)) error("Queue is full");
    else {
        q->data[++q->size] = data;
        return 1;
    }
}

int queue_pop(Queue* q)
{
    if (queue_empty(q)) error("Queue is empty");
    else {
        memmove(q->data, q->data + 1, q->size--);
        return 1;
    }
}

char queue_front(Queue* q)
{

    if (queue_empty(q)) error("Queue is empty");
    else {
        return *(q->data);
    }
}

char queue_back(Queue* q)
{

    if (queue_empty(q)) error("Queue is empty");
    else {
        return *(q->data + q->size);
    }
}

int queue_delete(Queue* q)
{
    free(q -> data);
    return 1;
}