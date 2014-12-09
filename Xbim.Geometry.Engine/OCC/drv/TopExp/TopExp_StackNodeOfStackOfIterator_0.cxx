// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TopExp_StackNodeOfStackOfIterator.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _TopoDS_Iterator_HeaderFile
#include <TopoDS_Iterator.hxx>
#endif
#ifndef _TopExp_StackOfIterator_HeaderFile
#include <TopExp_StackOfIterator.hxx>
#endif
#ifndef _TopExp_StackIteratorOfStackOfIterator_HeaderFile
#include <TopExp_StackIteratorOfStackOfIterator.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(TopExp_StackNodeOfStackOfIterator)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TopExp_StackNodeOfStackOfIterator)


IMPLEMENT_DOWNCAST(TopExp_StackNodeOfStackOfIterator,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TopExp_StackNodeOfStackOfIterator)


#define Item TopoDS_Iterator
#define Item_hxx <TopoDS_Iterator.hxx>
#define TCollection_StackNode TopExp_StackNodeOfStackOfIterator
#define TCollection_StackNode_hxx <TopExp_StackNodeOfStackOfIterator.hxx>
#define TCollection_StackIterator TopExp_StackIteratorOfStackOfIterator
#define TCollection_StackIterator_hxx <TopExp_StackIteratorOfStackOfIterator.hxx>
#define Handle_TCollection_StackNode Handle_TopExp_StackNodeOfStackOfIterator
#define TCollection_StackNode_Type_() TopExp_StackNodeOfStackOfIterator_Type_()
#define TCollection_Stack TopExp_StackOfIterator
#define TCollection_Stack_hxx <TopExp_StackOfIterator.hxx>
#include <TCollection_StackNode.gxx>

