//
// Created by Jung Yun Gyo on 2019-07-24.
//

#ifndef DATASTRUCTURE_QUEUE_H
#define DATASTRUCTURE_QUEUE_H

typedef struct queue{
    int maxSize;
    int size;
    char* data;
} Queue;

extern Queue queue_create(int maxSize);
extern int queue_empty(Queue* q);
extern int queue_full(Queue* q);
extern int queue_size(Queue* q);
extern int queue_push(Queue* q, char data);
extern int queue_pop(Queue* q);
extern char queue_front(Queue* q);
extern char queue_back(Queue* q);
extern int queue_delete(Queue* q);

#endif //DATASTRUCTURE_QUEUE_H
