#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED

// ********************************************************
// Header file BinaryTree.h for the ADT binary tree.
// Modified from:  Binary Tree, Chapter 10
//                 Data Abstraction and Problem Solving with C++
//                 Walls and Mirrors, 3rd edition
//                 Carrano and Prichard
//                 Pearson Education
//                 Copyright 2002
// ********************************************************

#include "TreeException.h"

typedef char TreeItemType;

typedef void (*FunctionType)(TreeItemType& anItem);

class BinaryTree
{
public:
	// constructors and destructor:
   	BinaryTree();
   	BinaryTree(const TreeItemType& rootItem);
   	BinaryTree(const TreeItemType& rootItem,
			   BinaryTree& leftTree,
			   BinaryTree& rightTree);
	BinaryTree(const BinaryTree& tree);
   	virtual ~BinaryTree();

	// binary tree operations:
   	virtual bool isEmpty() const;

   	virtual TreeItemType getRootData() const
	throw(TreeLogicException);

   	virtual void setRootData(const TreeItemType& newItem);

	virtual void attachLeft(const TreeItemType& newItem)
	throw(TreeLogicException);

	virtual void attachRight(const TreeItemType& newItem)
	throw(TreeLogicException);

   	virtual void attachLeftSubtree(BinaryTree& leftTree)
	throw(TreeLogicException);

   	virtual void attachRightSubtree(BinaryTree& rightTree)
	throw(TreeLogicException);

   	virtual void detachLeftSubtree(BinaryTree& leftTree)
	throw(TreeLogicException);

   	virtual void detachRightSubtree(BinaryTree& rightTree)
	throw(TreeLogicException);

   	virtual BinaryTree& getLeftSubtree()
	throw(TreeLogicException);

   	virtual BinaryTree& getRightSubtree()
	throw(TreeLogicException);

	virtual BinaryTree& operator=(const BinaryTree& rhs);

   	virtual void preorderTraverse(FunctionType visit);
   	virtual void inorderTraverse(FunctionType visit);
   	virtual void postorderTraverse(FunctionType visit);

protected:
   	void copyTree(const BinaryTree& tree);
   	void destroyTree();

private:
   	BinaryTree* leftSubtreePtr;
   	BinaryTree* rightSubtreePtr;
   	TreeItemType* pItem;  	// pointer to root item
};
// End of header file.

#endif // BINARYTREE_H_INCLUDED
