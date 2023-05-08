
#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    char* name;
    char* location;
    int position;
    struct node* next;
} node_t;


int main()
{
    printf("hello, world\n");

    node_t* head = NULL;
    head = (node_t*)malloc(sizeof(node_t));
    if (head == NULL) {
        printf("1\n");
    }

    // head->val = 1;
    // head->next = NULL; 

}

// 1. Add items to list - function

// 2. Sort list - Function