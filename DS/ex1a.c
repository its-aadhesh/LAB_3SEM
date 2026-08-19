#include <stdio.h>
#include <stdlib.h>
#define size 5
int s[size], top = -1, i, x;
int main() {
   int ch;
   printf("Array Implementation of Stack ");
   while (1) {
       printf("\n 1. Push 2. Pop 3. Display 4. Exit");
       printf("\n Enter your choice: ");
       scanf("%d", &ch);
       switch (ch) {
           case 1:  printf("Enter value to push: ");
                        scanf("%d", &x);
                        if (top == size - 1) {
                        printf("Stack is FULL\n");
                        } else {
                        top = top + 1;
                        s[top] = x;
                        printf("%d pushed onto stack\n", x);
                      }
                      break;
           case 2:if (top == -1) {
                      printf("Stack is empty\n");
                      } else {
                      x = s[top];
                      top = top - 1;
                      printf("%d popped from stack\n", x);
                    }
                     break;
           case 3: if (top == -1) {
                        printf("Stack is empty\n");
                       } else {
                       printf("Stack elements are:\n");
                      for (i = top; i >= 0; i--) {
                       printf("%d ", s[i]);
                      }
                      printf("\n");
                    }
                    break;
           case 4: exit (0);
                      default:
                      printf("Invalid choice\n");
       }
   }
}
 