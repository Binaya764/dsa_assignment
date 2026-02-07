#include<stdio.h>
#include<stdlib.h>
//defining structure for the node of doubly linke list
typedef struct node{
    int data;
    struct node *next;
    struct node *prev;

};
//defining the function for the creation of new node
struct node* create_new_node(int value){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data= value;
    new_node->next= NULL;
    new_node->prev = NULL;
    return new_node;

}
//function to insert after a given node
void insert_at(struct node* given_node, int value){
    //checks if the given node is null
    if(given_node == NULL){
        printf("The given node is null");
        return;
    }
    struct node* new_node = create_new_node(value);
    new_node->next= given_node ->next;
    new_node->prev = given_node;
    //check if the given node is the last node
    if (given_node->next != NULL){
        given_node->next->prev = new_node;

    }
    given_node->next = new_node;
}
//Function to delete a selected node
//We use a double pointer for head so that the changes made in fuction reflects at main
void delete_node(struct node** head, struct node* delete_node) {    
    //checks if the given node is empty
    if (*head == NULL || delete_node == NULL)
        return;
    //if the first node is selected then it assigns the next node its head
    if (*head == delete_node)
        *head = delete_node->next;

    //  if delete node is not the last node then it connects the connects the 
    //  delete node's next and previous 
    if (delete_node->next != NULL)
        delete_node->next->prev = delete_node->prev;

    //if delete node is not the first node then it connect its previous pointer
    // with the next node
    if (delete_node->prev != NULL)
        delete_node->prev->next = delete_node->next;
    //Deallocates the memory occupied
    free(delete_node);
}

void display(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = create_new_node(1);
    struct node* second = create_new_node(2);
    struct node* third = create_new_node(3);
    struct node* fourth = create_new_node(4);
    struct node* fifth = create_new_node(5);

    /* Initial linking */
    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = fifth;
    fifth->prev = fourth;

    printf("Initial Doubly Linked List:\n");
    display(head);

    /* Insert after second node */
    insert_at(second, 15);
    printf("\nAfter inserting 15 after 2:\n");
    display(head);

    /* Delete second node */
    delete_node(&head, second);
    printf("\nAfter deleting node with data 2:\n");
    display(head);

    return 0;
}