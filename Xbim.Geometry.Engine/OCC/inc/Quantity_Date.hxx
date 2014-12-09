// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Quantity_Date_HeaderFile
#define _Quantity_Date_HeaderFile

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
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Quantity_DateDefinitionError;
class Standard_OutOfRange;
class Quantity_Period;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(Quantity_Date);

//! This class provides services to manage date information. <br>
//!          A date represents the following time intervals: <br>
//! year, month, day, hour, minute, second, <br>
//! millisecond and microsecond. <br>
//! Current time is expressed in elapsed seconds <br>
//! and microseconds beginning from 00:00 GMT, <br>
//! January 1, 1979 (zero hour). The valid date can <br>
//! only be later than this one. <br>
//! Note: a Period object gives the interval between two dates. <br>
class Quantity_Date  {

public:

  DEFINE_STANDARD_ALLOC

  //!  Constructs a default date <br>
//! (00:00 GMT, January 1, 1979 (zero hour)); use the function <br>
//!   SetValues to define the required date; or <br>
  Standard_EXPORT   Quantity_Date();
  //!   Constructs a date from the year yyyy, the <br>
//! month mm, the day dd, the hour hh, the minute <br>
//! mn, the second ss, the millisecond mis <br>
//! (defaulted to 0) and the microsecond mics (defaulted to 0).. <br>
//!          With:      1 <= mm <= 12 <br>
//!                     1 <= dd <= max number of days of <mm> <br>
//!                     1979 <= yyyy <br>
//!                     0 <= hh <= 23 <br>
//!                     0 <= mn <= 59 <br>
//!                     0 <= ss <= 59 <br>
//!                     0 <= mis <= 999 <br>
//!                     0 <= mics <= 999 <br>
//! Exceptions <br>
//! Quantity_DateDefinitionError if mm, dd, hh, <br>
//! mn, ss, mis and mics are not the components of the valid date. <br>
  Standard_EXPORT   Quantity_Date(const Standard_Integer mm,const Standard_Integer dd,const Standard_Integer yyyy,const Standard_Integer hh,const Standard_Integer mn,const Standard_Integer ss,const Standard_Integer mis = 0,const Standard_Integer mics = 0);
  //! Gets a complete Date. <br>
//! -   in mm - the month, <br>
//! -   in dd - the day, <br>
//! -   in yyyy - the year, <br>
//! -   in hh - the hour, <br>
//! -   in mn - the minute, <br>
//! -   in ss - the second, <br>
//! -   in mis - the millisecond, and <br>
//! -   in mics - the microsecond <br>
  Standard_EXPORT     void Values(Standard_Integer& mm,Standard_Integer& dd,Standard_Integer& yy,Standard_Integer& hh,Standard_Integer& mn,Standard_Integer& ss,Standard_Integer& mis,Standard_Integer& mics) const;
  //! Assigns to this date the year yyyy, the month <br>
//! mm, the day dd, the hour hh, the minute mn, the <br>
//! second ss, the millisecond mis (defaulted to 0) <br>
//! and the microsecond mics (defaulted to 0). <br>
//! Exceptions <br>
//! Quantity_DateDefinitionError if mm, dd, hh, <br>
//! mn, ss, mis and mics are not components of a valid date. <br>
  Standard_EXPORT     void SetValues(const Standard_Integer mm,const Standard_Integer dd,const Standard_Integer yy,const Standard_Integer hh,const Standard_Integer mn,const Standard_Integer ss,const Standard_Integer mis = 0,const Standard_Integer mics = 0) ;
  //! Subtracts one Date from another one to find the period <br>
//!          between and returns the value. <br>
//!          The result is the absolute value between the difference <br>
//!          of two dates. <br>
  Standard_EXPORT     Quantity_Period Difference(const Quantity_Date& anOther) ;
  //! Subtracts a period from a Date and returns the new Date. <br>
//!          Raises an exception if the result date is anterior to <br>
//!          Jan 1, 1979. <br>
  Standard_EXPORT     Quantity_Date Subtract(const Quantity_Period& aPeriod) ;
    Quantity_Date operator -(const Quantity_Period& aPeriod) 
{
  return Subtract(aPeriod);
}
  //! Adds a Period to a Date and returns the new Date. <br>
  Standard_EXPORT     Quantity_Date Add(const Quantity_Period& aPeriod) ;
    Quantity_Date operator +(const Quantity_Period& aPeriod) 
{
  return Add(aPeriod);
}
  //! Returns year of a Date. <br>
  Standard_EXPORT     Standard_Integer Year() ;
  //! Returns month of a Date. <br>
  Standard_EXPORT     Standard_Integer Month() ;
  //! Returns Day of a Date. <br>
  Standard_EXPORT     Standard_Integer Day() ;
  //! Returns Hour of a Date. <br>
  Standard_EXPORT     Standard_Integer Hour() ;
  //! Returns minute of a Date. <br>
  Standard_EXPORT     Standard_Integer Minute() ;
  //! Returns seconde of a Date. <br>
  Standard_EXPORT     Standard_Integer Second() ;
  //! Returns millisecond of a Date. <br>
  Standard_EXPORT     Standard_Integer MilliSecond() ;
  //! Returns microsecond of a Date. <br>
  Standard_EXPORT     Standard_Integer MicroSecond() ;
  //! Returns TRUE if both <me> and <other> are equal. <br>
//! This method is an alias of operator ==. <br>
  Standard_EXPORT     Standard_Boolean IsEqual(const Quantity_Date& anOther) const;
    Standard_Boolean operator ==(const Quantity_Date& anOther) const
{
  return IsEqual(anOther);
}
  //! Returns TRUE if <me> is earlier than <other>. <br>
  Standard_EXPORT     Standard_Boolean IsEarlier(const Quantity_Date& anOther) const;
    Standard_Boolean operator <(const Quantity_Date& anOther) const
{
  return IsEarlier(anOther);
}
  //! Returns TRUE if <me> is later then <other>. <br>
  Standard_EXPORT     Standard_Boolean IsLater(const Quantity_Date& anOther) const;
    Standard_Boolean operator >(const Quantity_Date& anOther) const
{
  return IsLater(anOther);
}
  //! Checks the validity of a date - returns true if a <br>
//! date defined from the year yyyy, the month mm, <br>
//! the day dd, the hour hh, the minute mn, the <br>
//! second ss, the millisecond mis (defaulted to 0) <br>
//! and the microsecond mics (defaulted to 0) is valid. <br>
//! A date must satisfy the conditions above: <br>
//! -   yyyy is greater than or equal to 1979, <br>
//! -   mm lies within the range [1, 12] (with 1 <br>
//!   corresponding to January and 12 to December), <br>
//! -   dd lies within a valid range for the month mm <br>
//!   (from 1 to 28, 29, 30 or 31 depending on <br>
//!   mm and whether yyyy is a leap year or not), <br>
//! -   hh lies within the range [0, 23], <br>
//! -   mn lies within the range [0, 59], <br>
//! -   ss lies within the range [0, 59], <br>
//! -   mis lies within the range [0, 999], <br>
//! -   mics lies within the range [0, 999].C <br>
  Standard_EXPORT   static  Standard_Boolean IsValid(const Standard_Integer mm,const Standard_Integer dd,const Standard_Integer yy,const Standard_Integer hh,const Standard_Integer mn,const Standard_Integer ss,const Standard_Integer mis = 0,const Standard_Integer mics = 0) ;
  //! Returns true if a year is a leap year. <br>
//!          The leap years are divisable by 4 and not by 100 except <br>
//!          the years divisable by 400. <br>
      static  Standard_Boolean IsLeap(const Standard_Integer yy) ;
    Standard_Integer _CSFDB_GetQuantity_DatemySec() const { return mySec; }
    void _CSFDB_SetQuantity_DatemySec(const Standard_Integer p) { mySec = p; }
    Standard_Integer _CSFDB_GetQuantity_DatemyUSec() const { return myUSec; }
    void _CSFDB_SetQuantity_DatemyUSec(const Standard_Integer p) { myUSec = p; }



protected:




private: 


Standard_Integer mySec;
Standard_Integer myUSec;


};


#include <Quantity_Date.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
