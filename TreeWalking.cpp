#include <iostream>

using namespace std;

int main()
{
    class node {

    node* _LHC;
    node* _RHC;
    node* _Parent;

bool isRoot() { return (_Parent == NULL);}

public:
    getPrevious(node* from) {
    node* current = NULL;
    if (from->_LHC) { //  // If LHC, find rightmost leaf (15→14)
        current = _LHC;
        while (current->_RHC) {current = current->_RHC;}
        return current;
    } // LHC exists;
    //No LHC.  Go up tree until parent found where child was RHC. Return Parent
    while (!current->isRoot()) {   // Ensure not root
        if (current == _Parent->_LHC) {current = current ->_Parent;}
    };
    return (current->_Parent);
}
    };
}
