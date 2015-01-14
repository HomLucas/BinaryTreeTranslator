/*
 *  MasterTree.cpp
 *  cs110clab5
 *
 *  Created by lucas on 11/26/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#include "MasterTree.h"
#include <iostream>

MasterTree::MasterTree()
{
	/*
	BinaryTree tree1, tree2, tree3, tree4, tree5, tree6, tree7, tree8, tree9, tree10, tree11, tree12, tree13, tree14, tree15, tree16, tree17, tree18, tree19, tree20, tree21, tree22, tree23, tree24, tree25, tree26, tree27, tree28, tree29, tree30, tree31, tree32, tree33, tree34, tree35, tree36, tree37, tree38, tree39, tree40, tree41, tree42, tree43, tree44, tree45;
	tree1.setRootData(' ');
	tree2.setRootData('E');
	tree3.setRootData('T');
	tree4.setRootData('I');
	tree5.setRootData('A');
	tree6.setRootData('N');
	tree7.setRootData('M');
	tree8.setRootData('S');
	tree9.setRootData('U');
	tree10.setRootData('R');
	tree11.setRootData('W');
	tree12.setRootData('D');
	tree13.setRootData('K');
	tree14.setRootData('G');
	tree15.setRootData('O');
	tree16.setRootData('H');
	tree17.setRootData('V');
	tree18.setRootData('J');
	tree19.setRootData('B');
	tree20.setRootData('Z');
	tree21.setRootData(' ');
	tree22.setRootData(' ');
	tree23.setRootData('5');
	tree24.setRootData('4');
	tree25.setRootData('3');
	tree26.setRootData('F');
	tree27.setRootData('L');
	tree28.setRootData('P');
	tree29.setRootData('6');
	tree30.setRootData('X');
	tree31.setRootData('C');
	tree32.setRootData('Y');
	tree33.setRootData('7');
	tree34.setRootData('Q');
	tree35.setRootData('1');
	tree36.setRootData('8');
	tree37.setRootData('9');
	tree38.setRootData('0');
	tree39.setRootData(' ');
	tree40.setRootData(' ');
	tree41.setRootData(' ');
	tree42.setRootData(' ');
	tree43.setRootData(' ');
	tree44.setRootData(' ');
	tree45.setRootData(' ');
	tree1.attachLeftSubtree(tree2);
	tree1.attachRightSubtree(tree3);
	tree2.attachRightSubtree(tree5);
	tree2.attachLeftSubtree(tree4);
	tree3.attachLeftSubtree(tree6);
	tree3.attachRightSubtree(tree7);
	tree4.attachLeftSubtree(tree8);
	tree4.attachRightSubtree(tree9);
	tree5.attachLeftSubtree(tree10);
	tree5.attachRightSubtree(tree11);
	tree6.attachLeftSubtree(tree12);
	tree6.attachRightSubtree(tree13);
	tree7.attachLeftSubtree(tree14);
	tree7.attachRightSubtree(tree15);
	tree8.attachLeftSubtree(tree16);
	tree8.attachRightSubtree(tree17);
	tree9.attachLeftSubtree(tree26);
	tree9.attachRightSubtree(tree40);
	tree10.attachLeftSubtree(tree27);
	tree10.attachRightSubtree(tree41);
	tree11.attachLeftSubtree(tree28);
	tree11.attachRightSubtree(tree18);
	tree12.attachLeftSubtree(tree19);
	tree12.attachRightSubtree(tree30);
	tree13.attachLeftSubtree(tree31);
	tree13.attachRightSubtree(tree32);
	tree14.attachLeftSubtree(tree20);
	tree14.attachRightSubtree(tree34);
	tree15.attachLeftSubtree(tree21);
	tree15.attachRightSubtree(tree22);
	tree16.attachLeftSubtree(tree23);
	tree16.attachRightSubtree(tree24);
	tree17.attachRightSubtree(tree25);
	tree17.attachLeftSubtree(tree39);
	tree18.attachRightSubtree(tree35);
	tree18.attachLeftSubtree(tree42);
	tree19.attachLeftSubtree(tree29);
	tree19.attachRightSubtree(tree43);
	tree20.attachLeftSubtree(tree33);
	tree20.attachRightSubtree(tree44);
	tree21.attachLeftSubtree(tree36);
	tree21.attachRightSubtree(tree45);
	tree22.attachLeftSubtree(tree37);
	tree22.attachRightSubtree(tree38);
	*/

	BinaryTree tree1('5');
	BinaryTree tree2('4');
	BinaryTree tree3(' ');
	BinaryTree tree4('3');
	BinaryTree tree5('6');
	BinaryTree tree6(' ');
	BinaryTree tree7('7');
	BinaryTree tree8(' ');
	BinaryTree tree9('8');
	BinaryTree tree10(' ');
	BinaryTree tree11('9');
	BinaryTree tree12('0');
	BinaryTree tree13('H', tree1, tree2);
	BinaryTree tree14('V', tree3, tree4);
	BinaryTree tree15('F');
	BinaryTree tree46(' ');
	BinaryTree tree47('2');
	BinaryTree tree16(' ', tree46, tree47);
	BinaryTree tree17('L');
	BinaryTree tree18('P');
	BinaryTree tree19('1');
	BinaryTree tree20(' ');
	BinaryTree tree21('J', tree20, tree19);
	BinaryTree tree22('B', tree5, tree6);
	BinaryTree tree23('X');
	BinaryTree tree24('C');
	BinaryTree tree25('Y');
	BinaryTree tree26('Z', tree7, tree8);
	BinaryTree tree27('Q');
	BinaryTree tree28(' ', tree9, tree10);
	BinaryTree tree29(' ', tree11, tree12);
	BinaryTree tree30('S', tree13, tree14);
	BinaryTree tree31('U', tree15, tree16);
	BinaryTree tree32(' ');
	BinaryTree tree33('R', tree17, tree32);
	BinaryTree tree34('W', tree18, tree21);
	BinaryTree tree35('D', tree22, tree23);
	BinaryTree tree36('K', tree24, tree25);
	BinaryTree tree37('G', tree26, tree27);
	BinaryTree tree38('O', tree28, tree29);
	BinaryTree tree39('I', tree30, tree31);
	BinaryTree tree40('A', tree33, tree34);
	BinaryTree tree41('N', tree35, tree36);
	BinaryTree tree42('M', tree37, tree38);
	BinaryTree tree43('E', tree39, tree40);
	BinaryTree tree44('T', tree41, tree42);
	BinaryTree tree45(' ', tree43, tree44);
	mtree = tree45;



	}

char MasterTree::translate(string uncoded)
{
	BinaryTree* temp; //temp ptr
	temp = &mtree;

	for (int i =0; i < uncoded.length(); i++)
	{
		if(uncoded[i] == '.')
		{
			temp = &temp->getLeftSubtree();
		}
		else
		{
			temp = &temp->getRightSubtree();
		}
	}

	return temp->getRootData();

}
