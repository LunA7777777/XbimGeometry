// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BiTgte_CurveOnEdge_HeaderFile
#define _BiTgte_CurveOnEdge_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _gp_Circ_HeaderFile
#include <gp_Circ.hxx>
#endif
#ifndef _Adaptor3d_Curve_HeaderFile
#include <Adaptor3d_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_BezierCurve_HeaderFile
#include <Handle_Geom_BezierCurve.hxx>
#endif
#ifndef _Handle_Geom_BSplineCurve_HeaderFile
#include <Handle_Geom_BSplineCurve.hxx>
#endif
class Geom_Curve;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class TopoDS_Edge;
class TColStd_Array1OfReal;
class Adaptor3d_HCurve;
class gp_Pnt;
class gp_Vec;
class gp_Lin;
class gp_Circ;
class gp_Elips;
class gp_Hypr;
class gp_Parab;
class Geom_BezierCurve;
class Geom_BSplineCurve;



class BiTgte_CurveOnEdge  : public Adaptor3d_Curve {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BiTgte_CurveOnEdge();
  
  Standard_EXPORT   BiTgte_CurveOnEdge(const TopoDS_Edge& EonF,const TopoDS_Edge& Edge);
  
  Standard_EXPORT     void Init(const TopoDS_Edge& EonF,const TopoDS_Edge& Edge) ;
  
  Standard_EXPORT     Standard_Real FirstParameter() const;
  
  Standard_EXPORT     Standard_Real LastParameter() const;
  
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  //! Returns  the number  of  intervals for  continuity <br>
//!          <S>. May be one if Continuity(me) >= <S> <br>
  Standard_EXPORT     Standard_Integer NbIntervals(const GeomAbs_Shape S) const;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
  Standard_EXPORT     void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const;
  //! Returns    a  curve equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
  Standard_EXPORT     Handle_Adaptor3d_HCurve Trim(const Standard_Real First,const Standard_Real Last,const Standard_Real Tol) const;
  
  Standard_EXPORT     Standard_Boolean IsClosed() const;
  
  Standard_EXPORT     Standard_Boolean IsPeriodic() const;
  
  Standard_EXPORT     Standard_Real Period() const;
  //! Computes the point of parameter U on the curve. <br>
  Standard_EXPORT     gp_Pnt Value(const Standard_Real U) const;
  //! Computes the point of parameter U on the curve. <br>
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt& P) const;
  //! Computes the point of parameter U on the curve with its <br>
//!  first derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C1. <br>
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V) const;
  
//!  Returns the point P of parameter U, the first and second <br>
//!  derivatives V1 and V2. <br>//! Raised if the continuity of the current interval <br>
//!  is not C2. <br>
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) const;
  
//!  Returns the point P of parameter U, the first, the second <br>
//!  and the third derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C3. <br>
  Standard_EXPORT     void D3(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) const;
  
//!  The returned vector gives the value of the derivative for the <br>
//!  order of derivation N. <br>//! Raised if the continuity of the current interval <br>
//!  is not CN. <br>//! Raised if N < 1. <br>
  Standard_EXPORT     gp_Vec DN(const Standard_Real U,const Standard_Integer N) const;
  //!  Returns the parametric  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
  Standard_EXPORT     Standard_Real Resolution(const Standard_Real R3d) const;
  //! Returns  the  type of the   curve  in the  current <br>
//!          interval :   Line,   Circle,   Ellipse, Hyperbola, <br>
//!          Parabola, BezierCurve, BSplineCurve, OtherCurve. <br>
  Standard_EXPORT     GeomAbs_CurveType GetType() const;
  
  Standard_EXPORT     gp_Lin Line() const;
  
  Standard_EXPORT     gp_Circ Circle() const;
  
  Standard_EXPORT     gp_Elips Ellipse() const;
  
  Standard_EXPORT     gp_Hypr Hyperbola() const;
  
  Standard_EXPORT     gp_Parab Parabola() const;
  
  Standard_EXPORT     Standard_Integer Degree() const;
  
  Standard_EXPORT     Standard_Boolean IsRational() const;
  
  Standard_EXPORT     Standard_Integer NbPoles() const;
  
  Standard_EXPORT     Standard_Integer NbKnots() const;
  
  Standard_EXPORT     Handle_Geom_BezierCurve Bezier() const;
  
  Standard_EXPORT     Handle_Geom_BSplineCurve BSpline() const;





protected:





private:



TopoDS_Edge myEdge;
TopoDS_Edge myEonF;
Handle_Geom_Curve myCurv;
Handle_Geom_Curve myConF;
GeomAbs_CurveType myType;
gp_Circ myCirc;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
