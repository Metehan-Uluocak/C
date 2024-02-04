#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    int balance;
    struct Node* left;
    struct Node* right;
};

struct bfsnode {
    struct Node* parent;
    struct Node* child;
    char side[4];
    int level;
};

struct queue {
    struct bfsnode q[100];
    int head;
    int tail;
};


int height(struct Node* node);
int getBalance(struct Node* node);
struct Node* balanceNode(struct Node* root, int key);
struct Node* insert(struct Node* root, int key);
void inOrderTraversal(struct Node* root);
void printAVL(struct Node* root);
void bfs_init(struct queue* q, size_t size);
void queue_add(struct queue* q, struct Node* parent, struct Node* child, int level, char side);
int queue_empty(struct queue* q);
struct bfsnode* queue_remove(struct queue* q);
void freeTree(struct Node* root);
struct Node* newNode(int key);
struct Node* rightRotate(struct Node* y);
struct Node* leftRotate(struct Node* x);

int main() {
    struct Node* root = NULL;
    int key;

    while (1) {
        scanf("%d", &key);

        if (key != -1)
            root = insert(root, key);
        else
            break;
    }

    inOrderTraversal(root);
    printAVL(root);
    printf("\n");

    return 0;
}

int height(struct Node* node) {
    if (node == NULL)
        return 0;
    int leftHeight = height(node->left);
    int rightHeight = height(node->right);
    if (leftHeight > rightHeight) {
        return leftHeight + 1;
    }
    else
    {
        return rightHeight + 1;
    }
}

int getBalance(struct Node* node) {
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

struct Node* balanceNode(struct Node* root, int key) {
    root->balance = getBalance(root);

    if (root->balance > 1 && key < root->left->key)
        return rightRotate(root);

    if (root->balance < -1 && key > root->right->key)
        return leftRotate(root);

    if (root->balance > 1 && key > root->left->key) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (root->balance < -1 && key < root->right->key) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

struct Node* insert(struct Node* root, int key) {
    if (root == NULL)
        return newNode(key);

    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    else
        return root;

    return balanceNode(root, key);
}

void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d\n", root->key);
        inOrderTraversal(root->right);
    }
}

void printAVL(struct Node* root) {
    struct queue q;
    bfs_init(&q, 100);

    if (root)
        queue_add(&q, NULL, root, 0, 'N');

    int currentLevel = -1;

    while (!queue_empty(&q)) {
        struct bfsnode* data = queue_remove(&q);

        struct Node* parent = data->parent;
        struct Node* child = data->child;

        if (data->level != currentLevel) {
            printf("\n");
            currentLevel = data->level;
        }
        else
            printf(" ");

        printf("%d ", child->key);

        if (data->level != 0) {
            if (data->parent->left == data->child)
                printf("(%d L) ", data->parent->key);
            else
                printf("(%d R) ", data->parent->key);
        }

        printf("(%d B)", child->balance);

        if (child->left)
            queue_add(&q, child, child->left, data->level + 1, 'L');

        if (child->right)
            queue_add(&q, child, child->right, data->level + 1, 'R');
    }
}

void bfs_init(struct queue* q, size_t size) {
    q->head = q->tail = 0;
}

void queue_add(struct queue* q, struct Node* parent, struct Node* child, int level, char side) {
    q->q[q->head] = (struct bfsnode){parent, child, {side, '\0'}, level};
    q->head = (q->head + 1) % 100;
}

int queue_empty(struct queue* q) {
    return q->head == q->tail;
}

struct bfsnode* queue_remove(struct queue* q) {
    int curr = q->tail;
    q->tail = (q->tail + 1) % 100;
    return &q->q[curr];
}

void freeTree(struct Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

struct Node* newNode(int key) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key = key;
    node->balance = 0;
    node->left = node->right = NULL;

    return node;
}

struct Node* rightRotate(struct Node* y) {
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->balance = getBalance(y);
    x->balance = getBalance(x);

    return x;
}

struct Node* leftRotate(struct Node* x) {
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->balance = getBalance(x);
    y->balance = getBalance(y);

    return y;
}
