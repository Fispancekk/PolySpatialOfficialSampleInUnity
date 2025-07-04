#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct IList_1_tC3F61485A006B746BEFF06873EE080E972366A7B;
struct ISerializer_1_tEC79F8ECF391E84F20D634E0CBCE08A29840E87F;
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9;
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F;
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E;
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IInputBuffer_t14A70FD163319CA055DA912C0D7A845CFA9B8F3F;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3;
struct PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019;
struct MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB;

IL2CPP_EXTERN_C RuntimeClass* NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA  : public RuntimeObject
{
	RuntimeObject* ___U3CreferenceImagesU3Ek__BackingField;
};
struct TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED  : public RuntimeObject
{
	String_t* ___FullName;
	bool ___SharedString;
	bool ___WriteThrough;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C 
{
	MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* ___pointer;
};
struct MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_pinvoke
{
	MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* ___pointer;
};
struct MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_marshaled_com
{
	MemoryPointer_t8295F4E696CED253073B0EF60D803885053B2019* ___pointer;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_pinvoke
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_marshaled_com
{
	MemoryPointer_tA3A90E8BC5F2585E386F8CA7CC9E298B1EC232AB* ___pointer;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
#pragma pack(push, tp, 1)
struct VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint16_t ___offset0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___offset0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2_OffsetPadding[2];
					uint16_t ___offset2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2_OffsetPadding_forAlignmentOnly[2];
					uint16_t ___offset2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4_OffsetPadding[4];
					uint16_t ___offset4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___offset4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset6_OffsetPadding[6];
					uint16_t ___offset6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset6_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___offset6_forAlignmentOnly;
				};
			};
		};
		uint8_t VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42__padding[8];
	};
};
#pragma pack(pop, tp)
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9  : public PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA
{
	bool _____isRoot;
	MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 _____vtable;
	uint8_t _____mask0;
	RuntimeObject* _____index0Value;
};
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F  : public PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA
{
	bool _____isRoot;
	RuntimeObject* _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 _____vtable;
	uint8_t _____mask0;
	RuntimeObject* _____index0Value;
};
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E  : public PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA
{
	bool _____isRoot;
	ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 _____buffer;
	int32_t _____offset;
	int16_t _____remainingDepth;
	VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 _____vtable;
	uint8_t _____mask0;
	RuntimeObject* _____index0Value;
};
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E : public PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA {};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FlatBufferDeserializationOption_tB957A515173AD5B19DF2CBBD617732622867EA06 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 
{
	int32_t ___U3CDeserializationOptionU3Ek__BackingField;
};
struct NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	bool ___IsLittleEndian;
};
struct PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_StaticFields
{
	RuntimeObject* ___U3CSerializerU3Ek__BackingField;
};
struct tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_StaticFields
{
	TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___referenceImages;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E_StaticFields
{
	FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 _____CtorContext;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_mF5BAD373C5D9258F8B95A28984DC4C61B853E7CD_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_mFCE97D5AA2A0C5E8FF9307AEDE2ADFEE92022583_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable4_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBC264394050AEF307AC5C41CD6993B7A54AAC7EF_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m243AFFB905C1717B82A1D32500F72A4CCBB2B9D1_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable4_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m1FBE036449536402CBA5B81AEB9B7F9E4610D6A7_gshared_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Helpers_Parse_Progressive_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m5520BD31B3A477336FA4046447BE29398661D355_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m0B271C559C6ABC7D9A72D8660EF9DB9274D5BD75_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m07F8A5842937C42D96E0B015476C9B85FC5844CB_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_gshared_inline (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m72BDCD2447D469AC9E4FEFD26A9453151EFF4C99_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_gshared_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, RuntimeObject* ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Helpers_Parse_Progressive_TisRuntimeObject_m65192EBBB756E7EF7220C05C561156293E3454C5_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m3AE5FA17B74E0F640FA58CA9DA202720E9D9C720_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m4D0DD23F2289B42FB185838AE2216BC2190E9E7B_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_mE4B75B4444AC038E5A4C7B331C44CD70AC6E9DA7_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_gshared_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mE0346624B3EF89E6BCEF7B2085DDBC4D30E5FDA4_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable4_CreateLittleEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBE4A7FEA086340C1A857231891C8A25C3A9BF98B_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable4_CreateBigEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m6793A1AE525164C8436502D55D07D64CA2D7BF48_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable4_CreateLittleEndian_TisRuntimeObject_m2AEB2F6D232B4D6418A750F0D38F8BEE8A235783_gshared (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable4_CreateBigEndian_TisRuntimeObject_m850E15FAC67AEDED66C79E1AFE5DD94383A2BF04_gshared (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable4_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m16F3A2758D9CC40D680AA6C28B2DFBB3BE9DD935_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void VTable4_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mB11C354F60C7A309338C8A8B5BAE8A36FBD5FD5F_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) ;

inline void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_mF5BAD373C5D9258F8B95A28984DC4C61B853E7CD_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9*, const RuntimeMethod*))tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_mF5BAD373C5D9258F8B95A28984DC4C61B853E7CD_gshared_inline)(__this, method);
}
inline void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_mFCE97D5AA2A0C5E8FF9307AEDE2ADFEE92022583_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9*, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, int16_t, const RuntimeMethod*))tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_mFCE97D5AA2A0C5E8FF9307AEDE2ADFEE92022583_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolySpatialReferenceImageLibrary__ctor_mCAE06CE7AA62C4399EF00C06508C3ECBFD689FC7 (PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA* __this, FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 ___0_context, const RuntimeMethod* method) ;
inline void VTable4_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBC264394050AEF307AC5C41CD6993B7A54AAC7EF_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBC264394050AEF307AC5C41CD6993B7A54AAC7EF_gshared_inline)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolySpatialReferenceImageLibrary_OnFlatSharpDeserialized_mC866948081C9D0DB317DBBAB81D0C09219C9BEC3 (PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA* __this, FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 ___0_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
inline RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m243AFFB905C1717B82A1D32500F72A4CCBB2B9D1_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t, const RuntimeMethod*))tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m243AFFB905C1717B82A1D32500F72A4CCBB2B9D1_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* __this, const RuntimeMethod* method) ;
inline int32_t VTable4_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m1FBE036449536402CBA5B81AEB9B7F9E4610D6A7_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, const RuntimeMethod*))VTable4_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m1FBE036449536402CBA5B81AEB9B7F9E4610D6A7_gshared_inline)(__this, ___0_buffer, ___1_index, method);
}
inline RuntimeObject* Helpers_Parse_Progressive_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m5520BD31B3A477336FA4046447BE29398661D355 (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, int16_t, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED*, const RuntimeMethod*))Helpers_Parse_Progressive_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m5520BD31B3A477336FA4046447BE29398661D355_gshared)(___0_buffer, ___1_offset, ___2_remainingDepth, ___3_fieldContext, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline (FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9* __this, int32_t ___0_deserializationOption, const RuntimeMethod* method) ;
inline void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m0B271C559C6ABC7D9A72D8660EF9DB9274D5BD75_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F*, const RuntimeMethod*))tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m0B271C559C6ABC7D9A72D8660EF9DB9274D5BD75_gshared_inline)(__this, method);
}
inline void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m07F8A5842937C42D96E0B015476C9B85FC5844CB_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F*, RuntimeObject*, int32_t, int16_t, const RuntimeMethod*))tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m07F8A5842937C42D96E0B015476C9B85FC5844CB_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline void VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_inline (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_gshared_inline)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m72BDCD2447D469AC9E4FEFD26A9453151EFF4C99_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t, const RuntimeMethod*))tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m72BDCD2447D469AC9E4FEFD26A9453151EFF4C99_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, RuntimeObject* ___0_buffer, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, RuntimeObject*, int32_t, const RuntimeMethod*))VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_gshared_inline)(__this, ___0_buffer, ___1_index, method);
}
inline RuntimeObject* Helpers_Parse_Progressive_TisRuntimeObject_m65192EBBB756E7EF7220C05C561156293E3454C5 (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, int16_t, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED*, const RuntimeMethod*))Helpers_Parse_Progressive_TisRuntimeObject_m65192EBBB756E7EF7220C05C561156293E3454C5_gshared)(___0_buffer, ___1_offset, ___2_remainingDepth, ___3_fieldContext, method);
}
inline void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m3AE5FA17B74E0F640FA58CA9DA202720E9D9C720_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E*, const RuntimeMethod*))tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m3AE5FA17B74E0F640FA58CA9DA202720E9D9C720_gshared_inline)(__this, method);
}
inline void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m4D0DD23F2289B42FB185838AE2216BC2190E9E7B_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method)
{
	((  void (*) (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E*, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, int16_t, const RuntimeMethod*))tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m4D0DD23F2289B42FB185838AE2216BC2190E9E7B_gshared_inline)(__this, ___0_buffer, ___1_offset, ___2_remainingDepth, method);
}
inline void VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_gshared_inline)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_mE4B75B4444AC038E5A4C7B331C44CD70AC6E9DA7_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t, const RuntimeMethod*))tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_mE4B75B4444AC038E5A4C7B331C44CD70AC6E9DA7_gshared_inline)(___0_buffer, ___1_offset, ___2_vtable, ___3_remainingDepth, method);
}
inline int32_t VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, const RuntimeMethod*))VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_gshared_inline)(__this, ___0_buffer, ___1_index, method);
}
inline RuntimeObject* Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mE0346624B3EF89E6BCEF7B2085DDBC4D30E5FDA4 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* ___3_fieldContext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, int16_t, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED*, const RuntimeMethod*))Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mE0346624B3EF89E6BCEF7B2085DDBC4D30E5FDA4_gshared)(___0_buffer, ___1_offset, ___2_remainingDepth, ___3_fieldContext, method);
}
inline void VTable4_CreateLittleEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBE4A7FEA086340C1A857231891C8A25C3A9BF98B (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_CreateLittleEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBE4A7FEA086340C1A857231891C8A25C3A9BF98B_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable4_CreateBigEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m6793A1AE525164C8436502D55D07D64CA2D7BF48 (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_CreateBigEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m6793A1AE525164C8436502D55D07D64CA2D7BF48_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable4_CreateLittleEndian_TisRuntimeObject_m2AEB2F6D232B4D6418A750F0D38F8BEE8A235783 (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_CreateLittleEndian_TisRuntimeObject_m2AEB2F6D232B4D6418A750F0D38F8BEE8A235783_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable4_CreateBigEndian_TisRuntimeObject_m850E15FAC67AEDED66C79E1AFE5DD94383A2BF04 (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_CreateBigEndian_TisRuntimeObject_m850E15FAC67AEDED66C79E1AFE5DD94383A2BF04_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable4_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m16F3A2758D9CC40D680AA6C28B2DFBB3BE9DD935 (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m16F3A2758D9CC40D680AA6C28B2DFBB3BE9DD935_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
inline void VTable4_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mB11C354F60C7A309338C8A8B5BAE8A36FBD5FD5F (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*, const RuntimeMethod*))VTable4_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mB11C354F60C7A309338C8A8B5BAE8A36FBD5FD5F_gshared)(___0_inputBuffer, ___1_offset, ___2_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_GetOrCreate_mCC86992373B2ADB0CB7F528EE9C9247F3877166C_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* L_0 = (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_mF5BAD373C5D9258F8B95A28984DC4C61B853E7CD_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* L_1 = L_0;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_mFCE97D5AA2A0C5E8FF9307AEDE2ADFEE92022583_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_mF5BAD373C5D9258F8B95A28984DC4C61B853E7CD_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		PolySpatialReferenceImageLibrary__ctor_mCAE06CE7AA62C4399EF00C06508C3ECBFD689FC7((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_mFCE97D5AA2A0C5E8FF9307AEDE2ADFEE92022583_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)(&__this->_____vtable);
		VTable4_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBC264394050AEF307AC5C41CD6993B7A54AAC7EF_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this);
		PolySpatialReferenceImageLibrary_OnFlatSharpDeserialized_mC866948081C9D0DB317DBBAB81D0C09219C9BEC3((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReturnToPool_mC7097FAC27DD3076DEBBDE191120022D0D0ABD22_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_mE78CD8E213776AC6F6DC3DAD49D29CD305948741_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_m9C3714C6A953860E1459EF95EF2A02A264BD1E11_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m791CD4A538F721C48C73FFD703BB44FD93B7EF62_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = __this->_____buffer;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_m4C9F0747D9F83877AA70257446E2E076963E397F_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m9F5716C2D397A648BCBE81BE9B6E9A4E15CE19DD_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_m682C63B5F8A48D033F184DADFD6B0234420EBDB0_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_get_referenceImages_m98D773C64D048460B1D2670736DFBAF836262537_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m243AFFB905C1717B82A1D32500F72A4CCBB2B9D1_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->_____index0Value = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____index0Value), (void*)L_5);
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|1)));
	}

IL_003c:
	{
		RuntimeObject* L_7 = __this->_____index0Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_set_referenceImages_mE8A8980383B83C0C97EE5A386683DB6F7D544025_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m243AFFB905C1717B82A1D32500F72A4CCBB2B9D1_gshared (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m1FBE036449536402CBA5B81AEB9B7F9E4610D6A7_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var))->___referenceImages;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m5520BD31B3A477336FA4046447BE29398661D355(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__cctor_m4A3803AFD9CBFB857D19F831C34B8AFEE4391810_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_GetOrCreate_mBAFD2DBF4D86241A0E93DCB405781B8F9D6B9A0A_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* L_0 = (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m0B271C559C6ABC7D9A72D8660EF9DB9274D5BD75_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* L_1 = L_0;
		RuntimeObject* L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m07F8A5842937C42D96E0B015476C9B85FC5844CB_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m0B271C559C6ABC7D9A72D8660EF9DB9274D5BD75_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		PolySpatialReferenceImageLibrary__ctor_mCAE06CE7AA62C4399EF00C06508C3ECBFD689FC7((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m07F8A5842937C42D96E0B015476C9B85FC5844CB_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____buffer), (void*)L_0);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		RuntimeObject* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)(&__this->_____vtable);
		VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this);
		PolySpatialReferenceImageLibrary_OnFlatSharpDeserialized_mC866948081C9D0DB317DBBAB81D0C09219C9BEC3((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReturnToPool_mCD4B59D348ADC424CDD950A63A06CA525FBF3658_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_mC783F6D77E182F25148F0866DECE165F9598838E_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_mA9EBB86A1B509E17C257CFEA5FFD41994210ECE3_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m01E83F7CA654FB86F4C216BE1E6DE541D97EA150_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->_____buffer;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_m44EB71B2208B7D4D05F35DB5B4948EC0912E9673_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_mF2C32E4DD91CF0441790C50688EE83F835F0C2D2_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_mB9B9E05504DB3BEC71C04943DF5994820E0C5B91_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_get_referenceImages_mD54CE51ECDFCDF81455B3133F50787139BF0D30A_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m72BDCD2447D469AC9E4FEFD26A9453151EFF4C99_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->_____index0Value = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____index0Value), (void*)L_5);
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|1)));
	}

IL_003c:
	{
		RuntimeObject* L_7 = __this->_____index0Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_set_referenceImages_m0FF3000DF070C92FA76035A3E1CA5C94A6A95AFD_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m72BDCD2447D469AC9E4FEFD26A9453151EFF4C99_gshared (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var))->___referenceImages;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisRuntimeObject_m65192EBBB756E7EF7220C05C561156293E3454C5(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__cctor_m9B83500AE695FED7697AAE9BE94A94E3E74BC5E6_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_GetOrCreate_m03E8DD7372762E24F14794C29B16BE37E4F51A70_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* L_0 = (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m3AE5FA17B74E0F640FA58CA9DA202720E9D9C720_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* L_1 = L_0;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m4D0DD23F2289B42FB185838AE2216BC2190E9E7B_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m3AE5FA17B74E0F640FA58CA9DA202720E9D9C720_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		PolySpatialReferenceImageLibrary__ctor_mCAE06CE7AA62C4399EF00C06508C3ECBFD689FC7((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m4D0DD23F2289B42FB185838AE2216BC2190E9E7B_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)(&__this->_____vtable);
		VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this);
		PolySpatialReferenceImageLibrary_OnFlatSharpDeserialized_mC866948081C9D0DB317DBBAB81D0C09219C9BEC3((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReturnToPool_m99CA61E57DD5C3BF6B5BD2AB3A6D4E47557508DC_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_m5E83F5FD40EABF0AC03CAF390DBC23FD267528A7_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_mB864CB57599DC73645D14FCA242F1FFD33F8999F_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_m896A36D4A98911C332A772A5178A4F2A1142563B_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = __this->_____buffer;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_mF11D062889C696B1AEC95BD57D9673D21DEF068C_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m6B96DA3EA513615456876E66BEF79B205A43070C_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->_____isRoot;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_mBE07D6476B6D950623CB69CCF0E0236CB4A6FF7C_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->_____isRoot = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_get_referenceImages_m3E8AB77E082DAFEDBA2A6859636AAB0272F84C2D_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->_____mask0;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_1 = __this->_____buffer;
		int32_t L_2 = __this->_____offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = __this->_____vtable;
		int16_t L_4 = __this->_____remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_mE4B75B4444AC038E5A4C7B331C44CD70AC6E9DA7_inline(L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->_____index0Value = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____index0Value), (void*)L_5);
		uint8_t L_6 = __this->_____mask0;
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__this->_____mask0 = ((uint8_t)((int32_t)((int32_t)L_6|1)));
	}

IL_003c:
	{
		RuntimeObject* L_7 = __this->_____index0Value;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_set_referenceImages_m7CE28073877C680614E59F36AD8962B785ABCE6F_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_mE4B75B4444AC038E5A4C7B331C44CD70AC6E9DA7_gshared (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var))->___referenceImages;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mE0346624B3EF89E6BCEF7B2085DDBC4D30E5FDA4(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__cctor_m190E23507E4793138C1DF7C36D5936D6AD0C77E1_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_GetOrCreate_mE2F5714E2A8A1343554B621021A163080DE59846_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
	{
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* L_0 = (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* L_1 = L_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
		int32_t L_3 = ___1_offset;
		int16_t L_4 = ___2_remainingDepth;
		NullCheck(L_1);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_mF7EA6DE278520BB9CB269E1419E54333DD8AD525_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		PolySpatialReferenceImageLibrary__ctor_mCAE06CE7AA62C4399EF00C06508C3ECBFD689FC7((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_mCA6677A2B58AD8C65EF82B1975CC7C51AC02D7C2_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* __this, Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0, SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
		int32_t L_1 = ___1_offset;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_1);
		int16_t L_2 = ___2_remainingDepth;
		il2cpp_codegen_write_instance_field_data<int16_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_2);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
		int32_t L_4 = ___1_offset;
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, (((VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_5 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this);
		PolySpatialReferenceImageLibrary_OnFlatSharpDeserialized_mC866948081C9D0DB317DBBAB81D0C09219C9BEC3((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReturnToPool_m77E6D9C3AA186B828AD2F796B69D9E3055F6A0CD_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* __this, bool ___0_unsafeForce, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_TableOrStructType_mC164D1C228B7C8BA0A6556F0DDC998BD0B27E758_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_DeserializationContext_mF44CF8550FF442ADED23E322ADB0AE8EBC0013C4_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_InputBuffer_mFF29B60965E202AB6363489AF9D6CDB967C2080A_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_IFlatBufferDeserializedObject_get_CanSerializeWithMemoryCopy_mA3A5E2DAF20F5A1A24DD1B03A64B6BC8072244BC_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_get_IsRoot_m5090611838062B813B7D59BE50F2DAEA51F1B59F_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_globalU3AU3AFlatSharp_Internal_IPoolableObjectDebug_set_IsRoot_m4439258CC52292EEE11EB53A72814C8365B9F47C_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_get_referenceImages_m2DB391D3E823951E1BD653AEF0C85289B7C11D24_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 L_3 = *(VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_5;
		L_5 = InvokerFuncInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, int32_t, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42, int16_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_5);
		uint8_t L_6 = *(uint8_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((int64_t)(((int32_t)((int32_t)L_6|1))) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		il2cpp_codegen_write_instance_field_data<uint8_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((uint8_t)((int32_t)((int32_t)L_6|1))));
	}

IL_003c:
	{
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_set_referenceImages_mA62A543477835E30832735A7B5421FE71C1C81D5_gshared (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3* L_0 = (NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotMutableException_t1BDD5598ADE973DD892CAC787ACAD535315B7FB3_il2cpp_TypeInfo_var)));
		NotMutableException__ctor_m2D843C26D01AF59D7AB910F2B4573B1E80B27A0E(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m5CDA21CA6DA39C759D87D578DA25DE539C48F0F1_gshared (Il2CppFullySharedGenericAny ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7), (&___2_vtable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_0: *(void**)L_0), 0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_buffer : &___0_buffer), SizeOf_TInputBuffer_t6A13EEB2A96E29635E5E2D4858157D3939216E27);
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var))->___referenceImages;
		RuntimeObject* L_9;
		L_9 = InvokerFuncInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, int32_t, int16_t, TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6, L_7, L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__cctor_mF351941F576F6CE713E50A410A1FD06830E28CBF_gshared (const RuntimeMethod* method) 
{
	{
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline((&L_0), (int32_t)1, NULL);
		((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t83F9B29E210366ED5E9DB191EEC2CB5C6F971A7E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)))->_____CtorContext = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FlatBufferDeserializationContext__ctor_mCE64F5AA052E21BEA0998F0E00BEA24AE3A1C590_inline (FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9* __this, int32_t ___0_deserializationOption, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_deserializationOption;
		__this->___U3CDeserializationOptionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_mF5BAD373C5D9258F8B95A28984DC4C61B853E7CD_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		PolySpatialReferenceImageLibrary__ctor_mCAE06CE7AA62C4399EF00C06508C3ECBFD689FC7((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_mFCE97D5AA2A0C5E8FF9307AEDE2ADFEE92022583_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)(&__this->_____vtable);
		VTable4_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBC264394050AEF307AC5C41CD6993B7A54AAC7EF_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t98816062FE044C48EE14DBC1FE1E4713F31E41C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this);
		PolySpatialReferenceImageLibrary_OnFlatSharpDeserialized_mC866948081C9D0DB317DBBAB81D0C09219C9BEC3((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable4_Create_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBC264394050AEF307AC5C41CD6993B7A54AAC7EF_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0010;
		}
	}
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_inputBuffer;
		int32_t L_1 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_2 = ___2_item;
		VTable4_CreateLittleEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_mBE4A7FEA086340C1A857231891C8A25C3A9BF98B(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_3 = ___0_inputBuffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = ___2_item;
		VTable4_CreateBigEndian_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m6793A1AE525164C8436502D55D07D64CA2D7BF48(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m243AFFB905C1717B82A1D32500F72A4CCBB2B9D1_gshared_inline (MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m1FBE036449536402CBA5B81AEB9B7F9E4610D6A7_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var))->___referenceImages;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m5520BD31B3A477336FA4046447BE29398661D355(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable4_OffsetOf_TisMemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C_m1FBE036449536402CBA5B81AEB9B7F9E4610D6A7_gshared_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, MemoryInputBuffer_tC8E1A19876C1FE20D85F116E06BB9C842C37972C ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0018:
	{
		uint16_t L_1 = __this->___offset0;
		return (int32_t)L_1;
	}

IL_001f:
	{
		uint16_t L_2 = __this->___offset2;
		return (int32_t)L_2;
	}

IL_0026:
	{
		uint16_t L_3 = __this->___offset4;
		return (int32_t)L_3;
	}

IL_002d:
	{
		uint16_t L_4 = __this->___offset6;
		return (int32_t)L_4;
	}

IL_0034:
	{
		return 0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m0B271C559C6ABC7D9A72D8660EF9DB9274D5BD75_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		PolySpatialReferenceImageLibrary__ctor_mCAE06CE7AA62C4399EF00C06508C3ECBFD689FC7((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m07F8A5842937C42D96E0B015476C9B85FC5844CB_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F* __this, RuntimeObject* ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->_____buffer), (void*)L_0);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		RuntimeObject* L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)(&__this->_____vtable);
		VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_t6DCF3530B3E9300370CE1F15F8C28393CE1EF17F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this);
		PolySpatialReferenceImageLibrary_OnFlatSharpDeserialized_mC866948081C9D0DB317DBBAB81D0C09219C9BEC3((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable4_Create_TisRuntimeObject_mE231F9EE85D035A50154607007B97215E3961565_gshared_inline (RuntimeObject* ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_0 = ___0_inputBuffer;
		int32_t L_1 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_2 = ___2_item;
		VTable4_CreateLittleEndian_TisRuntimeObject_m2AEB2F6D232B4D6418A750F0D38F8BEE8A235783(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		RuntimeObject* L_3 = ___0_inputBuffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = ___2_item;
		VTable4_CreateBigEndian_TisRuntimeObject_m850E15FAC67AEDED66C79E1AFE5DD94383A2BF04(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_m72BDCD2447D469AC9E4FEFD26A9453151EFF4C99_gshared_inline (RuntimeObject* ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		RuntimeObject* L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var))->___referenceImages;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisRuntimeObject_m65192EBBB756E7EF7220C05C561156293E3454C5(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable4_OffsetOf_TisRuntimeObject_mC2146827C38C5909E6A082ACB122784AF35FDCC6_gshared_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, RuntimeObject* ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0018:
	{
		uint16_t L_1 = __this->___offset0;
		return (int32_t)L_1;
	}

IL_001f:
	{
		uint16_t L_2 = __this->___offset2;
		return (int32_t)L_2;
	}

IL_0026:
	{
		uint16_t L_3 = __this->___offset4;
		return (int32_t)L_3;
	}

IL_002d:
	{
		uint16_t L_4 = __this->___offset6;
		return (int32_t)L_4;
	}

IL_0034:
	{
		return 0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1__ctor_m3AE5FA17B74E0F640FA58CA9DA202720E9D9C720_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_0 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		il2cpp_codegen_runtime_class_init_inline(PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA_il2cpp_TypeInfo_var);
		PolySpatialReferenceImageLibrary__ctor_mCAE06CE7AA62C4399EF00C06508C3ECBFD689FC7((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_Initialize_m4D0DD23F2289B42FB185838AE2216BC2190E9E7B_gshared_inline (tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, int16_t ___2_remainingDepth, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		__this->_____buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->_____buffer))->___pointer), (void*)NULL);
		int32_t L_1 = ___1_offset;
		__this->_____offset = L_1;
		int16_t L_2 = ___2_remainingDepth;
		__this->_____remainingDepth = L_2;
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_3 = ___0_buffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42*)(&__this->_____vtable);
		VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_inline(L_3, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		FlatBufferDeserializationContext_tE9C315CD4268B727EF38F515F1D0264BB6EC06C9 L_6 = ((tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_tEEB11033BC1E76143AADB06D9EE528571563B76E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 4)))->_____CtorContext;
		NullCheck((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this);
		PolySpatialReferenceImageLibrary_OnFlatSharpDeserialized_mC866948081C9D0DB317DBBAB81D0C09219C9BEC3((PolySpatialReferenceImageLibrary_t3B127BFDF04B30D0E70635EAAF22D7137A739AFA*)__this, L_6, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VTable4_Create_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mDE40A33491E4EFC179B77E272199724E202981AF_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_inputBuffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* ___2_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		if (!il2cpp_codegen_is_little_endian())
		{
			goto IL_0010;
		}
	}
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_inputBuffer;
		int32_t L_1 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_2 = ___2_item;
		VTable4_CreateLittleEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m16F3A2758D9CC40D680AA6C28B2DFBB3BE9DD935(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0010:
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_3 = ___0_inputBuffer;
		int32_t L_4 = ___1_offset;
		VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* L_5 = ___2_item;
		VTable4_CreateBigEndian_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mB11C354F60C7A309338C8A8B5BAE8A36FBD5FD5F(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* tableReader_fad8409e547244d4b5acfa0680e40445_Progressive_1_ReadIndex0Value_mE4B75B4444AC038E5A4C7B331C44CD70AC6E9DA7_gshared_inline (ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_offset, VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42 ___2_vtable, int16_t ___3_remainingDepth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_0 = ___0_buffer;
		int32_t L_1;
		L_1 = VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_inline((&___2_vtable), L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_1;
		if (((int64_t)L_3 + (int64_t)L_4 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)L_4 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 L_5 = ___0_buffer;
		int32_t L_6 = V_0;
		int16_t L_7 = ___3_remainingDepth;
		il2cpp_codegen_runtime_class_init_inline(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var);
		TableFieldContext_t491C45F07CCB1F9700654C5E4AEDA198509ED7ED* L_8 = ((tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_StaticFields*)il2cpp_codegen_static_fields_for(tableMetadata_d5e4ba666d924b3187bb4cf11bd9cb2a_t4FCF458BF30E02408FFD0F4F9580385125A457FB_il2cpp_TypeInfo_var))->___referenceImages;
		RuntimeObject* L_9;
		L_9 = Helpers_Parse_Progressive_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_mE0346624B3EF89E6BCEF7B2085DDBC4D30E5FDA4(L_5, L_6, L_7, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VTable4_OffsetOf_TisReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434_m80A9A485147E8463E81B896744AD74B2BACBB12B_gshared_inline (VTable4_t13BF431F428AA868FC74B3179CAE750ED4D92F42* __this, ReadOnlyMemoryInputBuffer_t3530142F4F47FF19CAA9CCF74312C156F6D14434 ___0_buffer, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0018:
	{
		uint16_t L_1 = __this->___offset0;
		return (int32_t)L_1;
	}

IL_001f:
	{
		uint16_t L_2 = __this->___offset2;
		return (int32_t)L_2;
	}

IL_0026:
	{
		uint16_t L_3 = __this->___offset4;
		return (int32_t)L_3;
	}

IL_002d:
	{
		uint16_t L_4 = __this->___offset6;
		return (int32_t)L_4;
	}

IL_0034:
	{
		return 0;
	}
}
