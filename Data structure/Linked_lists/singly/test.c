#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *p = NULL; // p works as head node

void display() {
    struct node *temp = p;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void del(struct node *t) {
    if (t == p) {
        p = t->next;
        free(t);
    } else {
        struct node *r = p;
        while (r->next != t) {
            r = r->next;
        }
        r->next = t->next;
        free(t);
    }
    display();
}

void search() {
    struct node *tmp;
    int e, found = 0;
    printf("Enter element to search\n");
    scanf("%d", &e);
    
    tmp = p;
    while (tmp != NULL) {
        if (tmp->data == e) {
            del(tmp);
            found = 1;
            break;
        }
        tmp = tmp->next;
    }
    if (!found) {
        printf("Element not found\n");
    }
}

int main() {
    struct node *new_node, *temp;
    int i, n;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter elements\n");
    for (i = 0; i < n; i++) {
        new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (p == NULL) {
            p = temp = new_node;
        } else {
            temp->next = new_node;
            temp = new_node;
        }
    }
    display();
    search();
    return 0;
}
