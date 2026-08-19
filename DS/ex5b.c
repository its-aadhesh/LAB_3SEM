#include <stdio.h>
#include <ctype.h>
int main() {
    int top = -1,i=0;
    char exp[100],x, stack[100];
    printf("Enter the expression: ");
    scanf("%s", exp);
    while (exp[i] != '\0') {
	    if(isalnum(exp[i])){
	        printf("%c ", exp[i]);
	    }else if (exp[i] == '(') {
	        stack[++top] = exp[i];
	    }else if (exp[i] == ')') {
	        while (top != -1 && (x = stack[top--]) != '(') {
		        printf("%c ", x);
	        }   
	    } else {
	        while (top != -1 && ((stack[top] == '*' || stack[top] == '/') ||
		        ((stack[top] == '+' || stack[top] == '-') && (exp[i] == '+' || exp[i] == '-')))) {
		        printf("%c ", stack[top--]);
	        }
	        stack[++top] = exp[i];
	    }   
	    i++;
    }
    while (top != -1) {
	    printf("%c ", stack[top--]);
    }
    getchar();
    return 0;
}