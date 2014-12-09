// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_DraftAngle_HeaderFile
#define _BRepOffsetAPI_DraftAngle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _BRepBuilderAPI_ModifyShape_HeaderFile
#include <BRepBuilderAPI_ModifyShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Draft_ErrorStatus_HeaderFile
#include <Draft_ErrorStatus.hxx>
#endif
class StdFail_NotDone;
class Standard_NullObject;
class Standard_NoSuchObject;
class Standard_ConstructionError;
class TopoDS_Shape;
class TopoDS_Face;
class gp_Dir;
class gp_Pln;
class TopTools_ListOfShape;


//! Taper-adding transformations on a shape. <br>
//! The resulting shape is constructed by defining one face <br>
//! to be tapered after another one, as well as the <br>
//! geometric properties of their tapered transformation. <br>
//! Each tapered transformation is propagated along the <br>
//! series of faces which are tangential to one another and <br>
//! which contains the face to be tapered. <br>
//! This algorithm is useful in the construction of molds or <br>
//! dies. It facilitates the removal of the article being produced. <br>
//! A DraftAngle object provides a framework for: <br>
//! - initializing the construction algorithm with a given shape, <br>
//! - acquiring the data characterizing the faces to be tapered, <br>
//! - implementing the construction algorithm, and <br>
//! - consulting the results. <br>
//! Warning <br>
//! - This algorithm treats planar, cylindrical and conical faces. <br>
//! - Do not use shapes, which with a draft angle added to <br>
//!   a face would modify the topology. This would, for <br>
//!   example, involve creation of new vertices, edges or <br>
//!   faces, or suppression of existing vertices, edges or faces. <br>
//! - Any face, which is continuous in tangency with the <br>
//!   face to be tapered, will also be tapered. These <br>
//!   connected faces must also respect the above criteria. <br>
class BRepOffsetAPI_DraftAngle  : public BRepBuilderAPI_ModifyShape {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs an empty algorithm to perform <br>
//! taper-adding transformations on faces of a shape. <br>
//! Use the Init function to define the shape to be tapered. <br>
  Standard_EXPORT   BRepOffsetAPI_DraftAngle();
  //! Initializes an algorithm to perform taper-adding <br>
//! transformations on faces of the shape S. <br>
//! S will be referred to as the initial shape of the algorithm. <br>
  Standard_EXPORT   BRepOffsetAPI_DraftAngle(const TopoDS_Shape& S);
  //! Cancels the results of all taper-adding transformations <br>
//! performed by this algorithm on the initial shape. These <br>
//! results will have been defined by successive calls to the function Add. <br>
  Standard_EXPORT     void Clear() ;
  //! Initializes, or reinitializes this taper-adding algorithm with the shape S. <br>
//! S will be referred to as the initial shape of this algorithm. <br>
  Standard_EXPORT     void Init(const TopoDS_Shape& S) ;
  //!  Adds the face F, the direction <br>
//! Direction, the angle Angle, the plane NeutralPlane, and the flag <br>
//! Flag to the framework created at construction time, and with this <br>
//! data, defines the taper-adding transformation. <br>
//! F is a face, which belongs to the initial shape of this algorithm or <br>
//! to the shape loaded by the function Init. <br>
//! Only planar, cylindrical or conical faces can be tapered: <br>
//! - If the face F is planar, it is tapered by inclining it <br>
//!   through the angle Angle about the line of intersection between the <br>
//!   plane NeutralPlane and F. <br>
//!   Direction indicates the side of NeutralPlane from which matter is <br>
//!   removed if Angle is positive or added if Angle is negative. <br>
//! - If F is cylindrical or conical, it is transformed in the <br>
//!   same way on a single face, resulting in a conical face if F <br>
//! is cylindrical, and a conical or cylindrical face if it is already conical. <br>
//! The taper-adding transformation is propagated from the face F along <br>
//! the series of planar, cylindrical or conical faces containing F, <br>
//! which are tangential to one another. <br>
//! Use the function AddDone to check if this taper-adding transformation is successful. <br>
//! Warning <br>
//! Nothing is done if: <br>
//! - the face F does not belong to the initial shape of this algorithm, or <br>
//! - the face F is not planar, cylindrical or conical. <br>
//! Exceptions <br>
//! - Standard_NullObject if the initial shape is not <br>
//!   defined, i.e. if this algorithm has not been initialized <br>
//!   with the non-empty constructor or the Init function. <br>
//! - Standard_ConstructionError if the previous call to <br>
//!   Add has failed. The function AddDone ought to have <br>
//!   been used to check for this, and the function Remove <br>
//!   to cancel the results of the unsuccessful taper-adding <br>
//!   transformation and to retrieve the previous shape. <br>
  Standard_EXPORT     void Add(const TopoDS_Face& F,const gp_Dir& Direction,const Standard_Real Angle,const gp_Pln& NeutralPlane,const Standard_Boolean Flag = Standard_True) ;
  //! Returns true if the previous taper-adding <br>
//! transformation performed by this algorithm in the last <br>
//! call to Add, was successful. <br>
//! If AddDone returns false: <br>
//! - the function ProblematicShape returns the face <br>
//!   on which the error occurred, <br>
//! - the function Remove has to be used to cancel the <br>
//!   results of the unsuccessful taper-adding <br>
//!   transformation and to retrieve the previous shape. <br>
//!   Exceptions <br>
//! Standard_NullObject if the initial shape has not <br>
//! been defined, i.e. if this algorithm has not been <br>
//! initialized with the non-empty constructor or the .Init function. <br>
  Standard_EXPORT     Standard_Boolean AddDone() const;
  //! Cancels the taper-adding transformation previously <br>
//! performed by this algorithm on the face F and the <br>
//! series of tangential faces which contain F, and retrieves <br>
//! the shape before the last taper-adding transformation. <br>
//! Warning <br>
//! You will have to use this function if the previous call to <br>
//! Add fails. Use the function AddDone to check it. <br>
//! Exceptions <br>
//! - Standard_NullObject if the initial shape has not <br>
//!  been defined, i.e. if this algorithm has not been <br>
//!  initialized with the non-empty constructor or the Init function. <br>
//! - Standard_NoSuchObject if F has not been added <br>
//!   or has already been removed. <br>
  Standard_EXPORT     void Remove(const TopoDS_Face& F) ;
  //! Returns the shape on which an error occurred after an <br>
//! unsuccessful call to Add or when IsDone returns false. <br>
//! Exceptions <br>
//! Standard_NullObject if the initial shape has not been <br>
//! defined, i.e. if this algorithm has not been initialized with <br>
//! the non-empty constructor or the Init function. <br>
  Standard_EXPORT    const TopoDS_Shape& ProblematicShape() const;
  //! Returns an error  status when an error has occured <br>
//!          (Face,   Edge    or Vertex  recomputaion problem). <br>
//!          Otherwise returns Draft_NoError. The method may be <br>
//!          called if AddDone  returns Standard_False, or when <br>
//!          IsDone returns Standard_False. <br>
  Standard_EXPORT     Draft_ErrorStatus Status() const;
  //! Returns all  the  faces   which  have been   added <br>
//!          together with the face <F>. <br>
//! <br>
  Standard_EXPORT    const TopTools_ListOfShape& ConnectedFaces(const TopoDS_Face& F) const;
  //! Returns all the faces  on which a modification has <br>
//!          been given. <br>
//! <br>
  Standard_EXPORT    const TopTools_ListOfShape& ModifiedFaces() const;
  //! Builds the resulting shape (redefined from MakeShape). <br>
  Standard_EXPORT   virtual  void Build() ;
  
  Standard_EXPORT     void CorrectWires() ;
  //! Returns the  list   of shapes generated   from the <br>
//!          shape <S>. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Generated(const TopoDS_Shape& S) ;
  //! Returns the list  of shapes modified from the shape <br>
//!          <S>. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Modified(const TopoDS_Shape& S) ;





protected:





private:



TopTools_ListOfShape myModifiedShapes;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
