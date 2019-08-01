#include <stdio.h>
#include "datastructure/stack.h"
#include "datastructure/queue.h"
#include "datastructure/circularqueue.h"
#include "datastructure/deque.h"

void stackTest();
void queueTest();
void circularqueueTest();
void dequeTest();

int main() {
    dequeTest();
    return 0;
}

void stackTest()
{
    Stack stack = stack_init(5);

    printf("%d\n", stack_empty(&stack));
    stack_push(&stack, 'a');
    stack_push(&stack, 'd');
    printf("%c\n", stack_top(&stack));
    stack_pop(&stack);
    stack_push(&stack, 'f');
    stack_push(&stack, 'c');
    printf("%d\n", stack_empty(&stack));
    stack_delete(&stack);
    printf("%c\n", stack_top(&stack));
}

void queueTest()
{
    Queue q = queue_create(4);

    printf("%d\n", queue_empty(&q));
    queue_push(&q, 'c');
    queue_push(&q, 'h');
    printf("%d\n", queue_size(&q));
    queue_push(&q, 'a');
    queue_push(&q, 'r');
    printf("%d\n", queue_full(&q));
    printf("%d\n", queue_empty(&q));
    printf("%c\n", queue_front(&q));
    printf("%c\n", queue_back(&q));
    queue_pop(&q);
    queue_pop(&q);
    printf("%c\n", queue_front(&q));
    printf("%c\n", queue_back(&q));
    queue_pop(&q);
    printf("%c\n", queue_back(&q));
    printf("%c\n", queue_front(&q));
    printf("%d\n", queue_empty(&q));

    queue_delete(&q);
}

void circularqueueTest()
{
    CircularQueue cq = circularqueue_create(8);
    circularqueue_push(&cq, 'A');
    circularqueue_push(&cq, 'B');
    circularqueue_front(&cq);
    circularqueue_back(&cq);
    circularqueue_push(&cq, 'C');
    circularqueue_pop(&cq);
    circularqueue_front(&cq);
    circularqueue_push(&cq, 'D');
    circularqueue_back(&cq);
    circularqueue_push(&cq, 'E');
    circularqueue_pop(&cq);
    circularqueue_front(&cq);
    circularqueue_push(&cq, 'F');
    circularqueue_back(&cq);
    circularqueue_push(&cq, 'G');
    circularqueue_pop(&cq);
    circularqueue_front(&cq);
    circularqueue_push(&cq, 'H');
    circularqueue_pop(&cq);
    circularqueue_front(&cq);

    circularqueue_delete(&cq);
}

void dequeTest()
{
    Deque dq = deque_create(8);
    
    deque_delete(&dq);
}