#include <stdio.h>
#include <stdlib.h>
#define size 5
int main() {
   int q[size], front = 0, rear = -1, ch, i, x;
   printf("\nArray Implementation of Queue\n");
   while (1) {
       printf("\n1. Enqueue 2. Dequeue 3. Display 4. Exit: ");
       printf("\nEnter your choice: ");
       scanf("%d", &ch);
       switch (ch) {
           case 1:                if (rear == size - 1) {
                   printf("Queue is full\n");
               } else {
                   printf("Enter element to enqueue: ");
                   scanf("%d", &x);
                   rear = rear + 1;
                   q[rear] = x;
               }
               break;
           case 2:                if (front > rear) {
                   printf("Queue is empty\n");
               } else {
                   x = q[front];
                   front = front + 1;
                   printf("Dequeued element: %d\n", x);
               }
               break;
           case 3:                if (front > rear) {
                   printf("Queue is empty\n");
               } else {
                   printf("Queue elements: ");
                   for (i = front; i <= rear; i++) {
                       printf("%d ", q[i]);
                   }
                   printf("\n");
               }
               break;
 
           case 4:
               exit(0);
 
           default:
               printf("Invalid choice\n");
       }
   }
}