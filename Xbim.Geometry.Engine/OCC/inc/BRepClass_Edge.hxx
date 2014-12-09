// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepClass_Edge_HeaderFile
#define _BRepClass_Edge_HeaderFile

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
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
class TopoDS_Edge;
class TopoDS_Face;


//! This class  is used to send  the  description of an <br>
//!          Edge to the classifier. It  contains  an Edge and a <br>
//!          Face. So the PCurve of the Edge can be found. <br>
class BRepClass_Edge  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepClass_Edge();
  
  Standard_EXPORT   BRepClass_Edge(const TopoDS_Edge& E,const TopoDS_Face& F);
  
        TopoDS_Edge& Edge() ;
const TopoDS_Edge& Edge() const;
  
        TopoDS_Face& Face() ;
const TopoDS_Face& Face() const;





protected:





private:



TopoDS_Edge myEdge;
TopoDS_Face myFace;


};


#include <BRepClass_Edge.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
