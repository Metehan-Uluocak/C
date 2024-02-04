#include <stdio.h>
#include <stdlib.h>

struct node
{
    int sNumber;
    int Grade;
    struct node *right;
    struct node *left;
};

struct node *newNode(int sNumber, int grade)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->sNumber = sNumber;
    newnode->Grade = grade;
    newnode->left = newnode->right = NULL;
    return newnode;
}

struct node *insertNode(struct node *node, int sNumber, int grade)
{
    if (node == NULL)
        return newNode(sNumber, grade);

    if (grade < node->Grade)
        node->left = insertNode(node->left, sNumber, grade);
    else
        node->right = insertNode(node->right, sNumber, grade);

    return node;
}

void printTree(struct node *node)
{
    if (node == NULL)
        return;

    printTree(node->left);
    printf("%d %d\n", node->sNumber, node->Grade);
    printTree(node->right);
}

struct bfsnode
{
    struct node *parent;
    struct node *child;
    char side[4];
    int level;
};

struct queue
{
    struct bfsnode q[100];
    size_t head;
    size_t tail;
};

void bfs_init(struct queue *q)
{
    q->head = q->tail = 0;
}

void queue_add(struct queue *q, struct node *parent, struct node *child, int level, char side)
{
    q->q[q->head] = (struct bfsnode){parent, child, {side, '\0'}, level};
    q->head = (q->head + 1) % 100;
}

int queue_empty(struct queue *q)
{
    return q->head == q->tail;
}

struct bfsnode *queue_remove(struct queue *q)
{
    size_t curr = q->tail;
    q->tail = (q->tail + 1) % 100;
    return &q->q[curr];
}

void printParent(struct node *node)
{
    if (node == NULL)
    {
        return;
    }

    int level = 0;
    struct queue q;
    bfs_init(&q);

    if (node->left)
        queue_add(&q, node, node->left, level + 1, 'L');
    if (node->right)
        queue_add(&q, node, node->right, level + 1, 'R');

    printf("%d %d", node->sNumber, node->Grade);

    while (!queue_empty(&q))
    {
        struct bfsnode *data = queue_remove(&q);

        if (data->level != level)
        {
            printf("\n");
            level = data->level;
        }
        else
            printf(" ");

        struct node *child = data->child;

        if (child->left)
            queue_add(&q, child, child->left, level + 1, 'L');
        if (child->right)
            queue_add(&q, child, child->right, level + 1, 'R');

        printf("%d %d (%d %s)", child->sNumber, child->Grade, data->parent->Grade, data->side);
    }
}

int main()
{
    struct node *head = NULL;
    int sNumber, grade;

    while (1)
    {
        scanf("%d", &sNumber);

        if (sNumber == -1)
            break;

        scanf("%d", &grade);
        head = insertNode(head, sNumber, grade);
    }

    printTree(head);
    printf("\n");
    printParent(head);
    printf("\n");

    return 0;
}
