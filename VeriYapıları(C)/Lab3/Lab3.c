#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char songName[50];
    int songNumber;
    struct node* prev;
    struct node* next;
};

struct node* Node(char name[], int num)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    strncpy(newNode->songName, name, 50);
    newNode->songNumber = num;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct node** start, struct node* newNode)
{
    if (*start == NULL)
    {
        *start = newNode;
    }
    else
    {
        struct node* current = *start;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

void printPlaylist(struct node* start, char harf, int step)
{
    if (start == NULL)
    {
        return;
    }

    struct node* current;
    if (harf == 'B')
    {
        current = start;
    }
    else if (harf == 'S')
    {
        current = NULL;
        while (start->next != NULL)
        {
            start = start->next;
        }
        current = start;
    }


    while (current != NULL) {
        printf("%s\n", current->songName);
        for (int i = 0; i < step+1; i++)
        {
            if (harf == 'B')
            {
                if (current->next != NULL)
                {
                    current = current->next;
                }
                else
                {
                    return;
                }
            }
            else if (harf == 'S')
            {
                if (current->prev != NULL)
                {
                    current = current->prev;
                }
                else
                {
                    return;
                }
            }
        }
    }
}

int main()
{
    struct node* playlist = NULL;
    char songName[50];
    int songNumber = 1;
    char start;
    int step;

    while (1) {

        if (fgets(songName, sizeof(songName), stdin) == NULL)
        {
            break;
        }
        if (strcmp(songName, "-1\n") == 0)
        {
            break;
        }
        songName[strlen(songName) - 1] = '\0';
        struct node* newNode = Node(songName, songNumber++);
        insertNode(&playlist, newNode);
    }


    scanf(" %c", &start);
    scanf("%d", &step);

    printPlaylist(playlist, start, step);

    return 0;
}
