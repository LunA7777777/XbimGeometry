// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_FunctionSample_HeaderFile
#define _math_FunctionSample_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;


//! This class gives a default sample (constant difference <br>
//!          of parameter) for a function defined between <br>
//!          two bound A,B. <br>
class math_FunctionSample  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   math_FunctionSample(const Standard_Real A,const Standard_Real B,const Standard_Integer N);
  //! Returns the bounds of parameters. <br>
  Standard_EXPORT   virtual  void Bounds(Standard_Real& A,Standard_Real& B) const;
  //! Returns the number of sample points. <br>
  Standard_EXPORT     Standard_Integer NbPoints() const;
  //! Returns the value of parameter of the point of <br>
//!          range Index : A + ((Index-1)/(NbPoints-1))*B. <br>
//!          An exception is raised if Index<=0 or Index>NbPoints. <br>
  Standard_EXPORT   virtual  Standard_Real GetParameter(const Standard_Integer Index) const;





protected:





private:



Standard_Real a;
Standard_Real b;
Standard_Integer n;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
