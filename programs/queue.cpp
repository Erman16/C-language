#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE  10
#define EMPTY   -1

typedef struct tagQueue {
    int* pData;
    int size;
    int itemCount;
    int front;
    int rear;
}queue;

queue* CreateQueue(int size)
{
    queue* pQueue;

    pQueue = (queue*) malloc(sizeof(queue));
    if (NULL == pQueue) {
        fprintf(stderr, "Can NOT allocate memory for queue structure!\n");
        exit(EXIT_FAILURE);
    }
    pQueue->pData = (int*) malloc(sizeof(int) * size);
    if (NULL == pQueue->pData) {
        fprintf(stderr, "Can NOT allocate memory for queue DATA!\n");
        exit(EXIT_FAILURE);
    }

    pQueue->size = size;
    pQueue->front = 0;
    pQueue->rear = 0;
    pQueue->itemCount = 0;

    return pQueue;
}

int IsFull(queue* pQueue)
{
    return (pQueue->itemCount == pQueue->size) ? 1 : 0;
}

int IsEmpty(queue* pQueue)
{
    return (0 == pQueue->itemCount) ? 1 : 0;
}

void DestroyQueue(queue* pQueue)
{
    if (NULL != pQueue) {
        free(pQueue->pData);
        free(pQueue);
    }
}

int Put(queue* pQueue, int data)
{
    if (1 == IsFull(pQueue)) {
        fprintf(stderr, "PUT --> queue is FULL\n");
        return 0;
    }

    pQueue->pData[pQueue->rear] = data;
    ++pQueue->itemCount;
    // CIRCULAR queue UPDATE for rear!
    pQueue->rear = (pQueue->rear + 1) % pQueue->size;

    return 1;

}

int Get(queue* pQueue, int* pData)
{
    if (1 == IsEmpty(pQueue)) {
        fprintf(stderr, "GET --> queue is EMPTY");
        return 0;
    }

    *pData = pQueue->pData[pQueue->front];
    --pQueue->itemCount;
    // CIRCULAR queue UPDATE for front!
    pQueue->front = (pQueue->front + 1) % pQueue->size;

    return  1;

}

int Peek(queue* pQueue, int* pData)
{
    if (1 == IsEmpty(pQueue)) {
        fprintf(stderr, "PEEK --> queue is EMPTY");
        return 0;
    }

    *pData = pQueue->pData[pQueue->front];

    return  1;
}


int main()
{
    queue* pQueue;
    int i, data;

    pQueue = CreateQueue(QUEUE_SIZE);

    for (i = 0; i < QUEUE_SIZE; ++i)
        if (0 == Put(pQueue, i + 1))
            printf("Can NOT PUT data into queue%d\n", i + 1);

    if (1 == Peek(pQueue, &data))
        printf("PEEKed data from queue : %d\n", data);

    for (i = 0; i < QUEUE_SIZE; ++i)
        if (1 == Get(pQueue, &data))
            printf("GOT data from queue : %d\n", data);


    DestroyQueue(pQueue);

    return 0;
}
