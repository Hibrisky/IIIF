#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[46] = 
{
	{ 0, 0 } /* 0x06000001 System.Void Mapbox.VectorTile.VectorTile::.ctor(System.Byte[],System.Boolean) */,
	{ 0, 0 } /* 0x06000002 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Mapbox.VectorTile.VectorTile::LayerNames() */,
	{ 0, 0 } /* 0x06000003 Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTile::GetLayer(System.String) */,
	{ 0, 0 } /* 0x06000004 System.Void Mapbox.VectorTile.VectorTileFeature::.ctor(Mapbox.VectorTile.VectorTileLayer,System.Nullable`1<System.UInt32>,System.Single) */,
	{ 0, 0 } /* 0x06000005 System.UInt64 Mapbox.VectorTile.VectorTileFeature::get_Id() */,
	{ 0, 0 } /* 0x06000006 System.Void Mapbox.VectorTile.VectorTileFeature::set_Id(System.UInt64) */,
	{ 0, 0 } /* 0x06000007 Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTileFeature::get_Layer() */,
	{ 0, 0 } /* 0x06000008 Mapbox.VectorTile.Geometry.GeomType Mapbox.VectorTile.VectorTileFeature::get_GeometryType() */,
	{ 0, 0 } /* 0x06000009 System.Void Mapbox.VectorTile.VectorTileFeature::set_GeometryType(Mapbox.VectorTile.Geometry.GeomType) */,
	{ 0, 0 } /* 0x0600000A System.Collections.Generic.List`1<System.UInt32> Mapbox.VectorTile.VectorTileFeature::get_GeometryCommands() */,
	{ 0, 0 } /* 0x0600000B System.Void Mapbox.VectorTile.VectorTileFeature::set_GeometryCommands(System.Collections.Generic.List`1<System.UInt32>) */,
	{ 0, 0 } /* 0x0600000C System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<T>>> Mapbox.VectorTile.VectorTileFeature::Geometry(System.Nullable`1<System.UInt32>,System.Nullable`1<System.Single>) */,
	{ 0, 0 } /* 0x0600000D System.Single Mapbox.VectorTile.VectorTileFeature::signedPolygonArea(System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>) */,
	{ 0, 0 } /* 0x0600000E System.Collections.Generic.List`1<System.Int32> Mapbox.VectorTile.VectorTileFeature::get_Tags() */,
	{ 0, 0 } /* 0x0600000F System.Void Mapbox.VectorTile.VectorTileFeature::set_Tags(System.Collections.Generic.List`1<System.Int32>) */,
	{ 0, 0 } /* 0x06000010 System.Collections.Generic.Dictionary`2<System.String,System.Object> Mapbox.VectorTile.VectorTileFeature::GetProperties() */,
	{ 0, 0 } /* 0x06000011 System.Void Mapbox.VectorTile.VectorTileLayer::.ctor() */,
	{ 0, 0 } /* 0x06000012 System.Void Mapbox.VectorTile.VectorTileLayer::.ctor(System.Byte[]) */,
	{ 0, 0 } /* 0x06000013 System.Byte[] Mapbox.VectorTile.VectorTileLayer::get_Data() */,
	{ 0, 0 } /* 0x06000014 System.Void Mapbox.VectorTile.VectorTileLayer::set_Data(System.Byte[]) */,
	{ 0, 0 } /* 0x06000015 System.Int32 Mapbox.VectorTile.VectorTileLayer::FeatureCount() */,
	{ 0, 0 } /* 0x06000016 Mapbox.VectorTile.VectorTileFeature Mapbox.VectorTile.VectorTileLayer::GetFeature(System.Int32,System.Nullable`1<System.UInt32>,System.Single) */,
	{ 0, 0 } /* 0x06000017 System.Void Mapbox.VectorTile.VectorTileLayer::AddFeatureData(System.Byte[]) */,
	{ 0, 0 } /* 0x06000018 System.String Mapbox.VectorTile.VectorTileLayer::get_Name() */,
	{ 0, 0 } /* 0x06000019 System.Void Mapbox.VectorTile.VectorTileLayer::set_Name(System.String) */,
	{ 0, 0 } /* 0x0600001A System.UInt64 Mapbox.VectorTile.VectorTileLayer::get_Version() */,
	{ 0, 0 } /* 0x0600001B System.Void Mapbox.VectorTile.VectorTileLayer::set_Version(System.UInt64) */,
	{ 0, 0 } /* 0x0600001C System.UInt64 Mapbox.VectorTile.VectorTileLayer::get_Extent() */,
	{ 0, 0 } /* 0x0600001D System.Void Mapbox.VectorTile.VectorTileLayer::set_Extent(System.UInt64) */,
	{ 0, 0 } /* 0x0600001E System.Collections.Generic.List`1<System.Byte[]> Mapbox.VectorTile.VectorTileLayer::get__FeaturesData() */,
	{ 0, 0 } /* 0x0600001F System.Void Mapbox.VectorTile.VectorTileLayer::set__FeaturesData(System.Collections.Generic.List`1<System.Byte[]>) */,
	{ 0, 0 } /* 0x06000020 System.Collections.Generic.List`1<System.Object> Mapbox.VectorTile.VectorTileLayer::get_Values() */,
	{ 0, 0 } /* 0x06000021 System.Void Mapbox.VectorTile.VectorTileLayer::set_Values(System.Collections.Generic.List`1<System.Object>) */,
	{ 0, 0 } /* 0x06000022 System.Collections.Generic.List`1<System.String> Mapbox.VectorTile.VectorTileLayer::get_Keys() */,
	{ 0, 0 } /* 0x06000023 System.Void Mapbox.VectorTile.VectorTileLayer::set_Keys(System.Collections.Generic.List`1<System.String>) */,
	{ 0, 0 } /* 0x06000024 System.Void Mapbox.VectorTile.VectorTileReader::.ctor(System.Byte[],System.Boolean) */,
	{ 0, 0 } /* 0x06000025 System.Void Mapbox.VectorTile.VectorTileReader::layers(System.Byte[]) */,
	{ 0, 0 } /* 0x06000026 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Mapbox.VectorTile.VectorTileReader::LayerNames() */,
	{ 0, 0 } /* 0x06000027 Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTileReader::GetLayer(System.String) */,
	{ 0, 0 } /* 0x06000028 Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTileReader::getLayer(System.Byte[]) */,
	{ 0, 0 } /* 0x06000029 Mapbox.VectorTile.VectorTileFeature Mapbox.VectorTile.VectorTileReader::GetFeature(Mapbox.VectorTile.VectorTileLayer,System.Byte[],System.Boolean,System.Nullable`1<System.UInt32>,System.Single) */,
	{ 0, 0 } /* 0x0600002A System.Void Mapbox.VectorTile.VectorTileReader/<>c::.cctor() */,
	{ 0, 0 } /* 0x0600002B System.Void Mapbox.VectorTile.VectorTileReader/<>c::.ctor() */,
	{ 0, 0 } /* 0x0600002C System.Int32 Mapbox.VectorTile.VectorTileReader/<>c::<GetFeature>b__7_0(System.UInt32) */,
	{ 0, 0 } /* 0x0600002D System.Boolean Mapbox.VectorTile.VectorTileReader/<>c::<GetFeature>b__7_1(System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x0600002E System.Boolean Mapbox.VectorTile.VectorTileReader/<>c::<GetFeature>b__7_2(System.Int32,System.Int32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsMapbox_VectorTile_VectorTileReader[];
Il2CppSequencePoint g_sequencePointsMapbox_VectorTile_VectorTileReader[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#else
extern Il2CppSequencePoint g_sequencePointsMapbox_VectorTile_VectorTileReader[];
Il2CppSequencePoint g_sequencePointsMapbox_VectorTile_VectorTileReader[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[46] = 
{
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTile::.ctor(System.Byte[],System.Boolean) */,
	{ 0, 0, 0 } /* System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Mapbox.VectorTile.VectorTile::LayerNames() */,
	{ 0, 0, 0 } /* Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTile::GetLayer(System.String) */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileFeature::.ctor(Mapbox.VectorTile.VectorTileLayer,System.Nullable`1<System.UInt32>,System.Single) */,
	{ 0, 0, 0 } /* System.UInt64 Mapbox.VectorTile.VectorTileFeature::get_Id() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileFeature::set_Id(System.UInt64) */,
	{ 0, 0, 0 } /* Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTileFeature::get_Layer() */,
	{ 0, 0, 0 } /* Mapbox.VectorTile.Geometry.GeomType Mapbox.VectorTile.VectorTileFeature::get_GeometryType() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileFeature::set_GeometryType(Mapbox.VectorTile.Geometry.GeomType) */,
	{ 0, 0, 0 } /* System.Collections.Generic.List`1<System.UInt32> Mapbox.VectorTile.VectorTileFeature::get_GeometryCommands() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileFeature::set_GeometryCommands(System.Collections.Generic.List`1<System.UInt32>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<T>>> Mapbox.VectorTile.VectorTileFeature::Geometry(System.Nullable`1<System.UInt32>,System.Nullable`1<System.Single>) */,
	{ 0, 0, 0 } /* System.Single Mapbox.VectorTile.VectorTileFeature::signedPolygonArea(System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.List`1<System.Int32> Mapbox.VectorTile.VectorTileFeature::get_Tags() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileFeature::set_Tags(System.Collections.Generic.List`1<System.Int32>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.Dictionary`2<System.String,System.Object> Mapbox.VectorTile.VectorTileFeature::GetProperties() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileLayer::.ctor() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileLayer::.ctor(System.Byte[]) */,
	{ 0, 0, 0 } /* System.Byte[] Mapbox.VectorTile.VectorTileLayer::get_Data() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileLayer::set_Data(System.Byte[]) */,
	{ 0, 0, 0 } /* System.Int32 Mapbox.VectorTile.VectorTileLayer::FeatureCount() */,
	{ 0, 0, 0 } /* Mapbox.VectorTile.VectorTileFeature Mapbox.VectorTile.VectorTileLayer::GetFeature(System.Int32,System.Nullable`1<System.UInt32>,System.Single) */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileLayer::AddFeatureData(System.Byte[]) */,
	{ 0, 0, 0 } /* System.String Mapbox.VectorTile.VectorTileLayer::get_Name() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileLayer::set_Name(System.String) */,
	{ 0, 0, 0 } /* System.UInt64 Mapbox.VectorTile.VectorTileLayer::get_Version() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileLayer::set_Version(System.UInt64) */,
	{ 0, 0, 0 } /* System.UInt64 Mapbox.VectorTile.VectorTileLayer::get_Extent() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileLayer::set_Extent(System.UInt64) */,
	{ 0, 0, 0 } /* System.Collections.Generic.List`1<System.Byte[]> Mapbox.VectorTile.VectorTileLayer::get__FeaturesData() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileLayer::set__FeaturesData(System.Collections.Generic.List`1<System.Byte[]>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.List`1<System.Object> Mapbox.VectorTile.VectorTileLayer::get_Values() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileLayer::set_Values(System.Collections.Generic.List`1<System.Object>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.List`1<System.String> Mapbox.VectorTile.VectorTileLayer::get_Keys() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileLayer::set_Keys(System.Collections.Generic.List`1<System.String>) */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileReader::.ctor(System.Byte[],System.Boolean) */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileReader::layers(System.Byte[]) */,
	{ 0, 0, 0 } /* System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Mapbox.VectorTile.VectorTileReader::LayerNames() */,
	{ 0, 0, 0 } /* Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTileReader::GetLayer(System.String) */,
	{ 0, 0, 0 } /* Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTileReader::getLayer(System.Byte[]) */,
	{ 0, 0, 0 } /* Mapbox.VectorTile.VectorTileFeature Mapbox.VectorTile.VectorTileReader::GetFeature(Mapbox.VectorTile.VectorTileLayer,System.Byte[],System.Boolean,System.Nullable`1<System.UInt32>,System.Single) */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileReader/<>c::.cctor() */,
	{ 0, 0, 0 } /* System.Void Mapbox.VectorTile.VectorTileReader/<>c::.ctor() */,
	{ 0, 0, 0 } /* System.Int32 Mapbox.VectorTile.VectorTileReader/<>c::<GetFeature>b__7_0(System.UInt32) */,
	{ 0, 0, 0 } /* System.Boolean Mapbox.VectorTile.VectorTileReader/<>c::<GetFeature>b__7_1(System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean Mapbox.VectorTile.VectorTileReader/<>c::<GetFeature>b__7_2(System.Int32,System.Int32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationMapbox_VectorTile_VectorTileReader;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationMapbox_VectorTile_VectorTileReader = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	0,
	(Il2CppSequencePoint*)g_sequencePointsMapbox_VectorTile_VectorTileReader,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	0,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
