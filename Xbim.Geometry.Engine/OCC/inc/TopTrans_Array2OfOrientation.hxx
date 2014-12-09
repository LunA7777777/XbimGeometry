// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTrans_Array2OfOrientation_HeaderFile
#define _TopTrans_Array2OfOrientation_HeaderFile

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
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;



class TopTrans_Array2OfOrientation  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopTrans_Array2OfOrientation(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   TopTrans_Array2OfOrientation(const TopAbs_Orientation& Item,const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT     void Init(const TopAbs_Orientation& V) ;
  
  Standard_EXPORT     void Destroy() ;
~TopTrans_Array2OfOrientation()
{
  Destroy();
}
  
  Standard_EXPORT    const TopTrans_Array2OfOrientation& Assign(const TopTrans_Array2OfOrientation& Other) ;
   const TopTrans_Array2OfOrientation& operator =(const TopTrans_Array2OfOrientation& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const TopAbs_Orientation& Value) ;
  
       const TopAbs_Orientation& Value(const Standard_Integer Row,const Standard_Integer Col) const;
     const TopAbs_Orientation& operator()(const Standard_Integer Row,const Standard_Integer Col) const
{
  return Value(Row,Col);
}
  
        TopAbs_Orientation& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
      TopAbs_Orientation& operator()(const Standard_Integer Row,const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}





protected:





private:

  
  Standard_EXPORT   TopTrans_Array2OfOrientation(const TopTrans_Array2OfOrientation& AnArray);
  
  Standard_EXPORT     void Allocate() ;


Standard_Integer myLowerRow;
Standard_Integer myLowerColumn;
Standard_Integer myUpperRow;
Standard_Integer myUpperColumn;
Standard_Boolean myDeletable;
Standard_Address myData;


};

#define Array2Item TopAbs_Orientation
#define Array2Item_hxx <TopAbs_Orientation.hxx>
#define TCollection_Array2 TopTrans_Array2OfOrientation
#define TCollection_Array2_hxx <TopTrans_Array2OfOrientation.hxx>

#include <TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
