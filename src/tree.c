/*!
 * \file       tree.c
 * \author     Ondřej Ševčík
 * \date       6/2019
 * \brief      Source file for binary tree
 * **********************************************************************
 * \attention
 * &copy; Copyright (c) 2022 FAI UTB. All rights reserved.
 *
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 */

/* Includes --------------------------------------------------------------------------------------*/
#include "tree.h"

/* Private types ---------------------------------------------------------------------------------*/
/* Private macros --------------------------------------------------------------------------------*/
#define UNUSED(x) (void)x

/* Private variables -----------------------------------------------------------------------------*/
/* Private function declarations -----------------------------------------------------------------*/
/* Exported functions definitions ----------------------------------------------------------------*/

bool Tree_Init(Tree *const tree)
{
  UNUSED(tree);
  return false;
}

void Tree_Clear(Tree *const tree)
{
  UNUSED(tree);
}

bool Tree_Insert(Tree *const tree, const Data_t data)
{
  UNUSED(tree);
  UNUSED(data);
  return false;
}

void Tree_Delete(Tree *const tree, const Data_t data)
{
  UNUSED(tree);
  UNUSED(data);
}

const Data_t *Tree_Get_Data(const TreeNode *const node)
{
  UNUSED(node);
  return NULL;
}

TreeNode *Tree_Find_Node(Tree tree, const Data_t data)
{
  UNUSED(tree);
  UNUSED(data);
  return NULL;
}

size_t Tree_Get_Count(Tree tree)
{
  UNUSED(tree);
  return 0;
}

void Tree_Process(Tree tree, TreeNodeProc proc, TreeProcessMode mode)
{
  UNUSED(tree);
  UNUSED(proc);
  UNUSED(mode);
}

/* Private function definitions ------------------------------------------------------------------*/
