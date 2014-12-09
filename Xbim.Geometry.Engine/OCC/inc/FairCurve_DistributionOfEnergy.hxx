// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FairCurve_DistributionOfEnergy_HeaderFile
#define _FairCurve_DistributionOfEnergy_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfPnt2d_HeaderFile
#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#endif
#ifndef _math_FunctionSet_HeaderFile
#include <math_FunctionSet.hxx>
#endif
class TColStd_HArray1OfReal;
class TColgp_HArray1OfPnt2d;


//! Abstract class to use the Energy of an FairCurve <br>
class FairCurve_DistributionOfEnergy  : public math_FunctionSet {
public:

  DEFINE_STANDARD_ALLOC

  //! returns the number of variables of the function. <br>
  Standard_EXPORT   virtual  Standard_Integer NbVariables() const;
  //! returns the number of equations of the function. <br>
  Standard_EXPORT   virtual  Standard_Integer NbEquations() const;
  
  Standard_EXPORT     void SetDerivativeOrder(const Standard_Integer DerivativeOrder) ;





protected:

  
  Standard_EXPORT   FairCurve_DistributionOfEnergy(const Standard_Integer BSplOrder,const Handle(TColStd_HArray1OfReal)& FlatKnots,const Handle(TColgp_HArray1OfPnt2d)& Poles,const Standard_Integer DerivativeOrder,const Standard_Integer NbValAux = 0);


Standard_Integer MyBSplOrder;
Handle_TColStd_HArray1OfReal MyFlatKnots;
Handle_TColgp_HArray1OfPnt2d MyPoles;
Standard_Integer MyDerivativeOrder;
Standard_Integer MyNbVar;
Standard_Integer MyNbEqua;
Standard_Integer MyNbValAux;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
