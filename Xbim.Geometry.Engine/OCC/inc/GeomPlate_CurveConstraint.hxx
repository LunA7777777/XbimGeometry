// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_CurveConstraint_HeaderFile
#define _GeomPlate_CurveConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomPlate_CurveConstraint_HeaderFile
#include <Handle_GeomPlate_CurveConstraint.hxx>
#endif

#ifndef _Handle_Adaptor3d_HCurveOnSurface_HeaderFile
#include <Handle_Adaptor3d_HCurveOnSurface.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _Handle_Law_Function_HeaderFile
#include <Handle_Law_Function.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomLProp_SLProps_HeaderFile
#include <GeomLProp_SLProps.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class Adaptor3d_HCurveOnSurface;
class Adaptor3d_HCurve;
class Geom2d_Curve;
class Adaptor2d_HCurve2d;
class Law_Function;
class Standard_ConstructionError;
class GeomLProp_SLProps;
class gp_Pnt;
class gp_Vec;



//! Defines curves as constraints to be used to deform a surface. <br>
class GeomPlate_CurveConstraint : public MMgt_TShared {

public:

  
//! Initializes an empty curve constraint object. <br>
  Standard_EXPORT   GeomPlate_CurveConstraint();
  //! Create a constraint <br>
//!  Order is the order of the constraint. The possible values for order are -1,0,1,2. <br>
//!  Order i means constraints Gi <br>
//!  Npt is the number of points associated with the constraint. <br>
//!  TolDist is the maximum error to satisfy for G0 constraints <br>
//!  TolAng is the maximum error to satisfy for G1 constraints <br>
//!  TolCurv is the maximum error to satisfy for G2 constraints <br>
//!  These errors can be replaced by laws of criterion. <br>
//! Raises    ConstructionError if Order is not -1 , 0,  1,  2 <br>
  Standard_EXPORT   GeomPlate_CurveConstraint(const Handle(Adaptor3d_HCurveOnSurface)& Boundary,const Standard_Integer Order,const Standard_Integer NPt = 10,const Standard_Real TolDist = 0.0001,const Standard_Real TolAng = 0.01,const Standard_Real TolCurv = 0.1);
  //! Create a constraint <br>
//!  Order is the order of the constraint. The possible values for order are -1,0. <br>
//!  Order i means constraints Gi <br>
//!  Npt is the number of points associated with the constraint. <br>
//!  TolDist is the maximum error to satisfy for G0 constraints <br>
//!  These errors can be replaced by laws of criterion. <br>
//! Raises    ConstructionError if Order  is  not  0  or  -1 <br>
  Standard_EXPORT   GeomPlate_CurveConstraint(const Handle(Adaptor3d_HCurve)& Boundary,const Standard_Integer Tang,const Standard_Integer NPt = 10,const Standard_Real TolDist = 0.0001);
  //! Allows you to set the order of continuity required for <br>
//! the constraints: G0, G1, and G2, controlled <br>
//! respectively by G0Criterion G1Criterion and G2Criterion. <br>
  Standard_EXPORT     void SetOrder(const Standard_Integer Order) ;
  //! Returns the order of constraint, one of G0, G1 or G2. <br>
  Standard_EXPORT     Standard_Integer Order() const;
  //! Returns the number of points on the curve used as a <br>
//! constraint. The default setting is 10. This parameter <br>
//! affects computation time, which increases by the cube of <br>
//! the number of points. <br>
  Standard_EXPORT     Standard_Integer NbPoints() const;
  
//! Allows you to set the number of points on the curve <br>
//! constraint. The default setting is 10. This parameter <br>
//! affects computation time, which increases by the cube of <br>
//! the number of points. <br>
  Standard_EXPORT     void SetNbPoints(const Standard_Integer NewNb) ;
  
//! Allows you to set the G0 criterion. This is the law <br>
//! defining the greatest distance allowed between the <br>
//! constraint and the target surface for each point of the <br>
//! constraint. If this criterion is not set, TolDist, the <br>
//! distance tolerance from the constructor, is used. <br>
  Standard_EXPORT     void SetG0Criterion(const Handle(Law_Function)& G0Crit) ;
  
//! Allows you to set the G1 criterion. This is the law <br>
//! defining the greatest angle allowed between the <br>
//! constraint and the target surface. If this criterion is not <br>
//! set, TolAng, the angular tolerance from the constructor, is used. <br>
//! Raises  ConstructionError if  the  curve  is  not  on  a  surface <br>
  Standard_EXPORT     void SetG1Criterion(const Handle(Law_Function)& G1Crit) ;
  
  Standard_EXPORT     void SetG2Criterion(const Handle(Law_Function)& G2Crit) ;
  //!  Returns the G0 criterion at the parametric point U on <br>
//! the curve. This is the greatest distance allowed between <br>
//! the constraint and the target surface at U. <br>
  Standard_EXPORT     Standard_Real G0Criterion(const Standard_Real U) const;
  //! Returns the G1 criterion at the parametric point U on <br>
//! the curve. This is the greatest angle allowed between <br>
//! the constraint and the target surface at U. <br>
//! Raises  ConstructionError if  the  curve  is  not  on  a  surface <br>
  Standard_EXPORT     Standard_Real G1Criterion(const Standard_Real U) const;
  //! Returns the G2 criterion at the parametric point U on <br>
//! the curve. This is the greatest difference in curvature <br>
//! allowed between the constraint and the target surface at U. <br>
//! Raises  ConstructionError if  the  curve  is  not  on  a  surface <br>
  Standard_EXPORT     Standard_Real G2Criterion(const Standard_Real U) const;
  
  Standard_EXPORT     Standard_Real FirstParameter() const;
  
  Standard_EXPORT     Standard_Real LastParameter() const;
  
  Standard_EXPORT     Standard_Real Length() const;
  
  Standard_EXPORT     GeomLProp_SLProps& LPropSurf(const Standard_Real U) ;
  
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt& P) const;
  
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) const;
  
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3,gp_Vec& V4,gp_Vec& V5) const;
  
  Standard_EXPORT     Handle_Adaptor3d_HCurve Curve3d() const;
  //! loads a 2d curve associated the surface resulting of the constraints <br>
  Standard_EXPORT     void SetCurve2dOnSurf(const Handle(Geom2d_Curve)& Curve2d) ;
  //! Returns a 2d curve associated the surface resulting of the constraints <br>
//! <br>
  Standard_EXPORT     Handle_Geom2d_Curve Curve2dOnSurf() const;
  //!  loads a 2d curve  resulting from the normal projection of <br>
//!          the curve on the initial surface <br>
//! <br>
  Standard_EXPORT     void SetProjectedCurve(const Handle(Adaptor2d_HCurve2d)& Curve2d,const Standard_Real TolU,const Standard_Real TolV) ;
  //! Returns the projected curve resulting from the normal projection of the <br>
//!          curve on the initial surface <br>
//! <br>
  Standard_EXPORT     Handle_Adaptor2d_HCurve2d ProjectedCurve() const;




  DEFINE_STANDARD_RTTI(GeomPlate_CurveConstraint)

protected:


Handle_Adaptor3d_HCurveOnSurface myFrontiere;
Standard_Integer myNbPoints;
Standard_Integer myOrder;
Handle_Adaptor3d_HCurve my3dCurve;
Standard_Integer myTang;
Handle_Geom2d_Curve my2dCurve;
Handle_Adaptor2d_HCurve2d myHCurve2d;
Handle_Law_Function myG0Crit;
Handle_Law_Function myG1Crit;
Handle_Law_Function myG2Crit;
Standard_Boolean myConstG0;
Standard_Boolean myConstG1;
Standard_Boolean myConstG2;
GeomLProp_SLProps myLProp;
Standard_Real myTolDist;
Standard_Real myTolAng;
Standard_Real myTolCurv;
Standard_Real myTolU;
Standard_Real myTolV;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
