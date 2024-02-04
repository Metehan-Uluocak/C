#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char data[50];
    int priority;
    struct node *next;
};

const char *priorityList[] = {
    "Annem", "Babam", "Kardesim",
    "Amcam", "Dayim", "Halam", "Teyzem",
    "Isyeri", "Okul",
    "Arkadasim1", "Arkadasim2", "Arkadasim3", "Arkadasim4", "Arkadasim5",
    "Banka", "Kargo",
    "Reklam"
};

int Priority(char *person) {
    int i;
    for (i = 0; i < sizeof(priorityList) / sizeof(priorityList[0]); ++i) {
        if (strcmp(person, priorityList[i]) == 0)
            return i + 1;
    }
    return sizeof(priorityList) / sizeof(priorityList[0]) + 1;
}

struct node *enqueue(struct node *start, char *person) {
    struct node *ptr, *p, *prev;
    int pri = Priority(person);

    ptr = (struct node *)malloc(sizeof(struct node));

    strcpy(ptr->data, person);
    ptr->priority = pri;

    if (start == NULL || pri < start->priority) {
        ptr->next = start;
        start = ptr;
    }
    else
    {
        p = start;
        prev = NULL;
        while (p != NULL && pri >= p->priority)
        {
            if (pri == p->priority && strcmp(person, p->data) < 0)
                break;
            else{
                prev = p;
                p = p->next;
            }

        }
        ptr->next = p;
        if (prev != NULL)
            prev->next = ptr;
        else
            start = ptr;
    }
    return start;
}

void display(struct node **start) {
    struct node *ptr = *start;

    while (ptr != NULL) {
        printf("%s\n", ptr->data);
        ptr = ptr->next;
    }

}

int main()
{
    struct node *start = NULL;
    char person[50];

    while (1)
    {
        scanf("%s", person);
        if (strcmp(person, "-1") == 0)
            break;
        else
            start = enqueue(start, person);
    }

    display(&start);

    return 0;
}
