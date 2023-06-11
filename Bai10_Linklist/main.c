#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct Node{
    uint8_t value;
    struct Node* next;
};

typedef struct Node Node;

Node *createNode(uint8_t value){
    Node *node = (Node *)malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}

void push_back(Node **array, uint8_t value){ 
    Node *temp, *p;
    temp = createNode(value);
    if(*array == NULL){
        *array = temp;
    }else{
        p = *array;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }

}

void pop_back(Node **array){
    if(array ==  NULL){
        printf("is Empty\n");
    }else{
        Node *p = *array;
        while (p->next->next != NULL)
        {
            p = p->next;
        }
        free(p->next->next);
        p->next = NULL;
    }
}

void insert(Node **array, uint8_t index, uint8_t value){
    int i = 0;
    Node *p = *array;
    Node *temp;
    temp = createNode(value);
    while (p->next != NULL && i != index)
    {
        p = p->next;
        i++;
    }
    if (i == index)
    {
        temp->next = p->next;
        p->next = temp;
    }else{
        ///
    }
    
    
}

uint16_t get(Node *array, uint8_t index){
    int i = 0;
    Node *p = array;
    while (p != NULL && i != index)
    {
        p = p->next;
        i++;
    }
    return p->value;
}






int main(int argc, char const *argv[])
{
    Node *array = NULL; //0xc1

   push_back(&array, 6);
   push_back(&array, 2);
   push_back(&array, 3);
   push_back(&array, 7);

   insert(&array, 2, 33);

    pop_back(&array);
    

    
    return 0;
}
