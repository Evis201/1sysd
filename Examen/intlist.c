#include<stdio.h>
#include<stdlib.h>

typedef struct node node;
struct node {
   int val;
   node *next;
};

node *create_node(int val) {
    node *p;
    p = malloc(sizeof(node));
    p->val = val;
    p->next = NULL;
    return p;
}

void print_list(node *head) {
    node *walk;

    walk = head;
    while (walk != NULL) { // ou juste walk 
        printf("%d ", walk->val);
        walk = walk->next;
    }
    printf("\n");
}

node *append_val(node *head, int val) {
    node *newnode, *walk;

    newnode = create_node(val);
   
    // note : on peut omettre tous les "!= NULL"
    // un pointeur est "faux" ssi il est NULL
    if (head == NULL) { // liste vide
        head = newnode;
    } else {            // on parcourt la liste jusqu'à la fin
        walk = head;
        while (walk->next != NULL) { // on va jusqu'au dernier nœud
            walk = walk->next;
        }
        walk->next = newnode; // on ajoute le nouvel élément
    }
    return head;
}

// TODO: à vous
node *removelast(node *head) {
    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    node *walk = head;
    while (walk->next->next != NULL) {
        walk = walk->next;
    }
    free(walk->next);
    walk->next = NULL;
    return head;
}

void double_list(node *head) {
    node *walk = head;
    while (walk != NULL) {
        walk->val *= 2;
        walk = walk->next;
    }
}

int main() {
    node *head = NULL;
    node *empty = NULL;

    head = append_val(head, 42);
    print_list(head);
    head = append_val(head, 12);
    print_list(head);
    head = append_val(head, 100);
    print_list(head);
    head = append_val(head, -5);
    print_list(head);
    head = append_val(head, 41);

    print_list(head);

    // Double la list et affiche
    double_list(head);
    print_list(head);

    // code test pour remove last
    head = removelast(head);
    print_list(head);

    // Et si la liste est vide ?
    empty = removelast(empty);
    print_list(empty);


}
