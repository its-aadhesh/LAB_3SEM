#include <stdio.h>
#include <stdlib.h>
#define SIZE 5  
int main() {
   int q[SIZE];
   int f = -1, r = -1;
   int choice, element,i;
    while (1) {
        printf("\n1. Enq 2. Deq 3. Display 4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: if ((f == (r + 1) % SIZE))
            printf("Queue is Full\n");
            else {
                if(f==-1)
                f=0;
                printf("Enter the element to enq: ");
                scanf("%d", &element);
                r = (r + 1) % SIZE; 
                q[r] = element;
                printf("Inserted %d\n", element);
            }
            break;
            case 2:  if (f == -1)
            printf("Queue is Empty\n");
            else {
                printf("Deleted %d\n", q[f]);
            }
            if (f == r)   
                f = r = -1;
            else {
                f = (f + 1) % SIZE;  
            }
            break;
            case 3: if (f == -1) 
            printf("Queue is Empty\n");
            else {
                printf("Queue elements: ");
                for( i = f;i != r;i =(i+1)% SIZE)
                    printf("%d ", q[i]);
                    printf("%d\n", q[r]);
            }
            break;
            case 4:exit(0);
                default: printf("Invalid choice\n");
        }
    }
}
