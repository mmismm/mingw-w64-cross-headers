/*** Autogenerated by WIDL from d3dcommon.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_D3DCOMMON_H
#define __WIDL_D3DCOMMON_H

/* Forward declarations */

#ifndef __ID3D10Blob_FWD_DEFINED__
#define __ID3D10Blob_FWD_DEFINED__
typedef interface ID3D10Blob ID3D10Blob;
#endif

#ifndef __ID3DInclude_FWD_DEFINED__
#define __ID3DInclude_FWD_DEFINED__
typedef interface ID3DInclude ID3DInclude;
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _D3D_SHADER_MACRO {
    LPCSTR Name;
    LPCSTR Definition;
} D3D_SHADER_MACRO;
typedef struct _D3D_SHADER_MACRO *LPD3D_SHADER_MACRO;
/*****************************************************************************
 * ID3D10Blob interface
 */
#ifndef __ID3D10Blob_INTERFACE_DEFINED__
#define __ID3D10Blob_INTERFACE_DEFINED__

DEFINE_GUID(IID_ID3D10Blob, 0x8ba5fb08, 0x5195, 0x40e2, 0xac,0x58, 0x0d,0x98,0x9c,0x3a,0x01,0x02);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface ID3D10Blob : public IUnknown
{
    virtual void * STDMETHODCALLTYPE GetBufferPointer(
        ) = 0;

    virtual SIZE_T STDMETHODCALLTYPE GetBufferSize(
        ) = 0;

};
#else
typedef struct ID3D10BlobVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ID3D10Blob* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ID3D10Blob* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ID3D10Blob* This);

    /*** ID3D10Blob methods ***/
    void * (STDMETHODCALLTYPE *GetBufferPointer)(
        ID3D10Blob* This);

    SIZE_T (STDMETHODCALLTYPE *GetBufferSize)(
        ID3D10Blob* This);

    END_INTERFACE
} ID3D10BlobVtbl;
interface ID3D10Blob {
    CONST_VTBL ID3D10BlobVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ID3D10Blob_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ID3D10Blob_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ID3D10Blob_Release(This) (This)->lpVtbl->Release(This)
/*** ID3D10Blob methods ***/
#define ID3D10Blob_GetBufferPointer(This) (This)->lpVtbl->GetBufferPointer(This)
#define ID3D10Blob_GetBufferSize(This) (This)->lpVtbl->GetBufferSize(This)
#endif

#endif

void * STDMETHODCALLTYPE ID3D10Blob_GetBufferPointer_Proxy(
    ID3D10Blob* This);
void __RPC_STUB ID3D10Blob_GetBufferPointer_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
SIZE_T STDMETHODCALLTYPE ID3D10Blob_GetBufferSize_Proxy(
    ID3D10Blob* This);
void __RPC_STUB ID3D10Blob_GetBufferSize_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ID3D10Blob_INTERFACE_DEFINED__ */

typedef ID3D10Blob *LPD3D10BLOB;
typedef ID3D10Blob ID3DBlob;
typedef ID3DBlob *LPD3DBLOB;
#define IID_ID3DBlob IID_ID3D10Blob
typedef enum _D3D_INCLUDE_TYPE {
    D3D_INCLUDE_LOCAL = 0,
    D3D_INCLUDE_SYSTEM = 1,
    D3D10_INCLUDE_LOCAL = D3D_INCLUDE_LOCAL,
    D3D10_INCLUDE_SYSTEM = D3D_INCLUDE_SYSTEM,
    D3D_INCLUDE_FORCE_DWORD = 0x7fffffff
} D3D_INCLUDE_TYPE;
/*****************************************************************************
 * ID3DInclude interface
 */
#ifndef __ID3DInclude_INTERFACE_DEFINED__
#define __ID3DInclude_INTERFACE_DEFINED__

#if defined(__cplusplus) && !defined(CINTERFACE)
interface ID3DInclude
{
    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE Open(
        D3D_INCLUDE_TYPE include_type,
        const char *filename,
        const void *parent_data,
        const void **data,
        UINT *bytes) = 0;

    virtual HRESULT STDMETHODCALLTYPE Close(
        const void *data) = 0;

    END_INTERFACE
};
#else
typedef struct ID3DIncludeVtbl {
    BEGIN_INTERFACE

    /*** ID3DInclude methods ***/
    HRESULT (STDMETHODCALLTYPE *Open)(
        ID3DInclude* This,
        D3D_INCLUDE_TYPE include_type,
        const char *filename,
        const void *parent_data,
        const void **data,
        UINT *bytes);

    HRESULT (STDMETHODCALLTYPE *Close)(
        ID3DInclude* This,
        const void *data);

    END_INTERFACE
} ID3DIncludeVtbl;
interface ID3DInclude {
    CONST_VTBL ID3DIncludeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** ID3DInclude methods ***/
#define ID3DInclude_Open(This,include_type,filename,parent_data,data,bytes) (This)->lpVtbl->Open(This,include_type,filename,parent_data,data,bytes)
#define ID3DInclude_Close(This,data) (This)->lpVtbl->Close(This,data)
#endif

#endif

HRESULT STDMETHODCALLTYPE ID3DInclude_Open_Proxy(
    ID3DInclude* This,
    D3D_INCLUDE_TYPE include_type,
    const char *filename,
    const void *parent_data,
    const void **data,
    UINT *bytes);
void __RPC_STUB ID3DInclude_Open_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ID3DInclude_Close_Proxy(
    ID3DInclude* This,
    const void *data);
void __RPC_STUB ID3DInclude_Close_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ID3DInclude_INTERFACE_DEFINED__ */

typedef ID3DInclude *LPD3DINCLUDE;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __WIDL_D3DCOMMON_H */