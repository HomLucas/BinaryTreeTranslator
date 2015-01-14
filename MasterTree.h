#ifndef MASTERTREE_H_INCLUDED
#define MASTERTREE_H_INCLUDED

/*
 *  MasterTree.h
 *  cs110clab5
 *
 *  Created by lucas on 11/26/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#include "BinaryTree.h"

class MasterTree
{
	public:
	MasterTree();
	char translate(string);
	private:
	BinaryTree mtree;
};




#endif // MASTERTREE_H_INCLUDED
