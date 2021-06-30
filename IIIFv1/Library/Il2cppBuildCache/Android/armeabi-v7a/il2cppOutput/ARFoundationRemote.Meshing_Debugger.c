#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[3] = 
{
	{ 13595, 0,  2 } /*tableIndex: 0 */,
	{ 13618, 1,  3 } /*tableIndex: 1 */,
	{ 13615, 2,  4 } /*tableIndex: 2 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[3] = 
{
	"xrGeneralSettings",
	"manager",
	"loader",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[18] = 
{
	{ 0, 0 } /* 0x06000001 System.Void ARFoundationRemote.Runtime.Extensions::InitializeLoaderSyncIfNotInitialized(UnityEngine.XR.Management.XRManagerSettings) */,
	{ 0, 0 } /* 0x06000002 System.Boolean ARFoundationRemote.Runtime.IXRMeshSubsystem::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>) */,
	{ 0, 0 } /* 0x06000003 System.Void ARFoundationRemote.Runtime.IXRMeshSubsystem::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>) */,
	{ 0, 0 } /* 0x06000004 System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::SetDelegate(ARFoundationRemote.Runtime.IXRMeshSubsystem) */,
	{ 0, 0 } /* 0x06000005 System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::ClearDelegate(ARFoundationRemote.Runtime.IXRMeshSubsystem) */,
	{ 0, 0 } /* 0x06000006 System.Boolean ARFoundationRemote.Runtime.XRMeshSubsystemRemote::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>) */,
	{ 0, 0 } /* 0x06000007 System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>) */,
	{ 0, 0 } /* 0x06000008 System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::UnityEngine.ISubsystem.Start() */,
	{ 0, 0 } /* 0x06000009 System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::Stop() */,
	{ 0, 0 } /* 0x0600000A System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::Destroy() */,
	{ 0, 0 } /* 0x0600000B System.Boolean ARFoundationRemote.Runtime.XRMeshSubsystemRemote::get_running() */,
	{ 0, 0 } /* 0x0600000C System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::.ctor() */,
	{ 0, 3 } /* 0x0600000D UnityEngine.XR.XRMeshSubsystem ARFoundationRemote.Runtime.XRGeneralSettingsRemote::GetRealSubsystem() */,
	{ 0, 0 } /* 0x0600000E System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.ctor() */,
	{ 0, 0 } /* 0x0600000F System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.cctor() */,
	{ 0, 0 } /* 0x06000010 System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager::.ctor() */,
	{ 0, 0 } /* 0x06000011 System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::.ctor() */,
	{ 0, 0 } /* 0x06000012 System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::.cctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsARFoundationRemote_Meshing[];
Il2CppSequencePoint g_sequencePointsARFoundationRemote_Meshing[106] = 
{
	{ 31827, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 31827, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 31827, 1, 8, 8, 98, 99, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 31827, 1, 9, 9, 13, 52, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 31827, 1, 9, 9, 0, 0, 11, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 31827, 1, 9, 9, 53, 54, 14, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 31827, 1, 11, 11, 17, 49, 15, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 31827, 1, 12, 12, 13, 14, 22, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 31827, 1, 13, 13, 9, 10, 23, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 31827, 1, 9, 9, 13, 52, 2, kSequencePointKind_StepOut, 0, 9 } /* seqPointIndex: 9 */,
	{ 31827, 1, 11, 11, 17, 49, 16, kSequencePointKind_StepOut, 0, 10 } /* seqPointIndex: 10 */,
	{ 31830, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 31830, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 31830, 2, 41, 41, 72, 73, 0, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 31830, 2, 43, 43, 13, 46, 1, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 31830, 2, 44, 44, 13, 37, 12, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 31830, 2, 45, 45, 9, 10, 18, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 31830, 2, 43, 43, 13, 46, 6, kSequencePointKind_StepOut, 0, 17 } /* seqPointIndex: 17 */,
	{ 31831, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 31831, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 31831, 2, 47, 47, 74, 75, 0, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 31831, 2, 49, 49, 13, 53, 1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 31831, 2, 50, 50, 13, 38, 13, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 31831, 2, 51, 51, 9, 10, 19, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 31831, 2, 49, 49, 13, 53, 7, kSequencePointKind_StepOut, 0, 24 } /* seqPointIndex: 24 */,
	{ 31832, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 31832, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 31832, 2, 53, 53, 66, 67, 0, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 31832, 2, 54, 54, 13, 68, 1, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 31832, 2, 55, 55, 9, 10, 15, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 31832, 2, 54, 54, 13, 68, 7, kSequencePointKind_StepOut, 0, 30 } /* seqPointIndex: 30 */,
	{ 31833, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 31833, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 31833, 2, 62, 62, 68, 69, 0, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 31833, 2, 63, 63, 13, 115, 1, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 31833, 2, 64, 64, 9, 10, 19, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 31833, 2, 63, 63, 13, 115, 13, kSequencePointKind_StepOut, 0, 36 } /* seqPointIndex: 36 */,
	{ 31834, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 31834, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 31834, 2, 75, 75, 33, 34, 0, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 31834, 2, 76, 76, 13, 39, 1, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 31834, 2, 77, 77, 9, 10, 12, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 31834, 2, 76, 76, 13, 39, 6, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 31835, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 31835, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 31835, 2, 79, 79, 28, 29, 0, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 31835, 2, 80, 80, 13, 38, 1, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 31835, 2, 81, 81, 9, 10, 12, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 31835, 2, 80, 80, 13, 38, 6, kSequencePointKind_StepOut, 0, 48 } /* seqPointIndex: 48 */,
	{ 31836, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 31836, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 31836, 2, 83, 83, 31, 32, 0, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 31836, 2, 84, 84, 13, 41, 1, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 31836, 2, 85, 85, 9, 10, 12, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 31836, 2, 84, 84, 13, 41, 6, kSequencePointKind_StepOut, 0, 54 } /* seqPointIndex: 54 */,
	{ 31837, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 31837, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 31837, 2, 87, 87, 32, 57, 0, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 31837, 2, 87, 87, 32, 57, 5, kSequencePointKind_StepOut, 0, 58 } /* seqPointIndex: 58 */,
	{ 31839, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 31839, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 31839, 2, 139, 139, 58, 59, 0, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 31839, 2, 140, 140, 13, 64, 1, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 31839, 2, 141, 141, 13, 43, 7, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 31839, 2, 141, 141, 0, 0, 15, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 31839, 2, 141, 141, 44, 45, 18, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 31839, 2, 142, 142, 17, 57, 19, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 31839, 2, 143, 143, 17, 37, 26, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 31839, 2, 143, 143, 0, 0, 34, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 31839, 2, 143, 143, 38, 39, 37, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 31839, 2, 145, 145, 21, 68, 38, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 31839, 2, 147, 147, 21, 55, 45, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 31839, 2, 148, 148, 21, 40, 53, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 31839, 2, 148, 148, 0, 0, 63, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 31839, 2, 148, 148, 41, 42, 67, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 31839, 2, 149, 149, 25, 77, 68, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 31839, 2, 151, 151, 17, 18, 79, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 31839, 2, 152, 152, 13, 14, 80, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 31839, 2, 154, 154, 13, 25, 81, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 31839, 2, 155, 155, 9, 10, 86, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 31839, 2, 140, 140, 13, 64, 1, kSequencePointKind_StepOut, 0, 80 } /* seqPointIndex: 80 */,
	{ 31839, 2, 141, 141, 13, 43, 9, kSequencePointKind_StepOut, 0, 81 } /* seqPointIndex: 81 */,
	{ 31839, 2, 142, 142, 17, 57, 20, kSequencePointKind_StepOut, 0, 82 } /* seqPointIndex: 82 */,
	{ 31839, 2, 143, 143, 17, 37, 28, kSequencePointKind_StepOut, 0, 83 } /* seqPointIndex: 83 */,
	{ 31839, 2, 145, 145, 21, 68, 39, kSequencePointKind_StepOut, 0, 84 } /* seqPointIndex: 84 */,
	{ 31839, 2, 147, 147, 21, 55, 46, kSequencePointKind_StepOut, 0, 85 } /* seqPointIndex: 85 */,
	{ 31839, 2, 148, 148, 21, 40, 56, kSequencePointKind_StepOut, 0, 86 } /* seqPointIndex: 86 */,
	{ 31839, 2, 149, 149, 25, 77, 70, kSequencePointKind_StepOut, 0, 87 } /* seqPointIndex: 87 */,
	{ 31840, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 31840, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 31840, 2, 136, 136, 9, 59, 0, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 31840, 2, 136, 136, 9, 59, 1, kSequencePointKind_StepOut, 0, 91 } /* seqPointIndex: 91 */,
	{ 31840, 2, 136, 136, 9, 59, 12, kSequencePointKind_StepOut, 0, 92 } /* seqPointIndex: 92 */,
	{ 31841, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 31841, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 31841, 2, 97, 97, 9, 97, 0, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 31841, 2, 97, 97, 9, 97, 0, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 31842, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 31842, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 31842, 2, 100, 100, 13, 66, 0, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 31842, 2, 100, 100, 13, 66, 1, kSequencePointKind_StepOut, 0, 100 } /* seqPointIndex: 100 */,
	{ 31842, 2, 100, 100, 13, 66, 12, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 31844, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 31844, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 31844, 2, 104, 104, 17, 90, 0, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 31844, 2, 104, 104, 17, 90, 0, kSequencePointKind_StepOut, 0, 105 } /* seqPointIndex: 105 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsARFoundationRemote_Meshing[];
Il2CppSequencePoint g_sequencePointsARFoundationRemote_Meshing[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\Project\\IIIFv1\\Packages\\com.kyrylokuzyk.arfoundationremote\\Meshing\\Extensions.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //1 
{ "C:\\Project\\IIIFv1\\Packages\\com.kyrylokuzyk.arfoundationremote\\Meshing\\XRMeshSubsystemRemote.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[5] = 
{
	{ 4401, 1 },
	{ 4403, 2 },
	{ 4406, 2 },
	{ 4405, 2 },
	{ 4404, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[5] = 
{
	{ 0, 24 },
	{ 0, 17 },
	{ 0, 89 },
	{ 18, 81 },
	{ 37, 80 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[18] = 
{
	{ 24, 0, 1 } /* System.Void ARFoundationRemote.Runtime.Extensions::InitializeLoaderSyncIfNotInitialized(UnityEngine.XR.Management.XRManagerSettings) */,
	{ 0, 0, 0 } /* System.Boolean ARFoundationRemote.Runtime.IXRMeshSubsystem::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>) */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.IXRMeshSubsystem::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>) */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::SetDelegate(ARFoundationRemote.Runtime.IXRMeshSubsystem) */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::ClearDelegate(ARFoundationRemote.Runtime.IXRMeshSubsystem) */,
	{ 17, 1, 1 } /* System.Boolean ARFoundationRemote.Runtime.XRMeshSubsystemRemote::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>) */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>) */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::UnityEngine.ISubsystem.Start() */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::Stop() */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::Destroy() */,
	{ 0, 0, 0 } /* System.Boolean ARFoundationRemote.Runtime.XRMeshSubsystemRemote::get_running() */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::.ctor() */,
	{ 89, 2, 3 } /* UnityEngine.XR.XRMeshSubsystem ARFoundationRemote.Runtime.XRGeneralSettingsRemote::GetRealSubsystem() */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.ctor() */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.cctor() */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager::.ctor() */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::.ctor() */,
	{ 0, 0, 0 } /* System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::.cctor() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationARFoundationRemote_Meshing;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationARFoundationRemote_Meshing = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	106,
	(Il2CppSequencePoint*)g_sequencePointsARFoundationRemote_Meshing,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	5,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
