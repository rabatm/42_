# Push Swap: An Algorithmic Project

Push Swap is an algorithmic project within the study program at School 42 (UNIT Factory). The main objective is to sort data using a stack and a limited set of instructions while minimizing the number of actions required.

## Project Overview
Goal: Sort a set of integers using two stacks (named ‘a’ and ‘b’) and a predefined set of instructions.
### Instructions:

« sa »: Swap the first 2 elements at the top of stack ‘a’.
« sb »: Swap the first 2 elements at the top of stack ‘b’.
« ss »: Perform sa and sb simultaneously.
« pa »: Push the first element from stack ‘b’ to stack ‘a’.
« pb »: Push the first element from stack ‘a’ to stack ‘b’.
« ra »: Rotate all elements of stack ‘a’ (shift up by 1).
« rb »: Rotate all elements of stack ‘b’ (shift up by 1).
« rr »: Perform ra and rb simultaneously.
« rra »: Reverse rotate stack ‘a’ (shift down by 1).
« rrb »: Reverse rotate stack ‘b’ (shift down by 1).
« rrr »: Perform rra and rrb simultaneously.

### Installation
#### Clone the repository:
```
git clone https://github.com/rabatm/42_push_swap.git
cd 42_push_swap
```
#### Compile the project:
```
make
```

### Author
This project was created by rabatm.

For more details, check out the GitHub repository.

Please note that all functions are created in accordance with the Norm – a set of rules governing code formatting at School 42. Happy sorting! 🚀
