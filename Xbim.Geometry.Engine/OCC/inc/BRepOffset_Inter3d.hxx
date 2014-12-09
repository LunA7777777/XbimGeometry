// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_Inter3d_HeaderFile
#define _BRepOffset_Inter3d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_BRepAlgo_AsDes_HeaderFile
#include <Handle_BRepAlgo_AsDes.hxx>
#endif
#ifndef _TopTools_IndexedMapOfShape_HeaderFile
#include <TopTools_IndexedMapOfShape.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class BRepAlgo_AsDes;
class TopTools_ListOfShape;
class BRepAlgo_Image;
class TopoDS_Face;
class TopoDS_Shape;
class BRepOffset_Analyse;
class BRepOffset_DataMapOfShapeOffset;
class TopTools_DataMapOfShapeShape;
class TopTools_IndexedMapOfShape;


//! Computes the intersection face face in a set of faces <br>
//!          Store the result in a SD as AsDes. <br>
class BRepOffset_Inter3d  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepOffset_Inter3d(const Handle(BRepAlgo_AsDes)& AsDes,const TopAbs_State Side,const Standard_Real Tol);
  
  Standard_EXPORT     void CompletInt(const TopTools_ListOfShape& SetOfFaces,const BRepAlgo_Image& InitOffsetFace) ;
  
  Standard_EXPORT     void FaceInter(const TopoDS_Face& F1,const TopoDS_Face& F2,const BRepAlgo_Image& InitOffsetFace) ;
  
  Standard_EXPORT     void ConnexIntByArc(const TopTools_ListOfShape& SetOfFaces,const TopoDS_Shape& ShapeInit,const BRepOffset_Analyse& Analyse,const BRepAlgo_Image& InitOffsetFace) ;
  
  Standard_EXPORT     void ConnexIntByInt(const TopoDS_Shape& SI,const BRepOffset_DataMapOfShapeOffset& MapSF,const BRepOffset_Analyse& A,TopTools_DataMapOfShapeShape& MES,TopTools_DataMapOfShapeShape& Build,TopTools_ListOfShape& Failed) ;
  
  Standard_EXPORT     void ContextIntByInt(const TopTools_IndexedMapOfShape& ContextFaces,const Standard_Boolean ExtentContext,const BRepOffset_DataMapOfShapeOffset& MapSF,const BRepOffset_Analyse& A,TopTools_DataMapOfShapeShape& MES,TopTools_DataMapOfShapeShape& Build,TopTools_ListOfShape& Failed) ;
  
  Standard_EXPORT     void ContextIntByArc(const TopTools_IndexedMapOfShape& ContextFaces,const Standard_Boolean ExtentContext,const BRepOffset_Analyse& Analyse,const BRepAlgo_Image& InitOffsetFace,BRepAlgo_Image& InitOffsetEdge) ;
  
  Standard_EXPORT     void AddCommonEdges(const TopTools_ListOfShape& SetOfFaces) ;
  
  Standard_EXPORT     void SetDone(const TopoDS_Face& F1,const TopoDS_Face& F2) ;
  
  Standard_EXPORT     Standard_Boolean IsDone(const TopoDS_Face& F1,const TopoDS_Face& F2) const;
  
  Standard_EXPORT     TopTools_IndexedMapOfShape& TouchedFaces() ;
  
  Standard_EXPORT     Handle_BRepAlgo_AsDes AsDes() const;
  
  Standard_EXPORT     TopTools_IndexedMapOfShape& NewEdges() ;





protected:





private:

  
  Standard_EXPORT     void Store(const TopoDS_Face& F1,const TopoDS_Face& F2,const TopTools_ListOfShape& LInt1,const TopTools_ListOfShape& LInt2) ;


Handle_BRepAlgo_AsDes myAsDes;
TopTools_IndexedMapOfShape myTouched;
TopTools_DataMapOfShapeListOfShape myDone;
TopTools_IndexedMapOfShape myNewEdges;
TopAbs_State mySide;
Standard_Real myTol;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
