/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/storage/public/mozIStorageServiceQuotaManagement.idl
 */

#ifndef __gen_mozIStorageServiceQuotaManagement_h__
#define __gen_mozIStorageServiceQuotaManagement_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIStorageConnection; /* forward declaration */

class nsIFile; /* forward declaration */


/* starting interface:    mozIStorageQuotaCallback */
#define MOZISTORAGEQUOTACALLBACK_IID_STR "ae94f0a5-ebdf-48f4-9959-085e13235d8d"

#define MOZISTORAGEQUOTACALLBACK_IID \
  {0xae94f0a5, 0xebdf, 0x48f4, \
    { 0x99, 0x59, 0x08, 0x5e, 0x13, 0x23, 0x5d, 0x8d }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIStorageQuotaCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZISTORAGEQUOTACALLBACK_IID)

  /* long long quotaExceeded (in ACString aFilename, in long long aCurrentSizeLimit, in long long aCurrentTotalSize, in nsISupports aUserData); */
  NS_SCRIPTABLE NS_IMETHOD QuotaExceeded(const nsACString & aFilename, PRInt64 aCurrentSizeLimit, PRInt64 aCurrentTotalSize, nsISupports *aUserData, PRInt64 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIStorageQuotaCallback, MOZISTORAGEQUOTACALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZISTORAGEQUOTACALLBACK \
  NS_SCRIPTABLE NS_IMETHOD QuotaExceeded(const nsACString & aFilename, PRInt64 aCurrentSizeLimit, PRInt64 aCurrentTotalSize, nsISupports *aUserData, PRInt64 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZISTORAGEQUOTACALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD QuotaExceeded(const nsACString & aFilename, PRInt64 aCurrentSizeLimit, PRInt64 aCurrentTotalSize, nsISupports *aUserData, PRInt64 *_retval NS_OUTPARAM) { return _to QuotaExceeded(aFilename, aCurrentSizeLimit, aCurrentTotalSize, aUserData, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZISTORAGEQUOTACALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD QuotaExceeded(const nsACString & aFilename, PRInt64 aCurrentSizeLimit, PRInt64 aCurrentTotalSize, nsISupports *aUserData, PRInt64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->QuotaExceeded(aFilename, aCurrentSizeLimit, aCurrentTotalSize, aUserData, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIStorageQuotaCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZISTORAGEQUOTACALLBACK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIStorageQuotaCallback)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* long long quotaExceeded (in ACString aFilename, in long long aCurrentSizeLimit, in long long aCurrentTotalSize, in nsISupports aUserData); */
NS_IMETHODIMP _MYCLASS_::QuotaExceeded(const nsACString & aFilename, PRInt64 aCurrentSizeLimit, PRInt64 aCurrentTotalSize, nsISupports *aUserData, PRInt64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    mozIStorageServiceQuotaManagement */
#define MOZISTORAGESERVICEQUOTAMANAGEMENT_IID_STR "11def472-446f-4635-a1d8-8856e85aac50"

#define MOZISTORAGESERVICEQUOTAMANAGEMENT_IID \
  {0x11def472, 0x446f, 0x4635, \
    { 0xa1, 0xd8, 0x88, 0x56, 0xe8, 0x5a, 0xac, 0x50 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIStorageServiceQuotaManagement : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZISTORAGESERVICEQUOTAMANAGEMENT_IID)

  /* mozIStorageConnection openDatabaseWithVFS (in nsIFile aDatabaseFile, in ACString aVFSName); */
  NS_SCRIPTABLE NS_IMETHOD OpenDatabaseWithVFS(nsIFile *aDatabaseFile, const nsACString & aVFSName, mozIStorageConnection * *_retval NS_OUTPARAM) = 0;

  /* void setQuotaForFilenamePattern (in ACString aPattern, in long long aSizeLimit, in mozIStorageQuotaCallback aCallback, in nsISupports aUserData); */
  NS_SCRIPTABLE NS_IMETHOD SetQuotaForFilenamePattern(const nsACString & aPattern, PRInt64 aSizeLimit, mozIStorageQuotaCallback *aCallback, nsISupports *aUserData) = 0;

  /* void updateQutoaInformationForFile (in nsIFile aFile); */
  NS_SCRIPTABLE NS_IMETHOD UpdateQutoaInformationForFile(nsIFile *aFile) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIStorageServiceQuotaManagement, MOZISTORAGESERVICEQUOTAMANAGEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZISTORAGESERVICEQUOTAMANAGEMENT \
  NS_SCRIPTABLE NS_IMETHOD OpenDatabaseWithVFS(nsIFile *aDatabaseFile, const nsACString & aVFSName, mozIStorageConnection * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetQuotaForFilenamePattern(const nsACString & aPattern, PRInt64 aSizeLimit, mozIStorageQuotaCallback *aCallback, nsISupports *aUserData); \
  NS_SCRIPTABLE NS_IMETHOD UpdateQutoaInformationForFile(nsIFile *aFile); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZISTORAGESERVICEQUOTAMANAGEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenDatabaseWithVFS(nsIFile *aDatabaseFile, const nsACString & aVFSName, mozIStorageConnection * *_retval NS_OUTPARAM) { return _to OpenDatabaseWithVFS(aDatabaseFile, aVFSName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetQuotaForFilenamePattern(const nsACString & aPattern, PRInt64 aSizeLimit, mozIStorageQuotaCallback *aCallback, nsISupports *aUserData) { return _to SetQuotaForFilenamePattern(aPattern, aSizeLimit, aCallback, aUserData); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateQutoaInformationForFile(nsIFile *aFile) { return _to UpdateQutoaInformationForFile(aFile); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZISTORAGESERVICEQUOTAMANAGEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenDatabaseWithVFS(nsIFile *aDatabaseFile, const nsACString & aVFSName, mozIStorageConnection * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenDatabaseWithVFS(aDatabaseFile, aVFSName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetQuotaForFilenamePattern(const nsACString & aPattern, PRInt64 aSizeLimit, mozIStorageQuotaCallback *aCallback, nsISupports *aUserData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetQuotaForFilenamePattern(aPattern, aSizeLimit, aCallback, aUserData); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateQutoaInformationForFile(nsIFile *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateQutoaInformationForFile(aFile); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIStorageServiceQuotaManagement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZISTORAGESERVICEQUOTAMANAGEMENT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIStorageServiceQuotaManagement)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* mozIStorageConnection openDatabaseWithVFS (in nsIFile aDatabaseFile, in ACString aVFSName); */
NS_IMETHODIMP _MYCLASS_::OpenDatabaseWithVFS(nsIFile *aDatabaseFile, const nsACString & aVFSName, mozIStorageConnection * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setQuotaForFilenamePattern (in ACString aPattern, in long long aSizeLimit, in mozIStorageQuotaCallback aCallback, in nsISupports aUserData); */
NS_IMETHODIMP _MYCLASS_::SetQuotaForFilenamePattern(const nsACString & aPattern, PRInt64 aSizeLimit, mozIStorageQuotaCallback *aCallback, nsISupports *aUserData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateQutoaInformationForFile (in nsIFile aFile); */
NS_IMETHODIMP _MYCLASS_::UpdateQutoaInformationForFile(nsIFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_mozIStorageServiceQuotaManagement_h__ */
