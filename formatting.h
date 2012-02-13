#ifndef FORMATTING_H
#define FORMATTING_H

#include <systemheader>
#include "OtherClass1.h"
#include "local.h"
#include "dir/local2.h"

namespace NewNamespace
{

class OtherClass2; // Use forward declarations over includes where possible

////////////////////////////////////////////////////////////////////////////////
/// Templated class designed to show off code formatting.
/// Things to note:
///   -three consecutive slashes for doxygen compatibility
///   -the mandatory newline after the block
///   -the 80 character limit
///   -the TODO doesn't appear since it is only preceded by 2 slashes
///   -the brief description is the first line and must be delimited by a period
///   -doxygen is used primarily (exclusively?) in the header file.
//  TODO: Nothing
////////////////////////////////////////////////////////////////////////////////

template <typename T>
class NewClass: public OtherClass1  
{
    public:
        int publicIntVar;            ///< Description after member.
        int* publicPointerVar;       ///< Description after member.
                
        ////////////////////////////////////////////////////////////////////////
        /// Sample enum.
        /// A longer description of the enum. Values are accessed as
        /// NewClass::VAL0
        ////////////////////////////////////////////////////////////////////////
        
        enum MemberEnum
        {
            VAL0,                    ///< Description after value.
            VAL1,                    ///< Description after value.
        };
        
        ////////////////////////////////////////////////////////////////////////
        /// Default constructor.
        /// A longer description of the default constructor.
        ////////////////////////////////////////////////////////////////////////
        
        NewClass();
        
        ////////////////////////////////////////////////////////////////////////
        /// Constructor with inputs.
        /// A longer description of the other constructor.
        /// \param[in] publicIntVar
        ///   The first parameter.
        /// \param[in] publicPointerVar
        ///    The second parameter.
        ////////////////////////////////////////////////////////////////////////
        
        NewClass(
            int publicIntVar,
            int* publicPointerVar);
        
        ////////////////////////////////////////////////////////////////////////
        /// Sample public member function.
        /// A longer description of the void member function.
        /// \param[in] parameter1
        ///   The first parameter.
        /// \param[in] parameter2
        ///    The second parameter.
        ////////////////////////////////////////////////////////////////////////
        
        char publicMemberFunction(
            int parameter1,
            char* parameter2);
    
    protected:
    
    private:
        char* privateStringVar;      ///< Description after member
        
        ////////////////////////////////////////////////////////////////////////
        /// Sample private member function.
        /// A longer description of the private member function. Note the const
        /// correctness.
        /// \param[in] parameter1
        ///   The first parameter.
        /// \return
        ///   The return type.
        ////////////////////////////////////////////////////////////////////////
        
        int privateMemberFunction(
            T const* const parameter1);
            
        ////////////////////////////////////////////////////////////////////////
        /// Sample pure virtual function.
        /// A longer description of the pure virtual function.
        /// \param[in] parameter1
        ///   The first parameter.
        ////////////////////////////////////////////////////////////////////////
        
        virtual void pureVirtualFunction(
            int parameter1) = 0;
        
}; // End NewClass


////////////////////////////////////////////////////////////////////////////////
/// Sample struct.
/// A longer description of the struct.
////////////////////////////////////////////////////////////////////////////////

struct NewStruct
{
    int value;         ///< Int value.
    char* str;         ///< String.
}typedef NewStruct;

////////////////////////////////////////////////////////////////////////////////
/// nonMemberFunction brief description.
/// A longer description of the non member function.
/// \return
///   Return value.
////////////////////////////////////////////////////////////////////////////////
        
char const* nonMemberFunction();
} // End NewNamespace

#endif
