// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_ListIteratorOfListOfC2DF_HeaderFile
#define _TopOpeBRepTool_ListIteratorOfListOfC2DF_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_TopOpeBRepTool_ListNodeOfListOfC2DF_HeaderFile
#include <Handle_TopOpeBRepTool_ListNodeOfListOfC2DF.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TopOpeBRepTool_ListOfC2DF;
class TopOpeBRepTool_C2DF;
class TopOpeBRepTool_ListNodeOfListOfC2DF;



class TopOpeBRepTool_ListIteratorOfListOfC2DF  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepTool_ListIteratorOfListOfC2DF();
  
  Standard_EXPORT   TopOpeBRepTool_ListIteratorOfListOfC2DF(const TopOpeBRepTool_ListOfC2DF& L);
  
  Standard_EXPORT     void Initialize(const TopOpeBRepTool_ListOfC2DF& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     TopOpeBRepTool_C2DF& Value() const;


friend class TopOpeBRepTool_ListOfC2DF;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item TopOpeBRepTool_C2DF
#define Item_hxx <TopOpeBRepTool_C2DF.hxx>
#define TCollection_ListNode TopOpeBRepTool_ListNodeOfListOfC2DF
#define TCollection_ListNode_hxx <TopOpeBRepTool_ListNodeOfListOfC2DF.hxx>
#define TCollection_ListIterator TopOpeBRepTool_ListIteratorOfListOfC2DF
#define TCollection_ListIterator_hxx <TopOpeBRepTool_ListIteratorOfListOfC2DF.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRepTool_ListNodeOfListOfC2DF
#define TCollection_ListNode_Type_() TopOpeBRepTool_ListNodeOfListOfC2DF_Type_()
#define TCollection_List TopOpeBRepTool_ListOfC2DF
#define TCollection_List_hxx <TopOpeBRepTool_ListOfC2DF.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
