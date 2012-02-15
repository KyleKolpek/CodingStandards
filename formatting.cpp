#include "formatting.h"

using namespace NewNamespace;

NewClass::NewClass():
        publicIntVar(0),
        publicPointerVar(NULL),
{
    privateStringVar = nonMemberFunction();
}
    
NewClass::NewClass(
    int publicIntVar,
    int* publicPointerVar):
    publicIntVar(publicIntVar),
    publicPointerVar(publicPointerVar),
{
    privateStringVar = nonMemberFunction();
}

char NewClass::publicMemberFunction(
    int parameter1,
    char* parameter2)
{
    // Multiple declarations
    float j   = 0.0f,
          kk  = 1.0f,               // Align operators and comments as well as
          lll = 2.0f;               // possible. Individual groupings should
    int *i    = NULL;               // always be aligned.
    
    // One line if-else statement
    if(parameter2[0] == 'c')
    {
        parameter2[0] = 'd';
    }
    else
    {
        parameter2[0] = 'e';
    }
    
    // ^ Put a newline before small comment "blocks"
    // Multiple line if statement
    if(parameter1 < 100)
    {
        parameter1 *= 2;
        parameter2[1] = 'f';
    }
    else
    {
        parameter2[1] = 'g';
    }
    
    // Long if statement
    // Try to separate sections in opposite of order of execution
    if((static_cast<char>(parameter1) == 'a') &&
        (parameter2[0] == 'a'))
    {
        // Do something
    }
    
    // Terenary return
    // Could write this on one line but it tends to get cluttered
    return (parameter1<100)?
            parameter2[0]:
            parameter2[1];
}

// This may need const, I always if you need it in the header or the source.
int NewClass::privateMemberFunction(
    T* parameter1)
{
    return static_cast<OtherClass*>(parameter1).getInt();
}


char* nonMemberFunction()
{
    return "asdf";
}
