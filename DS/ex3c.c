#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node* next;
} node;
node* front = NULL,* rear = NULL,  *tmp;
void main() {
int ch;
    while (1) {
	    printf("\n1.Insert@front 2.Insert@rear 3.Delete@front 4.Delete@rear 5.Display 6.Exit");
	    printf("\nEnter your choice: ");
        scanf("%d", &ch);
	    switch (ch) {
	        case 1:
		    tmp = (node*)malloc(sizeof(node));
		    printf("Enter element to be inserted at the front: ");
		    scanf("%d", &tmp->data);
	        tmp->next = front;
	        front = tmp;
		    if (rear == NULL)
		    rear = front;
	        break;
            case 2: 
		    tmp = (node*)malloc(sizeof(node));
		    printf("Enter element to be inserted at the rear: ");
	        scanf("%d", &tmp->data);
	        tmp->next = NULL;
	        if (rear == NULL)
	            front = rear = tmp;
	        else {
	            rear->next = tmp;
		        rear = tmp;
	        }
		    break;
	        case 3: 
	        if (front == NULL)
		        printf("\nDeque is empty\n");
		    else {
	            tmp = front;
	            front = front->next;
		        free(tmp);
		    }
		    break;
            case 4: 
	        if (front == NULL)
		        printf("\nDeque is empty\n");
		    else {
	            for (tmp = front; tmp->next != rear; tmp = tmp->next);
	            free(rear);
		        rear = tmp;
		        rear->next = NULL;
		    }
	        break;
            case 5:   if (front == NULL) //Display
		                    printf("Deque is empty.\n");
		    else {
	            printf("Deque elements: ");
	            for (tmp = front; tmp != NULL; tmp = tmp->next)
	            printf("%d ", tmp->data);
		    }
		    break;
	        case 6:exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
