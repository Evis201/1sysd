#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

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

void print_list_slow(node *head) {
    node *walk;

    walk = head;
    while (walk != NULL) { // ou juset walk 
        printf("%d ", walk->val);
        fflush(stdout);
        walk = walk->next;
        sleep(1);
    }
    printf("\n");
}

node *append_val(node *head, int val) {
    node *newnode, *walk;

    newnode = create_node(val);

    if (head == NULL) {
        head = newnode;
    } else {
        walk = head; // Le code créer une boucle infinie. Elle est due à ka création d'une boucle dans la liste chainée.
        while (walk->next != NULL) {
            walk = walk->next;
        }
        walk->next = newnode;
    }
    return head;
}

int main() {
    node *head = NULL;

    head = append_val(head, 42);
    head = append_val(head, 12);
    head = append_val(head, -5);
    head = append_val(head, 41);
    print_list_slow(head);

    head->next->next->next->next = head->next;
    print_list_slow(head);
}

/*
int has_loop(node *head) {
    node *fast = head;
    node *slow = head;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow) {
            return 1; // Il y a une boucle dans la liste chainée.
        }
    }

    return 0;
}
*/
//Algorithme des pointeurs "fast" et du "slow" pour détecter une boucle dans une liste chaînée. 
//Elle parcourt la liste en utilisant deux pointeurs l'un progresse plus vite que l'autre et vérifie ils se recontrent. 
//Si ils se rencontrent c'est qu'il ya une boucle dans la liste chinée.