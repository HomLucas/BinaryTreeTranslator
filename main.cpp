//cs110c lab 5 document

#include <iostream>
#include "MasterTree.h"
using namespace std;

int main ()
{

	MasterTree mtree;
	cout << "translation is" << endl;
	cout << mtree.translate("-") << mtree.translate(".-.") << mtree.translate(".") << mtree.translate(".") << mtree.translate("...") << " ";
    cout << mtree.translate("-.-.") << mtree.translate(".-") << mtree.translate("-.") << " ";
    cout << mtree.translate("-...") << mtree.translate(".") << " ";
    cout << mtree.translate("..-.") << mtree.translate("..-") << mtree.translate("-.") << " ";
    cout << mtree.translate("..---") << mtree.translate("-----") << mtree.translate("-----") << mtree.translate("--...") << " ";
    cout << endl;
    return 0;
}
