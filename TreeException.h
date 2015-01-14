#ifndef TREEEXCEPTION_H_INCLUDED
#define TREEEXCEPTION_H_INCLUDED

// ********************************************************
// Header file TreeException.h for the ADT binary tree.
// ********************************************************
#include <stdexcept>
#include <string>
using namespace std;

class TreeLogicException : public logic_error
{
public:
	TreeLogicException(const string & Message = "") :
	logic_error(Message.c_str())
	{ }
};


#endif // TREEEXCEPTION_H_INCLUDED
