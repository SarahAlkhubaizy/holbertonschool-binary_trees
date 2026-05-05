# Binary Trees — Holberton School

## Description

This project is a C implementation of Binary Trees as part of the Holberton School curriculum. It covers the fundamental concepts of binary trees including creation, traversal, measurement, and structural checks.

---

## Data Structures

```c
/* Basic Binary Tree Node */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;
```

---

## Files

| File | Prototype | Description |
|------|-----------|-------------|
| `0-binary_tree_node.c` | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)` | Creates a new binary tree node |
| `1-binary_tree_insert_left.c` | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)` | Inserts a node as the left-child |
| `2-binary_tree_insert_right.c` | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)` | Inserts a node as the right-child |
| `3-binary_tree_delete.c` | `void binary_tree_delete(binary_tree_t *tree)` | Deletes an entire binary tree |
| `4-binary_tree_is_leaf.c` | `int binary_tree_is_leaf(const binary_tree_t *node)` | Checks if a node is a leaf |
| `5-binary_tree_is_root.c` | `int binary_tree_is_root(const binary_tree_t *node)` | Checks if a node is the root |
| `6-binary_tree_preorder.c` | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))` | Pre-order traversal |
| `7-binary_tree_inorder.c` | `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))` | In-order traversal |
| `8-binary_tree_postorder.c` | `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))` | Post-order traversal |
| `9-binary_tree_height.c` | `size_t binary_tree_height(const binary_tree_t *tree)` | Measures the height of a tree |
| `10-binary_tree_depth.c` | `size_t binary_tree_depth(const binary_tree_t *tree)` | Measures the depth of a node |
| `11-binary_tree_size.c` | `size_t binary_tree_size(const binary_tree_t *tree)` | Measures the size of a tree |
| `12-binary_tree_leaves.c` | `size_t binary_tree_leaves(const binary_tree_t *tree)` | Counts the leaves in a tree |
| `13-binary_tree_nodes.c` | `size_t binary_tree_nodes(const binary_tree_t *tree)` | Counts nodes with at least 1 child |
| `14-binary_tree_balance.c` | `int binary_tree_balance(const binary_tree_t *tree)` | Measures the balance factor |
| `15-binary_tree_is_full.c` | `int binary_tree_is_full(const binary_tree_t *tree)` | Checks if a tree is full |
| `16-binary_tree_is_perfect.c` | `int binary_tree_is_perfect(const binary_tree_t *tree)` | Checks if a tree is perfect |
| `17-binary_tree_sibling.c` | `binary_tree_t *binary_tree_sibling(binary_tree_t *node)` | Finds the sibling of a node |
| `18-binary_tree_uncle.c` | `binary_tree_t *binary_tree_uncle(binary_tree_t *node)` | Finds the uncle of a node |

---

## Concepts Covered

### Node Operations
- Create a new node with a given value and parent
- Insert nodes as left or right children (handling existing children)
- Delete an entire tree recursively (no memory leaks)

### Node Checks
- Is Leaf — a node with no children
- Is Root — a node with no parent

### Tree Traversals
- Pre-order — Root, Left, Right
- In-order — Left, Root, Right
- Post-order — Left, Right, Root

### Measurements
- Height — longest path from root to a leaf
- Depth — distance from a node to the root
- Size — total number of nodes
- Leaves — nodes with no children
- Nodes — nodes with at least one child
- Balance Factor — difference between left and right subtree heights

### Structural Checks


### Relationships


---

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c <main_file.c> <function_file.c> 0-binary_tree_node.c -o output
```

---

## Example Output

```
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
```

---

## Requirements


---

## Authors

**Sara Alkhubaizi**
GitHub: [@SarahAlkhubaizy](https://github.com/SarahAlkhubaizy)

**Abdulmalik AlAqeel**
GitHub: [@AbdulmalikAlAqeel](https://github.com/SarahAlkhubaizy/holbertonschool-binary_trees/commits?author=AbdulmalikAlAqeel)

---

## Repository

GitHub: [holbertonschool-binary_trees](https://github.com/SarahAlkhubaizy/holbertonschool-binary_trees)
