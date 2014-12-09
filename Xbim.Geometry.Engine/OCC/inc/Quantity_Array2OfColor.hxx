// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Quantity_Array2OfColor_HeaderFile
#define _Quantity_Array2OfColor_HeaderFile

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
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class Quantity_Color;



class Quantity_Array2OfColor  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Quantity_Array2OfColor(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   Quantity_Array2OfColor(const Quantity_Color& Item,const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT     void Init(const Quantity_Color& V) ;
  
  Standard_EXPORT     void Destroy() ;
~Quantity_Array2OfColor()
{
  Destroy();
}
  
  Standard_EXPORT    const Quantity_Array2OfColor& Assign(const Quantity_Array2OfColor& Other) ;
   const Quantity_Array2OfColor& operator =(const Quantity_Array2OfColor& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const Quantity_Color& Value) ;
  
       const Quantity_Color& Value(const Standard_Integer Row,const Standard_Integer Col) const;
     const Quantity_Color& operator()(const Standard_Integer Row,const Standard_Integer Col) const
{
  return Value(Row,Col);
}
  
        Quantity_Color& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
      Quantity_Color& operator()(const Standard_Integer Row,const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}





protected:





private:

  
  Standard_EXPORT   Quantity_Array2OfColor(const Quantity_Array2OfColor& AnArray);
  
  Standard_EXPORT     void Allocate() ;


Standard_Integer myLowerRow;
Standard_Integer myLowerColumn;
Standard_Integer myUpperRow;
Standard_Integer myUpperColumn;
Standard_Boolean myDeletable;
Standard_Address myData;


};

#define Array2Item Quantity_Color
#define Array2Item_hxx <Quantity_Color.hxx>
#define TCollection_Array2 Quantity_Array2OfColor
#define TCollection_Array2_hxx <Quantity_Array2OfColor.hxx>

#include <TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
