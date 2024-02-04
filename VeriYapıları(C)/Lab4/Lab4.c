#include <stdio.h>
#include <string.h>

#define SIZE 1000

struct Stack {
    char items[SIZE][1000];
    int top;
};

void push(struct Stack* stack, const char* item)
{
    if (stack->top != SIZE - 1)
    {
        strcpy(stack->items[++stack->top], item);
    }
}

char* pop(struct Stack* stack)
{
    if(stack->top != -1)
        return stack->items[stack->top--];
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

int checkTags(const char* html)
{
    struct Stack stack;
    stack.top = -1;

    for (int i = 0; html[i] != '\0'; ++i)
    {
        if (html[i] == '<')
        {
            if (html[i + 1] == '/')
            {
                char closingTag[20];
                int j = 0;
                i += 2;
                while (html[i] != '>')
                {
                    closingTag[j++] = html[i++];
                }
                closingTag[j] = '\0';

                char openingTag[20];
                strcpy(openingTag, pop(&stack));

                if (strcmp(openingTag, closingTag) != 0)
                {
                    printf("error <%s>\n", openingTag);
                    return 0;
                }
            }
            else
            {
                char openingTag[20];
                int j = 0;
                i++;
                while (html[i] != '>')
                {
                    openingTag[j++] = html[i++];
                }
                openingTag[j] = '\0';
                push(&stack, openingTag);
            }
        }
    }

    if (!isEmpty(&stack))
    {
        char* remainingTag = pop(&stack);
        printf("error <%s>\n", remainingTag);
        return 0;
    }

    printf("correct\n");
    return 1;
}

int main() {
    char html[SIZE];
    fgets(html, SIZE, stdin);

    html[strcspn(html, "\n")] = '\0';
    checkTags(html);

    return 0;
}
