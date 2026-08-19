#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node* next;
} node;
struct node *top = NULL, *tmp,*pre;
void main() {
    int ch;
    while (1) {
	printf("\n 1. Push 2. Pop 3. Display 4. Exit");
	printf("\n Enter your choice: ");
	scanf("%d", &ch);
	switch (ch) {
	    case 1:
		tmp = (node*)malloc(sizeof(node));
		printf("Enter element to push: ");
		scanf("%d", &tmp->data);
		tmp->next = top;
		top = tmp;
		break;
	    case 2: 
		if (top == NULL)
		    printf("Stack is empty\n");
		   else {
		    pre = top;
		     printf("Popped element: %d\n",top->data);
		    top = top->next;
		    free(pre);
		  }
		break;
	    case 3:
		if (top == NULL)
		    printf("Stack is empty\n");
		    else
		    for(pre=top;pre!= NULL;pre = pre->next)
		    printf("%d ", pre->data);
		   break;
	    case 4:exit(0);
	    default:printf("Invalid choice\n");
	}
    }
}
