// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_WireToFace_HeaderFile
#define _TopOpeBRepBuild_WireToFace_HeaderFile

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
class TopoDS_Wire;
class TopoDS_Face;
class TopTools_ListOfShape;



//! This class builds faces from a set of wires  SW and a face F. <br>
//! The face must have and underlying surface, say S. <br>
//! All of the edges of all of the wires must have a 2d representation <br>
//! on surface S (except if S is planar) <br>
class TopOpeBRepBuild_WireToFace  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepBuild_WireToFace();
  
  Standard_EXPORT     void Init() ;
  
  Standard_EXPORT     void AddWire(const TopoDS_Wire& W) ;
  
  Standard_EXPORT     void MakeFaces(const TopoDS_Face& F,TopTools_ListOfShape& LF) ;





protected:





private:



TopTools_ListOfShape myLW;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif