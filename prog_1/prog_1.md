# Checking balance number of parenthesis
## Objective:
    The objective of this program is the analyze  mathematical expression and check
    if it has balanced number of parenthesis '()','{}','[]' or not.
### (a)Defining Data-Structures:
```c
#define size 20    
char stack[size];   
int top = -1;
```

**Explanation:**
* `#define size 20` it initializes the size of the array
* `stack[size]` sets a character array of defined size
* `top = -1` initializes the top of stack to be -1

### (b)Functions:
* `push(char x)`: push function is used to insert an item into the stack.
* `pop()`: Pop function is used to remove an item from a stack.
* `isMatching`: This function check if the opening parenthesis matches with the closing parenthesis.
* `isBalanced`: This function check if the opening parenthesis has its matching closing parenthesis and returns
                if the mathematical expression is balanced or not.
---

### (c) Main Method Organization

The `main()` function serves as the interface:
1.  **Input**: It captures a string expression from the user.
2.  **Processing**: It passes the string to `isbalanced()`.
3.  **Output**: Based on the returned boolean value, it prints whether the expression is "Balanced" or "Not Balanced".

---
### (d) Sample Output / Test Cases

Based on the requirements, here are the results of the specific test expressions:

| Expression | Result | Reason |
| :--- | :--- | :--- |
| `a+(b-c)*(d` | **Not Balanced** | The `(` before `d` is never closed. |
| `m+[a-b*(c+d*{m)]` | **Not Balanced** | The `{` is followed by a `)` instead of a `}` (Mismatched). |
| `a+(b-c)` | **Balanced** | All opening brackets have corresponding closing brackets. |

```text
Enter the expression: a+(b-c)
The expression is balanced


