/**
 * @file       tree.c
 * @author     Ondřej Ševčík
 * @date       6/2019
 * @brief      Source file for binary tree
 * **********************************************************************
 * @par       COPYRIGHT NOTICE (c) 2019 TBU in Zlin. All rights reserved.
 */

#include "tree.h"
#include "mymalloc.h"

/* Local functions declaration ---------------------------------------------- */
/**
 * @brief print_postorder   Recursive function that calls itself with the left
 * node and then right node and then processes node that is called with the
 * function that is passed in argument
 * @param node  Pointer at node
 * @param proc  function that is called by each node
 */
void print_postorder(TreeNode* node, TreeNodeProc proc);

/**
 * @brief print_inorder Recursive function that calls itself with the left node
 * first, then processes the current node with the function that is passed in
 * argument and then it calls itself with the right node
 * @param node  Pointer at node
 * @param proc  function that is called by each node
 */
void print_inorder(TreeNode* node, TreeNodeProc proc);

/**
 * @brief print_preorder    Recursive function that processes node first, then
 * it calls itself with the left and then right node
 * @param node  Pointer at node
 * @param proc  function that is called by each node
 */
void print_preorder(TreeNode* node, TreeNodeProc proc);

bool Tree_Init(Tree* const tree) {
  (void)tree;
  return false;
}

void Tree_Clear(Tree* const tree) { (void)tree; }

bool Tree_Insert(Tree* const tree, const Data_t data) {
  (void)tree;
  (void)data;
  return false;
}

void Tree_Delete(Tree* const tree, const Data_t data) {
  (void)tree;
  (void)data;
}

const Data_t* Tree_Get_Data(const TreeNode* const node) {
  (void)node;
  return NULL;
}

TreeNode* Tree_Find_Node(Tree tree, const Data_t data) {
  (void)tree;
  (void)data;
  return NULL;
}

size_t Tree_Get_Count(Tree tree) {
  (void)tree;
  return 0;
}

void Tree_Process(Tree tree, TreeNodeProc proc, TreeProcessMode mode) {
  (void)tree;
  (void)proc;
  (void)mode;
}

void print_preorder(TreeNode* node, TreeNodeProc proc) {
  (void)node;
  (void)proc;
}

void print_inorder(TreeNode* node, TreeNodeProc proc) {
  (void)node;
  (void)proc;
}

void print_postorder(TreeNode* node, TreeNodeProc proc) {
  (void)node;
  (void)proc;
}

void Tree_Print(TreeNode* node, TreeNode* previous, int spaces) {
  (void)node;
  (void)previous;
  (void)spaces;
}
