#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// CSCore.Utils.Complex[]
struct ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// CSCore.DSP.BiQuad
struct BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326;
// CSCore.DSP.FftProvider
struct FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA;
// CSCore.DSP.HighpassFilter
struct HighpassFilter_tAFAE607827511E6D47C42B13A2BCD502B4921D91;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// CSCore.DSP.LowpassFilter
struct LowpassFilter_t9F1033AC0FF5DB19005C43DE0C2E10991A01D16B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral1AB514A8EA2B388C6E60F1CC62C6D7C61F45CA3D;
IL2CPP_EXTERN_C String_t* _stringLiteral390E24BF63AB59EAEBCFF6EAADC84C08CCE326B8;
IL2CPP_EXTERN_C String_t* _stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4FB3B17CEC619C238633561C3FAE9D8ADED19582;
IL2CPP_EXTERN_C String_t* _stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51;
IL2CPP_EXTERN_C String_t* _stringLiteralB363EC6E4A20DD16070403AAA5E19A7DC836D863;
IL2CPP_EXTERN_C String_t* _stringLiteralC92D1220F30F010DBE563408E3670E86739428B1;
IL2CPP_EXTERN_C String_t* _stringLiteralF1152958B5F548ED60BF15E124FB32E3B7705224;
IL2CPP_EXTERN_C String_t* _stringLiteralF8178EB846485C721C840BD83CD3A56ADBA58CCE;
IL2CPP_EXTERN_C const RuntimeMethod* BiQuad__ctor_m79E866E5073DF1BA9D6AF7BBBA0582D555DE9944_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BiQuad_set_Frequency_m4D96D9A179351D2905B63D469423BF23BAA6C9CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BiQuad_set_Q_m543DDBE93B9970C240E486CE1652C18F6401CED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FftProvider_Add_mB38559F8B52624BD0651563EFD472A63E7E00112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FftProvider_GetFftData_m56713375FC432F6378B3524400AD074E3CED1CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FftProvider_GetFftData_mB7740CEEF8B924375DBFB311470F80ADC209677D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FftProvider__ctor_mEB9172BE311DFC6A8D35AFA2EE528E2C8A1F0C17_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t32010A8D635F92F67CA938859CE9746DE5D84C98 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// CSCore.DSP.BiQuad
struct BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326  : public RuntimeObject
{
public:
	// System.Double CSCore.DSP.BiQuad::A0
	double ___A0_0;
	// System.Double CSCore.DSP.BiQuad::A1
	double ___A1_1;
	// System.Double CSCore.DSP.BiQuad::A2
	double ___A2_2;
	// System.Double CSCore.DSP.BiQuad::B1
	double ___B1_3;
	// System.Double CSCore.DSP.BiQuad::B2
	double ___B2_4;
	// System.Double CSCore.DSP.BiQuad::_q
	double ____q_5;
	// System.Double CSCore.DSP.BiQuad::_gainDB
	double ____gainDB_6;
	// System.Double CSCore.DSP.BiQuad::Z1
	double ___Z1_7;
	// System.Double CSCore.DSP.BiQuad::Z2
	double ___Z2_8;
	// System.Double CSCore.DSP.BiQuad::_frequency
	double ____frequency_9;
	// System.Int32 CSCore.DSP.BiQuad::<SampleRate>k__BackingField
	int32_t ___U3CSampleRateU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_A0_0() { return static_cast<int32_t>(offsetof(BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326, ___A0_0)); }
	inline double get_A0_0() const { return ___A0_0; }
	inline double* get_address_of_A0_0() { return &___A0_0; }
	inline void set_A0_0(double value)
	{
		___A0_0 = value;
	}

	inline static int32_t get_offset_of_A1_1() { return static_cast<int32_t>(offsetof(BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326, ___A1_1)); }
	inline double get_A1_1() const { return ___A1_1; }
	inline double* get_address_of_A1_1() { return &___A1_1; }
	inline void set_A1_1(double value)
	{
		___A1_1 = value;
	}

	inline static int32_t get_offset_of_A2_2() { return static_cast<int32_t>(offsetof(BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326, ___A2_2)); }
	inline double get_A2_2() const { return ___A2_2; }
	inline double* get_address_of_A2_2() { return &___A2_2; }
	inline void set_A2_2(double value)
	{
		___A2_2 = value;
	}

	inline static int32_t get_offset_of_B1_3() { return static_cast<int32_t>(offsetof(BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326, ___B1_3)); }
	inline double get_B1_3() const { return ___B1_3; }
	inline double* get_address_of_B1_3() { return &___B1_3; }
	inline void set_B1_3(double value)
	{
		___B1_3 = value;
	}

	inline static int32_t get_offset_of_B2_4() { return static_cast<int32_t>(offsetof(BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326, ___B2_4)); }
	inline double get_B2_4() const { return ___B2_4; }
	inline double* get_address_of_B2_4() { return &___B2_4; }
	inline void set_B2_4(double value)
	{
		___B2_4 = value;
	}

	inline static int32_t get_offset_of__q_5() { return static_cast<int32_t>(offsetof(BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326, ____q_5)); }
	inline double get__q_5() const { return ____q_5; }
	inline double* get_address_of__q_5() { return &____q_5; }
	inline void set__q_5(double value)
	{
		____q_5 = value;
	}

	inline static int32_t get_offset_of__gainDB_6() { return static_cast<int32_t>(offsetof(BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326, ____gainDB_6)); }
	inline double get__gainDB_6() const { return ____gainDB_6; }
	inline double* get_address_of__gainDB_6() { return &____gainDB_6; }
	inline void set__gainDB_6(double value)
	{
		____gainDB_6 = value;
	}

	inline static int32_t get_offset_of_Z1_7() { return static_cast<int32_t>(offsetof(BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326, ___Z1_7)); }
	inline double get_Z1_7() const { return ___Z1_7; }
	inline double* get_address_of_Z1_7() { return &___Z1_7; }
	inline void set_Z1_7(double value)
	{
		___Z1_7 = value;
	}

	inline static int32_t get_offset_of_Z2_8() { return static_cast<int32_t>(offsetof(BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326, ___Z2_8)); }
	inline double get_Z2_8() const { return ___Z2_8; }
	inline double* get_address_of_Z2_8() { return &___Z2_8; }
	inline void set_Z2_8(double value)
	{
		___Z2_8 = value;
	}

	inline static int32_t get_offset_of__frequency_9() { return static_cast<int32_t>(offsetof(BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326, ____frequency_9)); }
	inline double get__frequency_9() const { return ____frequency_9; }
	inline double* get_address_of__frequency_9() { return &____frequency_9; }
	inline void set__frequency_9(double value)
	{
		____frequency_9 = value;
	}

	inline static int32_t get_offset_of_U3CSampleRateU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326, ___U3CSampleRateU3Ek__BackingField_10)); }
	inline int32_t get_U3CSampleRateU3Ek__BackingField_10() const { return ___U3CSampleRateU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CSampleRateU3Ek__BackingField_10() { return &___U3CSampleRateU3Ek__BackingField_10; }
	inline void set_U3CSampleRateU3Ek__BackingField_10(int32_t value)
	{
		___U3CSampleRateU3Ek__BackingField_10 = value;
	}
};


// CSCore.DSP.FastFourierTransformation
struct FastFourierTransformation_t63D8FF435A56A53B6E1289723C2FC0DC7050498A  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// CSCore.Utils.Complex
struct Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 
{
public:
	// System.Single CSCore.Utils.Complex::Imaginary
	float ___Imaginary_1;
	// System.Single CSCore.Utils.Complex::Real
	float ___Real_2;

public:
	inline static int32_t get_offset_of_Imaginary_1() { return static_cast<int32_t>(offsetof(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4, ___Imaginary_1)); }
	inline float get_Imaginary_1() const { return ___Imaginary_1; }
	inline float* get_address_of_Imaginary_1() { return &___Imaginary_1; }
	inline void set_Imaginary_1(float value)
	{
		___Imaginary_1 = value;
	}

	inline static int32_t get_offset_of_Real_2() { return static_cast<int32_t>(offsetof(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4, ___Real_2)); }
	inline float get_Real_2() const { return ___Real_2; }
	inline float* get_address_of_Real_2() { return &___Real_2; }
	inline void set_Real_2(float value)
	{
		___Real_2 = value;
	}
};

struct Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4_StaticFields
{
public:
	// CSCore.Utils.Complex CSCore.Utils.Complex::Zero
	Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4_StaticFields, ___Zero_0)); }
	inline Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  get_Zero_0() const { return ___Zero_0; }
	inline Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  value)
	{
		___Zero_0 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// CSCore.DSP.HighpassFilter
struct HighpassFilter_tAFAE607827511E6D47C42B13A2BCD502B4921D91  : public BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326
{
public:
	// System.Int32 CSCore.DSP.HighpassFilter::p1
	int32_t ___p1_11;
	// System.Double CSCore.DSP.HighpassFilter::p2
	double ___p2_12;

public:
	inline static int32_t get_offset_of_p1_11() { return static_cast<int32_t>(offsetof(HighpassFilter_tAFAE607827511E6D47C42B13A2BCD502B4921D91, ___p1_11)); }
	inline int32_t get_p1_11() const { return ___p1_11; }
	inline int32_t* get_address_of_p1_11() { return &___p1_11; }
	inline void set_p1_11(int32_t value)
	{
		___p1_11 = value;
	}

	inline static int32_t get_offset_of_p2_12() { return static_cast<int32_t>(offsetof(HighpassFilter_tAFAE607827511E6D47C42B13A2BCD502B4921D91, ___p2_12)); }
	inline double get_p2_12() const { return ___p2_12; }
	inline double* get_address_of_p2_12() { return &___p2_12; }
	inline void set_p2_12(double value)
	{
		___p2_12 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.IntPtr
struct IntPtr_t 
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


// CSCore.DSP.LowpassFilter
struct LowpassFilter_t9F1033AC0FF5DB19005C43DE0C2E10991A01D16B  : public BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326
{
public:

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Exception
struct Exception_t  : public RuntimeObject
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

// CSCore.DSP.FftMode
struct FftMode_t44E837C4C5F47D9DD497EEC0582E1C74926CB73F 
{
public:
	// System.Int32 CSCore.DSP.FftMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FftMode_t44E837C4C5F47D9DD497EEC0582E1C74926CB73F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CSCore.DSP.FftSize
struct FftSize_t7FF415871FBEBE68E666840EA86C4FF9CA6CB084 
{
public:
	// System.Int32 CSCore.DSP.FftSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FftSize_t7FF415871FBEBE68E666840EA86C4FF9CA6CB084, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CSCore.DSP.FftProvider
struct FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA  : public RuntimeObject
{
public:
	// System.Int32 CSCore.DSP.FftProvider::_channels
	int32_t ____channels_0;
	// CSCore.DSP.FftSize CSCore.DSP.FftProvider::_fftSize
	int32_t ____fftSize_1;
	// System.Int32 CSCore.DSP.FftProvider::_fftSizeExponent
	int32_t ____fftSizeExponent_2;
	// CSCore.Utils.Complex[] CSCore.DSP.FftProvider::_storedSamples
	ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* ____storedSamples_3;
	// System.Int32 CSCore.DSP.FftProvider::_currentSampleOffset
	int32_t ____currentSampleOffset_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) CSCore.DSP.FftProvider::_newDataAvailable
	bool ____newDataAvailable_5;

public:
	inline static int32_t get_offset_of__channels_0() { return static_cast<int32_t>(offsetof(FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA, ____channels_0)); }
	inline int32_t get__channels_0() const { return ____channels_0; }
	inline int32_t* get_address_of__channels_0() { return &____channels_0; }
	inline void set__channels_0(int32_t value)
	{
		____channels_0 = value;
	}

	inline static int32_t get_offset_of__fftSize_1() { return static_cast<int32_t>(offsetof(FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA, ____fftSize_1)); }
	inline int32_t get__fftSize_1() const { return ____fftSize_1; }
	inline int32_t* get_address_of__fftSize_1() { return &____fftSize_1; }
	inline void set__fftSize_1(int32_t value)
	{
		____fftSize_1 = value;
	}

	inline static int32_t get_offset_of__fftSizeExponent_2() { return static_cast<int32_t>(offsetof(FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA, ____fftSizeExponent_2)); }
	inline int32_t get__fftSizeExponent_2() const { return ____fftSizeExponent_2; }
	inline int32_t* get_address_of__fftSizeExponent_2() { return &____fftSizeExponent_2; }
	inline void set__fftSizeExponent_2(int32_t value)
	{
		____fftSizeExponent_2 = value;
	}

	inline static int32_t get_offset_of__storedSamples_3() { return static_cast<int32_t>(offsetof(FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA, ____storedSamples_3)); }
	inline ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* get__storedSamples_3() const { return ____storedSamples_3; }
	inline ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED** get_address_of__storedSamples_3() { return &____storedSamples_3; }
	inline void set__storedSamples_3(ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* value)
	{
		____storedSamples_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storedSamples_3), (void*)value);
	}

	inline static int32_t get_offset_of__currentSampleOffset_4() { return static_cast<int32_t>(offsetof(FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA, ____currentSampleOffset_4)); }
	inline int32_t get__currentSampleOffset_4() const { return ____currentSampleOffset_4; }
	inline int32_t* get_address_of__currentSampleOffset_4() { return &____currentSampleOffset_4; }
	inline void set__currentSampleOffset_4(int32_t value)
	{
		____currentSampleOffset_4 = value;
	}

	inline static int32_t get_offset_of__newDataAvailable_5() { return static_cast<int32_t>(offsetof(FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA, ____newDataAvailable_5)); }
	inline bool get__newDataAvailable_5() const { return ____newDataAvailable_5; }
	inline bool* get_address_of__newDataAvailable_5() { return &____newDataAvailable_5; }
	inline void set__newDataAvailable_5(bool value)
	{
		____newDataAvailable_5 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// CSCore.Utils.Complex[]
struct ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  m_Items[1];

public:
	inline Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  value)
	{
		m_Items[index] = value;
	}
};



// System.Int32 CSCore.DSP.BiQuad::get_SampleRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BiQuad_get_SampleRate_m8A4EA483DED35B8528FB3A00C76EE98B91CE59A2_inline (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::.ctor(System.Int32,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad__ctor_m79E866E5073DF1BA9D6AF7BBBA0582D555DE9944 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, int32_t ___sampleRate0, double ___frequency1, double ___q2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::set_SampleRate(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BiQuad_set_SampleRate_m025D243CD773FB9D7FFBC922ED3E0DC70F81324A_inline (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::set_Frequency(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad_set_Frequency_m4D96D9A179351D2905B63D469423BF23BAA6C9CE (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, double ___value0, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::set_Q(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad_set_Q_m543DDBE93B9970C240E486CE1652C18F6401CED3 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, double ___value0, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::set_GainDB(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad_set_GainDB_m3E900DE46CFE56166D344ABD3B8979F2A0CE3E65 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, double ___value0, const RuntimeMethod* method);
// System.Single CSCore.DSP.BiQuad::Process(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BiQuad_Process_m9D567F974598278199261318050044BA52DF81CF (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, float ___input0, const RuntimeMethod* method);
// System.Void CSCore.Utils.Complex::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Complex__ctor_m7FC14B1B3AAD346FF53D889252FD6B6340660A0F (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * __this, float ___real0, float ___img1, const RuntimeMethod* method);
// System.Double CSCore.Utils.Complex::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Complex_get_Value_mE6D17DDA357E7FA3DAC6FB6201B721B2E3DFE386 (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * __this, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914 (float* __this, float ___obj0, const RuntimeMethod* method);
// System.Boolean CSCore.Utils.Complex::Equals(CSCore.Utils.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex_Equals_mAB8861A8594783337D7A967D352C9DB3BBC309AD (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * __this, Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  ___other0, const RuntimeMethod* method);
// System.Boolean CSCore.Utils.Complex::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex_Equals_m75AA1FBB3BE4CA1E67B0D2C4951C5C6CBAD91170 (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Int32 CSCore.Utils.Complex::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Complex_GetHashCode_m9F8F0C881866DAE86A2EE4FAE94C0307643CF459 (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * __this, const RuntimeMethod* method);
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F (double ___x0, double ___y1, const RuntimeMethod* method);
// System.Void CSCore.DSP.FastFourierTransformation::Inverse(CSCore.Utils.Complex[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastFourierTransformation_Inverse_m62529B1CB6DC449A3FEF87C0FC0DC92C4DA32341 (ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* ___data0, int32_t ___c1, const RuntimeMethod* method);
// System.Void CSCore.DSP.FastFourierTransformation::Forward(CSCore.Utils.Complex[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastFourierTransformation_Forward_m03F90A8B236D21E910E417C0471FA74129980DF4 (ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* ___data0, int32_t ___count1, const RuntimeMethod* method);
// System.Void CSCore.DSP.FastFourierTransformation::Swap(CSCore.Utils.Complex[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastFourierTransformation_Swap_mC947F1D626A739D26A405A6E407606235B00AACB (ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* ___data0, int32_t ___index1, int32_t ___index22, const RuntimeMethod* method);
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m05D6B4CE873ABBA5D8E39F798BBB67D49ABECE2C (double ___a0, double ___newBase1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Single CSCore.DSP.FftProvider::MergeSamples(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FftProvider_MergeSamples_m2E36675FFFB2C56FA82CA0602A507731FF5DFB01 (FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples0, int32_t ___i1, int32_t ___channels2, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Void CSCore.DSP.FastFourierTransformation::Fft(CSCore.Utils.Complex[],System.Int32,CSCore.DSP.FftMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastFourierTransformation_Fft_mE87E2F8FC68B64CAB2CBF0C850CF641647A5DC16 (ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* ___data0, int32_t ___exponent1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Single CSCore.Utils.Complex::op_Implicit(CSCore.Utils.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Complex_op_Implicit_mAF765D23276B9E829F24B64C033EC254C71609EC (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  ___complex0, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::.ctor(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad__ctor_mD6C5BB854C73B7EE1FAF6F5BBE946641E9FCB739 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, int32_t ___sampleRate0, double ___frequency1, const RuntimeMethod* method);
// System.Double CSCore.DSP.BiQuad::get_Frequency()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double BiQuad_get_Frequency_m92FB957C5B240B0E364F31EDC3255CA17AB91857_inline (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, const RuntimeMethod* method);
// System.Double CSCore.DSP.BiQuad::get_Q()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double BiQuad_get_Q_m5BD15B00677917E86100CAF9E2DE1457E44E46D5_inline (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, const RuntimeMethod* method);
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
// System.Double CSCore.DSP.BiQuad::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BiQuad_get_Frequency_m92FB957C5B240B0E364F31EDC3255CA17AB91857 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get__frequency_9();
		return L_0;
	}
}
// System.Void CSCore.DSP.BiQuad::set_Frequency(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad_set_Frequency_m4D96D9A179351D2905B63D469423BF23BAA6C9CE (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = BiQuad_get_SampleRate_m8A4EA483DED35B8528FB3A00C76EE98B91CE59A2_inline(__this, /*hidden argument*/NULL);
		double L_1 = ___value0;
		if ((!(((double)((double)((double)L_0))) < ((double)((double)il2cpp_codegen_multiply((double)L_1, (double)(2.0)))))))
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8178EB846485C721C840BD83CD3A56ADBA58CCE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BiQuad_set_Frequency_m4D96D9A179351D2905B63D469423BF23BAA6C9CE_RuntimeMethod_var)));
	}

IL_0024:
	{
		double L_3 = ___value0;
		__this->set__frequency_9(L_3);
		VirtActionInvoker0::Invoke(4 /* System.Void CSCore.DSP.BiQuad::CalculateBiQuadCoefficients() */, __this);
		return;
	}
}
// System.Int32 CSCore.DSP.BiQuad::get_SampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BiQuad_get_SampleRate_m8A4EA483DED35B8528FB3A00C76EE98B91CE59A2 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSampleRateU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void CSCore.DSP.BiQuad::set_SampleRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad_set_SampleRate_m025D243CD773FB9D7FFBC922ED3E0DC70F81324A (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSampleRateU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Double CSCore.DSP.BiQuad::get_Q()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BiQuad_get_Q_m5BD15B00677917E86100CAF9E2DE1457E44E46D5 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get__q_5();
		return L_0;
	}
}
// System.Void CSCore.DSP.BiQuad::set_Q(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad_set_Q_m543DDBE93B9970C240E486CE1652C18F6401CED3 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		if ((!(((double)L_0) <= ((double)(0.0)))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BiQuad_set_Q_m543DDBE93B9970C240E486CE1652C18F6401CED3_RuntimeMethod_var)));
	}

IL_0017:
	{
		double L_2 = ___value0;
		__this->set__q_5(L_2);
		VirtActionInvoker0::Invoke(4 /* System.Void CSCore.DSP.BiQuad::CalculateBiQuadCoefficients() */, __this);
		return;
	}
}
// System.Void CSCore.DSP.BiQuad::set_GainDB(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad_set_GainDB_m3E900DE46CFE56166D344ABD3B8979F2A0CE3E65 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set__gainDB_6(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void CSCore.DSP.BiQuad::CalculateBiQuadCoefficients() */, __this);
		return;
	}
}
// System.Void CSCore.DSP.BiQuad::.ctor(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad__ctor_mD6C5BB854C73B7EE1FAF6F5BBE946641E9FCB739 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, int32_t ___sampleRate0, double ___frequency1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___sampleRate0;
		double L_1 = ___frequency1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt((2.0));
		BiQuad__ctor_m79E866E5073DF1BA9D6AF7BBBA0582D555DE9944(__this, L_0, L_1, ((double)((double)(1.0)/(double)L_2)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void CSCore.DSP.BiQuad::.ctor(System.Int32,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad__ctor_m79E866E5073DF1BA9D6AF7BBBA0582D555DE9944 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, int32_t ___sampleRate0, double ___frequency1, double ___q2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___sampleRate0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1AB514A8EA2B388C6E60F1CC62C6D7C61F45CA3D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BiQuad__ctor_m79E866E5073DF1BA9D6AF7BBBA0582D555DE9944_RuntimeMethod_var)));
	}

IL_0015:
	{
		double L_2 = ___frequency1;
		if ((!(((double)L_2) <= ((double)(0.0)))))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EAAB49310BF4909AB185E687EE1D1F4FECECB51)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BiQuad__ctor_m79E866E5073DF1BA9D6AF7BBBA0582D555DE9944_RuntimeMethod_var)));
	}

IL_002c:
	{
		double L_4 = ___q2;
		if ((!(((double)L_4) <= ((double)(0.0)))))
		{
			goto IL_0043;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430E518F836082E0683698AB9E3F79D39C7F5140)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BiQuad__ctor_m79E866E5073DF1BA9D6AF7BBBA0582D555DE9944_RuntimeMethod_var)));
	}

IL_0043:
	{
		int32_t L_6 = ___sampleRate0;
		BiQuad_set_SampleRate_m025D243CD773FB9D7FFBC922ED3E0DC70F81324A_inline(__this, L_6, /*hidden argument*/NULL);
		double L_7 = ___frequency1;
		BiQuad_set_Frequency_m4D96D9A179351D2905B63D469423BF23BAA6C9CE(__this, L_7, /*hidden argument*/NULL);
		double L_8 = ___q2;
		BiQuad_set_Q_m543DDBE93B9970C240E486CE1652C18F6401CED3(__this, L_8, /*hidden argument*/NULL);
		BiQuad_set_GainDB_m3E900DE46CFE56166D344ABD3B8979F2A0CE3E65(__this, (6.0), /*hidden argument*/NULL);
		return;
	}
}
// System.Single CSCore.DSP.BiQuad::Process(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BiQuad_Process_m9D567F974598278199261318050044BA52DF81CF (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, float ___input0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		float L_0 = ___input0;
		double L_1 = __this->get_A0_0();
		double L_2 = __this->get_Z1_7();
		V_0 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_0)), (double)L_1)), (double)L_2));
		float L_3 = ___input0;
		double L_4 = __this->get_A1_1();
		double L_5 = __this->get_Z2_8();
		double L_6 = __this->get_B1_3();
		double L_7 = V_0;
		__this->set_Z1_7(((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_3)), (double)L_4)), (double)L_5)), (double)((double)il2cpp_codegen_multiply((double)L_6, (double)L_7)))));
		float L_8 = ___input0;
		double L_9 = __this->get_A2_2();
		double L_10 = __this->get_B2_4();
		double L_11 = V_0;
		__this->set_Z2_8(((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_8)), (double)L_9)), (double)((double)il2cpp_codegen_multiply((double)L_10, (double)L_11)))));
		double L_12 = V_0;
		return ((float)((float)L_12));
	}
}
// System.Void CSCore.DSP.BiQuad::Process(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BiQuad_Process_m1E0ED5DD842CE120BE4943749630A873C51D5642 (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___input0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___input0;
		int32_t L_1 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___input0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6;
		L_6 = BiQuad_Process_m9D567F974598278199261318050044BA52DF81CF(__this, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (float)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0014:
	{
		int32_t L_8 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ___input0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
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
// System.Void CSCore.Utils.Complex::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Complex__ctor_m7FC14B1B3AAD346FF53D889252FD6B6340660A0F (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * __this, float ___real0, float ___img1, const RuntimeMethod* method)
{
	{
		float L_0 = ___real0;
		__this->set_Real_2(L_0);
		float L_1 = ___img1;
		__this->set_Imaginary_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Complex__ctor_m7FC14B1B3AAD346FF53D889252FD6B6340660A0F_AdjustorThunk (RuntimeObject * __this, float ___real0, float ___img1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * _thisAdjusted = reinterpret_cast<Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *>(__this + _offset);
	Complex__ctor_m7FC14B1B3AAD346FF53D889252FD6B6340660A0F(_thisAdjusted, ___real0, ___img1, method);
}
// System.Double CSCore.Utils.Complex::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Complex_get_Value_mE6D17DDA357E7FA3DAC6FB6201B721B2E3DFE386 (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_Real_2();
		float L_1 = __this->get_Real_2();
		float L_2 = __this->get_Imaginary_1();
		float L_3 = __this->get_Imaginary_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))))));
		return L_4;
	}
}
IL2CPP_EXTERN_C  double Complex_get_Value_mE6D17DDA357E7FA3DAC6FB6201B721B2E3DFE386_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * _thisAdjusted = reinterpret_cast<Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *>(__this + _offset);
	double _returnValue;
	_returnValue = Complex_get_Value_mE6D17DDA357E7FA3DAC6FB6201B721B2E3DFE386(_thisAdjusted, method);
	return _returnValue;
}
// System.Single CSCore.Utils.Complex::op_Implicit(CSCore.Utils.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Complex_op_Implicit_mAF765D23276B9E829F24B64C033EC254C71609EC (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  ___complex0, const RuntimeMethod* method)
{
	{
		double L_0;
		L_0 = Complex_get_Value_mE6D17DDA357E7FA3DAC6FB6201B721B2E3DFE386((Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *)(&___complex0), /*hidden argument*/NULL);
		return ((float)((float)L_0));
	}
}
// System.Boolean CSCore.Utils.Complex::Equals(CSCore.Utils.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex_Equals_mAB8861A8594783337D7A967D352C9DB3BBC309AD (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * __this, Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  ___other0, const RuntimeMethod* method)
{
	{
		float* L_0 = __this->get_address_of_Imaginary_1();
		float L_1 = (&___other0)->get_Imaginary_1();
		bool L_2;
		L_2 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		float* L_3 = __this->get_address_of_Real_2();
		float L_4 = (&___other0)->get_Real_2();
		bool L_5;
		L_5 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Complex_Equals_mAB8861A8594783337D7A967D352C9DB3BBC309AD_AdjustorThunk (RuntimeObject * __this, Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * _thisAdjusted = reinterpret_cast<Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Complex_Equals_mAB8861A8594783337D7A967D352C9DB3BBC309AD(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean CSCore.Utils.Complex::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex_Equals_m75AA1FBB3BE4CA1E67B0D2C4951C5C6CBAD91170 (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1;
		L_1 = il2cpp_codegen_object_reference_equals(NULL, L_0);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4_il2cpp_TypeInfo_var)))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4;
		L_4 = Complex_Equals_mAB8861A8594783337D7A967D352C9DB3BBC309AD((Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *)__this, ((*(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *)((Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *)UnBox(L_3, Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_4;
	}

IL_0020:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Complex_Equals_m75AA1FBB3BE4CA1E67B0D2C4951C5C6CBAD91170_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * _thisAdjusted = reinterpret_cast<Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Complex_Equals_m75AA1FBB3BE4CA1E67B0D2C4951C5C6CBAD91170(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 CSCore.Utils.Complex::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Complex_GetHashCode_m9F8F0C881866DAE86A2EE4FAE94C0307643CF459 (Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * __this, const RuntimeMethod* method)
{
	{
		float* L_0 = __this->get_address_of_Imaginary_1();
		int32_t L_1;
		L_1 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_Real_2();
		int32_t L_3;
		L_3 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)397)))^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Complex_GetHashCode_m9F8F0C881866DAE86A2EE4FAE94C0307643CF459_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * _thisAdjusted = reinterpret_cast<Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Complex_GetHashCode_m9F8F0C881866DAE86A2EE4FAE94C0307643CF459(_thisAdjusted, method);
	return _returnValue;
}
// System.Void CSCore.Utils.Complex::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Complex__cctor_mAB91734EB22BD6CFE47E52E2B053998306D67593 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Complex__ctor_m7FC14B1B3AAD346FF53D889252FD6B6340660A0F((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4_il2cpp_TypeInfo_var))->set_Zero_0(L_0);
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
// System.Void CSCore.DSP.FastFourierTransformation::Fft(CSCore.Utils.Complex[],System.Int32,CSCore.DSP.FftMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastFourierTransformation_Fft_mE87E2F8FC68B64CAB2CBF0C850CF641647A5DC16 (ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* ___data0, int32_t ___exponent1, int32_t ___mode2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		int32_t L_0 = ___exponent1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F((2.0), ((double)((double)L_0)), /*hidden argument*/NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_2 = ___data0;
		int32_t L_3 = V_0;
		FastFourierTransformation_Inverse_m62529B1CB6DC449A3FEF87C0FC0DC92C4DA32341(L_2, L_3, /*hidden argument*/NULL);
		V_3 = 1;
		V_9 = (-1.0f);
		V_10 = (0.0f);
		V_13 = 0;
		goto IL_018c;
	}

IL_0031:
	{
		V_4 = (1.0f);
		V_5 = (0.0f);
		int32_t L_4 = V_3;
		V_2 = L_4;
		int32_t L_5 = V_3;
		V_3 = ((int32_t)((int32_t)L_5<<(int32_t)1));
		V_11 = 0;
		goto IL_0133;
	}

IL_004d:
	{
		int32_t L_6 = V_11;
		V_12 = L_6;
		goto IL_0107;
	}

IL_0056:
	{
		int32_t L_7 = V_12;
		int32_t L_8 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		float L_9 = V_4;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_10 = ___data0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_Real_2();
		float L_13 = V_5;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_14 = ___data0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		float L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->get_Imaginary_1();
		V_6 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_12)), (float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_16))));
		float L_17 = V_4;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_18 = ___data0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		float L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_Imaginary_1();
		float L_21 = V_5;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_22 = ___data0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		float L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_Real_2();
		V_7 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_20)), (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_24))));
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_25 = ___data0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_27 = ___data0;
		int32_t L_28 = V_12;
		NullCheck(L_27);
		float L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->get_Real_2();
		float L_30 = V_6;
		((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->set_Real_2(((float)il2cpp_codegen_subtract((float)L_29, (float)L_30)));
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_31 = ___data0;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_33 = ___data0;
		int32_t L_34 = V_12;
		NullCheck(L_33);
		float L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_Imaginary_1();
		float L_36 = V_7;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->set_Imaginary_1(((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)));
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_37 = ___data0;
		int32_t L_38 = V_12;
		NullCheck(L_37);
		Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)));
		float L_40 = L_39->get_Real_2();
		float L_41 = V_6;
		L_39->set_Real_2(((float)il2cpp_codegen_add((float)L_40, (float)L_41)));
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_42 = ___data0;
		int32_t L_43 = V_12;
		NullCheck(L_42);
		Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)));
		float L_45 = L_44->get_Imaginary_1();
		float L_46 = V_7;
		L_44->set_Imaginary_1(((float)il2cpp_codegen_add((float)L_45, (float)L_46)));
		int32_t L_47 = V_12;
		int32_t L_48 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
	}

IL_0107:
	{
		int32_t L_49 = V_12;
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0056;
		}
	}
	{
		float L_51 = V_9;
		float L_52 = V_4;
		float L_53 = V_10;
		float L_54 = V_5;
		V_8 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_51, (float)L_52)), (float)((float)il2cpp_codegen_multiply((float)L_53, (float)L_54))));
		float L_55 = V_10;
		float L_56 = V_4;
		float L_57 = V_9;
		float L_58 = V_5;
		V_5 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_55, (float)L_56)), (float)((float)il2cpp_codegen_multiply((float)L_57, (float)L_58))));
		float L_59 = V_8;
		V_4 = L_59;
		int32_t L_60 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0133:
	{
		int32_t L_61 = V_11;
		int32_t L_62 = V_2;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_63 = ___mode2;
		if (L_63)
		{
			goto IL_0157;
		}
	}
	{
		float L_64 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_65;
		L_65 = sqrt(((double)((double)((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_64))/(float)(2.0f))))));
		V_10 = ((float)((float)L_65));
		goto IL_016f;
	}

IL_0157:
	{
		float L_66 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_67;
		L_67 = sqrt(((double)((double)((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_66))/(float)(2.0f))))));
		V_10 = ((float)((float)((-L_67))));
	}

IL_016f:
	{
		float L_68 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_69;
		L_69 = sqrt(((double)((double)((float)((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_68))/(float)(2.0f))))));
		V_9 = ((float)((float)L_69));
		int32_t L_70 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_018c:
	{
		int32_t L_71 = V_13;
		int32_t L_72 = ___exponent1;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_73 = ___mode2;
		if (L_73)
		{
			goto IL_019e;
		}
	}
	{
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_74 = ___data0;
		int32_t L_75 = V_0;
		FastFourierTransformation_Forward_m03F90A8B236D21E910E417C0471FA74129980DF4(L_74, L_75, /*hidden argument*/NULL);
	}

IL_019e:
	{
		return;
	}
}
// System.Void CSCore.DSP.FastFourierTransformation::Forward(CSCore.Utils.Complex[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastFourierTransformation_Forward_m03F90A8B236D21E910E417C0471FA74129980DF4 (ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* ___data0, int32_t ___count1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___count1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0034;
	}

IL_0006:
	{
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_1 = ___data0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		float L_4 = L_3->get_Real_2();
		int32_t L_5 = V_0;
		L_3->set_Real_2(((float)((float)L_4/(float)((float)((float)L_5)))));
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_6 = ___data0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 * L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)));
		float L_9 = L_8->get_Imaginary_1();
		int32_t L_10 = V_0;
		L_8->set_Imaginary_1(((float)((float)L_9/(float)((float)((float)L_10)))));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CSCore.DSP.FastFourierTransformation::Inverse(CSCore.Utils.Complex[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastFourierTransformation_Inverse_m62529B1CB6DC449A3FEF87C0FC0DC92C4DA32341 (ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* ___data0, int32_t ___c1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___c1;
		V_1 = ((int32_t)((int32_t)L_0>>(int32_t)1));
		V_2 = 0;
		goto IL_002e;
	}

IL_000a:
	{
		int32_t L_1 = V_2;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_3 = ___data0;
		int32_t L_4 = V_2;
		int32_t L_5 = V_0;
		FastFourierTransformation_Swap_mC947F1D626A739D26A405A6E407606235B00AACB(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_6 = V_1;
		V_3 = L_6;
		goto IL_0022;
	}

IL_001a:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9>>(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = ___c1;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Void CSCore.DSP.FastFourierTransformation::Swap(CSCore.Utils.Complex[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastFourierTransformation_Swap_mC947F1D626A739D26A405A6E407606235B00AACB (ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* ___data0, int32_t ___index1, int32_t ___index22, const RuntimeMethod* method)
{
	Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_0 = ___data0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  L_2 = (*(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))));
		V_0 = L_2;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_3 = ___data0;
		int32_t L_4 = ___index1;
		NullCheck(L_3);
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_5 = ___data0;
		int32_t L_6 = ___index22;
		NullCheck(L_5);
		Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  L_7 = (*(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		*(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))) = L_7;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_8 = ___data0;
		int32_t L_9 = ___index22;
		NullCheck(L_8);
		Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  L_10 = V_0;
		*(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))) = L_10;
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
// System.Void CSCore.DSP.FftProvider::.ctor(System.Int32,CSCore.DSP.FftSize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FftProvider__ctor_mEB9172BE311DFC6A8D35AFA2EE528E2C8A1F0C17 (FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA * __this, int32_t ___channels0, int32_t ___fftSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___channels0;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FB3B17CEC619C238633561C3FAE9D8ADED19582)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FftProvider__ctor_mEB9172BE311DFC6A8D35AFA2EE528E2C8A1F0C17_RuntimeMethod_var)));
	}

IL_0015:
	{
		int32_t L_2 = ___fftSize1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = Math_Log_m05D6B4CE873ABBA5D8E39F798BBB67D49ABECE2C(((double)((double)L_2)), (2.0), /*hidden argument*/NULL);
		V_0 = L_3;
		double L_4 = V_0;
		if ((!(((double)(fmod(L_4, (1.0)))) == ((double)(0.0)))))
		{
			goto IL_0048;
		}
	}
	{
		double L_5 = V_0;
		if ((!(((double)L_5) == ((double)(0.0)))))
		{
			goto IL_0053;
		}
	}

IL_0048:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral390E24BF63AB59EAEBCFF6EAADC84C08CCE326B8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FftProvider__ctor_mEB9172BE311DFC6A8D35AFA2EE528E2C8A1F0C17_RuntimeMethod_var)));
	}

IL_0053:
	{
		int32_t L_7 = ___channels0;
		__this->set__channels_0(L_7);
		int32_t L_8 = ___fftSize1;
		__this->set__fftSize_1(L_8);
		double L_9 = V_0;
		__this->set__fftSizeExponent_2(il2cpp_codegen_cast_double_to_int<int32_t>(L_9));
		int32_t L_10 = ___fftSize1;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_11 = (ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED*)(ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED*)SZArrayNew(ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set__storedSamples_3(L_11);
		return;
	}
}
// System.Void CSCore.DSP.FftProvider::Add(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FftProvider_Add_mB38559F8B52624BD0651563EFD472A63E7E00112 (FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples0, int32_t ___count1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___samples0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC92D1220F30F010DBE563408E3670E86739428B1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FftProvider_Add_mB38559F8B52624BD0651563EFD472A63E7E00112_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___count1;
		int32_t L_3 = ___count1;
		int32_t L_4 = __this->get__channels_0();
		___count1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)((int32_t)L_3%(int32_t)L_4))));
		int32_t L_5 = ___count1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___samples0;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_7 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FftProvider_Add_mB38559F8B52624BD0651563EFD472A63E7E00112_RuntimeMethod_var)));
	}

IL_002b:
	{
		int32_t L_8 = ___count1;
		int32_t L_9 = __this->get__channels_0();
		V_0 = ((int32_t)((int32_t)L_8/(int32_t)L_9));
		V_1 = 0;
		goto IL_00a5;
	}

IL_0038:
	{
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_10 = __this->get__storedSamples_3();
		int32_t L_11 = __this->get__currentSampleOffset_4();
		NullCheck(L_10);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_Imaginary_1((0.0f));
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_12 = __this->get__storedSamples_3();
		int32_t L_13 = __this->get__currentSampleOffset_4();
		NullCheck(L_12);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = ___samples0;
		int32_t L_15 = V_1;
		int32_t L_16 = __this->get__channels_0();
		float L_17;
		L_17 = FftProvider_MergeSamples_m2E36675FFFB2C56FA82CA0602A507731FF5DFB01(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->set_Real_2(L_17);
		int32_t L_18 = __this->get__currentSampleOffset_4();
		__this->set__currentSampleOffset_4(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = __this->get__currentSampleOffset_4();
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_20 = __this->get__storedSamples_3();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_009c;
		}
	}
	{
		__this->set__currentSampleOffset_4(0);
	}

IL_009c:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = __this->get__channels_0();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22));
	}

IL_00a5:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_25 = ___count1;
		il2cpp_codegen_memory_barrier();
		__this->set__newDataAvailable_5(((((int32_t)L_25) > ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Boolean CSCore.DSP.FftProvider::GetFftData(CSCore.Utils.Complex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FftProvider_GetFftData_m56713375FC432F6378B3524400AD074E3CED1CE3 (FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA * __this, ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* ___fftResultBuffer0, const RuntimeMethod* method)
{
	ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* V_0 = NULL;
	bool V_1 = false;
	{
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_0 = ___fftResultBuffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB363EC6E4A20DD16070403AAA5E19A7DC836D863)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FftProvider_GetFftData_m56713375FC432F6378B3524400AD074E3CED1CE3_RuntimeMethod_var)));
	}

IL_000e:
	{
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_2 = ___fftResultBuffer0;
		V_0 = L_2;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_3 = __this->get__storedSamples_3();
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_4 = V_0;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_5 = __this->get__storedSamples_3();
		NullCheck(L_5);
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_3, (RuntimeArray *)(RuntimeArray *)L_4, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_6 = V_0;
		int32_t L_7 = __this->get__fftSizeExponent_2();
		FastFourierTransformation_Fft_mE87E2F8FC68B64CAB2CBF0C850CF641647A5DC16(L_6, L_7, 0, /*hidden argument*/NULL);
		bool L_8 = __this->get__newDataAvailable_5();
		il2cpp_codegen_memory_barrier();
		V_1 = L_8;
		il2cpp_codegen_memory_barrier();
		__this->set__newDataAvailable_5(0);
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean CSCore.DSP.FftProvider::GetFftData(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FftProvider_GetFftData_mB7740CEEF8B924375DBFB311470F80ADC209677D (FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___fftResultBuffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___fftResultBuffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB363EC6E4A20DD16070403AAA5E19A7DC836D863)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FftProvider_GetFftData_mB7740CEEF8B924375DBFB311470F80ADC209677D_RuntimeMethod_var)));
	}

IL_000e:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___fftResultBuffer0;
		NullCheck(L_2);
		int32_t L_3 = __this->get__fftSize_1();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) >= ((int32_t)L_3)))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1152958B5F548ED60BF15E124FB32E3B7705224)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB363EC6E4A20DD16070403AAA5E19A7DC836D863)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FftProvider_GetFftData_mB7740CEEF8B924375DBFB311470F80ADC209677D_RuntimeMethod_var)));
	}

IL_0029:
	{
		int32_t L_5 = __this->get__fftSize_1();
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_6 = (ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED*)(ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED*)SZArrayNew(ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_0 = L_6;
		bool L_7 = __this->get__newDataAvailable_5();
		il2cpp_codegen_memory_barrier();
		V_1 = L_7;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_8 = V_0;
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* >::Invoke(5 /* System.Boolean CSCore.DSP.FftProvider::GetFftData(CSCore.Utils.Complex[]) */, __this, L_8);
		V_2 = 0;
		goto IL_0063;
	}

IL_004a:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ___fftResultBuffer0;
		int32_t L_11 = V_2;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4  L_14 = (*(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4 *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))));
		IL2CPP_RUNTIME_CLASS_INIT(Complex_tCD6A33C3713433328EF2271CB01C2984E5DC51F4_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = Complex_op_Implicit_mAF765D23276B9E829F24B64C033EC254C71609EC(L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)((float)((float)L_15)));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_17 = V_2;
		ComplexU5BU5D_tED2D46E45C3F73F45A7945077B5C936083D948ED* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_004a;
		}
	}
	{
		bool L_19 = V_1;
		return L_19;
	}
}
// System.Single CSCore.DSP.FftProvider::MergeSamples(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FftProvider_MergeSamples_m2E36675FFFB2C56FA82CA0602A507731FF5DFB01 (FftProvider_t0282A56C2BC2BE57FD4CDE3B62CB8036D303D7BA * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___samples0, int32_t ___i1, int32_t ___channels2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___channels2;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___samples0;
		int32_t L_2 = ___i1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_0008:
	{
		int32_t L_5 = ___channels2;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___samples0;
		int32_t L_7 = ___i1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ___samples0;
		int32_t L_11 = ___i1;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		float L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return ((float)((float)((float)il2cpp_codegen_add((float)L_9, (float)L_13))/(float)(2.0f)));
	}

IL_001c:
	{
		int32_t L_14 = ___channels2;
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_0036;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = ___samples0;
		int32_t L_16 = ___i1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		float L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = ___samples0;
		int32_t L_20 = ___i1;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		float L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_23 = ___samples0;
		int32_t L_24 = ___i1;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2));
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		return ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_18, (float)L_22)), (float)L_26))/(float)(3.0f)));
	}

IL_0036:
	{
		int32_t L_27 = ___channels2;
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_0056;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_28 = ___samples0;
		int32_t L_29 = ___i1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		float L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = ___samples0;
		int32_t L_33 = ___i1;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		float L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_36 = ___samples0;
		int32_t L_37 = ___i1;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)2));
		float L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_40 = ___samples0;
		int32_t L_41 = ___i1;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)3));
		float L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		return ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_31, (float)L_35)), (float)L_39)), (float)L_43))/(float)(4.0f)));
	}

IL_0056:
	{
		int32_t L_44 = ___channels2;
		if ((!(((uint32_t)L_44) == ((uint32_t)5))))
		{
			goto IL_007c;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_45 = ___samples0;
		int32_t L_46 = ___i1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_49 = ___samples0;
		int32_t L_50 = ___i1;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		float L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_53 = ___samples0;
		int32_t L_54 = ___i1;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)2));
		float L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_57 = ___samples0;
		int32_t L_58 = ___i1;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)3));
		float L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_61 = ___samples0;
		int32_t L_62 = ___i1;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)4));
		float L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		return ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_48, (float)L_52)), (float)L_56)), (float)L_60)), (float)L_64))/(float)(5.0f)));
	}

IL_007c:
	{
		int32_t L_65 = ___channels2;
		if ((!(((uint32_t)L_65) == ((uint32_t)6))))
		{
			goto IL_00a8;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_66 = ___samples0;
		int32_t L_67 = ___i1;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		float L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_70 = ___samples0;
		int32_t L_71 = ___i1;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
		float L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_74 = ___samples0;
		int32_t L_75 = ___i1;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)2));
		float L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_78 = ___samples0;
		int32_t L_79 = ___i1;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)3));
		float L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_82 = ___samples0;
		int32_t L_83 = ___i1;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)4));
		float L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_86 = ___samples0;
		int32_t L_87 = ___i1;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)5));
		float L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		return ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_69, (float)L_73)), (float)L_77)), (float)L_81)), (float)L_85)), (float)L_89))/(float)(6.0f)));
	}

IL_00a8:
	{
		V_0 = (0.0f);
		int32_t L_90 = ___i1;
		V_1 = L_90;
		goto IL_00c0;
	}

IL_00b2:
	{
		float L_91 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_92 = ___samples0;
		int32_t L_93 = V_1;
		int32_t L_94 = L_93;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		NullCheck(L_92);
		int32_t L_95 = L_94;
		float L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_0 = ((float)il2cpp_codegen_add((float)L_91, (float)L_96));
		int32_t L_97 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_00c0:
	{
		int32_t L_98 = V_1;
		int32_t L_99 = ___channels2;
		if ((((int32_t)L_98) < ((int32_t)L_99)))
		{
			goto IL_00b2;
		}
	}
	{
		float L_100 = V_0;
		int32_t L_101 = ___channels2;
		return ((float)((float)L_100/(float)((float)((float)L_101))));
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
// System.Void CSCore.DSP.HighpassFilter::.ctor(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighpassFilter__ctor_m93B470118F0BB7A5BC4D12B78F784DE7E370B595 (HighpassFilter_tAFAE607827511E6D47C42B13A2BCD502B4921D91 * __this, int32_t ___sampleRate0, double ___frequency1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___sampleRate0;
		double L_1 = ___frequency1;
		BiQuad__ctor_mD6C5BB854C73B7EE1FAF6F5BBE946641E9FCB739(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CSCore.DSP.HighpassFilter::CalculateBiQuadCoefficients()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighpassFilter_CalculateBiQuadCoefficients_m204726381FAF0F4B200BBF55CFBAF159AE3E7B58 (HighpassFilter_tAFAE607827511E6D47C42B13A2BCD502B4921D91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0;
		L_0 = BiQuad_get_Frequency_m92FB957C5B240B0E364F31EDC3255CA17AB91857_inline(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BiQuad_get_SampleRate_m8A4EA483DED35B8528FB3A00C76EE98B91CE59A2_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = tan(((double)((double)((double)il2cpp_codegen_multiply((double)(3.1415926535897931), (double)L_0))/(double)((double)((double)L_1)))));
		V_0 = L_2;
		double L_3 = V_0;
		double L_4;
		L_4 = BiQuad_get_Q_m5BD15B00677917E86100CAF9E2DE1457E44E46D5_inline(__this, /*hidden argument*/NULL);
		double L_5 = V_0;
		double L_6 = V_0;
		V_1 = ((double)((double)(1.0)/(double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)(1.0), (double)((double)((double)L_3/(double)L_4)))), (double)((double)il2cpp_codegen_multiply((double)L_5, (double)L_6))))));
		double L_7 = V_1;
		((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->set_A0_0(((double)il2cpp_codegen_multiply((double)(1.0), (double)L_7)));
		double L_8 = ((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->get_A0_0();
		((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->set_A1_1(((double)il2cpp_codegen_multiply((double)(-2.0), (double)L_8)));
		double L_9 = ((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->get_A0_0();
		((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->set_A2_2(L_9);
		double L_10 = V_0;
		double L_11 = V_0;
		double L_12 = V_1;
		((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->set_B1_3(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_10, (double)L_11)), (double)(1.0))))), (double)L_12)));
		double L_13 = V_0;
		double L_14;
		L_14 = BiQuad_get_Q_m5BD15B00677917E86100CAF9E2DE1457E44E46D5_inline(__this, /*hidden argument*/NULL);
		double L_15 = V_0;
		double L_16 = V_0;
		double L_17 = V_1;
		((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->set_B2_4(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_subtract((double)(1.0), (double)((double)((double)L_13/(double)L_14)))), (double)((double)il2cpp_codegen_multiply((double)L_15, (double)L_16)))), (double)L_17)));
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
// System.Void CSCore.DSP.LowpassFilter::.ctor(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowpassFilter__ctor_m151670778BD21919788A2378CA24684063E3686B (LowpassFilter_t9F1033AC0FF5DB19005C43DE0C2E10991A01D16B * __this, int32_t ___sampleRate0, double ___frequency1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___sampleRate0;
		double L_1 = ___frequency1;
		BiQuad__ctor_mD6C5BB854C73B7EE1FAF6F5BBE946641E9FCB739(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CSCore.DSP.LowpassFilter::CalculateBiQuadCoefficients()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowpassFilter_CalculateBiQuadCoefficients_m777660102C64055060758C5D4677CD47A28FB3FE (LowpassFilter_t9F1033AC0FF5DB19005C43DE0C2E10991A01D16B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0;
		L_0 = BiQuad_get_Frequency_m92FB957C5B240B0E364F31EDC3255CA17AB91857_inline(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = BiQuad_get_SampleRate_m8A4EA483DED35B8528FB3A00C76EE98B91CE59A2_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = tan(((double)((double)((double)il2cpp_codegen_multiply((double)(3.1415926535897931), (double)L_0))/(double)((double)((double)L_1)))));
		V_0 = L_2;
		double L_3 = V_0;
		double L_4;
		L_4 = BiQuad_get_Q_m5BD15B00677917E86100CAF9E2DE1457E44E46D5_inline(__this, /*hidden argument*/NULL);
		double L_5 = V_0;
		double L_6 = V_0;
		V_1 = ((double)((double)(1.0)/(double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)(1.0), (double)((double)((double)L_3/(double)L_4)))), (double)((double)il2cpp_codegen_multiply((double)L_5, (double)L_6))))));
		double L_7 = V_0;
		double L_8 = V_0;
		double L_9 = V_1;
		((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->set_A0_0(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_7, (double)L_8)), (double)L_9)));
		double L_10 = ((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->get_A0_0();
		((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->set_A1_1(((double)il2cpp_codegen_multiply((double)(2.0), (double)L_10)));
		double L_11 = ((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->get_A0_0();
		((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->set_A2_2(L_11);
		double L_12 = V_0;
		double L_13 = V_0;
		double L_14 = V_1;
		((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->set_B1_3(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_12, (double)L_13)), (double)(1.0))))), (double)L_14)));
		double L_15 = V_0;
		double L_16;
		L_16 = BiQuad_get_Q_m5BD15B00677917E86100CAF9E2DE1457E44E46D5_inline(__this, /*hidden argument*/NULL);
		double L_17 = V_0;
		double L_18 = V_0;
		double L_19 = V_1;
		((BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 *)__this)->set_B2_4(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_subtract((double)(1.0), (double)((double)((double)L_15/(double)L_16)))), (double)((double)il2cpp_codegen_multiply((double)L_17, (double)L_18)))), (double)L_19)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BiQuad_get_SampleRate_m8A4EA483DED35B8528FB3A00C76EE98B91CE59A2_inline (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSampleRateU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BiQuad_set_SampleRate_m025D243CD773FB9D7FFBC922ED3E0DC70F81324A_inline (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSampleRateU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double BiQuad_get_Frequency_m92FB957C5B240B0E364F31EDC3255CA17AB91857_inline (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get__frequency_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double BiQuad_get_Q_m5BD15B00677917E86100CAF9E2DE1457E44E46D5_inline (BiQuad_t19D623C4C67A08C5AD47CFFCDD7743AE6B5A1326 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get__q_5();
		return L_0;
	}
}
