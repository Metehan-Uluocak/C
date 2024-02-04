#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct intersectedNode
{
    int data;
    int index1;
    int index2;
    struct intersectedNode* next;
};

struct intersectedNode* intersected_nodes(struct node* list1, struct node* list2);

void insertNode(struct node** stcp, int x)
{
    struct node* nNode = (struct node*)malloc(sizeof(struct node));
    nNode->data = x;
    nNode->next = NULL;

    if (*stcp == NULL)
    {
        *stcp = nNode;
    }
    else
    {
        struct node* no = *stcp;
        while (no->next != NULL)
        {
            no = no->next;
        }
        no->next = nNode;
    }
}

void printNodes(struct intersectedNode* stcp) {
    if (stcp == NULL)
    {
        printf("-1\n");
        return;
    }

    while (stcp != NULL)
    {
        printf("%d %d %d\n", stcp->data, --(stcp->index1), --(stcp->index2));
        stcp = stcp->next;
    }
}

void findNodes(struct node* stcp1, struct node* stcp2, struct intersectedNode** stcp3)
{

    struct intersectedNode* intersectedHead = NULL;
    struct intersectedNode* intersectedTail = NULL;
    struct node* no1 = stcp1;
    int index1 = 1;

    while (no1 != NULL)
    {
        struct node* no2 = stcp2;
        int index2 = 1;

        while (no2 != NULL)
        {
            if (no1->data == no2->data)
            {
                struct intersectedNode* nNode = (struct intersectedNode*)malloc(sizeof(struct intersectedNode));
                nNode->data = no1->data;
                nNode->index1 = index1;
                nNode->index2 = index2;
                nNode->next = NULL;

                if (intersectedHead == NULL)
                {
                    intersectedHead = nNode;
                    intersectedTail = nNode;
                }
                else
                {
                    intersectedTail->next = nNode;
                    intersectedTail = intersectedTail->next;
                }
            }

            no2 = no2->next;
            index2++;
        }

        no1 = no1->next;
        index1++;
    }

    *stcp3 = intersectedHead;
}


int main()
{
    struct node* stcp1 = NULL;
    struct node* stcp2 = NULL;
    struct intersectedNode* stcp3 = NULL;
    int a , b;


    scanf("%d", &a);
    while (a != -1)
    {
        insertNode(&stcp1, a);
        scanf("%d", &a);
    }



    scanf("%d", &b);
    while (b != -1)
    {
        insertNode(&stcp2, b);
        scanf("%d", &b);
    }

    findNodes(stcp1, stcp2, &stcp3);
    printNodes(stcp3);

    return 0;
}

