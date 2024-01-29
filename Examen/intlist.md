Quel problème constatez-vous en exécutant le programme ? (note : vous pouvez l'interrompre par CTRL-C)

print_list_slow

Quel est la raison de ce problème ?

Le code créer une boucle infinie. Elle est due à ka création d'une boucle dans la liste chainée.
head->next->next->next->next = head->next;

Décrivez un algorithme permettant de détecter une liste chaînée ayant ce problème.

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

Algorithme des pointeurs "fast" et du "slow" pour détecter une boucle dans une liste chaînée. 
Elle parcourt la liste en utilisant deux pointeurs l'un progresse plus vite que l'autre et vérifie ils se recontrent. 
Si ils se rencontrent c'est qu'il ya une boucle dans la liste chinée.