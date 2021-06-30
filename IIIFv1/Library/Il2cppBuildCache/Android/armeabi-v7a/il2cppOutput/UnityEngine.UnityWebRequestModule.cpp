#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestModule[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0202811166757AF262261201E48B89F6244FAE6C;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05;
IL2CPP_EXTERN_C String_t* _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D;
IL2CPP_EXTERN_C String_t* _stringLiteral350138951CA76BFC65A77EA2D223A8D476B10BC5;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
IL2CPP_EXTERN_C String_t* _stringLiteral5AD0071445300544C945A4235FF5EE2237930AF6;
IL2CPP_EXTERN_C String_t* _stringLiteral5E56E678035E4A801BA617E16F57410976493BFB;
IL2CPP_EXTERN_C String_t* _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E;
IL2CPP_EXTERN_C String_t* _stringLiteral7D2659B30CD7065E2E3DAAE5ABDCFE4A0B66782E;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9305B29342F3BC0993F85105BB6141FF30569ED2;
IL2CPP_EXTERN_C String_t* _stringLiteral93CE1F3EEBFA5A5C2C336C37D31A01039231CA39;
IL2CPP_EXTERN_C String_t* _stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C;
IL2CPP_EXTERN_C String_t* _stringLiteralBC3A46521634BE1B34BB2F00154A05110A698F36;
IL2CPP_EXTERN_C String_t* _stringLiteralBCE49DFF590DB2AB94984A5C75EF18BDDD83FE69;
IL2CPP_EXTERN_C String_t* _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
IL2CPP_EXTERN_C String_t* _stringLiteralCE02B6F4CAAD9B14B2B4CBB6E5E1A7B2774E4FE2;
IL2CPP_EXTERN_C String_t* _stringLiteralCFD59FD74BD22E570703A8BC6B77F6081661FEEB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A;
IL2CPP_EXTERN_C const RuntimeMethod* CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CertificateHandler_ValidateCertificateNative_m7AA7136975CEB1635B201B08BB9B04059E7D0D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CertificateHandler_ValidateCertificate_mE76D686A7A10A86799FBF1F107EF3544D4A9D815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandlerBuffer_GetData_mAFE5BF2E12AE24B162769E9B736280A802E1A3AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandler_Finalize_m433AE11AD2DCBB21800F0ED5497FD3B762098202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandler_GetData_mBBC1BE90737613B3C322E4C1B3E971729924D62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequestAsyncOperation__ctor_m9A74EA34FBE3BA2B4E4D8FAB3B44301ECEDBCB62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_Finalize_m0E1202F2844C73C643D8B8DA23794FC9948A6D92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_Head_m6C2FEB6544810A19B07E3CB723182629CE49E8E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_Send_mCE6413FFF8346F6A03B4F785D22F11887021EE22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest__ctor_m1467508E7C27528D22989503B5A3FD71903C3CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest__ctor_m6F640D6320ABA5A1ED08C3B2A259DB67372DCECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UploadHandler_Finalize_mE43816DF1E8AFC6EA32518CE8C30A5EF99F06934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WWWTranscoder__cctor_mA3A2027DC5C23C8D8DDC8DDF795EE263B8B24C2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestUtils_RedirectTo_m0E8715D4658E15C9775C6D06E1891267CB3C852F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestUtils__cctor_mD79D1BBF154F1968AB3E32B710D8CE7583105600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Result_t3233C0F690EC3844C8E0C4649568659679AFBE75_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringBuilder_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke;;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tC81EA6223B5DC14CA590D1BADEDD82F8EB8B39EF 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.StringComparer
struct  StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.WWWForm
struct  WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB  : public RuntimeObject
{
public:

public:
};


// UnityEngine.WWWTranscoder
struct  WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771  : public RuntimeObject
{
public:

public:
};

struct WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields
{
public:
	// System.Byte[] UnityEngine.WWWTranscoder::ucHexChars
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ucHexChars_0;
	// System.Byte[] UnityEngine.WWWTranscoder::lcHexChars
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___lcHexChars_1;
	// System.Byte UnityEngine.WWWTranscoder::urlEscapeChar
	uint8_t ___urlEscapeChar_2;
	// System.Byte[] UnityEngine.WWWTranscoder::urlSpace
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___urlSpace_3;
	// System.Byte[] UnityEngine.WWWTranscoder::dataSpace
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataSpace_4;
	// System.Byte[] UnityEngine.WWWTranscoder::urlForbidden
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___urlForbidden_5;
	// System.Byte UnityEngine.WWWTranscoder::qpEscapeChar
	uint8_t ___qpEscapeChar_6;
	// System.Byte[] UnityEngine.WWWTranscoder::qpSpace
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___qpSpace_7;
	// System.Byte[] UnityEngine.WWWTranscoder::qpForbidden
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___qpForbidden_8;

public:
	inline static int32_t get_offset_of_ucHexChars_0() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___ucHexChars_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_ucHexChars_0() const { return ___ucHexChars_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_ucHexChars_0() { return &___ucHexChars_0; }
	inline void set_ucHexChars_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___ucHexChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ucHexChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_lcHexChars_1() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___lcHexChars_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_lcHexChars_1() const { return ___lcHexChars_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_lcHexChars_1() { return &___lcHexChars_1; }
	inline void set_lcHexChars_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___lcHexChars_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lcHexChars_1), (void*)value);
	}

	inline static int32_t get_offset_of_urlEscapeChar_2() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___urlEscapeChar_2)); }
	inline uint8_t get_urlEscapeChar_2() const { return ___urlEscapeChar_2; }
	inline uint8_t* get_address_of_urlEscapeChar_2() { return &___urlEscapeChar_2; }
	inline void set_urlEscapeChar_2(uint8_t value)
	{
		___urlEscapeChar_2 = value;
	}

	inline static int32_t get_offset_of_urlSpace_3() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___urlSpace_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_urlSpace_3() const { return ___urlSpace_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_urlSpace_3() { return &___urlSpace_3; }
	inline void set_urlSpace_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___urlSpace_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___urlSpace_3), (void*)value);
	}

	inline static int32_t get_offset_of_dataSpace_4() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___dataSpace_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_dataSpace_4() const { return ___dataSpace_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_dataSpace_4() { return &___dataSpace_4; }
	inline void set_dataSpace_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___dataSpace_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataSpace_4), (void*)value);
	}

	inline static int32_t get_offset_of_urlForbidden_5() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___urlForbidden_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_urlForbidden_5() const { return ___urlForbidden_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_urlForbidden_5() { return &___urlForbidden_5; }
	inline void set_urlForbidden_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___urlForbidden_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___urlForbidden_5), (void*)value);
	}

	inline static int32_t get_offset_of_qpEscapeChar_6() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___qpEscapeChar_6)); }
	inline uint8_t get_qpEscapeChar_6() const { return ___qpEscapeChar_6; }
	inline uint8_t* get_address_of_qpEscapeChar_6() { return &___qpEscapeChar_6; }
	inline void set_qpEscapeChar_6(uint8_t value)
	{
		___qpEscapeChar_6 = value;
	}

	inline static int32_t get_offset_of_qpSpace_7() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___qpSpace_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_qpSpace_7() const { return ___qpSpace_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_qpSpace_7() { return &___qpSpace_7; }
	inline void set_qpSpace_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___qpSpace_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qpSpace_7), (void*)value);
	}

	inline static int32_t get_offset_of_qpForbidden_8() { return static_cast<int32_t>(offsetof(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields, ___qpForbidden_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_qpForbidden_8() const { return ___qpForbidden_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_qpForbidden_8() { return &___qpForbidden_8; }
	inline void set_qpForbidden_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___qpForbidden_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qpForbidden_8), (void*)value);
	}
};


// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_StaticFields, ___domainRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___domainRegex_0), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.MemoryStream
struct  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_14)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.UriIdnScope
struct  UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct  UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct  Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
struct  UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod
struct  UnityWebRequestMethod_tF538D9A75B76FFC81710E65697E38C1B12E4F7E5 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityWebRequestMethod_tF538D9A75B76FFC81710E65697E38C1B12E4F7E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct  Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.DownloadHandlerBuffer
struct  DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Text.RegularExpressions.Regex
struct  Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___caps_9;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___capnames_10;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___capslist_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ___runnerref_13;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ___replref_14;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ___code_15;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_16;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___factory_1)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___internalMatchTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_9() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___caps_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_caps_9() const { return ___caps_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_caps_9() { return &___caps_9; }
	inline void set_caps_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___caps_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_9), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_10() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capnames_10)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_capnames_10() const { return ___capnames_10; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_capnames_10() { return &___capnames_10; }
	inline void set_capnames_10(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___capnames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_10), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_11() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capslist_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_capslist_11() const { return ___capslist_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_capslist_11() { return &___capslist_11; }
	inline void set_capslist_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___capslist_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_11), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_12() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capsize_12)); }
	inline int32_t get_capsize_12() const { return ___capsize_12; }
	inline int32_t* get_address_of_capsize_12() { return &___capsize_12; }
	inline void set_capsize_12(int32_t value)
	{
		___capsize_12 = value;
	}

	inline static int32_t get_offset_of_runnerref_13() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___runnerref_13)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get_runnerref_13() const { return ___runnerref_13; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of_runnerref_13() { return &___runnerref_13; }
	inline void set_runnerref_13(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		___runnerref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_13), (void*)value);
	}

	inline static int32_t get_offset_of_replref_14() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___replref_14)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get_replref_14() const { return ___replref_14; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of_replref_14() { return &___replref_14; }
	inline void set_replref_14(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		___replref_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_14), (void*)value);
	}

	inline static int32_t get_offset_of_code_15() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___code_15)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get_code_15() const { return ___code_15; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of_code_15() { return &___code_15; }
	inline void set_code_15(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		___code_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_15), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_16() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___refsInitialized_16)); }
	inline bool get_refsInitialized_16() const { return ___refsInitialized_16; }
	inline bool* get_address_of_refsInitialized_16() { return &___refsInitialized_16; }
	inline void set_refsInitialized_16(bool value)
	{
		___refsInitialized_16 = value;
	}
};

struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___FallbackDefaultMatchTimeout_7;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultMatchTimeout_8;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * ___livecode_17;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_18;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___FallbackDefaultMatchTimeout_7)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_FallbackDefaultMatchTimeout_7() const { return ___FallbackDefaultMatchTimeout_7; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_FallbackDefaultMatchTimeout_7() { return &___FallbackDefaultMatchTimeout_7; }
	inline void set_FallbackDefaultMatchTimeout_7(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___FallbackDefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_8() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___DefaultMatchTimeout_8)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultMatchTimeout_8() const { return ___DefaultMatchTimeout_8; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultMatchTimeout_8() { return &___DefaultMatchTimeout_8; }
	inline void set_DefaultMatchTimeout_8(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultMatchTimeout_8 = value;
	}

	inline static int32_t get_offset_of_livecode_17() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___livecode_17)); }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * get_livecode_17() const { return ___livecode_17; }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 ** get_address_of_livecode_17() { return &___livecode_17; }
	inline void set_livecode_17(LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * value)
	{
		___livecode_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_17), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_18() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___cacheSize_18)); }
	inline int32_t get_cacheSize_18() const { return ___cacheSize_18; }
	inline int32_t* get_address_of_cacheSize_18() { return &___cacheSize_18; }
	inline void set_cacheSize_18(int32_t value)
	{
		___cacheSize_18 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct  UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// System.Uri
struct  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.Action`1<UnityEngine.AsyncOperation>
struct  Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.FormatException
struct  FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled);
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD8CBF904F9521047E6C4EFEB652A8A41E4FFE522_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C (int32_t ___err0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0 (int64_t ___responseCode0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290 (String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.String[] UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mD8CBF904F9521047E6C4EFEB652A8A41E4FFE522_gshared)(__this, ___capacity0, ___comparer1, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uh0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___timeout0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m6F640D6320ABA5A1ED08C3B2A259DB67372DCECB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___downloadHandler2, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uploadHandler3, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_mFC0E13622A23CD19A631B9ABBA506683B71A2E4A (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * ___self0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173 (const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___space2, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___index1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___comperand2, const RuntimeMethod* method);
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, int32_t ___offset1, const RuntimeMethod* method);
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689 (const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.UriKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, int32_t ___uriKind1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___relativeUri1, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m0B44AFB01F3FEDE9319BA4556288340D16101F9D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Equality_mB322C9CBB45846441BDCA7357E7D28123824ED83 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri10, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri21, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___input0, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsFile_mCFA022C6E4641EBD7285A01056B7E201CEFD2C73 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsLoopback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsLoopback_m6988313CE348064A6A068347D878DDC51594B710 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsolutePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF (String_t* ___encoded0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mE87B9746FC40A7ECC0149A24685BD0713459FAF1 (StringBuilder_t * __this, String_t* ___value0, int32_t ___capacity1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.Uri::get_PathAndQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Fragment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Fragment_m1734B2D3F27F38AA342CB65885DE732160501E72 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___toEncode0, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_pinvoke_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_back(const CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshal_com_cleanup(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.CertificateHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method)
{
	typedef void (*CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495_ftn) (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E *);
	static CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.CertificateHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificate_mE76D686A7A10A86799FBF1F107EF3544D4A9D815 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___certificateData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CertificateHandler_ValidateCertificate_mE76D686A7A10A86799FBF1F107EF3544D4A9D815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___certificateData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CertificateHandler_ValidateCertificate_mE76D686A7A10A86799FBF1F107EF3544D4A9D815_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 716));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 717));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 718));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 719));
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 720));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificateNative_m7AA7136975CEB1635B201B08BB9B04059E7D0D16 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___certificateData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CertificateHandler_ValidateCertificateNative_m7AA7136975CEB1635B201B08BB9B04059E7D0D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___certificateData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CertificateHandler_ValidateCertificateNative_m7AA7136975CEB1635B201B08BB9B04059E7D0D16_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 721));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 722));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 723));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 724));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___certificateData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 726));
		bool L_1;
		L_1 = VirtFuncInvoker1< bool, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */, __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 726));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 725));
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493 (CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 727));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 728));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 729));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 730));
		intptr_t L_0 = __this->get_m_Ptr_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 737));
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 737));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 731));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 732));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 733));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 738));
		CertificateHandler_Release_m463507E5A95CB00F1F90CCF7215F51C611AFD495(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 738));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 734));
		__this->set_m_Ptr_0((intptr_t)(0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 735));
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 736));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_pinvoke_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_back(const DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshal_com_cleanup(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	typedef void (*DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA_ftn) (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *);
	static DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 739));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 740));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 741));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 744));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 744));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 742));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 743));
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Finalize_m433AE11AD2DCBB21800F0ED5497FD3B762098202 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_Finalize_m433AE11AD2DCBB21800F0ED5497FD3B762098202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DownloadHandler_Finalize_m433AE11AD2DCBB21800F0ED5497FD3B762098202_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 745));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 746));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 747));
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 748));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 749));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 752));
		DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 752));
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 750));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 753));
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 753));
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 751));
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 754));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 755));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 756));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 757));
		intptr_t L_0 = __this->get_m_Ptr_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 764));
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 764));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 758));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 759));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 760));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 765));
		DownloadHandler_Release_m3F88C5E48B7B7A80D993B575F5E906159AAEEDEA(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 765));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 761));
		__this->set_m_Ptr_0((intptr_t)(0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 762));
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 763));
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 766));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 767));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 768));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 769));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 771));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(5 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 771));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 770));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_GetData_mBBC1BE90737613B3C322E4C1B3E971729924D62B (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_GetData_mBBC1BE90737613B3C322E4C1B3E971729924D62B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DownloadHandler_GetData_mBBC1BE90737613B3C322E4C1B3E971729924D62B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 772));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 773));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 774));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 775));
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 776));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = V_0;
		return L_0;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC_ftn) (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *);
	static DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)");
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* icallRetVal = _il2cpp_icall_func(___dh0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke_back(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke& marshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_pinvoke_cleanup(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_com(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_com_back(const DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com& marshaled, DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshal_com_cleanup(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (*DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA_ftn) (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *);
	static DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 777));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 778));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 779));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 780));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 782));
		intptr_t L_0;
		L_0 = DownloadHandlerBuffer_Create_mC639D070FF70AC550BBBAFD23CBB3A26DFE915AA(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 782));
		((DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *)__this)->set_m_Ptr_0((intptr_t)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 781));
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 783));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 784));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 785));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 789));
		DownloadHandler__ctor_m8E441D5C617BA103B97FE41893F0A4A323701B0F(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 789));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 786));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 787));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 790));
		DownloadHandlerBuffer_InternalCreateBuffer_mC53D69B05DEAEA785BD0187902DAD86C34EED256(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 790));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 788));
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandlerBuffer_GetData_mAFE5BF2E12AE24B162769E9B736280A802E1A3AB (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_GetData_mAFE5BF2E12AE24B162769E9B736280A802E1A3AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DownloadHandlerBuffer_GetData_mAFE5BF2E12AE24B162769E9B736280A802E1A3AB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 791));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 792));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 793));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 794));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 796));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 796));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 795));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DownloadHandlerBuffer_InternalGetData_m69989D8688328151EF518F3E705C019D02C045C8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 797));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 798));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 799));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 800));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 802));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = DownloadHandler_InternalGetByteArray_m1B4D723FA86D064B492ADBE3A9A13DD03209A4DC(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 802));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 801));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_pinvoke_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_back(const UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshal_com_cleanup(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com& marshaled)
{
}
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C (int32_t ___err0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C_ftn) (int32_t);
	static UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)");
	String_t* icallRetVal = _il2cpp_icall_func(___err0);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0 (int64_t ___responseCode0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0_ftn) (int64_t);
	static UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)");
	String_t* icallRetVal = _il2cpp_icall_func(___responseCode0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 298));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 299));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 300));
		bool L_0 = __this->get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 301));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 302));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 303));
		bool L_0 = ___value0;
		__this->set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 304));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 305));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 306));
		bool L_0 = __this->get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 307));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 308));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 309));
		bool L_0 = ___value0;
		__this->set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 310));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 311));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 312));
		bool L_0 = __this->get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 313));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 314));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 315));
		bool L_0 = ___value0;
		__this->set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED (const RuntimeMethod* method)
{
	typedef intptr_t (*UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED_ftn) ();
	static UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Create()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 316));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 317));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 318));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 319));
		intptr_t L_0 = __this->get_m_Ptr_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 327));
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 327));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 320));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 321));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 322));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 328));
		UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 328));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 323));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 329));
		UnityWebRequest_Release_m9E5ABFEE29761B2AD53E92777882E4EFB97BEBBB(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 329));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 324));
		__this->set_m_Ptr_0((intptr_t)(0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 325));
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 326));
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 330));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 331));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 332));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 333));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 337));
		UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_inline(__this, (bool)1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 337));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 334));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 338));
		UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_inline(__this, (bool)1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 338));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 335));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 339));
		UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline(__this, (bool)1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 339));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 336));
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m1467508E7C27528D22989503B5A3FD71903C3CED (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest__ctor_m1467508E7C27528D22989503B5A3FD71903C3CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___url0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest__ctor_m1467508E7C27528D22989503B5A3FD71903C3CED_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 340));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 341));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 342));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 348));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 348));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 343));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 344));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 349));
		intptr_t L_0;
		L_0 = UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 349));
		__this->set_m_Ptr_0((intptr_t)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 345));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 350));
		UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 350));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 346));
		String_t* L_1 = ___url0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 351));
		UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F(__this, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 351));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 347));
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___url0), (&___method1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 352));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 353));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 354));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 361));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 361));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 355));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 356));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 362));
		intptr_t L_0;
		L_0 = UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 362));
		__this->set_m_Ptr_0((intptr_t)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 357));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 363));
		UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 363));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 358));
		String_t* L_1 = ___url0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 364));
		UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F(__this, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 364));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 359));
		String_t* L_2 = ___method1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 365));
		UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7(__this, L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 365));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 360));
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m6F640D6320ABA5A1ED08C3B2A259DB67372DCECB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___downloadHandler2, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uploadHandler3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest__ctor_m6F640D6320ABA5A1ED08C3B2A259DB67372DCECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___url0), (&___method1), (&___downloadHandler2), (&___uploadHandler3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest__ctor_m6F640D6320ABA5A1ED08C3B2A259DB67372DCECB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 366));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 367));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 368));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 377));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 377));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 369));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 370));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 378));
		intptr_t L_0;
		L_0 = UnityWebRequest_Create_m90555F2C4371498805FDD684C3E86D1DC8D10AED(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 378));
		__this->set_m_Ptr_0((intptr_t)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 371));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 379));
		UnityWebRequest_InternalSetDefaults_mD7D5534B728DF7F2422999B58C98394253A2035C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 379));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 372));
		String_t* L_1 = ___url0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 380));
		UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F(__this, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 380));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 373));
		String_t* L_2 = ___method1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 381));
		UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7(__this, L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 381));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 374));
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_3 = ___downloadHandler2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 382));
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(__this, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 382));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 375));
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_4 = ___uploadHandler3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 383));
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(__this, L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 383));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 376));
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Finalize_m0E1202F2844C73C643D8B8DA23794FC9948A6D92 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_Finalize_m0E1202F2844C73C643D8B8DA23794FC9948A6D92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_Finalize_m0E1202F2844C73C643D8B8DA23794FC9948A6D92_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 384));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 385));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 386));
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 387));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 388));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 392));
		UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 392));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 389));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 393));
		UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 393));
		IL2CPP_LEAVE(0x1A, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 390));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 394));
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 394));
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 391));
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 395));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 396));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 397));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 398));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 402));
		UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 402));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 399));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 403));
		UnityWebRequest_InternalDestroy_m9317079471CFF46A5274FFF1E360CA5237D9270D(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 403));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 400));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 404));
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 404));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 401));
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * V_7 = NULL;
	bool V_8 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_4), (&V_7));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_DisposeHandlers_mA28A13FCE2CBA777049A6C1A3FABA079B3820771_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 405));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 406));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 407));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 408));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 439));
		bool L_0;
		L_0 = UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_inline(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 439));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 409));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 410));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 411));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 440));
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_2;
		L_2 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 440));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 412));
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 413));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 414));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 415));
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_5 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 441));
		NullCheck(L_5);
		DownloadHandler_Dispose_mAB0AA5ADCEC7681FF429DA0F0D3E7A650A02C376(L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 441));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 416));
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 417));
	}

IL_0025:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 418));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 442));
		bool L_6;
		L_6 = UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_inline(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 442));
		V_3 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 419));
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 420));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 421));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 443));
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_8;
		L_8 = UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 443));
		V_4 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 422));
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_9 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 423));
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 424));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 425));
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_11 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 444));
		NullCheck(L_11);
		UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41(L_11, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 444));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 426));
	}

IL_004d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 427));
	}

IL_004e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 428));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 445));
		bool L_12;
		L_12 = UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_inline(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 445));
		V_6 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 429));
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 430));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 431));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 446));
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_14;
		L_14 = UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 446));
		V_7 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 432));
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_15 = V_7;
		V_8 = (bool)((!(((RuntimeObject*)(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 433));
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 434));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 435));
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_17 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 447));
		NullCheck(L_17);
		CertificateHandler_Dispose_m460859ACFE411145B199D8261B5ADDA4DECCA493(L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 447));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 436));
	}

IL_0078:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 437));
	}

IL_0079:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 438));
		return;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * (*UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::BeginWebRequest()");
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::Send()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * UnityWebRequest_Send_mCE6413FFF8346F6A03B4F785D22F11887021EE22 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_Send_mCE6413FFF8346F6A03B4F785D22F11887021EE22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_Send_mCE6413FFF8346F6A03B4F785D22F11887021EE22_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 448));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 449));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 450));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 451));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 453));
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_0;
		L_0 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 453));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 452));
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * V_0 = NULL;
	bool V_1 = false;
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * V_2 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 454));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 455));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 456));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 457));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 463));
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_0;
		L_0 = UnityWebRequest_BeginWebRequest_m8F87C90D83FAC942DC2DE126E99D97A4CBCFD2D6(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 463));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 458));
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 459));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 460));
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 464));
		NullCheck(L_3);
		UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_inline(L_3, __this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 464));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 461));
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_4 = V_0;
		V_2 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 462));
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_5 = V_2;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Abort_m632DFDB95C422B9C7536D9E2CB04CC722FFF2E28_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Abort()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, int32_t);
	static UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___methodType0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___methodType0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 465));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 466));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 467));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 468));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 476));
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 476));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 469));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 470));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 477));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 477));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB_RuntimeMethod_var)));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 471));
		int32_t L_3 = ___methodType0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 478));
		int32_t L_4;
		L_4 = UnityWebRequest_SetMethod_m1303F8415C7A460B16DDB5CC841832221A90ABED(__this, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 478));
		V_0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 472));
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 473));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 474));
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 479));
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 479));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 480));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 480));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB_RuntimeMethod_var)));
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 475));
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*);
	static UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___customMethodName0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___customMethodName0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 481));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 482));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 483));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 484));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 492));
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 492));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 485));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 486));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 493));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 493));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA_RuntimeMethod_var)));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 487));
		String_t* L_3 = ___customMethodName0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 494));
		int32_t L_4;
		L_4 = UnityWebRequest_SetCustomMethod_m86A1258AD72D36E5B4D9D2735045DD26FE7AE79D(__this, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 494));
		V_0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 488));
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 489));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 490));
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 495));
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 495));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 496));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 496));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA_RuntimeMethod_var)));
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 491));
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAC516092AE075D549759FBFE57497622D29F15);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 497));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 498));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 499));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 500));
		String_t* L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 518));
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 518));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 501));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 502));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 503));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 519));
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D2659B30CD7065E2E3DAAE5ABDCFE4A0B66782E)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 519));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7_RuntimeMethod_var)));
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 504));
		String_t* L_4 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 520));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A(L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 520));
		V_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 505));
		String_t* L_6 = V_2;
		V_1 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 506));
		String_t* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 521));
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 521));
		if (L_9)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_10 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 522));
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 522));
		if (L_11)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_12 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 523));
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 523));
		if (L_13)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_14 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 524));
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 524));
		if (L_15)
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0081;
	}

IL_0059:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 507));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 525));
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 525));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 508));
		goto IL_0090;
	}

IL_0063:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 509));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 526));
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 526));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 510));
		goto IL_0090;
	}

IL_006d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 511));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 527));
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 527));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 512));
		goto IL_0090;
	}

IL_0077:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 513));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 528));
		UnityWebRequest_InternalSetMethod_mBBFC08EEC7A4A7F9DC510AEB10D5103475C6B4EB(__this, 3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 528));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 514));
		goto IL_0090;
	}

IL_0081:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 515));
		String_t* L_16 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 529));
		NullCheck(L_16);
		String_t* L_17;
		L_17 = String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A(L_16, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 529));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 530));
		UnityWebRequest_InternalSetCustomMethod_mD7B421D1B4CCF480EA333CDE465C1C5D588715DA(__this, L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 530));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 516));
		goto IL_0090;
	}

IL_0090:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 517));
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetError()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_t3233C0F690EC3844C8E0C4649568659679AFBE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 531));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 532));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 533));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 534));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 541));
		int32_t L_0;
		L_0 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 541));
		V_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 535));
		int32_t L_1 = V_1;
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 536));
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_003d;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 537));
		V_2 = (String_t*)NULL;
		goto IL_004b;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 538));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 542));
		int64_t L_4;
		L_4 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 542));
		int64_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_5);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 543));
		int64_t L_7;
		L_7 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 543));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 544));
		String_t* L_8;
		L_8 = UnityWebRequest_GetHTTPStatusString_m317BB359DAAE3592F55F8C989FC076FEA76BC7C0(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 544));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 545));
		String_t* L_9;
		L_9 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C, L_6, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 545));
		V_2 = L_9;
		goto IL_004b;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 539));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 546));
		int32_t L_10;
		L_10 = UnityWebRequest_GetError_m6BF0FA43C1D180750DB0E955D0AE2DEB855C70F3(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 546));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 547));
		String_t* L_11;
		L_11 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 547));
		V_2 = L_11;
		goto IL_004b;
	}

IL_004b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 540));
		String_t* L_12 = V_2;
		return L_12;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE02B6F4CAAD9B14B2B4CBB6E5E1A7B2774E4FE2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_set_url_m27BCB349EB7FA610705EA03CC817A1A394BA392F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 548));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 549));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 550));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 551));
		V_0 = _stringLiteralCE02B6F4CAAD9B14B2B4CBB6E5E1A7B2774E4FE2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 552));
		String_t* L_0 = ___value0;
		String_t* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 554));
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 554));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 555));
		UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25(__this, L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 555));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 553));
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*);
	static UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___url0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___url0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 556));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 557));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 558));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 559));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 567));
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 567));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 560));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 561));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 568));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AD0071445300544C945A4235FF5EE2237930AF6)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 568));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25_RuntimeMethod_var)));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 562));
		String_t* L_3 = ___url0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 569));
		int32_t L_4;
		L_4 = UnityWebRequest_SetUrl_m46220F73F184F5205C1F7E44EBFB868700E89400(__this, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 569));
		V_0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 563));
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 564));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 565));
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 570));
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 570));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 571));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 571));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetUrl_mE850CF14CE4F5EE57063771AC9B0C686C4856F25_RuntimeMethod_var)));
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 566));
		return;
	}
}
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef int64_t (*UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_responseCode()");
	int64_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isModifiable()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 572));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 573));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 574));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 575));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 577));
		int32_t L_0;
		L_0 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 577));
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 576));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 578));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 579));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 580));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 581));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 583));
		int32_t L_0;
		L_0 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 583));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 582));
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_result()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*, String_t*);
	static UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___name0, ___value1);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___name0), (&___value1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 584));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 585));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 586));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 587));
		String_t* L_0 = ___name0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 601));
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 601));
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 588));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 589));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 602));
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral350138951CA76BFC65A77EA2D223A8D476B10BC5)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 602));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 590));
		String_t* L_4 = ___value1;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 591));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 592));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 603));
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9305B29342F3BC0993F85105BB6141FF30569ED2)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 603));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 593));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 604));
		bool L_7;
		L_7 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 604));
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 594));
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 595));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 605));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCE49DFF590DB2AB94984A5C75EF18BDDD83FE69)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 605));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0041:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 596));
		String_t* L_10 = ___name0;
		String_t* L_11 = ___value1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 606));
		int32_t L_12;
		L_12 = UnityWebRequest_InternalSetRequestHeader_m8D0FE7BF624976F2510A90F61A69CEB22739F2BE(__this, L_10, L_11, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 606));
		V_0 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 597));
		int32_t L_13 = V_0;
		V_4 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 598));
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 599));
		int32_t L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 607));
		String_t* L_16;
		L_16 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 607));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 608));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_17 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_17, L_16, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 608));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB_RuntimeMethod_var)));
	}

IL_0060:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 600));
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, String_t*);
	static UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___name0);
	return icallRetVal;
}
// System.String[] UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	typedef StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *);
	static UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()");
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_1 = NULL;
	bool V_2 = false;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_4), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 609));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 610));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 611));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 612));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 629));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = UnityWebRequest_GetResponseHeaderKeys_m62D9A46F6E5AD70D4F1DD13FFCE2A9D3C341FFF0(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 629));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 613));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_0;
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_2 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 614));
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 615));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 616));
		V_3 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL;
		goto IL_0061;
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 617));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		NullCheck(L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 630));
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_5;
		L_5 = StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 630));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 631));
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27(L_6, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), L_5, /*hidden argument*/Dictionary_2__ctor_m8913AAC22D1B252D7BAE42D32E3D240D43456B27_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 631));
		V_1 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 618));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 619));
		goto IL_0050;
	}

IL_002f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 620));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 621));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_0;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 632));
		String_t* L_11;
		L_11 = UnityWebRequest_GetResponseHeader_mD876A4838C26726D95956FBE5F502BE5A62C21BF(__this, L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 632));
		V_5 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 622));
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_12 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		String_t* L_17 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 633));
		NullCheck(L_12);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_12, L_16, L_17, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 633));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 623));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 624));
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0050:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 625));
		int32_t L_19 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_0;
		NullCheck(L_20);
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 626));
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_002f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 627));
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_22 = V_1;
		V_3 = L_22;
		goto IL_0061;
	}

IL_0061:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 628));
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_23 = V_3;
		return L_23;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___uh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *);
	static UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___uh0);
	return icallRetVal;
}
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_uploadHandler_mFB108ADD5C75C440300BF85B87D4A730A158CC38_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 634));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 635));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 636));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 637));
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_0 = __this->get_m_UploadHandler_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 638));
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 639));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 640));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 641));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 642));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 651));
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 651));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 643));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 644));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 652));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral93CE1F3EEBFA5A5C2C336C37D31A01039231CA39)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 652));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA_RuntimeMethod_var)));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 645));
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_3 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 653));
		int32_t L_4;
		L_4 = UnityWebRequest_SetUploadHandler_mDDEF10B06EF15A1B826F3402D786FA5E2B7B16BE(__this, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 653));
		V_0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 646));
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 647));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 648));
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 654));
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 654));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 655));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 655));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA_RuntimeMethod_var)));
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 649));
		UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * L_10 = ___value0;
		__this->set_m_UploadHandler_2(L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 650));
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___dh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB *);
	static UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___dh0);
	return icallRetVal;
}
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 656));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 657));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 658));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 659));
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_0 = __this->get_m_DownloadHandler_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 660));
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 661));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 662));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 663));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 664));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 673));
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 673));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 665));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 666));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 674));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC3A46521634BE1B34BB2F00154A05110A698F36)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 674));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2_RuntimeMethod_var)));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 667));
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_3 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 675));
		int32_t L_4;
		L_4 = UnityWebRequest_SetDownloadHandler_m2B4503FF83DB5348F5ADCC8F23144414429BD36A(__this, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 675));
		V_0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 668));
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 669));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 670));
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 676));
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 676));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 677));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 677));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2_RuntimeMethod_var)));
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 671));
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_10 = ___value0;
		__this->set_m_DownloadHandler_1(L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 672));
		return;
	}
}
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_certificateHandler_mACA97B9158F17FFBEF489753C6E42302EEDF057D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 678));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 679));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 680));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 681));
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_0 = __this->get_m_CertificateHandler_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 682));
		CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___timeout0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56_ftn) (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *, int32_t);
	static UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___timeout0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestError_t01C779C192877A58EBDB44371C42F9A5831EB9F6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 683));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 684));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 685));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 686));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 695));
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m5B9DC48172A00D5268B02F36AB4A9A0DFB38AD3A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 695));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 687));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 688));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 696));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFD59FD74BD22E570703A8BC6B77F6081661FEEB)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 696));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90_RuntimeMethod_var)));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 689));
		int32_t L_3 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 697));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_3, 0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 697));
		___value0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 690));
		int32_t L_5 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 698));
		int32_t L_6;
		L_6 = UnityWebRequest_SetTimeoutMsec_m372121C37D0E1043E2577A530CA2F8FF742CCD56(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)1000))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 698));
		V_0 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 691));
		int32_t L_7 = V_0;
		V_2 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 692));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 693));
		int32_t L_9 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 699));
		String_t* L_10;
		L_10 = UnityWebRequest_GetWebErrorString_m7EC396FAE313B0FDBD7A99A068AB714A953D475C(L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 699));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 700));
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_11 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_11, L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 700));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90_RuntimeMethod_var)));
	}

IL_0044:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 694));
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___uri0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 701));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 702));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 703));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 704));
		String_t* L_0 = ___uri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 707));
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_1 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 707));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 708));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m6F640D6320ABA5A1ED08C3B2A259DB67372DCECB(L_2, L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, L_1, (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 708));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 705));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = V_0;
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 706));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Head(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Head_m6C2FEB6544810A19B07E3CB723182629CE49E8E5 (String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_Head_m6C2FEB6544810A19B07E3CB723182629CE49E8E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAC516092AE075D549759FBFE57497622D29F15);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___uri0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_Head_m6C2FEB6544810A19B07E3CB723182629CE49E8E5_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 709));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 710));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 711));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 712));
		String_t* L_0 = ___uri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 715));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_1, L_0, _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 715));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 713));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 714));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = V_1;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke_back(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke& marshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_pinvoke_cleanup(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_com(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_com_back(const UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com& marshaled, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshal_com_cleanup(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3 (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 295));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 296));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 297));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___value0;
		__this->set_U3CwebRequestU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation__ctor_m9A74EA34FBE3BA2B4E4D8FAB3B44301ECEDBCB62 (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation__ctor_m9A74EA34FBE3BA2B4E4D8FAB3B44301ECEDBCB62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequestAsyncOperation__ctor_m9A74EA34FBE3BA2B4E4D8FAB3B44301ECEDBCB62_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncOperation__ctor_mFC0E13622A23CD19A631B9ABBA506683B71A2E4A(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_pinvoke_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_back(const UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshal_com_cleanup(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UploadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
{
	typedef void (*UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8_ftn) (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *);
	static UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 803));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 804));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 805));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 808));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 808));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 806));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 807));
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Finalize_mE43816DF1E8AFC6EA32518CE8C30A5EF99F06934 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandler_Finalize_mE43816DF1E8AFC6EA32518CE8C30A5EF99F06934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UploadHandler_Finalize_mE43816DF1E8AFC6EA32518CE8C30A5EF99F06934_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 809));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 810));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 811));
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 812));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 813));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 816));
		UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 816));
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 814));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 817));
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 817));
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 815));
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UploadHandler_Dispose_mC449C0EDAD6666DDE349A6F9796CEC7C86154F41_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 818));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 819));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 820));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 821));
		intptr_t L_0 = __this->get_m_Ptr_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 828));
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 828));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 822));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 823));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 824));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 829));
		UploadHandler_Release_mE5F9BC6193A7285099D6409401414D886AB522C8(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 829));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 825));
		__this->set_m_Ptr_0((intptr_t)(0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 826));
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 827));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_pinvoke(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_pinvoke_back(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke& marshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_pinvoke_cleanup(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_com(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_com_back(const UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com& marshaled, UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshal_com_cleanup(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * ___self0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method)
{
	typedef intptr_t (*UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01_ftn) (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*);
	static UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___self0, ___data1);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___data0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 830));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 831));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 832));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 839));
		UploadHandler__ctor_mC1A1A5EDEDD4F9D7A6A8E9854E0CC6943B51158F(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 839));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 833));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 834));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 835));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 836));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 840));
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E56E678035E4A801BA617E16F57410976493BFB)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 840));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9_RuntimeMethod_var)));
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 837));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___data0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 841));
		intptr_t L_5;
		L_5 = UploadHandlerRaw_Create_m7BB036CE32369E49257AA107080A1F214BE7DA01(__this, L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 841));
		((UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA *)__this)->set_m_Ptr_0((intptr_t)L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 838));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 178));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 179));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 180));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 181));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 183));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 183));
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 182));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b0, int32_t ___offset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___b0), (&___offset1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 184));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 185));
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 186));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 187));
		V_0 = (uint8_t)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 188));
		int32_t L_0 = ___offset1;
		V_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 189));
		goto IL_0082;
	}

IL_0007:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 190));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 191));
		uint8_t L_1 = V_0;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)16)))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 192));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___b0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 193));
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = V_2;
		G_B4_0 = ((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		V_3 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 194));
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 195));
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)48)));
		goto IL_0065;
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 196));
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_11 = V_2;
		G_B9_0 = ((((int32_t)((((int32_t)L_11) > ((int32_t)((int32_t)75)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B9_0 = 0;
	}

IL_003d:
	{
		V_4 = (bool)G_B9_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 197));
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 198));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)55)));
		goto IL_0065;
	}

IL_004a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 199));
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)97))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_15 = V_2;
		G_B14_0 = ((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)102)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B14_0 = 0;
	}

IL_005a:
	{
		V_5 = (bool)G_B14_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 200));
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 201));
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)87)));
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 202));
		int32_t L_18 = V_2;
		V_6 = (bool)((((int32_t)L_18) > ((int32_t)((int32_t)15)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 203));
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 204));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 205));
		V_7 = (uint8_t)((int32_t)63);
		goto IL_0096;
	}

IL_0077:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 206));
		uint8_t L_20 = V_0;
		int32_t L_21 = V_2;
		V_0 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)((int32_t)((uint8_t)L_21))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 207));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 208));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0082:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 209));
		int32_t L_23 = V_1;
		int32_t L_24 = ___offset1;
		V_8 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 210));
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_0007;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 211));
		uint8_t L_26 = V_0;
		V_7 = L_26;
		goto IL_0096;
	}

IL_0096:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 212));
		uint8_t L_27 = V_7;
		return L_27;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___toEncode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___toEncode0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 213));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 214));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 215));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 216));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->get_urlSpace_3();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 218));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15(L_0, L_1, L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 218));
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 217));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___index1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___comperand2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___array0), (&___index1), (&___comperand2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 219));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 220));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 221));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 222));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___array0;
		NullCheck(L_0);
		int32_t L_1 = ___index1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___comperand2;
		NullCheck(L_2);
		V_0 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)L_1))) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 223));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 224));
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 225));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 226));
		goto IL_0030;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 227));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___array0;
		int32_t L_5 = ___index1;
		int32_t L_6 = V_2;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6));
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___comperand2;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 228));
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_002c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 229));
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_002c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 230));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 231));
		int32_t L_15 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___comperand2;
		NullCheck(L_16);
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 232));
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 233));
		V_1 = (bool)1;
		goto IL_0040;
	}

IL_0040:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 234));
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___space2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___input0), (&___escapeChar1), (&___space2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WWWTranscoder_Decode_mB359AE9097B819D6E6909685B5BED52DDFA62D15_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 235));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 236));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B7_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 237));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 238));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___input0;
		NullCheck(L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 266));
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mCB4274FF375AD786CCED424E80B047E0DEC50938(L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 266));
		V_0 = L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 239));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 240));
			V_1 = 0;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 241));
			goto IL_0071;
		}

IL_000f:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 242));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 243));
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___input0;
			int32_t L_3 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___space2;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 267));
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = WWWTranscoder_ByteSubArrayEquals_mB3E4FBBAA9EAD2EE53DE8C31C5AAE9B2A8809126(L_2, L_3, L_4, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 267));
			V_2 = L_5;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 244));
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_0031;
			}
		}

IL_001c:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 245));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 246));
			int32_t L_7 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___space2;
			NullCheck(L_8);
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), (int32_t)1))));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 247));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_9 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 268));
			NullCheck(L_9);
			VirtActionInvoker1< uint8_t >::Invoke(29 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_9, (uint8_t)((int32_t)32));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 268));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 248));
			goto IL_006c;
		}

IL_0031:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 249));
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___input0;
			int32_t L_11 = V_1;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			uint8_t L_14 = ___escapeChar1;
			if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
			{
				goto IL_0041;
			}
		}

IL_0037:
		{
			int32_t L_15 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___input0;
			NullCheck(L_16);
			G_B7_0 = ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)2))) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))? 1 : 0);
			goto IL_0042;
		}

IL_0041:
		{
			G_B7_0 = 0;
		}

IL_0042:
		{
			V_3 = (bool)G_B7_0;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 250));
			bool L_17 = V_3;
			if (!L_17)
			{
				goto IL_0060;
			}
		}

IL_0046:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 251));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 252));
			int32_t L_18 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 253));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_19 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___input0;
			int32_t L_21 = V_1;
			int32_t L_22 = L_21;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 269));
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
			uint8_t L_23;
			L_23 = WWWTranscoder_Hex2Byte_m8FEDC476CA7F4A244169D3F4DF2A75B09BD602DA(L_20, L_22, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 269));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 270));
			NullCheck(L_19);
			VirtActionInvoker1< uint8_t >::Invoke(29 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_19, L_23);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 270));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 254));
			goto IL_006c;
		}

IL_0060:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 255));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 256));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_24 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = ___input0;
			int32_t L_26 = V_1;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 271));
			NullCheck(L_24);
			VirtActionInvoker1< uint8_t >::Invoke(29 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_24, L_28);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 271));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 257));
		}

IL_006c:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 258));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 259));
			int32_t L_29 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		}

IL_0071:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 260));
			int32_t L_30 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = ___input0;
			NullCheck(L_31);
			V_4 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))? 1 : 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 261));
			bool L_32 = V_4;
			if (L_32)
			{
				goto IL_000f;
			}
		}

IL_007d:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 262));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_33 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 272));
			NullCheck(L_33);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34;
			L_34 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_33);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 272));
			V_5 = L_34;
			IL2CPP_LEAVE(0x92, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 263));
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_35 = V_0;
			if (!L_35)
			{
				goto IL_0091;
			}
		}

IL_008a:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_36 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 273));
			NullCheck(L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_36);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 273));
		}

IL_0091:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 264));
			IL2CPP_END_FINALLY(135)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x92, IL_0092)
	}

IL_0092:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 265));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_5;
		return L_37;
	}
}
// System.Void UnityEngine.WWWTranscoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder__cctor_mA3A2027DC5C23C8D8DDC8DDF795EE263B8B24C2F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder__cctor_mA3A2027DC5C23C8D8DDC8DDF795EE263B8B24C2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WWWTranscoder__cctor_mA3A2027DC5C23C8D8DDC8DDF795EE263B8B24C2F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 274));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 275));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 276));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 285));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 285));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 286));
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 286));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_ucHexChars_0(L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 277));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 287));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 287));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 288));
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 288));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_lcHexChars_1(L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 278));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_urlEscapeChar_2((uint8_t)((int32_t)37));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 279));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)43));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_urlSpace_3(L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 280));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 289));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_6;
		L_6 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 289));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 290));
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 290));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_dataSpace_4(L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 281));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 291));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_8;
		L_8 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 291));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 292));
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 292));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_urlForbidden_5(L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 282));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_qpEscapeChar_6((uint8_t)((int32_t)61));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 283));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)95));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_qpSpace_7(L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 284));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 293));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12;
		L_12 = WWWForm_get_DefaultEncoding_mF052838D1FD23BD1ED8DF2C1C1B55FF8A1E7B689(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 293));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 294));
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 294));
		((WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var))->set_qpForbidden_8(L_13);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_RedirectTo_m0E8715D4658E15C9775C6D06E1891267CB3C852F (String_t* ___baseUri0, String_t* ___redirectUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_RedirectTo_m0E8715D4658E15C9775C6D06E1891267CB3C852F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_0 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_1 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___baseUri0), (&___redirectUri1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WebRequestUtils_RedirectTo_m0E8715D4658E15C9775C6D06E1891267CB3C852F_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 3));
		String_t* L_0 = ___redirectUri1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 14));
		NullCheck(L_0);
		Il2CppChar L_1;
		L_1 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, 0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 14));
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)47)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 4));
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 5));
		String_t* L_3 = ___redirectUri1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 15));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF(L_4, L_3, 2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 15));
		V_0 = L_4;
		goto IL_0022;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 6));
		String_t* L_5 = ___redirectUri1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 16));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_6 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF(L_6, L_5, 0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 16));
		V_0 = L_6;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 7));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 17));
		NullCheck(L_7);
		bool L_8;
		L_8 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 17));
		V_4 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 8));
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 9));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 18));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 18));
		V_5 = L_11;
		goto IL_0052;
	}

IL_0038:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 10));
		String_t* L_12 = ___baseUri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 19));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_13 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m2D669E1153A700F9ED8BA31473565827AF8E39EF(L_13, L_12, 1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 19));
		V_1 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 11));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_14 = V_1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 20));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_16 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m77D32DF0ABC88A040214913D87A07F2C522CCD18(L_16, L_14, L_15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 20));
		V_2 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 12));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_17 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 21));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 21));
		V_5 = L_18;
		goto IL_0052;
	}

IL_0052:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 13));
		String_t* L_19 = V_5;
		return L_19;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290 (String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_1 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_2 = NULL;
	FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * V_9 = NULL;
	bool V_10 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___targetUrl0), (&___localUrl1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_9));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 22));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 23));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 24));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 25));
		String_t* L_0 = ___targetUrl0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 64));
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 64));
		V_4 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 26));
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 27));
		V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_00d6;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 28));
		V_0 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 29));
		String_t* L_3 = ___localUrl1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 65));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_4, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 65));
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 30));
		V_2 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 31));
		String_t* L_5 = ___targetUrl0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 66));
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, 0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 66));
		V_6 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)47)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 32));
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 33));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 34));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_8 = V_1;
		String_t* L_9 = ___targetUrl0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 67));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_10 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m0B44AFB01F3FEDE9319BA4556288340D16101F9D(L_10, L_8, L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 67));
		V_2 = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 35));
		V_0 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 36));
	}

IL_0041:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 37));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_11 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 68));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Uri_op_Equality_mB322C9CBB45846441BDCA7357E7D28123824ED83(L_11, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 68));
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_13 = ((WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var))->get_domainRegex_0();
		String_t* L_14 = ___targetUrl0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 69));
		NullCheck(L_13);
		bool L_15;
		L_15 = Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859(L_13, L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 69));
		G_B7_0 = ((int32_t)(L_15));
		goto IL_0058;
	}

IL_0057:
	{
		G_B7_0 = 0;
	}

IL_0058:
	{
		V_7 = (bool)G_B7_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 38));
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 39));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 40));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_17 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 70));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 70));
		String_t* L_19 = ___targetUrl0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 71));
		String_t* L_20;
		L_20 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_18, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, L_19, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 71));
		___targetUrl0 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 41));
		V_0 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 42));
	}

IL_0075:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 43));
		V_3 = (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)NULL;
	}

IL_0077:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 44));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 45));
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_21 = V_2;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 72));
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
			bool L_22;
			L_22 = Uri_op_Equality_mB322C9CBB45846441BDCA7357E7D28123824ED83(L_21, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 72));
			if (!L_22)
			{
				goto IL_0091;
			}
		}

IL_0081:
		{
			String_t* L_23 = ___targetUrl0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 73));
			NullCheck(L_23);
			Il2CppChar L_24;
			L_24 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_23, 0, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 73));
			G_B13_0 = ((((int32_t)((((int32_t)L_24) == ((int32_t)((int32_t)46)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0092;
		}

IL_0091:
		{
			G_B13_0 = 0;
		}

IL_0092:
		{
			V_8 = (bool)G_B13_0;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 46));
			bool L_25 = V_8;
			if (!L_25)
			{
				goto IL_009f;
			}
		}

IL_0098:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 47));
			String_t* L_26 = ___targetUrl0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 74));
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_27 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
			Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_27, L_26, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 74));
			V_2 = L_27;
		}

IL_009f:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 48));
			goto IL_00ab;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{ // begin catch(System.FormatException)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 49));
		V_9 = ((FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)IL2CPP_GET_ACTIVE_EXCEPTION(FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 50));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 51));
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_28 = V_9;
		V_3 = L_28;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 52));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ab;
	} // end catch (depth: 1)

IL_00ab:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 53));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_29 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 75));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Uri_op_Equality_mB322C9CBB45846441BDCA7357E7D28123824ED83(L_29, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 75));
		V_10 = L_30;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 54));
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_00ca;
		}
	}

IL_00b8:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 55));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 56));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_32 = V_1;
		String_t* L_33 = ___targetUrl0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 76));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_34 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m0B44AFB01F3FEDE9319BA4556288340D16101F9D(L_34, L_32, L_33, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 76));
		V_2 = L_34;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 57));
		V_0 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 58));
		goto IL_00ca;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{ // begin catch(System.FormatException)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 59));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 60));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 61));
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_35 = V_3;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestUtils_MakeInitialUrl_mD575E2FEAC3685E9030B528769BFAC7CE0534290_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_00ca:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 62));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_36 = V_2;
		String_t* L_37 = ___targetUrl0;
		bool L_38 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 77));
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		String_t* L_39;
		L_39 = WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D(L_36, L_37, L_38, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 77));
		V_5 = L_39;
		goto IL_00d6;
	}

IL_00d6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 63));
		String_t* L_40 = V_5;
		return L_40;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	StringBuilder_t * V_8 = NULL;
	bool V_9 = false;
	String_t* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___targetUri0), (&___targetUrl1), (&___prependProtocol2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_8), (&V_10));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WebRequestUtils_MakeUriString_mD6C6C27478BADC8EDF42621924F2ACD6D1B21E7D_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 78));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 79));
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B23_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 80));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 81));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___targetUri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 124));
		NullCheck(L_0);
		bool L_1;
		L_1 = Uri_get_IsFile_mCFA022C6E4641EBD7285A01056B7E201CEFD2C73(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 124));
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 82));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0083;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 83));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 84));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = ___targetUri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 125));
		NullCheck(L_3);
		bool L_4;
		L_4 = Uri_get_IsLoopback_m6988313CE348064A6A068347D878DDC51594B710(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 125));
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 85));
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 86));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_6 = ___targetUri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 126));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 126));
		V_4 = L_7;
		goto IL_01c1;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 87));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_8 = ___targetUri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 127));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306(L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 127));
		V_2 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 88));
		String_t* L_10 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 128));
		NullCheck(L_10);
		bool L_11;
		L_11 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_10, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 128));
		V_5 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 89));
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0045;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 90));
		String_t* L_13 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 129));
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF(L_13, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 129));
		V_2 = L_14;
	}

IL_0045:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 91));
		String_t* L_15 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 130));
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 130));
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_17 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 131));
		NullCheck(L_17);
		Il2CppChar L_18;
		L_18 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_17, 0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 131));
		G_B8_0 = ((((int32_t)((((int32_t)L_18) == ((int32_t)((int32_t)47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B8_0 = 0;
	}

IL_005f:
	{
		V_6 = (bool)G_B8_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 92));
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 93));
		String_t* L_20 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 132));
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_20, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 132));
		V_2 = L_21;
	}

IL_0071:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 94));
		String_t* L_22 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 133));
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_22, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 133));
		V_4 = L_23;
		goto IL_01c1;
	}

IL_0083:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 95));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_24 = ___targetUri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 134));
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_24, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 134));
		V_0 = L_25;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 96));
		bool L_26 = ___prependProtocol2;
		if (L_26)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_27 = ___targetUrl1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 135));
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_27, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 135));
		String_t* L_29 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 136));
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_29, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 136));
		if ((((int32_t)L_28) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)2)))))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_31 = ___targetUrl1;
		String_t* L_32 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 137));
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_32, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 137));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 138));
		NullCheck(L_31);
		Il2CppChar L_34;
		L_34 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_31, ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 138));
		G_B15_0 = ((((int32_t)((((int32_t)L_34) == ((int32_t)((int32_t)47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B15_0 = 0;
	}

IL_00b5:
	{
		V_7 = (bool)G_B15_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 97));
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_019c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 98));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 99));
		String_t* L_36 = V_0;
		String_t* L_37 = ___targetUrl1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 139));
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_37, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 139));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 140));
		StringBuilder_t * L_39 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mE87B9746FC40A7ECC0149A24685BD0713459FAF1(L_39, L_36, L_38, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 140));
		V_8 = L_39;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 100));
		StringBuilder_t * L_40 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 141));
		NullCheck(L_40);
		StringBuilder_t * L_41;
		L_41 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_40, ((int32_t)58), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 141));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 101));
		String_t* L_42 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 142));
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 142));
		V_9 = L_43;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 102));
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_0175;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 103));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 104));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_45 = ___targetUri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 143));
		NullCheck(L_45);
		String_t* L_46;
		L_46 = Uri_get_AbsolutePath_mB845A99D0CEB442AAF90B24A95EE7509C34C6306(L_45, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 143));
		V_10 = L_46;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 105));
		String_t* L_47 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 144));
		NullCheck(L_47);
		bool L_48;
		L_48 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_47, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 144));
		V_11 = L_48;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 106));
		bool L_49 = V_11;
		if (!L_49)
		{
			goto IL_010f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 107));
		String_t* L_50 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 145));
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		String_t* L_51;
		L_51 = WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF(L_50, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 145));
		V_10 = L_51;
	}

IL_010f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 108));
		String_t* L_52 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 146));
		NullCheck(L_52);
		bool L_53;
		L_53 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_52, _stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 146));
		if (!L_53)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_54 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 147));
		NullCheck(L_54);
		int32_t L_55;
		L_55 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_54, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 147));
		if ((((int32_t)L_55) <= ((int32_t)6)))
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_56 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 148));
		NullCheck(L_56);
		Il2CppChar L_57;
		L_57 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_56, 6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 148));
		G_B23_0 = ((((int32_t)((((int32_t)L_57) == ((int32_t)((int32_t)47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0139;
	}

IL_0138:
	{
		G_B23_0 = 0;
	}

IL_0139:
	{
		V_12 = (bool)G_B23_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 109));
		bool L_58 = V_12;
		if (!L_58)
		{
			goto IL_0160;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 110));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 111));
		StringBuilder_t * L_59 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 149));
		NullCheck(L_59);
		StringBuilder_t * L_60;
		L_60 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_59, _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 149));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 112));
		StringBuilder_t * L_61 = V_8;
		String_t* L_62 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 150));
		NullCheck(L_62);
		String_t* L_63;
		L_63 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_62, 5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 150));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 151));
		NullCheck(L_61);
		StringBuilder_t * L_64;
		L_64 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_61, L_63, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 151));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 113));
		goto IL_016a;
	}

IL_0160:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 114));
		StringBuilder_t * L_65 = V_8;
		String_t* L_66 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 152));
		NullCheck(L_65);
		StringBuilder_t * L_67;
		L_67 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_65, L_66, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 152));
	}

IL_016a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 115));
		StringBuilder_t * L_68 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 153));
		NullCheck(L_68);
		String_t* L_69;
		L_69 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_68);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 153));
		V_4 = L_69;
		goto IL_01c1;
	}

IL_0175:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 116));
		StringBuilder_t * L_70 = V_8;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_71 = ___targetUri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 154));
		NullCheck(L_71);
		String_t* L_72;
		L_72 = Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35(L_71, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 154));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 155));
		NullCheck(L_70);
		StringBuilder_t * L_73;
		L_73 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_70, L_72, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 155));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 117));
		StringBuilder_t * L_74 = V_8;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_75 = ___targetUri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 156));
		NullCheck(L_75);
		String_t* L_76;
		L_76 = Uri_get_Fragment_m1734B2D3F27F38AA342CB65885DE732160501E72(L_75, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 156));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 157));
		NullCheck(L_74);
		StringBuilder_t * L_77;
		L_77 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_74, L_76, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 157));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 118));
		StringBuilder_t * L_78 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 158));
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_78);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 158));
		V_4 = L_79;
		goto IL_01c1;
	}

IL_019c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 119));
		String_t* L_80 = ___targetUrl1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 159));
		NullCheck(L_80);
		bool L_81;
		L_81 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_80, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 159));
		V_13 = L_81;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 120));
		bool L_82 = V_13;
		if (!L_82)
		{
			goto IL_01b7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 121));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_83 = ___targetUri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 160));
		NullCheck(L_83);
		String_t* L_84;
		L_84 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_83, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 160));
		V_4 = L_84;
		goto IL_01c1;
	}

IL_01b7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 122));
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_85 = ___targetUri0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 161));
		NullCheck(L_85);
		String_t* L_86;
		L_86 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_85, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 161));
		V_4 = L_86;
		goto IL_01c1;
	}

IL_01c1:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 123));
		String_t* L_87 = V_4;
		return L_87;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF (String_t* ___encoded0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	String_t* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___encoded0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WebRequestUtils_URLDecode_m1B0D9D85074E0B8390C890B9E56F389F4EC6C8DF_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 162));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 163));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 164));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 165));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 169));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 169));
		String_t* L_1 = ___encoded0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 170));
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 170));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 166));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 171));
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t61D467EE2097E0FE6FA215AAEA4D3BF4216CB771_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = WWWTranscoder_URLDecode_mFBF699CBF92B0184ED37E461550430B7454BD0FB(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 171));
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 167));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 172));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_5;
		L_5 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 172));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 173));
		NullCheck(L_5);
		String_t* L_7;
		L_7 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_5, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 173));
		V_2 = L_7;
		goto IL_0022;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 168));
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestUtils__cctor_mD79D1BBF154F1968AB3E32B710D8CE7583105600 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils__cctor_mD79D1BBF154F1968AB3E32B710D8CE7583105600_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WebRequestUtils__cctor_mD79D1BBF154F1968AB3E32B710D8CE7583105600_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 174));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 175));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 176));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 177));
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_0, _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 177));
		((WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t3FE2D9FD71A02CD3AF8C91B81280F59E5CF26392_il2cpp_TypeInfo_var))->set_domainRegex_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_set_disposeDownloadHandlerOnDispose_m6F638476FBD7ABDCEF8E7AD449266E505B85D20B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 307));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 308));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 309));
		bool L_0 = ___value0;
		__this->set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_set_disposeUploadHandlerOnDispose_m4A63470C788CF2A03D34EEA3F8968B430A111397_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 313));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 314));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 315));
		bool L_0 = ___value0;
		__this->set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 301));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 302));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 303));
		bool L_0 = ___value0;
		__this->set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_disposeDownloadHandlerOnDispose_m815A891A7C495D05DACB60147CB557C78CE89289_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 304));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 305));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 306));
		bool L_0 = __this->get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_disposeUploadHandlerOnDispose_mBFAC496EFE17D72583D9D81B170EE0F2FABDC07B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 310));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 311));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 312));
		bool L_0 = __this->get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequest_get_disposeCertificateHandlerOnDispose_m47CB38750DEFA8A9FB426E650A78F62FEA68D0C0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 298));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 299));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 300));
		bool L_0 = __this->get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityWebRequestAsyncOperation_set_webRequest_mAB1AE2613FEF8FAFB463E73D70043A89B2FC39C3_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 295));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 296));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityWebRequestModule + 297));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___value0;
		__this->set_U3CwebRequestU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinalIgnoreCase_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
