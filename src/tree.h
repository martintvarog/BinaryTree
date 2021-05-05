/**
 * @file       tree.h
 * @author     Ondřej Ševčík
 * @date       6/2019
 * @brief      Definition of function for binary tree
 * **********************************************************************
 * @par       COPYRIGHT NOTICE (c) 2019 TBU in Zlin. All rights reserved.
 */

#ifndef _TREE_H_
#define _TREE_H_

/* Private includes -------------------------------------------------------- */
#include <stdbool.h>
#include <stdio.h>

#include "data.h"

/* _TreeNode structure ----------------------------------------------------- */
typedef struct _TreeNode {
  Data_t data;             /**< Node data */
  struct _TreeNode *left;  /**< Pointer at left node */
  struct _TreeNode *right; /**< Pointer at right node */
} TreeNode;

/* Tree structure ---------------------------------------------------------- */
typedef struct _Tree {
  TreeNode *root;           /**< Pointer at first node in tree */
  unsigned int nodeCount;   /**< Number of nodes currently in tree */
} Tree;

typedef enum _TreeProcessMode {
  PRE_ORDER = 1,     /**< Data from a node are processed before both of his nodes (L&R) */
  IN_ORDER = 2,      /**< First process the left node, then data and then right node */
  POST_ORDER = 3     /**< Data are processed after processing of both nodes (L&R) */
} TreeProcessMode;

/*!
 * @brief Callback function for node processing
 * @param node Pointer at current node
 */
typedef void (*TreeNodeProc)(TreeNode *node);

/* Public Tree API --------------------------------------------------------- */
/*!
 * @brief Initialize the tree, sets nodeCount of Tree to 0
 * @param[in] tree Pointer at tree to initialize
 * @return Returns true if tree was initialized
 */
bool Tree_Init(Tree *const tree);

/*!
 * @brief Deletes every node from a tree
 * @param[in] tree Pointer at tree to clear
 */
void Tree_Clear(Tree *const tree);

/*!
 * @brief Creates a node with data and puts it in the tree at the correct place.
 * Smaller value goes to the left node, bigger value to the right node.
 * Example: After inserting these values: Petr, Jana and Tom in given order,
 * the resulting tree will look like this:
 *                  Petr
 *                 /    \
 *             Jana     Tom
 * Use function Data_Cmp to compare the data.
 * @param[in] tree Pointer at tree, where to store the node
 * @param[in] data Pointer at data
 * @return Returns true if data were inserted and increases the nodeCount by 1.
 * Returns false if node insertion was unsuccessful or the tree already has a
 * node with the same value.
 */
bool Tree_Insert(Tree *const tree, const Data_t data);

/*!
 * @brief Deletes a specific node from a tree which has the same data as the
 * data from parameter. Deleting has to be done according to rules. If node has
 * two children, find node with the lowest value(right most
 * node from node that is being deleted).
 * @param[in] tree Pointer at tree, where to delete the node
 * @param[in] data Pointer at the data which we want to remove from a tree
 */
void Tree_Delete(Tree *const tree, const Data_t data);

/*!
 * @brief Returns data from a node
 * @param[in] node Pointer at a node
 * @return Retuns pointer at the data from a node
 */
const Data_t *Tree_Get_Data(const TreeNode *const node);

/*!
 * @brief Vrátí ukazatel na uzel, který drží daná data. Returns pointer at node,
 * which holds the data. Name, age, weight and height has to match, otherwise
 * return NULL
 * @param[in] tree Pointer at tree, from which we want to find a node
 * @param[in] data Pointer at searching data
 * @return Returns pointer at node with searched data, if theres no such a node,
 * return NULL
 */
TreeNode *Tree_Find_Node(Tree tree, const Data_t data);

/*!
 * @brief Counts number of nodes in a tree
 * @param[in] tree pointer at tree
 * @return Returns the number of items in a tree
 */
size_t Tree_Get_Count(Tree tree);

/*!
 * @brief Process every node in a tree with a function specified with pointer
 * "PROC". There are three modes for processing the tree : PREORDER(First
 * process node itself, then left node and then right node), INORDER (First node
 * processed is left, then node itself and then right node), POSTORDER (First
 * processed is left node, then right node and then node itself)
 * @param tree[in] Pointer at tree
 * @param proc[in] Pointer at callback function for node processing
 * @param mode[in] Type of tree processing
 * @sa TreeProcessMode
 */
void Tree_Process(Tree tree, TreeNodeProc proc, TreeProcessMode mode);

/* Bonus function */
/**
 * @brief Tree_Print Prints tree in console
 * @param node  Pointer at the next node
 * @param previous  Pointer at previous node that we were working with
 * @param spaces    The number of spaces for console
 */
void Tree_Print(TreeNode *node, TreeNode *previous, int spaces);

#endif  //_TREE_H_
