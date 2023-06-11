#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;
int count =0;
//Kiem tra xem queue có trống không?
bool isEmpty() {
    return front == -1;
}
// Kiem tra xem queue có đầy không
bool isFull() {
    return rear == MAX_SIZE - 1;
}

//Them queue
void enqueue(int data) {
    if (isFull()) {
        printf("Queue is full\n");
    } else {
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        queue[rear] = data;
        printf("Enqueued %d\n", data);
        count ++;
    }
}
//Xoa queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    } else {
        int data = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
        printf("Dequeued %d\n", data);
        count --;
        return data;
    }
}

int size()
{
    printf("Size of queue: %d", count);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    size();    
    return 0;
}