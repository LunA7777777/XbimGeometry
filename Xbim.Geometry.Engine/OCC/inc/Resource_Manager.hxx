// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Resource_Manager_HeaderFile
#define _Resource_Manager_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Resource_Manager_HeaderFile
#include <Handle_Resource_Manager.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Resource_DataMapOfAsciiStringAsciiString_HeaderFile
#include <Resource_DataMapOfAsciiStringAsciiString.hxx>
#endif
#ifndef _Resource_DataMapOfAsciiStringExtendedString_HeaderFile
#include <Resource_DataMapOfAsciiStringExtendedString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_ExtString_HeaderFile
#include <Standard_ExtString.hxx>
#endif
class Standard_TypeMismatch;
class Resource_NoSuchResource;
class Standard_OutOfRange;
class TCollection_AsciiString;
class Resource_DataMapOfAsciiStringAsciiString;


//! Defines a resource structure and its management methods. <br>
class Resource_Manager : public MMgt_TShared {

public:

  //! Create a Resource manager. <br>
//!          Attempts to find the two following files: <br>
//!          $CSF_`aName`Defaults/aName <br>
//!          $CSF_`aName`UserDefaults/aName <br>
//!          and load them respectively into a reference and a user resource structure. <br>
//! <br>
//!          If CSF_ResourceVerbose defined, seeked files will be printed. <br>
//! <br>
//!         FILE SYNTAX <br>
//!              The syntax of a resource file is a sequence of resource <br>
//!              lines terminated by newline characters or end of file.  The <br>
//!              syntax of an individual resource line is: <br>
  Standard_EXPORT   Resource_Manager(const Standard_CString aName,const Standard_Boolean Verbose = Standard_False);
  
  Standard_EXPORT   Resource_Manager(const Standard_CString aName,TCollection_AsciiString& aDefaultsDirectory,TCollection_AsciiString& anUserDefaultsDirectory,const Standard_Boolean Verbose = Standard_False);
  //! Save the user resource structure in the specified file. <br>
//!          Creates the file if it does not exist. <br>
  Standard_EXPORT     Standard_Boolean Save() const;
  //! returns True if the Resource does exist. <br>
  Standard_EXPORT     Standard_Boolean Find(const Standard_CString aResource) const;
  //! Gets the value of an integer resource according to its <br>
//!          instance and its type. <br>
  Standard_EXPORT   virtual  Standard_Integer Integer(const Standard_CString aResourceName) const;
  //! Gets the value of a real resource according to its instance <br>
//!          and its type. <br>
  Standard_EXPORT   virtual  Standard_Real Real(const Standard_CString aResourceName) const;
  //! Gets the value of a CString resource according to its instance <br>
//!          and its type. <br>
  Standard_EXPORT   virtual  Standard_CString Value(const Standard_CString aResourceName) const;
  //! Gets the value of an ExtString resource according to its instance <br>
//!          and its type. <br>
  Standard_EXPORT   virtual  Standard_ExtString ExtValue(const Standard_CString aResourceName) ;
  //! Sets the new value of an integer resource. <br>
//!          If the resource does not exist, it is created. <br>
  Standard_EXPORT   virtual  void SetResource(const Standard_CString aResourceName,const Standard_Integer aValue) ;
  //! Sets the new value of a real resource. <br>
//!          If the resource does not exist, it is created. <br>
  Standard_EXPORT   virtual  void SetResource(const Standard_CString aResourceName,const Standard_Real aValue) ;
  //! Sets the new value of an CString resource. <br>
//!          If the resource does not exist, it is created. <br>
  Standard_EXPORT   virtual  void SetResource(const Standard_CString aResourceName,const Standard_CString aValue) ;
  //! Sets the new value of an ExtString resource. <br>
//!          If the resource does not exist, it is created. <br>
  Standard_EXPORT   virtual  void SetResource(const Standard_CString aResourceName,const Standard_ExtString aValue) ;




  DEFINE_STANDARD_RTTI(Resource_Manager)

protected:




private: 

  
  Standard_EXPORT     void Load(TCollection_AsciiString& aDirectory,TCollection_AsciiString& aName,Resource_DataMapOfAsciiStringAsciiString& aMap) ;

TCollection_AsciiString myName;
Resource_DataMapOfAsciiStringAsciiString myRefMap;
Resource_DataMapOfAsciiStringAsciiString myUserMap;
Resource_DataMapOfAsciiStringExtendedString myExtStrMap;
Standard_Boolean myVerbose;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
