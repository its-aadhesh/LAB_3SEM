#include <stdio.h>
#include <ctype.h>
void main() {
    char exp[100];
    int i = 0, n1, n2, n3,top=-1,stack[100];
    clrscr();
    printf("Enter the postfix expression: ");
    scanf("%s", exp);
      while (exp[i] != '\0') {
	if (isdigit(exp[i])) {
	    stack[++top] = exp[i] - '0';
	} else {
	    n1 = stack[top--];
	    n2 = stack[top--];
	    switch (exp[i]) {
		case '+': n3 = n2 + n1; break;
		case '-': n3 = n2 - n1; break;
		case '*': n3 = n2 * n1; break;
		case '/': n3 = n2 / n1; break;
	    }
	    stack[++top] = n3;
	}
	i++;
    }
    printf("The result of the expression is: %d\n", stack[top]);
  getch();
}