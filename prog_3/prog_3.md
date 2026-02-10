# Implementation of reverse traversal algorithm in linked list
## Objective:
    The objective of this program is to implement reverse traversal algorithm in linked list
### (a)Defining Data-Structures:
```c
struct node{
    int data;
    struct node* next;
};

```

**Explanation:**
* `struct node`: is a structure defined for the node of linked list
* `int data`: It stores the data of a node
* `struct node *next`: It stores the pointer to the next node 

### (b)Functions
* `main()`: The main fuction performs following operations:<br>
          - declares the head and temp variable<br>
          - Aceepts the input from the user<br>
          - Calls the `create_new_node` and `reverse_traverse` function<br>
          - Displays the reverse traversal fo the linked list <br>
* `void reverse_traverse(struct node *head){}`:
          This function traverses the linked list in revese order
* `struct node* create_new_node(int value){}`: This function creates a new node with a   
          value and assigns the next pointer to a new node or null
### (c) Main Method Organization
The main() function manages the program flow through the following steps:

* Initialization: Sets the head and temp pointers to NULL.
* Input Loop: Uses a while loop to gather data from the user.
* Execution: Calls reverse_traverse(head) once the user chooses to stop adding nodes.

### (d) Sample Output
```text
Enter the node for the linked list: 10
Do you want to continue? (Y/N): Y
Enter the node for the linked list: 20
Do you want to continue? (Y/N): Y
Enter the node for the linked list: 30
Do you want to continue? (Y/N): N

Reverse Traversal of Linked List:
30
20
10
