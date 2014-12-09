// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_Geometry_HeaderFile
#define _Geom_Geometry_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom_Geometry_HeaderFile
#include <Handle_Geom_Geometry.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_ConstructionError;
class gp_Pnt;
class gp_Ax1;
class gp_Ax2;
class gp_Vec;
class gp_Trsf;


//! The abstract class Geometry for 3D space is the root <br>
//! class of all geometric objects from the Geom <br>
//! package. It describes the common behavior of these objects when: <br>
//! - applying geometric transformations to objects, and <br>
//! - constructing objects by geometric transformation (including copying). <br>
//! Warning <br>
//! Only transformations which do not modify the nature <br>
//! of the geometry can be applied to Geom objects: this <br>
//! is the case with translations, rotations, symmetries <br>
//! and scales; this is also the case with gp_Trsf <br>
//! composite transformations which are used to define <br>
//! the geometric transformations applied using the <br>
//! Transform or Transformed functions. <br>
//! Note: Geometry defines the "prototype" of the <br>
//! abstract method Transform which is defined for each <br>
//! concrete type of derived object. All other <br>
//! transformations are implemented using the Transform method. <br>
class Geom_Geometry : public MMgt_TShared {

public:

  
//!  Performs the symmetrical transformation of a Geometry <br>
//!  with respect to the point P which is the center of the <br>
//!  symmetry. <br>
  Standard_EXPORT     void Mirror(const gp_Pnt& P) ;
  
//!  Performs the symmetrical transformation of a Geometry <br>
//!  with respect to an axis placement which is the axis of the <br>
//!  symmetry. <br>
  Standard_EXPORT     void Mirror(const gp_Ax1& A1) ;
  
//!  Performs the symmetrical transformation of a Geometry <br>
//!  with respect to a plane. The axis placement A2 locates <br>
//!  the plane of the symmetry : (Location, XDirection, YDirection). <br>
  Standard_EXPORT     void Mirror(const gp_Ax2& A2) ;
  
//!  Rotates a Geometry. A1 is the axis of the rotation. <br>
//!  Ang is the angular value of the rotation in radians. <br>
  Standard_EXPORT     void Rotate(const gp_Ax1& A1,const Standard_Real Ang) ;
  
//!  Scales a Geometry. S is the scaling value. <br>
  Standard_EXPORT     void Scale(const gp_Pnt& P,const Standard_Real S) ;
  
//!  Translates a Geometry.  V is the vector of the tanslation. <br>
  Standard_EXPORT     void Translate(const gp_Vec& V) ;
  
//!  Translates a Geometry from the point P1 to the point P2. <br>
  Standard_EXPORT     void Translate(const gp_Pnt& P1,const gp_Pnt& P2) ;
  
//!  Transformation of a geometric object. This tansformation <br>
//!  can be a translation, a rotation, a symmetry, a scaling <br>
//!  or a complex transformation obtained by combination of <br>
//!  the previous elementaries transformations. <br>
//!  (see class Transformation of the package Geom). <br>
  Standard_EXPORT   virtual  void Transform(const gp_Trsf& T)  = 0;
  
  Standard_EXPORT     Handle_Geom_Geometry Mirrored(const gp_Pnt& P) const;
  
  Standard_EXPORT     Handle_Geom_Geometry Mirrored(const gp_Ax1& A1) const;
  
  Standard_EXPORT     Handle_Geom_Geometry Mirrored(const gp_Ax2& A2) const;
  
  Standard_EXPORT     Handle_Geom_Geometry Rotated(const gp_Ax1& A1,const Standard_Real Ang) const;
  
  Standard_EXPORT     Handle_Geom_Geometry Scaled(const gp_Pnt& P,const Standard_Real S) const;
  
  Standard_EXPORT     Handle_Geom_Geometry Transformed(const gp_Trsf& T) const;
  
  Standard_EXPORT     Handle_Geom_Geometry Translated(const gp_Vec& V) const;
  
  Standard_EXPORT     Handle_Geom_Geometry Translated(const gp_Pnt& P1,const gp_Pnt& P2) const;
  //! Creates a new object which is a copy of this geometric object. <br>
  Standard_EXPORT   virtual  Handle_Geom_Geometry Copy() const = 0;




  DEFINE_STANDARD_RTTI(Geom_Geometry)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
