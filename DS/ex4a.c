#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int co, po; 
     struct node* next; 
} node;
struct node *poly =NULL,*poly1, *poly2,*tmp,*cur;
void insert(node** poly, int co, int po){
    tmp = (node*)malloc(sizeof(node));
    tmp->co = co;
    tmp->po = po;
    tmp->next = NULL;
    if (*poly == NULL)
	*poly = tmp;
    else {
        for(cur = *poly; cur->next != NULL; cur = cur->next){}
        cur->next= tmp;
	}
}

int main() {
    int i,n1,n2,co,po;
    printf("Enter the number of terms for polynomial 1: ");
    scanf("%d", &n1);
    for (i = 0; i < n1; ++i) {
	    printf("Enter coefficient and power for term %d: ", i + 1);
	    scanf("%d %d", &co, &po);
	    insert(&poly1, co, po);
    }
    printf("Enter the number of terms for polynomial 2: ");
    scanf("%d", &n2);
    for (i = 0; i < n2; ++i) {
	    printf("Enter coefficient and power for term %d: ", i + 1);
	    scanf("%d %d", &co, &po);
	    insert(&poly2, co, po);
    }
    while (poly1 != NULL && poly2 != NULL) {
	    if (poly1->po == poly2->po) {
	        insert(&poly, poly1->co + poly2->co, poly1->po);
	        poly1 = poly1->next;
	        poly2 = poly2->next;
	    } else if (poly1->po > poly2->po) {
	        insert(&poly, poly1->co, poly1->po);
	        poly1 = poly1->next;
	    } else {
	        insert(&poly, poly2->co, poly2->po);
	        poly2 = poly2->next;
	    }
    }
    printf("Resultant polynomial: ");
    for(cur = poly;cur != NULL;cur=cur->next){
	    printf("(%dx^%d)", cur->co, cur->po);
	    if(cur->next != NULL){
	        printf(" + ");
	    }
	}
    getchar();
    return 0;
}
