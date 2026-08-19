#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node* next;
} node;
struct node* front = NULL,*rear = NULL,*pre,*tmp;
void main() {
    int ch, x;
    while (1) {
	printf("\n1. Enqueue 2. Dequeue 3. Display 4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	switch (ch) {
	    case 1:tmp = (node*)malloc(sizeof(node));   
		printf("Enter element to enqueue: ");
		scanf("%d", &tmp->data);
		tmp->next = NULL;
		if (front == NULL)
		    front = rear = tmp;
		 else {
		    rear->next = tmp;
		    rear = tmp;
		}
		break;
	    case 2: if (front == NULL)  
		    printf("Queue is Empty\n");
		  else {
		    pre = front;
		    printf("Element dequeued: %d\n", front->data);
		    front = front->next;
		    free(pre);
		}
		break;
	     case 3: if (front == NULL)   
		    printf("Queue is empty\n");
		    else
		    for (pre = front; pre != NULL; pre = pre->next)
		    printf("%d ", pre->data);
		break;
	    case 4:exit(0);
	    default:printf("Invalid choice\n");
	    }
    }
}
