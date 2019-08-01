//
// Created by Jung Yun Gyo on 2019-07-28.
//

#ifndef DATASTRUCTURE_CIRCULARQUEUE_H
#define DATASTRUCTURE_CIRCULARQUEUE_H

typedef struct circularqueue{
    int maxSize;
    int size;
    int front;
    int rear;
    char* data;
} CircularQueue;

extern CircularQueue circularqueue_create(int maxSize);
extern int circularqueue_empty(CircularQueue* cq);
extern int circularqueue_full(CircularQueue* cq);
extern int circularqueue_size(CircularQueue* cq);
extern int circularqueue_push(CircularQueue* cq, char data);
extern int circularqueue_pop(CircularQueue* cq);
extern char circularqueue_front(CircularQueue* cq);
extern char circularqueue_back(CircularQueue* cq);
extern int circularqueue_delete(CircularQueue* cq);
#endif //DATASTRUCTURE_CIRCULARQUEUE_H
