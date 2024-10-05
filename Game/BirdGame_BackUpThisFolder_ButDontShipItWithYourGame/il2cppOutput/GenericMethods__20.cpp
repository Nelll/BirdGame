﻿#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass3_0_1_t978BDB5D5952406BBFB6E332150D230FCE274300;
struct U3CU3Ec__DisplayClass3_0_1_tEB269220B30C0F124F2835FF966E584A79B541F3;
struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t66B514BE877E216616DEDD40416127189FE16FA3;
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
struct Data_tF347912D70FC8EB58C500579EA5117877D21BACB;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07;
struct EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0;
struct EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B;
struct Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IPropertyBag_1_tF38E0DD26816C30F7A291A4C229273286EF81690;
struct IPropertyBag_1_t34647E6DBA2B3FBAF772A30AB58389B957EB2353;
struct IPropertyBag_1_t4503949B37B2AF7B859307C5B9FC0D205FBBB58C;
struct IPropertyBag_1_t0C3656FAD043E643AE0AF2CE556A8B0EFC08BAF0;
struct IReadOnlyDictionary_2_t38BAE2A79A8C85F8795E24CF5DB231156D5A3B66;
struct IReadOnlyDictionary_2_tAAE73DD0F1693587789EB2283CCA3AEA0DFB6839;
struct List_1_t592DF2E59D6E244DA0041698383484A07C7E0480;
struct List_1_t888EAF80C1646E9D51193F9F6E183344845FB66C;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_t3D72E539CB95E6031583970D3E5187DDB5EC674C;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6;
struct ObjectPool_1_tC06B45D8A0C7CBBDAE418090727D1DF1F2FCB9F6;
struct PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ButtonClickStatusU5BU5D_t9327A993382F70450196067EE5DED53834E9DB7B;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4;
struct ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31;
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
struct ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61;
struct ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2;
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E;
struct EventCallbackListPool_t258FFD0B864AC29862A6ACF4F56A0340621783B2;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct MethodInfo_t;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
struct RenderGraphPass_tEFB5BD685D417024760D82991EEEA4F4D0454A93;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Type_t;
struct UIRenderer_t92C2C36451BAD524541C4C548B02D0EAC798644E;
struct UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CommandBuilder_tA2E5D7A513FE45173EA395D67B25DB94E42CCA84;
struct ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470;
struct Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84;
struct Data_t43E3238277579E631EA4E8016E61966D79F5B62E;
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_t2637736704939772A86A2904BCFD1B314097DD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_t4941B5AE834AA028696C83756491CE8884F30DDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_t7D3D212E8AD9C53105AAC51DBD4FA5F700586F68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_tB8AF17419B0E6B39E32F8925FCA535F5CF5C79D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral093872F2B91CF97AF817E102A9B984C29552DADB;
IL2CPP_EXTERN_C String_t* _stringLiteral37DECF682BF526A92CA9F53667C7BE15425846D5;
IL2CPP_EXTERN_C String_t* _stringLiteral3E612D5C4A642D3635F6EB9985DD8EF20BEEFC73;
IL2CPP_EXTERN_C String_t* _stringLiteral4D35A76C2DA044B8EB3644BD233D767857B51142;
IL2CPP_EXTERN_C String_t* _stringLiteral5311420545596C9B1638507268F520A401FE62C8;
IL2CPP_EXTERN_C String_t* _stringLiteral5AEC4F0CCAC6A14C3FA879080C5907BEF6980462;
IL2CPP_EXTERN_C String_t* _stringLiteral67C4031EAE3C5DCD4BEFE0E373EB416000EDAAAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F;
IL2CPP_EXTERN_C String_t* _stringLiteral8C80868ED807D30CD87E7BACE1DFC57B2C47C706;
IL2CPP_EXTERN_C String_t* _stringLiteral9AEB6C175037170017B161A77CCF8F6B0E629351;
IL2CPP_EXTERN_C String_t* _stringLiteral9E8B6F20D65FFFC0BC56A6D76C920145A8DCD2F3;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDDFD5BA0EE5BD56B383E144892054DCB0A59D3ED;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralECC4BC659FB1526108BFFD6AD5E7F03E47806740;
IL2CPP_EXTERN_C String_t* _stringLiteralF07572772E1056825827902AE7297CE3835AD3C6;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisUnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833_m26DF826A20F7C37269D72198549354AC5E8A3C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_TypeId_m08396DED606ACD1093BEEA8D939E5DA37B797C12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_TypeId_m1A2720F11AB0D624809678ADE4E6D8C250E43741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_TypeId_m3FC722D85FBD1538CE6B96AD3364192799BF1CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass3_0_1_t978BDB5D5952406BBFB6E332150D230FCE274300  : public RuntimeObject
{
	Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___serializeElement;
};
struct U3CU3Ec__DisplayClass3_0_1_tEB269220B30C0F124F2835FF966E584A79B541F3  : public RuntimeObject
{
	Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* ___serializeElement;
};
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B  : public RuntimeObject
{
	EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF  : public RuntimeObject
{
	TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6  : public RuntimeObject
{
	ButtonClickStatusU5BU5D_t9327A993382F70450196067EE5DED53834E9DB7B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06  : public RuntimeObject
{
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___m_WrappedCommandBuffer;
	RenderGraphPass_tEFB5BD685D417024760D82991EEEA4F4D0454A93* ___m_ExecutingPass;
};
struct Buffer_tF5DDA52AA39735125D710A126AC80BADEB900CD4  : public RuntimeObject
{
};
struct BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8  : public RuntimeObject
{
};
struct BurstRuntime_tA87CEB6EE77F6DA708C87C3DAEC7862E3A1B0EA1  : public RuntimeObject
{
};
struct BurstRuntime_t934D9A0D258BC96E94A4B78AD085FA38BFEFFF82  : public RuntimeObject
{
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31  : public RuntimeObject
{
	List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6* ___m_ClickStatus;
};
struct CollectionExtensions_t182A00BC503C9791010A3F71F412C76ABDD4D10D  : public RuntimeObject
{
};
struct CollectionExtensions_t9F552E0DA1B3C5AA3C6EF09DA633314D7A535D90  : public RuntimeObject
{
};
struct CollectionHelper_tFFE15A31BD8AE2BE545F4A412EC3C11352298482  : public RuntimeObject
{
};
struct ComputedTransitionUtils_tC9191F301DCE1CB02C3FFC174E651E14204F1C7A  : public RuntimeObject
{
};
struct ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct ArraySlice_1_t173FD3ACCC2631A439B59982D6322FFDC51B753B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct HashCode32_1_tD2DD63035F543FDD8643588FA88CD9475D8107B9 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode32_1_t28012FF1305411D37F1FD03DE7D6E29673C84EB4__padding[1];
	};
};
struct HashCode64_1_tBE03AFEF199A91EC38E3678A953160AFBAEA044F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t772DFCA20062D55EF275D420692E6231EFE8C99A 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tDBBA29E0FF58D0BD292B04DADFEFA25FAF30082F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tEFE47363FE9BD2DA23EF9C44B91C8401015063BE 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t0AE3CC08D24A1BE759562DBCEEA6B459AC8507E3 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t4200429421A827A0B5F3036C1DB9D66CCB8B0445 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t19BA4FD53EFCDB3494D3E641F479A304B0A42D21 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tB6E735C2CEB2283242D5171F9F071C4076FEB378 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t088700758E948CB3167EC6E10FD03B1B11125586 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tE17B8F4EB1955CE37A78FDA1D0940AD6B79DE88B 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t7D07C74DD41061E9ED06C78A82A6E8160CB46E07 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t45C902BA4A85819B6C31A686FF699BD734C810A3 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_tE592078EFC6F2A37620503BFAB99FEF70B71584A 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t843A0CF337E84638F3DEB38ADAFB4FC2204CA22F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t6609EC1C8FD637D0704C9D40931A83EE7EBCA23D 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_tD3243DF9FA8B7B703E45F521152F4E500EAA808E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t6494BEDFB3823C50BCCE1457CC83EBABF9FC3718 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t1E9825203BCACDE03EA9806FA3B6D9667833FDB7 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t7F36E26E9C60DAE7E6BF03E72A6B9BEB0E70508E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t728259C125E4C28AE80A80B41491CF221EF1B9B7 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_tDA241AE7DD0993FBFA911AC316BB51A154854AC7 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t09ABD1A71EC5CE3684E6F1DA80681B54DB1691B5 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_tA3E7348CF613CEAF3CEA3485D9D30F9A483610A1 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tAF0A4B39260FE7FD741C97BD8D2F43012A7D5133 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t917F3D3D5EA46CC128521D07ECFC4201E6D1B7DB 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tE91648EAFFF631BF00C9786421718E02AE8FD147 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t921B60FC387B846EB96F5AE75BB67B04AB1B8563 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tAACED5C219BCE704BB23DEE5411688A66F4FA312 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t6486E3C865F1211D498A95362EA771CDFE256DED 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t33425DAD62BA77C00555B8218BCC45319A29B991 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t9A899B4771FBF788C65EC3AAED858797329647AA 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t6D9D3CEC802B9E24CA6ABA6FA982B615B2DC8196 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t5AB59BEFEDF62F7AA82DF462D661D14F572822AB 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t51A883EA9A52EBE95F05710B50C0A662C53D201D 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t73EDE881A4A610E09E76E2E3589D30974001309C 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tB033103B595D25458BCF189B1B8FEEDC765C6DD9 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t4EEE3EED6A1F40DD523EC9B520CEDF73603F903F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t540AB6784E401BA021A24A6FDE63F1CB91615951 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t525093B60DF9E3EDBEC57C2CAB5538644D25195E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tAFCB1B0285DF0A149D68DB8C099B4AB4E024F6C5 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t1DFA17BA969BAF3B0ABCD287BF2B61E3511BB692 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tBB94DF557F1073A1974A322A1A44C7126DA37529 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t940007CBF08B5ABD14D7423675D4910FE0B9755B 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t3A727467BDFEAFF7A4CB568E28A00E4D6B4EC69B 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tF27C6D205FED69279D60297E9A62238FADF949C1 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tAC13F0ACD4FE21581D24A405FB04DC6CE62107F2 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t1E6FA524337B539C19D5D02E0DB5A26462E0B389 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t508FCCF440E6434CFFFA2F3631E598CD0C05F692 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t14F72F5369A95C1B27EEE643C7C18A4423CA3990 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tB40823AD36588BE324C2BA3C355DFADA13F520E5 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t2F229ECC88B28D532EE6550312AB5B1B2294B745 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t3E1E1267782365D9D1C6E9EAD96BBC6C9E2B8BF2 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t9940D5A3249D07F1B8EECA042ACC48DF71081D98 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tB565080AF7C252BCE5DD51586A5FEBEE18996C0E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t2B83362CA7E70B86BD1A86B8D27E4F1672407417 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tCA0BC36BEF1B0537653D2C164EBFB71E2E7FE57F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tC86B716B0629811F38CCA2922A9A6E9128F7B487 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tEEB1F167CB1FF50533D39ECB4E2F4DB8F48095BB 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t0E540E776B4BA9631D2B21027E3D44679BBFDE7E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t9F79C5D3EEDC24E31844F18936B7A7152BDF014E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t0B497DADDE4C8A74260C67223CA08BE885726512 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t2089B57811D9851DA3FA2E1B60AC2EC6EB561956 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t6D41DDF544ECC8EE81B2FB170732F8772126D088 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t4649F2A499D1914EAA249B234F1CB3520A35611B 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t21902CE3BB8566DD3CF37D5FBF26DDE580F687FD 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t7CFB081FDD903CC5A200D3CD6E79CA92462EC9A5 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t744F317F9CFBC3EE2DF71AE33FE2D5C9DF6D2336 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t67754EDF06D14076F91B36A2D64F460B2A6406DE 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t285034DF371CEE21CB88B0078A8E5924F2300E0C 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t27DC634456476CF1B4E26CE9E1613932D5D5E1F2 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tE4E9A886FAEA128F91F4BB47288E327F2FB2A590 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t35854EE2A1679DA8AD9F4B6EBE37867348F4D8DD 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t48F9CB60083B059F824DFDCDA2D5C3954AC131F4 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tC585CEA3A7F1AB7F02BFD57720D6DEBBA4E4006E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t38B65A784388197E4D694073DDD68712A68ECFBC 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t162E0FE2417CF2171436BC6E9A0524E8CD7A331D 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t61B99859778637445427E508875C833C26007C3F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t12646CDC1DEFCCFAE4EC21C2691E3AD07CC3243D 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t7397C98D3A61DF788247816CFDDCFAB68F11FF31 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tF4465274EC7B7ABA123154CB3244A352EDE2086F 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tABB39B622E5219D2DA172EACDEC8B74052BB164A 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tF6AB644D2ABBE925B3A3543F20FD5FB992312461 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tA894B4C4BE3681992148A70D1492F8EEA6825E4E 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t258221577FA59C0B1D9B188C325409BB62050DAB 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tC28C1D947A4D0E70163666E4692F1B1CDCEC09A9 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t844B153ACA1ED334277B6FB6C7454250AF529FB4 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tE62B31A9B7BD017DBE50F2BC947FCDED9605A714 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t49CA23EDF4DB68FCFD7564115E65F4D23452160A 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tC9D36B8B37721F4D2809B01166AAF2928F55B3EC 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t1C4700728BA9E409FB64757DAADF1A0CC5A44DE7 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_tA49B79C998BF9022A0836C168EC2089C5ABCBE43 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t086C964E863E63719ECA6ABCD86CF5F944BC12E8__padding[1];
	};
};
struct HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 
{
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___m_ListData;
};
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref;
};
struct AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 
{
	void* ___nativeArrayBuffer;
	int64_t ___lengthInBytes;
};
struct AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 
{
	int32_t ___a0;
	int32_t ___a1;
	int32_t ___a2;
	int32_t ___a3;
	int32_t ___a4;
	int32_t ___a5;
	int32_t ___a6;
	int32_t ___a7;
	int32_t ___activeAttachments;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C 
{
	uint32_t ___value;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 
{
	int32_t ___Size;
};
struct ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61  : public BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06
{
};
struct DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49 
{
	int32_t ___start;
	int32_t ___end;
};
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled;
	int8_t ___m_CompareFunction;
};
struct DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 
{
	int32_t ___firstIndex;
	int32_t ___indexCount;
	int32_t ___minIndexVal;
	int32_t ___vertsReferenced;
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
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
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
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
	bool ___U3CisEligibleToReceiveFocusFromDisabledChildU3Ek__BackingField;
};
struct FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD 
{
	double ___cpuFrameTime;
	double ___cpuMainThreadFrameTime;
	double ___cpuMainThreadPresentWaitTime;
	double ___cpuRenderThreadFrameTime;
	double ___gpuFrameTime;
	uint64_t ___frameStartTimestamp;
	uint64_t ___firstSubmitTimestamp;
	uint64_t ___cpuTimePresentCalled;
	uint64_t ___cpuTimeFrameComplete;
	float ___heightScale;
	float ___widthScale;
	uint32_t ___syncInterval;
};
struct GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38 
{
	uint32_t ___data;
};
struct GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868 
{
	uint32_t ___data;
};
struct GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB 
{
	uint64_t ___sceneCullingMask;
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width;
	float ___m_Height;
	float ___m_HorizontalBearingX;
	float ___m_HorizontalBearingY;
	float ___m_HorizontalAdvance;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 
{
	float ___alpha;
	float ___time;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 
{
	int32_t ___m_Id;
	int32_t ___m_Version;
};
struct InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D 
{
	int16_t ___start;
	int16_t ___end;
};
struct IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02 
{
	int32_t ___drawAllocIndex;
	int32_t ___drawCount;
	int32_t ___instanceAllocIndex;
	int32_t ___instanceCount;
};
struct IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB 
{
	uint32_t ___indexCount;
	uint32_t ___firstIndex;
	uint32_t ___baseVertex;
	uint32_t ___firstInstanceGlobalIndex;
	uint32_t ___maxInstanceCount;
};
struct IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB 
{
	int32_t ___drawOffsetAndSplitMask;
	int32_t ___instanceIndexAndCrossFade;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431 
{
	uint32_t ____DrawInfoAllocIndex;
	uint32_t ____DrawInfoCount;
	uint32_t ____InstanceInfoAllocIndex;
	uint32_t ____InstanceInfoCount;
	int32_t ____BoundingSphereInstanceDataAddress;
	int32_t ____DebugCounterIndex;
	int32_t ____InstanceMultiplierShift;
	int32_t ____InstanceOcclusionCullerPad0;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LayoutConfigData_t6B1D36F00422E7EB7C51CF9103FC9D522B5481F4 
{
	float ___PointScaleFactor;
	bool ___ShouldLog;
};
struct LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937 
{
	int32_t ___NameID;
	uint32_t ___Value;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354 
{
	String_t* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_pinvoke
{
	char* ___name;
	int32_t ___utf8ByteCount;
};
struct Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___utf8ByteCount;
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	int32_t ___start;
	int32_t ___length;
};
struct ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F 
{
	void* ___Buffer;
	int64_t ___Offset;
	int64_t ___Size;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 
{
	int32_t ___m_LowerBound;
	int32_t ___m_UpperBound;
};
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	uint8_t ___m_WriteMask;
	uint8_t ___m_SourceColorBlendMode;
	uint8_t ___m_DestinationColorBlendMode;
	uint8_t ___m_SourceAlphaBlendMode;
	uint8_t ___m_DestinationAlphaBlendMode;
	uint8_t ___m_ColorBlendOperation;
	uint8_t ___m_AlphaBlendOperation;
	uint8_t ___m_Padding;
};
struct ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC 
{
	int32_t ___passId;
	int32_t ___inputSlot;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC 
{
	bool ___isImported;
	bool ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	bool ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___latestVersionNumber;
	bool ___clear;
	bool ___discard;
	bool ___bindMS;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_marshaled_pinvoke
{
	int32_t ___isImported;
	int32_t ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	int32_t ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___latestVersionNumber;
	int32_t ___clear;
	int32_t ___discard;
	int32_t ___bindMS;
};
struct ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_marshaled_com
{
	int32_t ___isImported;
	int32_t ___isShared;
	int32_t ___tag;
	int32_t ___lastUsePassID;
	int32_t ___lastWritePassID;
	int32_t ___firstUsePassID;
	int32_t ___memoryLess;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___msaaSamples;
	int32_t ___latestVersionNumber;
	int32_t ___clear;
	int32_t ___discard;
	int32_t ___bindMS;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC 
{
	bool ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_marshaled_pinvoke
{
	int32_t ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_marshaled_com
{
	int32_t ___written;
	int32_t ___writePassId;
	int32_t ___numReaders;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3 
{
	int32_t ___v0;
	int32_t ___v1;
};
struct SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 
{
	int16_t ___m_LowerBound;
	int16_t ___m_UpperBound;
};
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	float ___shr0;
	float ___shr1;
	float ___shr2;
	float ___shr3;
	float ___shr4;
	float ___shr5;
	float ___shr6;
	float ___shr7;
	float ___shr8;
	float ___shg0;
	float ___shg1;
	float ___shg2;
	float ___shg3;
	float ___shg4;
	float ___shg5;
	float ___shg6;
	float ___shg7;
	float ___shg8;
	float ___shb0;
	float ___shb1;
	float ___shb2;
	float ___shb3;
	float ___shb4;
	float ___shb5;
	float ___shb6;
	float ___shb7;
	float ___shb8;
};
struct SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70 
{
	float ___height;
	uint32_t ___spriteIndex;
	int32_t ___cornerMode;
};
struct SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377 
{
	int32_t ___geomIndex;
	int32_t ___indexCount;
	int32_t ___vertexCount;
	int32_t ___spriteIndex;
};
struct SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501 
{
	float ___height;
	float ___bevelCutoff;
	float ___bevelSize;
	uint32_t ___spriteIndex;
	bool ___corner;
};
struct SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_marshaled_pinvoke
{
	float ___height;
	float ___bevelCutoff;
	float ___bevelSize;
	uint32_t ___spriteIndex;
	int32_t ___corner;
};
struct SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_marshaled_com
{
	float ___height;
	float ___bevelCutoff;
	float ___bevelSize;
	uint32_t ___spriteIndex;
	int32_t ___corner;
};
struct SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5 
{
	int32_t ___m_GeomIndex;
	int32_t ___m_IndexCount;
	int32_t ___m_VertexCount;
	int32_t ___m_SpriteIndex;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled;
	uint8_t ___m_ReadMask;
	uint8_t ___m_WriteMask;
	uint8_t ___m_Padding;
	uint8_t ___m_CompareFunctionFront;
	uint8_t ___m_PassOperationFront;
	uint8_t ___m_FailOperationFront;
	uint8_t ___m_ZFailOperationFront;
	uint8_t ___m_CompareFunctionBack;
	uint8_t ___m_PassOperationBack;
	uint8_t ___m_FailOperationBack;
	uint8_t ___m_ZFailOperationBack;
};
struct SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026 
{
	int32_t ___cullingSplitIndex;
	int32_t ___occluderSubviewIndex;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA 
{
	double ___x;
	double ___y;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	float ___x;
	float ___y;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A 
{
	int32_t ___x;
	int32_t ___y;
};
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct int4_tBA77D4945786DE82C3A487B33955EA1004996052 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
	int32_t ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D__padding[64];
	};
};
struct SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A 
{
	int32_t ___packetCount;
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA 
{
	union
	{
		struct
		{
			bool ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_pinvoke
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_com
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA__padding[8];
	};
};
struct U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415__padding[32];
	};
};
struct U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C__padding[32];
	};
};
struct U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE__padding[32];
	};
};
struct U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86__padding[32];
	};
};
struct U3CBorderU3Ee__FixedBuffer_t5A18296AB7D0BFC3131BDDE01656A53889147B34 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CBorderU3Ee__FixedBuffer_t5A18296AB7D0BFC3131BDDE01656A53889147B34__padding[24];
	};
};
struct U3CDimensionsU3Ee__FixedBuffer_tD2708ED4F2A6D227404834E91D6359AB4B954457 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CDimensionsU3Ee__FixedBuffer_tD2708ED4F2A6D227404834E91D6359AB4B954457__padding[8];
	};
};
struct U3CMarginU3Ee__FixedBuffer_tF5EF7606FDD9ACD4DDF18DC564195092A6A540FE 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CMarginU3Ee__FixedBuffer_tF5EF7606FDD9ACD4DDF18DC564195092A6A540FE__padding[24];
	};
};
struct U3CMeasuredDimensionsU3Ee__FixedBuffer_t3BF016D1583A3A9EABAD62B35368C369C06DCD87 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CMeasuredDimensionsU3Ee__FixedBuffer_t3BF016D1583A3A9EABAD62B35368C369C06DCD87__padding[8];
	};
};
struct U3CPaddingU3Ee__FixedBuffer_tE057FF067DA31EB3EC92DD01973C24BDC7E9E9F3 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CPaddingU3Ee__FixedBuffer_tE057FF067DA31EB3EC92DD01973C24BDC7E9E9F3__padding[24];
	};
};
struct U3CPositionU3Ee__FixedBuffer_t6F7472507E4B67C5CA936393DFFBA95309592810 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CPositionU3Ee__FixedBuffer_t6F7472507E4B67C5CA936393DFFBA95309592810__padding[16];
	};
};
struct U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476__padding[384];
	};
};
struct U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997__padding[80];
	};
};
struct U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553__padding[96];
	};
};
struct U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E__padding[96];
	};
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D 
{
	bool ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_pinvoke
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_com
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6__padding[96];
	};
};
struct U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF__padding[128];
	};
};
struct U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9__padding[96];
	};
};
struct U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69__padding[96];
	};
};
struct U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F__padding[384];
	};
};
struct U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55__padding[128];
	};
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	bool ___imported;
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_marshaled_pinvoke
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	int32_t ___imported;
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_marshaled_com
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	int32_t ___imported;
};
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62__padding[160];
	};
};
struct RemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4 
{
	int32_t ___count;
	int32_t ___index;
	int32_t ___v0Offset;
	int32_t ___v1Offset;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 
{
	bool ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_marshaled_pinvoke
{
	int32_t ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_marshaled_com
{
	int32_t ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 
{
	int32_t ___transformIndex;
	int32_t ___refCount;
};
struct Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E 
{
	int32_t ___value;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct CastHelper_1_t840A2A992306C55D7D7AFD778AF5A3177B562FBD 
{
	RuntimeObject* ___t;
	intptr_t ___onePointerFurtherThanT;
};
typedef Il2CppFullySharedGenericStruct CastHelper_1_t00C06D46BE3AF87B68448415B3631660EE48DCD4;
struct FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 
{
	intptr_t ____ptr;
};
struct NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tBB6961066733E78B8C22E5C4D4D5FF9A581981D1 
{
	Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct AccessFlags_tB7D400C853C05A1DB9C6B56DF14E43721F0B1739 
{
	int32_t ___value__;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
};
struct BatchCullingProjectionType_tAD14BC373E72D5F74188E0899F8670FAB51FD481 
{
	int32_t ___value__;
};
struct BatchCullingViewType_tAC2682BF9A489DF44A8960693303B47248C252CF 
{
	int32_t ___value__;
};
struct BatchDrawCommandFlags_tC502FA322382A3181F0800B1EA5A5654027FE034 
{
	int32_t ___value__;
};
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7;
	uint8_t ___m_SeparateMRTBlendStates;
	uint8_t ___m_AlphaToMask;
	int16_t ___m_Padding;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E 
{
	int32_t ___value__;
};
struct CallingConvention_tCACC30B83FAF3EA430B143C8D8F9A9B7D41A05C6 
{
	int32_t ___value__;
};
struct ClipMethod_tDE393081E6CA2C9C1A8C3D731613580585767391 
{
	int32_t ___value__;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 
{
	bool ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorSpace_tD0808E0BE85FD3B9774234676F83A872F4EDA3C7 
{
	int32_t ___value__;
};
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct CommandBufferExecutionFlags_t7BFA25B0350A84E1C0B34B2C577B22FF921410FC 
{
	int32_t ___value__;
};
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
{
	int32_t ___value__;
};
struct CullMode_t049B71889E4E981866E205A3F71DC8B856306D50 
{
	int32_t ___value__;
};
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	intptr_t ___ptr;
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct DistanceMetric_t071B9815BB961E33F7CA2C553CA725F61AE09EDE 
{
	int32_t ___value__;
};
struct DrawRendererFlags_t3AD0574208BFF93F323D5E1E92012F19EAE972CD 
{
	int32_t ___value__;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct EventCategory_tCFC347F164A2525B4C39DA6A9B7A9B5A541E3FFA 
{
	int32_t ___value__;
};
struct EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC 
{
	int32_t ___value__;
};
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
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F 
{
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___m_RenderQueueRange;
	int32_t ___m_LayerMask;
	uint32_t ___m_RenderingLayerMask;
	uint32_t ___m_BatchLayerMask;
	int32_t ___m_ExcludeMotionVectorObjects;
	int32_t ___m_ForceAllMotionVectorObjects;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___m_SortingLayerRange;
};
#pragma pack(push, tp, 1)
struct FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 
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
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779__padding[32];
	};
};
#pragma pack(pop, tp)
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C 
{
	uint32_t ___offsetFromWriteStart;
	uint32_t ___size;
	uintptr_t ___source;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct GlyphClassDefinitionType_t9C21A3848A07B17C2690F285B5FA60A2E246FBA2 
{
	int32_t ___value__;
};
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___time;
};
struct GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct GraphicsFenceType_t8C3F229DC2BE62FA78724BA3D35FFCB3A64F7E0A 
{
	int32_t ___value__;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct InstanceComponentGroup_tD2604C50227A821E92592963B831E9D9449D3FA4 
{
	uint32_t ___value__;
};
struct InstanceOcclusionEventType_tF66ED25A6A1D3943D326795EA91E803D666ECF79 
{
	int32_t ___value__;
};
struct InstanceType_t3EB15046939F17DF216B4C181F98D064A5F78F27 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct InvokePolicy_t35E3E36A3D113CBFFEB13243E17691CBBDF1ED9B 
{
	int32_t ___value__;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA ___percentageFlags;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_marshaled_pinvoke
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_pinvoke ___percentageFlags;
};
struct LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_marshaled_com
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldSpaceReferencePoint;
	int32_t ___lodCount;
	U3CsqrDistancesU3Ee__FixedBuffer_tBE2A04F33CF7215086CA2D1F1C539B2B37A14415 ___sqrDistances;
	U3CtransitionDistancesU3Ee__FixedBuffer_t497E5273319068BE697947EDF74CE3852589CB3C ___transitionDistances;
	float ___worldSpaceSize;
	U3CpercentageFlagsU3Ee__FixedBuffer_tCD60783832775FA82D449E02C0ECBF74970949DA_marshaled_com ___percentageFlags;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241 
{
	bool ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_marshaled_pinvoke
{
	int32_t ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_marshaled_com
{
	int32_t ___valid;
	int32_t ___lodCount;
	int32_t ___rendererCount;
	U3CscreenRelativeTransitionHeightsU3Ee__FixedBuffer_t3C930A601B8249105638E6F0B9F03AE94B6E7D86 ___screenRelativeTransitionHeights;
	U3CfadeTransitionWidthU3Ee__FixedBuffer_tC7AABC6C0E6DA2AE976823F5FF282478010122FE ___fadeTransitionWidth;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct LayoutAlign_t0346F8DE31382DC434069A4196A07E59BABA1D8A 
{
	int32_t ___value__;
};
struct LayoutDirection_t497B5D8A2EDA4BB4E634A27164FFE3DE67250D32 
{
	int32_t ___value__;
};
struct LayoutDisplay_tA24DA9245066E6634F7D82DA1E6D12B3ACD08C50 
{
	int32_t ___value__;
};
struct LayoutFlexDirection_t3246E4A8D1C552BBFEB1AD5D677C4B1D95710756 
{
	int32_t ___value__;
};
struct LayoutJustify_tD94495C723C57C38901108035F0468A378DDAB07 
{
	int32_t ___value__;
};
struct LayoutMeasureMode_tF611505DD74982A0B40646994C952A094E98FB30 
{
	int32_t ___value__;
};
struct LayoutOverflow_t5D718990A0CA5CE235100545149F829DDAA54DDC 
{
	int32_t ___value__;
};
struct LayoutPositionType_tCC1B9C72281C6DE838F4E70A08EE777A87C2A0EE 
{
	int32_t ___value__;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct LayoutWrap_t1886074E218FE26A3050950BA062ADFC9DF75CCA 
{
	int32_t ___value__;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t2D4D43054E7473EECEB54493C0055AE074780234 
{
	int32_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct LoadReason_t6890871E119ACAB707211201A00DE631CA266CF9 
{
	int32_t ___value__;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct MotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 
{
	intptr_t ___headSrc;
	intptr_t ___headDst;
	int32_t ___headCount;
	intptr_t ___tailSrc;
	intptr_t ___tailDst;
	int32_t ___tailCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627 
{
	U3C_InvViewProjMatrixU3Ee__FixedBuffer_t84BA561C0A390D42FB00B35F6BE1C962C6F74476 ____InvViewProjMatrix;
	U3C_SilhouettePlanesU3Ee__FixedBuffer_t138533E2CBC2A8352DC298BD5645D4B1DC7B0553 ____SilhouettePlanes;
	U3C_SrcOffsetU3Ee__FixedBuffer_tB1B1C9C345AE115D9BA814505D76E71BC515BB1E ____SrcOffset;
	U3C_MipOffsetAndSizeU3Ee__FixedBuffer_t19F7DC806EA002CD5FAB22FF5C56BA6996373997 ____MipOffsetAndSize;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OccluderDepthPyramidPad0;
	uint32_t ____OccluderDepthPyramidPad1;
	uint32_t ____SrcSliceIndices;
	uint32_t ____DstSubviewIndices;
	uint32_t ____MipCount;
	uint32_t ____SilhouettePlaneCount;
};
struct OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewProjMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___viewOriginWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___radialDirWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___facingDirWorldSpace;
};
struct OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___offset;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size;
};
struct OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7 
{
	int32_t ___subviewIndex;
	int32_t ___depthSliceIndex;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthOffset;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___invViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___gpuProjMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___viewOffsetWorldSpace;
};
struct OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74 
{
	U3C_OccluderMipBoundsU3Ee__FixedBuffer_t369A0CC0F2EADA636FAF26E88452A11643E481EF ____OccluderMipBounds;
	U3C_ViewProjMatrixU3Ee__FixedBuffer_t0AA43098E17D71DCD19AFE4EA8D150954292017F ____ViewProjMatrix;
	U3C_ViewOriginWorldSpaceU3Ee__FixedBuffer_tAA15F0CD1A812C5CB25868532F7F022903331B69 ____ViewOriginWorldSpace;
	U3C_FacingDirWorldSpaceU3Ee__FixedBuffer_t2195F26FDAB952B9A94C6FC1F36CD4A370DE00F6 ____FacingDirWorldSpace;
	U3C_RadialDirWorldSpaceU3Ee__FixedBuffer_t4F19C8EE6486E94F0A21112400CC138E955DCFF9 ____RadialDirWorldSpace;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DepthSizeInOccluderPixels;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____OccluderDepthPyramidSize;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OcclusionTestDebugFlags;
	uint32_t ____OcclusionCullingCommonPad0;
	int32_t ____OcclusionTestCount;
	int32_t ____OccluderSubviewIndices;
	int32_t ____CullingSplitIndices;
	int32_t ____CullingSplitMask;
};
struct OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____DepthSizeInOccluderPixels;
	U3C_OccluderMipBoundsU3Ee__FixedBuffer_tF1478CF3899AC0E5325B5284FBE53B0FF2454A55 ____OccluderMipBounds;
	uint32_t ____OccluderMipLayoutSizeX;
	uint32_t ____OccluderMipLayoutSizeY;
	uint32_t ____OcclusionCullingDebugPad0;
	uint32_t ____OcclusionCullingDebugPad1;
};
struct OcclusionTest_tFF967683F812A2788B5C8A9A220B83B43060435E 
{
	int32_t ___value__;
};
struct OwnedState_t0957CA36E21DE8A443B616EBE83B25CCCA70B5A4 
{
	uint8_t ___value__;
};
struct PassBreakReason_t57DD36F9EC4ED3DA89A4740BE8C32987018CF808 
{
	int32_t ___value__;
};
struct PassMergeState_t7815130D2990D177421E7CB405CE173EC704A117 
{
	int32_t ___value__;
};
struct PenStatus_tCAD6543115EF443E17410B52D37EC67BCC88ABB8 
{
	int32_t ___value__;
};
struct PerObjectData_t04DDCBE9ABF1113E8F9BAFCF4A7F94DD841B9CC9 
{
	int32_t ___value__;
};
struct PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 
{
	int32_t ___deformVerticesStartPos;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___bindPosesIndex;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___verticesIndex;
};
struct PickingMode_t5699BF9E5F2587E0D297984D5BF5B63B768E66AC 
{
	int32_t ___value__;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
};
struct PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropagationPhase_tF3BE8BF5ED45FC52A828B7B6F078B64F01FAE6D6 
{
	int32_t ___value__;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	uint32_t ___m_FaceID;
	float ___m_Distance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV;
	int32_t ___m_Collider;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	int32_t ___value__;
};
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
{
	int32_t ___value__;
};
struct RenderDataDirtyTypes_tEF0AE4EB7DF790A711AA45103050432B8FEDB907 
{
	int32_t ___value__;
};
struct RenderDataFlags_t5FE970B94CB31B4691C29B856A2A5848BDEACB66 
{
	int32_t ___value__;
};
struct RenderGraphPassType_tD00EC2DAA135C660EE7E71652291A4672104EA2D 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_t5F552AF06E38DEC5775B77F13C8783A895FCD086 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RenderStateMask_tC9C95BF62EADEE4D622D4E16CDE1DF94E2A9EF57 
{
	int32_t ___value__;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 
{
	uintptr_t ___context;
	uint32_t ___index;
	uint32_t ___frame;
	uint32_t ___type;
	uint32_t ___contextID;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ScaleMode_t16AD656758EE54C56B3DA34FE4F2033C9C2EE13D 
{
	int32_t ___value__;
};
struct ShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D 
{
	int32_t ___value__;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF 
{
	int32_t ___m_CullingPlaneCount;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 ___m_CullingPlanes;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_CullingSphere;
	float ___m_ShadowCascadeBlendCullingFactor;
	float ___m_CullingNearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix;
};
struct ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftTangent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightTangent;
	int32_t ___mode;
};
struct SortingCriteria_t4907D221CB6E6AA4A32C1ED7B5D17103FD3E7C39 
{
	int32_t ___value__;
};
struct SpriteShapeGeneratorResult_t4387EDA3BC612997E080D5A0CC96946B994C8FFC 
{
	int32_t ___value__;
};
struct StoreReason_tB71F110DFEED47ED8929B7874BE46BD4AFA9D5AC 
{
	int32_t ___value__;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct SubPassFlags_tB4066DF82B36110B6163EB5C3A48F49FD4DD3AE5 
{
	int32_t ___value__;
};
struct TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2;
};
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	int32_t ___value__;
};
struct TileFlags_tDCEE980FCB6A2159202B4C8096C11452E318D2A9 
{
	int32_t ___value__;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___localToWorld0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___localToWorld1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___localToWorld2;
};
struct TrickleDown_t862EABE449B6C94F79F2B1D713990C35ABADDF38 
{
	int32_t ___value__;
};
struct UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___center;
	float ___radius;
};
struct UCircle_tC29A5FA379CDA3DB1DC29260A1A6F2998CFE8C6A 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___center;
	float ___radius;
};
struct UEncroachingSegment_t4B5747FEABEE5473FDE3D8FD80213DAF038BFB95 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___index;
};
struct UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	int32_t ___type;
};
struct UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	int32_t ___type;
};
struct UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D ___ilarray;
	int32_t ___ilcount;
	ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D ___iuarray;
	int32_t ___iucount;
};
struct UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	ArraySlice_1_t173FD3ACCC2631A439B59982D6322FFDC51B753B ___ilarray;
	int32_t ___ilcount;
	ArraySlice_1_t173FD3ACCC2631A439B59982D6322FFDC51B753B ___iuarray;
	int32_t ___iucount;
};
struct UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD 
{
	ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D ___points;
	int32_t ___pointCount;
};
struct UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 
{
	ArraySlice_1_t173FD3ACCC2631A439B59982D6322FFDC51B753B ___points;
	int32_t ___pointCount;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___settingIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
	float ___textureId;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct VisibleLightFlags_t337DB92EFB0014AD6A250E1E45338B1194657CD8 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value;
};
struct ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470  : public RuntimeObject
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Target;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PointerDownPosition;
	int64_t ___m_LastPointerDownTime;
	int32_t ___m_ClickCount;
};
struct PolyType_t61D62010DE1E30694B2F823BDFBA120B776ABAD7 
{
	int32_t ___value__;
};
struct EndType_t44002443DAAFEF649DA75F399F4A5CE38B2D9126 
{
	int32_t ___value__;
};
struct JoinType_tCC38C44CB0E5130C3761EFECF52EBDDD9EEC417D 
{
	int32_t ___value__;
};
struct EventPropagation_t024AF56F7A787C03AA21B065B624553EF52E7B83 
{
	int32_t ___value__;
};
struct LifeCycleStatus_tEE500629F5431B574B8047EB70864747D348D38C 
{
	int32_t ___value__;
};
struct PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nx;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___ny;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nz;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___d;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nxAbs;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nyAbs;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nzAbs;
};
struct BufferState_t9A744F89825C691F1F63EF47368227970F7FFE17 
{
	int32_t ___value__;
};
struct FlexStatus_tBEE27C88EDAE5A3F57C0AAFC4D1A650610B2CF5C 
{
	int32_t ___value__;
};
struct LightMeshVertex_tC5C456CBCF889B89B395DCE82DBEBA91BEA3015A 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
};
struct NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B 
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
};
struct Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position;
	int32_t ___subdivisionLevel;
};
struct SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___receiverSphereLightSpace;
	float ___cascadeBlendCullingFactor;
};
struct LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___attenuation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___spotDirection;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___occlusionProbeChannels;
	uint32_t ___layerMask;
};
struct ShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
};
struct JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___spriteAngles;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___spriteData;
};
struct JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___position;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___ptData;
};
struct JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36 
{
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___cpData;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___exData;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___cpInfo;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___position;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___tangentLt;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___tangentRt;
};
struct JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___bottom;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___top;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___left;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___right;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___cornerData;
};
struct JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___top;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___bottom;
};
struct JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481 
{
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___sgInfo;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___spriteInfo;
};
struct JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___pos;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___uv;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___tan;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___meta;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___sprite;
};
struct JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___texRect;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___texData;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___uvInfo;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___metaInfo;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___border;
};
struct ColliderType_t4C26FB284A330CAD69E47FFD734C9C778E077692 
{
	int32_t ___value__;
};
struct RenderTargetMode_tAE75E29BB61A64BDE7646D5CBD353B64BCFA9F3A 
{
	int32_t ___value__;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 
{
	alignas(8) FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 ___data;
};
struct LayoutList_1_tB53F8679328297FF66E778CE858BF3AD4D3CE9BA 
{
	int32_t ___m_Allocator;
	Data_tF347912D70FC8EB58C500579EA5117877D21BACB* ___m_Data;
};
struct NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCD560B25A8B4F8654C3DF3626A5F13D31353E25A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0ACB9B0C86A6C4EB0F75988F15C3A24D9F919F92 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 
{
	UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F ___m_MultiHashMapData;
};
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F 
{
	int32_t ___m_Keyword;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___m_Value;
};
struct StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C 
{
	int32_t ___m_Keyword;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___m_Value;
};
struct StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 
{
	int32_t ___m_Keyword;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___m_Value;
};
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	int32_t ___page;
	uint16_t ___pageLine;
	uint8_t ___bitIndex;
	uint8_t ___ownedState;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	int32_t ___U3CeventCategoriesU3Ek__BackingField;
	int64_t ___U3CtimestampU3Ek__BackingField;
	uint64_t ___U3CeventIdU3Ek__BackingField;
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField;
	int32_t ___U3CpropagationU3Ek__BackingField;
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementTargetU3Ek__BackingField;
	int32_t ___U3CpropagationPhaseU3Ek__BackingField;
	RuntimeObject* ___m_CurrentTarget;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField;
};
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74 
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	bool ___isOverriden;
	bool ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
};
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_marshaled_pinvoke
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	int32_t ___isOverriden;
	int32_t ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
};
struct GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_marshaled_com
{
	int32_t ___propertyID;
	int32_t ___byteSize;
	int32_t ___isOverriden;
	int32_t ___isPerInstance;
	int32_t ___instanceType;
	uint32_t ___componentGroup;
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C 
{
	uint32_t ___index;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___metrics;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___glyphRect;
	float ___scale;
	int32_t ___atlasIndex;
	int32_t ___classDefinitionType;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
	int32_t ___m_FenceType;
};
struct IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805 
{
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___cullingJobHandle;
	int32_t ___bufferState;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
};
struct InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173 
{
	int32_t ___viewType;
	int32_t ___viewInstanceID;
	int32_t ___splitIndex;
	int32_t ___visibleInstances;
	int32_t ___drawCommands;
};
struct InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD 
{
	int32_t ___viewInstanceID;
	int32_t ___eventType;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
	int32_t ___occlusionTest;
	int32_t ___visibleInstances;
	int32_t ___culledInstances;
};
struct LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 
{
	float ___AvailableWidth;
	float ___AvailableHeight;
	float ___ParentWidth;
	float ___ParentHeight;
	int32_t ___WidthMeasureMode;
	int32_t ___HeightMeasureMode;
	float ___ComputedWidth;
	float ___ComputedHeight;
};
struct LayoutComputedData_t37CD62B9A6B59283679F1126AD9C4BB9FD15B9C1 
{
	U3CPositionU3Ee__FixedBuffer_t6F7472507E4B67C5CA936393DFFBA95309592810 ___Position;
	U3CDimensionsU3Ee__FixedBuffer_tD2708ED4F2A6D227404834E91D6359AB4B954457 ___Dimensions;
	U3CMarginU3Ee__FixedBuffer_tF5EF7606FDD9ACD4DDF18DC564195092A6A540FE ___Margin;
	U3CBorderU3Ee__FixedBuffer_t5A18296AB7D0BFC3131BDDE01656A53889147B34 ___Border;
	U3CPaddingU3Ee__FixedBuffer_tE057FF067DA31EB3EC92DD01973C24BDC7E9E9F3 ___Padding;
	int32_t ___Direction;
	uint32_t ___ComputedFlexBasisGeneration;
	float ___ComputedFlexBasis;
	bool ___HadOverflow;
	uint32_t ___GenerationCount;
	int32_t ___LastParentDirection;
	float ___LastPointScaleFactor;
	U3CMeasuredDimensionsU3Ee__FixedBuffer_t3BF016D1583A3A9EABAD62B35368C369C06DCD87 ___MeasuredDimensions;
};
struct LayoutComputedData_t37CD62B9A6B59283679F1126AD9C4BB9FD15B9C1_marshaled_pinvoke
{
	U3CPositionU3Ee__FixedBuffer_t6F7472507E4B67C5CA936393DFFBA95309592810 ___Position;
	U3CDimensionsU3Ee__FixedBuffer_tD2708ED4F2A6D227404834E91D6359AB4B954457 ___Dimensions;
	U3CMarginU3Ee__FixedBuffer_tF5EF7606FDD9ACD4DDF18DC564195092A6A540FE ___Margin;
	U3CBorderU3Ee__FixedBuffer_t5A18296AB7D0BFC3131BDDE01656A53889147B34 ___Border;
	U3CPaddingU3Ee__FixedBuffer_tE057FF067DA31EB3EC92DD01973C24BDC7E9E9F3 ___Padding;
	int32_t ___Direction;
	uint32_t ___ComputedFlexBasisGeneration;
	float ___ComputedFlexBasis;
	int32_t ___HadOverflow;
	uint32_t ___GenerationCount;
	int32_t ___LastParentDirection;
	float ___LastPointScaleFactor;
	U3CMeasuredDimensionsU3Ee__FixedBuffer_t3BF016D1583A3A9EABAD62B35368C369C06DCD87 ___MeasuredDimensions;
};
struct LayoutComputedData_t37CD62B9A6B59283679F1126AD9C4BB9FD15B9C1_marshaled_com
{
	U3CPositionU3Ee__FixedBuffer_t6F7472507E4B67C5CA936393DFFBA95309592810 ___Position;
	U3CDimensionsU3Ee__FixedBuffer_tD2708ED4F2A6D227404834E91D6359AB4B954457 ___Dimensions;
	U3CMarginU3Ee__FixedBuffer_tF5EF7606FDD9ACD4DDF18DC564195092A6A540FE ___Margin;
	U3CBorderU3Ee__FixedBuffer_t5A18296AB7D0BFC3131BDDE01656A53889147B34 ___Border;
	U3CPaddingU3Ee__FixedBuffer_tE057FF067DA31EB3EC92DD01973C24BDC7E9E9F3 ___Padding;
	int32_t ___Direction;
	uint32_t ___ComputedFlexBasisGeneration;
	float ___ComputedFlexBasis;
	int32_t ___HadOverflow;
	uint32_t ___GenerationCount;
	int32_t ___LastParentDirection;
	float ___LastPointScaleFactor;
	U3CMeasuredDimensionsU3Ee__FixedBuffer_t3BF016D1583A3A9EABAD62B35368C369C06DCD87 ___MeasuredDimensions;
};
struct LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 
{
	int32_t ___m_Allocator;
	Data_t43E3238277579E631EA4E8016E61966D79F5B62E* ___m_Data;
};
struct LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 
{
	float ___value;
	int32_t ___unit;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E 
{
	RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___splitRange;
	int32_t ___projectionType;
	uint16_t ___splitExclusionMask;
};
struct LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C 
{
	int32_t ___reason;
	int32_t ___passId;
};
struct MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 
{
	int32_t ___topology;
	uint32_t ___baseVertex;
	uint32_t ___firstIndex;
	uint32_t ___indexCount;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9 
{
	int32_t ___glyphID;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___bottomLeft;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___topLeft;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___topRight;
	TextCoreVertex_t012334F340F916622ED5237971E8BA32198060E4 ___bottomRight;
};
struct PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 
{
	int32_t ___reason;
	int32_t ___breakPass;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD 
{
	int32_t ___passId;
	int32_t ___type;
	bool ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	bool ___asyncCompute;
	bool ___hasSideEffects;
	bool ___culled;
	bool ___beginNativeSubpass;
	bool ___fragmentInfoValid;
	bool ___fragmentInfoHasDepth;
	bool ___insertGraphicsFence;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_pinvoke
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
};
struct PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_marshaled_com
{
	int32_t ___passId;
	int32_t ___type;
	int32_t ___hasFoveatedRasterization;
	int32_t ___tag;
	int32_t ___mergeState;
	int32_t ___nativePassIndex;
	int32_t ___nativeSubPassIndex;
	int32_t ___firstInput;
	int32_t ___numInputs;
	int32_t ___firstOutput;
	int32_t ___numOutputs;
	int32_t ___firstFragment;
	int32_t ___numFragments;
	int32_t ___firstFragmentInput;
	int32_t ___numFragmentInputs;
	int32_t ___firstRandomAccessResource;
	int32_t ___numRandomAccessResources;
	int32_t ___firstCreate;
	int32_t ___numCreated;
	int32_t ___firstDestroy;
	int32_t ___numDestroyed;
	int32_t ___fragmentInfoWidth;
	int32_t ___fragmentInfoHeight;
	int32_t ___fragmentInfoVolumeDepth;
	int32_t ___fragmentInfoSamples;
	int32_t ___waitOnGraphicsFencePassId;
	int32_t ___asyncCompute;
	int32_t ___hasSideEffects;
	int32_t ___culled;
	int32_t ___beginNativeSubpass;
	int32_t ___fragmentInfoValid;
	int32_t ___fragmentInfoHasDepth;
	int32_t ___insertGraphicsFence;
};
struct PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81 
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___InvMatrix;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___Color;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___Position;
	float ___FalloffIntensity;
	float ___FalloffDistance;
	float ___OuterAngle;
	float ___InnerAngle;
	float ___InnerRadiusMult;
	float ___VolumeOpacity;
	float ___ShadowIntensity;
	int32_t ___LightType;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C 
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	bool ___staticShadowCaster;
	int32_t ___rendererPriority;
	bool ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	int32_t ___m_CullingMode;
	int32_t ___m_OffsetUnits;
	float ___m_OffsetFactor;
	uint8_t ___m_DepthClip;
	uint8_t ___m_Conservative;
	uint8_t ___m_Padding1;
	uint8_t ___m_Padding2;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	int32_t ___m_Type;
	int32_t ___m_NameID;
	int32_t ___m_InstanceID;
	intptr_t ___m_BufferPointer;
	int32_t ___m_MipLevel;
	int32_t ___m_CubeFace;
	int32_t ___m_DepthSlice;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68 
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	bool ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_pinvoke
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_marshaled_com
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
	int32_t ___isActive;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_Value;
	int32_t ___m_Version;
	int32_t ___U3CtypeU3Ek__BackingField;
};
struct ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projectionMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___shadowTransform;
	int32_t ___offsetX;
	int32_t ___offsetY;
	int32_t ___resolution;
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___splitData;
};
struct SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldToCameraMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CustomAxis;
	int32_t ___m_Criteria;
	int32_t ___m_DistanceMetric;
};
struct SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB 
{
	int32_t ___status;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	bool ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshaled_pinvoke
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	int32_t ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshaled_com
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	int32_t ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 
{
	int32_t ___reason;
	int32_t ___passId;
	int32_t ___msaaReason;
	int32_t ___msaaPassId;
};
struct SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CboundsU3Ek__BackingField;
	int32_t ___U3CtopologyU3Ek__BackingField;
	int32_t ___U3CindexStartU3Ek__BackingField;
	int32_t ___U3CindexCountU3Ek__BackingField;
	int32_t ___U3CbaseVertexU3Ek__BackingField;
	int32_t ___U3CfirstVertexU3Ek__BackingField;
	int32_t ___U3CvertexCountU3Ek__BackingField;
};
struct SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9 
{
	AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 ___inputs;
	AttachmentIndexArray_tDC550BA2CD14AFB3B5545B02331C26903ADA90B5 ___colorOutputs;
	int32_t ___flags;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F 
{
	int32_t ___m_Sprite;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	int32_t ___m_GameObject;
	int32_t ___m_Flags;
	int32_t ___m_ColliderType;
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___va;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___vb;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___vc;
	UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC ___c;
	float ___area;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___indices;
};
struct UTriangle_t8058F44B73B054F659C538A0787B0A3DCEF08A3E 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___va;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___vb;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___vc;
	UCircle_tC29A5FA379CDA3DB1DC29260A1A6F2998CFE8C6A ___c;
	float ___area;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___indices;
};
struct UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___m_callingConvention;
};
struct UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 
{
	int32_t ___m_LightType;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FinalColor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	float ___m_Range;
	float ___m_SpotAngle;
	int32_t ___m_InstanceId;
	int32_t ___m_Flags;
};
struct VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_Bounds;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_HdrData;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	float ___m_BlendDistance;
	int32_t ___m_Importance;
	int32_t ___m_BoxProjection;
	int32_t ___m_InstanceId;
	int32_t ___m_TextureId;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C 
{
	int32_t ___polyType;
	bool ___closed;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C_marshaled_pinvoke
{
	int32_t ___polyType;
	int32_t ___closed;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C_marshaled_com
{
	int32_t ___polyType;
	int32_t ___closed;
};
struct PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1 
{
	int32_t ___joinType;
	int32_t ___endType;
};
struct DynamicCallbackList_t7289C27A86DE4BA470602692C06ADD3BEC72BB6C 
{
	int32_t ___m_UseTrickleDown;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_Callbacks;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_TemporaryCallbacks;
	List_1_t3D72E539CB95E6031583970D3E5187DDB5EC674C* ___m_UnregisteredCallbacksDuringInvoke;
	int32_t ___m_IsInvoking;
};
struct DynamicCallbackList_t7289C27A86DE4BA470602692C06ADD3BEC72BB6C_marshaled_pinvoke
{
	int32_t ___m_UseTrickleDown;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_Callbacks;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_TemporaryCallbacks;
	List_1_t3D72E539CB95E6031583970D3E5187DDB5EC674C* ___m_UnregisteredCallbacksDuringInvoke;
	int32_t ___m_IsInvoking;
};
struct DynamicCallbackList_t7289C27A86DE4BA470602692C06ADD3BEC72BB6C_marshaled_com
{
	int32_t ___m_UseTrickleDown;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_Callbacks;
	EventCallbackList_tC6B518C9C5192317B413145F9B9A3678EEE5BF1E* ___m_TemporaryCallbacks;
	List_1_t3D72E539CB95E6031583970D3E5187DDB5EC674C* ___m_UnregisteredCallbacksDuringInvoke;
	int32_t ___m_IsInvoking;
};
struct Info_tA3039772991DEEDBC29A00439A055C5166133A27 
{
	int32_t ___viewType;
	int32_t ___viewInstanceID;
	int32_t ___splitIndex;
};
struct Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84 
{
	int32_t ___viewInstanceID;
	int32_t ___eventType;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
	int32_t ___occlusionTest;
};
struct Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187 
{
	UnsafeList_1_tBB6961066733E78B8C22E5C4D4D5FF9A581981D1 ___info;
	AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 ___readback;
};
struct NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___subRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	int32_t ___scaleMode;
	intptr_t ___backgroundRepeatInstanceList;
	int32_t ___backgroundRepeatInstanceListStartIndex;
	int32_t ___backgroundRepeatInstanceListEndIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	intptr_t ___texture;
	intptr_t ___sprite;
	intptr_t ___vectorImage;
	intptr_t ___spriteTexture;
	intptr_t ___spriteVertices;
	intptr_t ___spriteUVs;
	intptr_t ___spriteTriangles;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___spriteGeomRect;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___contentSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureSize;
	float ___texturePixelsPerPoint;
	int32_t ___leftSlice;
	int32_t ___topSlice;
	int32_t ___rightSlice;
	int32_t ___bottomSlice;
	float ___sliceScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rectInset;
	NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B ___colorPage;
	int32_t ___meshFlags;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___bottomColorPage;
};
struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F  : public MulticastDelegate_t
{
};
struct EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07  : public MulticastDelegate_t
{
};
struct EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0  : public MulticastDelegate_t
{
};
struct EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E  : public MulticastDelegate_t
{
};
struct FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 
{
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a0;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a1;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a2;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a3;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a4;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a5;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a6;
	LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 
{
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a0;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a1;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a2;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a3;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a4;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a5;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a6;
	StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292 ___a7;
	int32_t ___activeAttachments;
};
struct FixedBuffer16_1_t77FC60B0C967C49C5B34C820C8895A3FAC589A0D 
{
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 _____0;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 _____1;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 _____2;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 _____3;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 _____4;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 _____5;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 _____6;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 _____7;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 _____8;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 _____9;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 ____10;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 ____11;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 ____12;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 ____13;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 ____14;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 ____15;
};
struct FixedBuffer2_1_tD358D3A016DF61C53FFD777426D490227C61711A 
{
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 _____0;
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 _____1;
};
struct FixedBuffer9_1_tDE95CB6E410958CF1689C0F7DBC28AC9AD60390E 
{
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 _____0;
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 _____1;
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 _____2;
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 _____3;
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 _____4;
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 _____5;
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 _____6;
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 _____7;
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 _____8;
};
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B  : public MulticastDelegate_t
{
};
struct Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C  : public MulticastDelegate_t
{
};
struct Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C 
{
	bool ___hasValue;
	NativeArray_1_t0AB49EE6A37F6BC668C15EDFBE9BE92A22B2F0DB ___value;
};
struct Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B 
{
	bool ___hasValue;
	NativeArray_1_t5576C5C8F17BB3E1BA11BBA3EC50A55FC1246445 ___value;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	int32_t ___transparentInstanceId;
	uint32_t ___overridenComponents;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com ___range;
	int32_t ___lightmapIndex;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010 
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_marshaled_pinvoke
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_marshaled_com
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com ___key;
	int32_t ___drawCount;
	int32_t ___drawOffset;
};
struct DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 
{
	SortingSettings_t506C3B318FDFD3C2B1620E9B951829C631137E72 ___m_SortingSettings;
	U3CshaderPassNamesU3Ee__FixedBuffer_t5EDC823777BDDC9D50E55FF3779FBC1B3820126D ___shaderPassNames;
	int32_t ___m_PerObjectData;
	int32_t ___m_Flags;
	int32_t ___m_OverrideShaderID;
	int32_t ___m_OverrideShaderPassIndex;
	int32_t ___m_OverrideMaterialInstanceId;
	int32_t ___m_OverrideMaterialPassIndex;
	int32_t ___m_fallbackMaterialInstanceId;
	int32_t ___m_MainLightIndex;
	int32_t ___m_UseSrpBatcher;
};
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85  : public RuntimeObject
{
	DynamicCallbackList_t7289C27A86DE4BA470602692C06ADD3BEC72BB6C ___m_TrickleDownCallbacks;
	DynamicCallbackList_t7289C27A86DE4BA470602692C06ADD3BEC72BB6C ___m_BubbleUpCallbacks;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 ___m_Nodes;
	LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 ___m_Configs;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	bool ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___loadAction;
	int32_t ___storeAction;
	int32_t ___memoryless;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___accessFlags;
	int32_t ___mipLevel;
	int32_t ___depthSlice;
};
struct PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	bool ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___resource;
	int32_t ___index;
	int32_t ___preserveCounterValue;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	bool ___localFlipsWinding;
	bool ___localTransformScaleZero;
	bool ___worldFlipsWinding;
	bool ___worldTransformScaleZero;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	bool ___pendingRepaint;
	bool ___pendingHierarchicalRepaint;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___worldTransformScaleZero;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	int32_t ___pendingRepaint;
	int32_t ___pendingHierarchicalRepaint;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___worldTransformScaleZero;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	int32_t ___pendingRepaint;
	int32_t ___pendingHierarchicalRepaint;
};
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState;
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState;
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState;
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState;
	int32_t ___m_StencilReference;
	int32_t ___m_Mask;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106 
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	bool ___m_IsEmbedded;
	bool ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_marshaled_pinvoke
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	int32_t ___m_IsEmbedded;
	int32_t ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_marshaled_com
{
	FixedList32Bytes_1_t2CB002D739D8492583C89E7DE783DC9AEAC33B00 ___m_FixedArray;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_List;
	int32_t ___m_IsEmbedded;
	int32_t ___U3CValidU3Ek__BackingField;
	int32_t ___Length;
};
struct URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9 
{
	NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___slices;
	uint32_t ___slicesValidMask;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 
{
	bool ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_pinvoke
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_com
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF 
{
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
	int32_t ___snapshotIndex;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948 
{
	String_t* ___name;
	int32_t ___index;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceCreateList;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	bool ___enableAsyncCompute;
	bool ___allowPassCulling;
	bool ___needGraphicsFence;
	bool ___culled;
	bool ___culledByRendererList;
	bool ___hasSideEffect;
	bool ___enableFoveatedRasterization;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_marshaled_pinvoke
{
	char* ___name;
	int32_t ___index;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___enableAsyncCompute;
	int32_t ___allowPassCulling;
	int32_t ___needGraphicsFence;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___enableFoveatedRasterization;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___index;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___enableAsyncCompute;
	int32_t ___allowPassCulling;
	int32_t ___needGraphicsFence;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___enableFoveatedRasterization;
};
struct FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 
{
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a0;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a1;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a2;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a3;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a4;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a5;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a6;
	NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4 ___a7;
	int32_t ___activeAttachments;
};
struct FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C 
{
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a0;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a1;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a2;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a3;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a4;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a5;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a6;
	PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C ___a7;
	int32_t ___activeAttachments;
};
struct PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F  : public EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1
{
	bool ___m_AltitudeNeedsConversion;
	bool ___m_AzimuthNeedsConversion;
	float ___m_AltitudeAngle;
	float ___m_AzimuthAngle;
	bool ___m_TiltNeeded;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Tilt;
	int32_t ___U3CpointerIdU3Ek__BackingField;
	String_t* ___U3CpointerTypeU3Ek__BackingField;
	bool ___U3CisPrimaryU3Ek__BackingField;
	int32_t ___U3CbuttonU3Ek__BackingField;
	int32_t ___U3CpressedButtonsU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpositionU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ClocalPositionU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CdeltaPositionU3Ek__BackingField;
	float ___U3CdeltaTimeU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
	float ___U3CpressureU3Ek__BackingField;
	float ___U3CtangentialPressureU3Ek__BackingField;
	float ___U3CtwistU3Ek__BackingField;
	int32_t ___U3CpenStatusU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField;
	RuntimeObject* ___U3CUnityEngine_UIElements_IPointerEventInternal_compatibilityMouseEventU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IPointerEventInternal_displayIndexU3Ek__BackingField;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF 
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_marshaled_pinvoke
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_marshaled_com
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com ___key;
	int32_t ___instanceCount;
	int32_t ___instanceOffset;
	MeshProceduralInfo_t09E735D958CD89E7BE479DDD64CEEE2B469328C8 ___procInfo;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8 
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___key;
	int32_t ___instanceIndex;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_marshaled_pinvoke
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke ___key;
	int32_t ___instanceIndex;
};
struct DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_marshaled_com
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com ___key;
	int32_t ___instanceIndex;
};
struct LayoutCacheData_t1C9D16AB3B4EF0EC7A51422286D2E84ABBDEEA92 
{
	uint32_t ___NextCachedMeasurementsIndex;
	FixedBuffer16_1_t77FC60B0C967C49C5B34C820C8895A3FAC589A0D ___cachedMeasurements;
	LayoutCachedMeasurement_tAEC7D318B47741D367D20EE2065A358062325CF0 ___CachedLayout;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___m_Handle;
};
struct LayoutNodeData_t1D56A4D5BFA0B262C0B70873ADB2B38C6A677858 
{
	FixedBuffer2_1_tD358D3A016DF61C53FFD777426D490227C61711A ___ResolvedDimensions;
	float ___TargetSize;
	int32_t ___ManagedMeasureFunctionIndex;
	int32_t ___ManagedBaselineFunctionIndex;
	int32_t ___ManagedOwnerIndex;
	int32_t ___LineIndex;
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___Config;
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___Parent;
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___NextChild;
	LayoutList_1_tB53F8679328297FF66E778CE858BF3AD4D3CE9BA ___Children;
	int32_t ___Status;
};
struct LayoutStyleData_t4ECF9E0634219C4C7360FAFA6379DCCB964F2E2F 
{
	int32_t ___Direction;
	int32_t ___FlexDirection;
	int32_t ___JustifyContent;
	int32_t ___AlignContent;
	int32_t ___AlignItems;
	int32_t ___AlignSelf;
	int32_t ___PositionType;
	float ___AspectRatio;
	int32_t ___FlexWrap;
	int32_t ___Overflow;
	int32_t ___Display;
	float ___FlexGrow;
	float ___FlexShrink;
	LayoutValue_tC125DF54D121EC0C205D12BAEB3B88E06CDCBF30 ___FlexBasis;
	FixedBuffer9_1_tDE95CB6E410958CF1689C0F7DBC28AC9AD60390E ___border;
	FixedBuffer9_1_tDE95CB6E410958CF1689C0F7DBC28AC9AD60390E ___position;
	FixedBuffer9_1_tDE95CB6E410958CF1689C0F7DBC28AC9AD60390E ___margin;
	FixedBuffer9_1_tDE95CB6E410958CF1689C0F7DBC28AC9AD60390E ___padding;
	FixedBuffer2_1_tD358D3A016DF61C53FFD777426D490227C61711A ___maxDimensions;
	FixedBuffer2_1_tD358D3A016DF61C53FFD777426D490227C61711A ___minDimensions;
	FixedBuffer2_1_tD358D3A016DF61C53FFD777426D490227C61711A ___dimensions;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	bool ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullingResults;
	DrawingSettings_t3B64EB029DB6F94A1F2A9B2D19D2969AE361BB49 ___drawSettings;
	FilteringSettings_t75860B12A7BCF9A0E2F13CB2C2E5DCD9E1EEAD9F ___filteringSettings;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___tagName;
	int32_t ___isPassTagName;
	Nullable_1_t791F8A662AA857374FA6AFEEEA22B1F1E103327B ___tagValues;
	Nullable_1_tEB29AC5A73D1D1AF8DE0D726A51B415DC226387C ___stateBlocks;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2 
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	bool ___hasDepth;
	bool ___hasFoveatedRasterization;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_pinvoke
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
};
struct NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_marshaled_com
{
	FixedAttachmentArray_1_t74727BB5F586B5A943D14A73DE3B503914222023 ___loadAudit;
	FixedAttachmentArray_1_t6EACA4660BC8F4A12B49791F310286827E4B8906 ___storeAudit;
	PassBreakAudit_t86F0837A5B639D308588333370DEB00AB5933A76 ___breakAudit;
	FixedAttachmentArray_1_t097F263B4BA144B4ACC3DC76BEBD68D2B99E582C ___fragments;
	FixedAttachmentArray_1_tEFFF2A913823035718F09AB3C6DD33263A082714 ___attachments;
	int32_t ___firstGraphPass;
	int32_t ___lastGraphPass;
	int32_t ___numGraphPasses;
	int32_t ___firstNativeSubPass;
	int32_t ___numNativeSubPasses;
	int32_t ___width;
	int32_t ___height;
	int32_t ___volumeDepth;
	int32_t ___samples;
	int32_t ___hasDepth;
	int32_t ___hasFoveatedRasterization;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214 
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1 ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_pinvoke
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_pinvoke ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_marshaled_com
{
	RendererListParams_t13F72282BCE2DC255747FE7694C6BBC3377944B1_marshaled_com ___desc;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList;
	Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35* ___m_PropertyBag;
	int32_t ___m_Flags;
	String_t* ___m_ViewDataKey;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData;
	bool ___shouldCutRenderChain;
	UIRenderer_t92C2C36451BAD524541C4C548B02D0EAC798644E* ___uiRenderer;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup;
	bool ___m_WorldClipIsInfinite;
	int32_t ___triggerPseudoMask;
	int32_t ___dependencyPseudoMask;
	int32_t ___m_PseudoStates;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	int32_t ___m_PickingMode;
	LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE ___m_LayoutNode;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	bool ___m_EnabledSelf;
	int32_t ___m_LanguageDirection;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	int32_t ___m_SubRenderTargetMode;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	RuntimeObject* ___m_DataSource;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_DataSourcePath;
	List_1_t592DF2E59D6E244DA0041698383484A07C7E0480* ___m_Bindings;
	Type_t* ___U3CdataSourceTypeU3Ek__BackingField;
	int32_t ___m_TrickleDownHandleEventCategories;
	int32_t ___m_BubbleUpHandleEventCategories;
	int32_t ___m_BubbleUpEventCallbackCategories;
	int32_t ___m_TrickleDownEventCallbackCategories;
	int32_t ___m_EventInterestSelfCategories;
	int32_t ___m_CachedEventInterestParentCategories;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventInterests;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	bool ___U3CisRootVisualContainerU3Ek__BackingField;
	bool ___U3CcacheAsBitmapU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___elementAdded;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___elementRemoved;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45* ___resolvedStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B_StaticFields
{
	EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF_StaticFields
{
	TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* ___s_emptyArray;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6_StaticFields
{
	ButtonClickStatusU5BU5D_t9327A993382F70450196067EE5DED53834E9DB7B* ___s_emptyArray;
};
struct BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields
{
	bool ____IsEnabled;
	BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* ___Options;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnCompileILPPMethod2;
	MethodInfo_t* ___DummyMethodInfo;
};
struct BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_ThreadStaticFields
{
	CommandBuilder_tA2E5D7A513FE45173EA395D67B25DB94E42CCA84* ____cmdBuilder;
};
struct ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31_StaticFields
{
	int32_t ___U3Cs_DoubleClickTimeU3Ek__BackingField;
};
struct ComputedTransitionUtils_tC9191F301DCE1CB02C3FFC174E651E14204F1C7A_StaticFields
{
	List_1_t888EAF80C1646E9D51193F9F6E183344845FB66C* ___s_ComputedTransitionsBuffer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct HashCode32_1_tD2DD63035F543FDD8643588FA88CD9475D8107B9_StaticFields
{
	int32_t ___Value;
};
struct HashCode64_1_tBE03AFEF199A91EC38E3678A953160AFBAEA044F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t772DFCA20062D55EF275D420692E6231EFE8C99A_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tDBBA29E0FF58D0BD292B04DADFEFA25FAF30082F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tEFE47363FE9BD2DA23EF9C44B91C8401015063BE_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t0AE3CC08D24A1BE759562DBCEEA6B459AC8507E3_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t4200429421A827A0B5F3036C1DB9D66CCB8B0445_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t19BA4FD53EFCDB3494D3E641F479A304B0A42D21_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tB6E735C2CEB2283242D5171F9F071C4076FEB378_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t088700758E948CB3167EC6E10FD03B1B11125586_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tE17B8F4EB1955CE37A78FDA1D0940AD6B79DE88B_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t7D07C74DD41061E9ED06C78A82A6E8160CB46E07_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t45C902BA4A85819B6C31A686FF699BD734C810A3_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tE592078EFC6F2A37620503BFAB99FEF70B71584A_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t843A0CF337E84638F3DEB38ADAFB4FC2204CA22F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t6609EC1C8FD637D0704C9D40931A83EE7EBCA23D_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tD3243DF9FA8B7B703E45F521152F4E500EAA808E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t6494BEDFB3823C50BCCE1457CC83EBABF9FC3718_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t1E9825203BCACDE03EA9806FA3B6D9667833FDB7_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t7F36E26E9C60DAE7E6BF03E72A6B9BEB0E70508E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t728259C125E4C28AE80A80B41491CF221EF1B9B7_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tDA241AE7DD0993FBFA911AC316BB51A154854AC7_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t09ABD1A71EC5CE3684E6F1DA80681B54DB1691B5_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tA3E7348CF613CEAF3CEA3485D9D30F9A483610A1_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tAF0A4B39260FE7FD741C97BD8D2F43012A7D5133_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t917F3D3D5EA46CC128521D07ECFC4201E6D1B7DB_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tE91648EAFFF631BF00C9786421718E02AE8FD147_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t921B60FC387B846EB96F5AE75BB67B04AB1B8563_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tAACED5C219BCE704BB23DEE5411688A66F4FA312_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t6486E3C865F1211D498A95362EA771CDFE256DED_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t33425DAD62BA77C00555B8218BCC45319A29B991_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t9A899B4771FBF788C65EC3AAED858797329647AA_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t6D9D3CEC802B9E24CA6ABA6FA982B615B2DC8196_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t5AB59BEFEDF62F7AA82DF462D661D14F572822AB_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t51A883EA9A52EBE95F05710B50C0A662C53D201D_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t73EDE881A4A610E09E76E2E3589D30974001309C_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tB033103B595D25458BCF189B1B8FEEDC765C6DD9_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t4EEE3EED6A1F40DD523EC9B520CEDF73603F903F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t540AB6784E401BA021A24A6FDE63F1CB91615951_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t525093B60DF9E3EDBEC57C2CAB5538644D25195E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tAFCB1B0285DF0A149D68DB8C099B4AB4E024F6C5_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t1DFA17BA969BAF3B0ABCD287BF2B61E3511BB692_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tBB94DF557F1073A1974A322A1A44C7126DA37529_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t940007CBF08B5ABD14D7423675D4910FE0B9755B_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t3A727467BDFEAFF7A4CB568E28A00E4D6B4EC69B_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tF27C6D205FED69279D60297E9A62238FADF949C1_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tAC13F0ACD4FE21581D24A405FB04DC6CE62107F2_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t1E6FA524337B539C19D5D02E0DB5A26462E0B389_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t508FCCF440E6434CFFFA2F3631E598CD0C05F692_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t14F72F5369A95C1B27EEE643C7C18A4423CA3990_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tB40823AD36588BE324C2BA3C355DFADA13F520E5_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t2F229ECC88B28D532EE6550312AB5B1B2294B745_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t3E1E1267782365D9D1C6E9EAD96BBC6C9E2B8BF2_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t9940D5A3249D07F1B8EECA042ACC48DF71081D98_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tB565080AF7C252BCE5DD51586A5FEBEE18996C0E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t2B83362CA7E70B86BD1A86B8D27E4F1672407417_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tCA0BC36BEF1B0537653D2C164EBFB71E2E7FE57F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tC86B716B0629811F38CCA2922A9A6E9128F7B487_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tEEB1F167CB1FF50533D39ECB4E2F4DB8F48095BB_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t0E540E776B4BA9631D2B21027E3D44679BBFDE7E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t9F79C5D3EEDC24E31844F18936B7A7152BDF014E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t0B497DADDE4C8A74260C67223CA08BE885726512_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t2089B57811D9851DA3FA2E1B60AC2EC6EB561956_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t6D41DDF544ECC8EE81B2FB170732F8772126D088_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t4649F2A499D1914EAA249B234F1CB3520A35611B_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t21902CE3BB8566DD3CF37D5FBF26DDE580F687FD_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t7CFB081FDD903CC5A200D3CD6E79CA92462EC9A5_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t744F317F9CFBC3EE2DF71AE33FE2D5C9DF6D2336_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t67754EDF06D14076F91B36A2D64F460B2A6406DE_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t285034DF371CEE21CB88B0078A8E5924F2300E0C_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t27DC634456476CF1B4E26CE9E1613932D5D5E1F2_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tE4E9A886FAEA128F91F4BB47288E327F2FB2A590_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t35854EE2A1679DA8AD9F4B6EBE37867348F4D8DD_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t48F9CB60083B059F824DFDCDA2D5C3954AC131F4_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tC585CEA3A7F1AB7F02BFD57720D6DEBBA4E4006E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t38B65A784388197E4D694073DDD68712A68ECFBC_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t162E0FE2417CF2171436BC6E9A0524E8CD7A331D_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t61B99859778637445427E508875C833C26007C3F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t12646CDC1DEFCCFAE4EC21C2691E3AD07CC3243D_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t7397C98D3A61DF788247816CFDDCFAB68F11FF31_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tF4465274EC7B7ABA123154CB3244A352EDE2086F_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tABB39B622E5219D2DA172EACDEC8B74052BB164A_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tF6AB644D2ABBE925B3A3543F20FD5FB992312461_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tA894B4C4BE3681992148A70D1492F8EEA6825E4E_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t258221577FA59C0B1D9B188C325409BB62050DAB_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tC28C1D947A4D0E70163666E4692F1B1CDCEC09A9_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t844B153ACA1ED334277B6FB6C7454250AF529FB4_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tE62B31A9B7BD017DBE50F2BC947FCDED9605A714_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t49CA23EDF4DB68FCFD7564115E65F4D23452160A_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tC9D36B8B37721F4D2809B01166AAF2928F55B3EC_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t1C4700728BA9E409FB64757DAADF1A0CC5A44DE7_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_tA49B79C998BF9022A0836C168EC2089C5ABCBE43_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803_StaticFields
{
	int64_t ___Value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_StaticFields
{
	GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___Invalid;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_StaticFields
{
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___s_Null;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_StaticFields
{
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___Invalid;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none;
};
struct SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_StaticFields
{
	SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692 ___Invalid;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_StaticFields
{
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___zero;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_StaticFields
{
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___zero;
};
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_StaticFields
{
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___zero;
};
struct int4_tBA77D4945786DE82C3A487B33955EA1004996052_StaticFields
{
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___zero;
};
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_StaticFields
{
	bool ___ThrowOnSetRenderTarget;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_StaticFields
{
	int32_t ___maximumCullingPlaneCount;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_StaticFields
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___identity;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___zero;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_StaticFields
{
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___identity;
};
struct LightMeshVertex_tC5C456CBCF889B89B395DCE82DBEBA91BEA3015A_StaticFields
{
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___VertexLayout;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	int64_t ___s_LastTypeId;
	uint64_t ___s_NextEventId;
};
struct LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___LoadReasonMessages;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_StaticFields
{
	uint32_t ___s_CurrentValidBit;
	uint32_t ___s_SharedResourceValidBit;
};
struct StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___StoreReasonMessages;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___Default;
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
struct EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1_StaticFields
{
	int64_t ___s_TypeId;
	ObjectPool_1_tC06B45D8A0C7CBBDAE418090727D1DF1F2FCB9F6* ___s_Pool;
	int32_t ___EventCategory;
};
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_StaticFields
{
	EventCallbackListPool_t258FFD0B864AC29862A6ACF4F56A0340621783B2* ___s_ListPool;
};
struct LayoutCacheData_t1C9D16AB3B4EF0EC7A51422286D2E84ABBDEEA92_StaticFields
{
	LayoutCacheData_t1C9D16AB3B4EF0EC7A51422286D2E84ABBDEEA92 ___Default;
};
struct LayoutStyleData_t4ECF9E0634219C4C7360FAFA6379DCCB964F2E2F_StaticFields
{
	LayoutStyleData_t4ECF9E0634219C4C7360FAFA6379DCCB964F2E2F ___Default;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___childCountProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___contentRectProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourcePathProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___disablePlayModeTintProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledInHierarchyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledSelfProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___layoutProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___languageDirectionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___localBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___nameProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___panelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___pickingModeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___styleSheetsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tooltipProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___usageHintsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___userDataProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___viewDataKeyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visibleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visualTreeAssetSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldTransformProperty;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallbackRegistry_RegisterCallback_TisRuntimeObject_mB4EF7159D7E9A0E1435729B4B488CEF2DA58ACDB_gshared (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, int32_t ___2_invokePolicy, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, int32_t ___0_useTrickleDown, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallbackRegistry_RegisterCallback_TisRuntimeObject_TisRuntimeObject_m2D9855863C5CB36B83A07D8006643A522C3E3919_gshared (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, RuntimeObject* ___1_userArgs, int32_t ___2_useTrickleDown, int32_t ___3_invokePolicy, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_m19464A9219CFA09D521E6F6981885276025BC97A_gshared (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_TisRuntimeObject_m9E686DAEC604B7BFF8BF99DBDEC655151A08378C_gshared (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EventBase_1_TypeId_m4B18042A64FC5F54DF0B830CE4C9F0FC82C661A5_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mE0F1FA5E6172950D35D6FD8F6708B433954C4168_gshared (RuntimeObject* ___0_dictionary, RuntimeObject* ___1_key, RuntimeObject* ___2_defaultValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_1__ctor_mE792B790BEEC4F42873AE6056A077A23D0F6FE08_gshared (U3CU3Ec__DisplayClass3_0_1_t978BDB5D5952406BBFB6E332150D230FCE274300* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m94DB1A0F1293F5BAA65533ED74C41E31D71CA979_gshared (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m40C9739B189BB2A5A4B5D375C33123A039D65C2B_gshared (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mAEE080A594D2B54E62742BCBAC067BD86B62EE90_gshared (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mDB05DADCD82C0753A10F968BC12105C013F004F6_gshared (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m5D9AB1CF4D2E70F87BE8C5DA8BB700B0DBAEC960_gshared (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mF03BC6853C9DD519B47323DDAB4B990501463489_gshared (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m81CC7BB6F9FA4BD6A271BECB0E8979FAFBBFF8F2_gshared (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m02029B2BD79047E1295F3C1F6D403DAE546C3F79_gshared (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mACF77E80482D69D54E384207E8EF83F56714FEBF_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m13B5E98249D94532DD7700C04ADA9346B6C01646_gshared (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_mA22E1F5DC673C0DBE2D35C0E170FADEF9EE9BC53_gshared (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m48B5E526D82D23460D26CC391BD64752F97ABF18_gshared (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_mDAB772BAC6F20741B210B3AB37819FDEAC556936_gshared (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m7CD61B8B4CCB40810552A5884C7F1EDE208688B5_gshared (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m875FDB5805D73A9DB2D203063E5CCC07999F43A7_gshared (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE947909B5D5477F068B16DF1CDB86DB6A68B6994_gshared (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mF5D608563990BDF4A932F444C5C91CD6791E7DE6_gshared (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m7F2B3220F3366EAB71B0C62942CB678827036666_gshared (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_mB293485A46F4CD60A26427EA159A60016470DF7A_gshared (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m6AB15133D68784F1E9BB1C5CF6AF21EE4DC4FBBF_gshared (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mFBA847E240CBCFD6742ACEE692097A3686EB1478_gshared (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD0F26C30D505CF393A50CEAD19D9BAAD3E77CB87_gshared (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m4219EEB937F0AA2846952934259518672640C2F0_gshared (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mAF7AEA5C34BE1F328FB3175B67928729025E5AB1_gshared (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m2AC2D93055F73106FDF21A17E4B628111A55A673_gshared (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2BE74BAAAACB2FB8C886355218332C3D71CC870D_gshared (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m92C729A213EC9B6599360003A73F4FF36FDCFEC5_gshared (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2B08A55873756E21BCB6D1C2CD1D3ED18D00BCA2_gshared (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mED77F59553BE97385BAF8D6FB358529A1E959379_gshared (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE3B7F1A32ACB2193062CBB170B4ED9A7843325C4_gshared (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_mEEFD81D6225622D3284E00E58E9979E357EA3846_gshared (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC59BF07E462EBB1B63D0EEBDA144231E87EC237_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0D4D6107C1C882F6D813E0CC53744262582D6110_gshared (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m20661CE34BF69BC0B801A3909158DEA04D621DEB_gshared (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_gshared (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m48A94190A440E505DCB0C725DF4FE2DBDE33CCB6_gshared (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4DB28141C684B6B39DE44C899ECFD06EE0B7C8D4_gshared (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_mFC9CFF15D4351863CC7ED0178D46D69735188B6F_gshared (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB4F24E1671E46B6A5A5BE881EED6B8FA573BC045_gshared (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_mC87C5E72BEAA8A1E94A6C34A486DA2BB429E48C4_gshared (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m18E7F9491A74B9BBAD80C7FA7871313EED3797D6_gshared (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_mDA389B33EA02F4831D5C7EA695532A0B10AA3EEC_gshared (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m00D8BF626DE89E941B6C7F7DE6BDB75ACDBDA821_gshared (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7C87C137316B6924C29233A2E467ADA6B8A7DCA8_gshared (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2BB43FE24726BC2669A5FF0927379742A7DA6A43_gshared (NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_mBDE57D9985060D3B58307A46D33E435BEE7410F4_gshared (NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mEFB8E1E68865EC5B4261DB29AC8E4C467C4EFB94_gshared (NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m04975597CB38CA33477F3046802FA01A5946560C_gshared (NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mDFC0DD4650AAC132F79654F50B616DF732D38536_gshared (NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_m00339F2317A97F4DE666D7BC4C2F2BD71D798F12_gshared (NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0FA5AEDDA6696B431FB7C64367D35EB510D2740A_gshared (NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_m11DDDFF0EA8FBCCBD94EA172DA8E64E1A9BCB46F_gshared (NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mBF1EA4278622BA874802F1EE442736E67D6185C2_gshared (NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m5A7ADFCA1C19C4C757E0C264C94AE07368AB8089_gshared (NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2A6BACB54D11B29827A2DC7686CB9A6E271F1785_gshared (NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m1FC1B6667A9447473B93607A53FA956634D30866_gshared (NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m510985F3EE136D53A615D9ECE9501552B7DAC956_gshared (NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m48B684A93CE38CC729A9A40D9EB0EABB0A1EE549_gshared (NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m8DF6ADCE991D8F508D027338C1667E82CD6B075F_gshared (NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_m94D7DC77FB6C882C92C18BF66FE103BCEAB26EC4_gshared (NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mA2D3D5EA3CCCAD7698FF06E24E935C5FA5F84B05_gshared (NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m9635158C65650FC350A869EBD6CAB1C50F89AFB7_gshared (NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m582687BCC0935B30CB5E855EF9481583775D8D5F_gshared (NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_m525E6F66B5B617418AF056ED577392B3A2DC1227_gshared (NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m6165D913BDBF3F9B89AF521B895ACED78E784B8A_gshared (NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_mB66EA7BEE3C5C596974B4D6FC6E18820727A862F_gshared (NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB0AD337C4EA82C18D214D63D1B478193CBCA5D27_gshared (NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m732AA5DD55098C318EA10B2DE4A82FA910EFB7E5_gshared (NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mA76161D15ADAA61DE55A02DD16BB9714F3C35121_gshared (NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisSubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9_mEEBCADC277F33B029A6B0666EF0F4ACB4F20EA11_gshared (NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m75E60949F4AE81A148CE446B1DC84D8E27C108CD_gshared (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m683C223E404B0555C6905473CEC887AC850BA0B7_gshared (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_gshared (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mD99AA89741F3ABE4BA39182EB4BC1ADEBBD34A19_gshared (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_gshared (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m2D4ED9F9308EEB313A60954B64E0DB259EF67CFE_gshared (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m5979892FC554CEAA78DCDEC92B686F38E61F9DB1_gshared (NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_mAD887F66D285E6E91501A32BE4BB22EDACB3E3D3_gshared (NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m33B1BDE41C4FC3509C94E34A1A2E9976E452A0D1_gshared (NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_mC4A0E9868E565D827FEB2117E79FD30822C9A2FD_gshared (NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m69CA451E8DF83418562F6577C370FEF240540082_gshared (NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_mA202A50D5E8E341C1CE333B65D9ED08181D1AB5C_gshared (NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mACF86E12FBF5AC701EDE1D413766634F712804AE_gshared (NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m4E449922364E9B8E4866691F93F6732CEAA7ABFD_gshared (NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4CE99671753B56A03C2BA8726AF38498C63775BF_gshared (NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m2B2B3C2CF331B986B51A47C36A235AA04C30AEAC_gshared (NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m744CC038AEEEB857D41E84288EAC9BFF94431F7F_gshared (NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m34E414E2482728954419B608C89D1997EE9B9A15_gshared (NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m6B41EEBC0C00FA050194DEE026E2A51FE05A8A34_gshared (NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_m3C9F2A22CEEEFE5A903070AC581C1013599DAAE7_gshared (NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0630A2E8FE16DDE58234955801207466A5D881C8_gshared (NativeArray_1_t0ACB9B0C86A6C4EB0F75988F15C3A24D9F919F92* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m3A41FA005797063A3F0675A24BB256EB3E17A293_gshared (NativeArray_1_t0ACB9B0C86A6C4EB0F75988F15C3A24D9F919F92* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m1EAF77ABE62FF1E1E3B1BD150AE4C63D7577E7B2_gshared (NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m50EA3632EB1CDEF0AC4FA6E77CE06A357B7F3BAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_m37DB29CABCCCB94E4502465E2E50DDF02478F4BD_gshared (NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_mB0E36A30678F290202CF790F64FDABD61C0E4FDB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m8AAE2A39FA31466921CBEBECF80387284719501F_gshared (NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m3634617FCC0586139135B4C5B15EB5E4DA8E35EA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m1417D907BD32B676780C55DC924AB1764F94842F_gshared (NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m663BD9D7D3900AFE1F17906E4ACD10A7ABE007AE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mF5CB3F1637D18C7B5BD86C3BED07EA90E78029EA_gshared (NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mB3AF0FE4F628350C7A4F409515FA6BB0C2B73A24_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_mF64456E866EE1F76315840C53E63AC29EE378F0A_gshared (NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_mCD3F2A814C3004BFC9680B8C8E62A1FCFCBD6702_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_m7AFED511573059D0DA49E1966117E7F80F9112CC_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_results, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInParent_TisRuntimeObject_m28B780AC357FCF95670D111FF933290A5B13FEAB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInParent_TisRuntimeObject_mD5BE6FB438CCF9B0E707282DA2D24E98C12BF845_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentsInParent_TisRuntimeObject_mC4527CDE5CC2128D895CDAC4B85A6DE25028205C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_results, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLayoutCacheData_t1C9D16AB3B4EF0EC7A51422286D2E84ABBDEEA92_m6AD907969ED820C7B597DBDE5A62251F0BAAEBB5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLayoutComputedData_t37CD62B9A6B59283679F1126AD9C4BB9FD15B9C1_m8E2B97AA6AB1779936EAA4893F7CE096024BCE54_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLayoutConfigData_t6B1D36F00422E7EB7C51CF9103FC9D522B5481F4_m6BD3023222CB03E8462517B9F40193D9A085A1C2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLayoutNodeData_t1D56A4D5BFA0B262C0B70873ADB2B38C6A677858_mF86E7726D232D0C06A598629B29651A120967D95_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLayoutStyleData_t4ECF9E0634219C4C7360FAFA6379DCCB964F2E2F_mC9FE389F5DD604C6212396EF5EB740EA25ECA488_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_mE40BACF79A091E5731B90216509ED13E487D32B2_gshared (NativeArray_1_tCD560B25A8B4F8654C3DF3626A5F13D31353E25A ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m8D2118F47D07AF9F9E22DF33134FDD73C68EE9EC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mDDFF527C13230D02E56283C52100BF7950B93FF8_gshared (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m9FA55C1771EBABDC880FF9C5C91C840EA25173B4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_mCD5DAB337FAF53E4D21DDD2F5AEF09BDB80EBFE2_gshared (NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_mF4C788B8223AC24A8099C9B543B70454D86FE1C9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mC693FE6F866F8AD8F97901E37F0B21464E6C292D_gshared (NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mF03AC59110A26BC79993B3466BC2B83DDEBD44BE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD08EACF1B4D85335818C197334D6F9E10225992E_gshared (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m09504C772721F76D367E7DBCF2CD3B350182B0E7_gshared (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_mEE9B4692F083FB78082237B38064C3E4ECAA5D96_gshared (NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0BD2704CD677D45FAEDAD35D6C7208EE167961F7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m736F4DA91F99B096FD7F086054FB31077AB480E0_gshared (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m90780EC8030A711CE1682E39A74278F5F6BBD031_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m4F36200EC1FF6F64F0A11D1BB8793DCE3A94E12F_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E ___1_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_mBF3C1E98ED861AFFF6F1517B759727C2B8B166C5_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 ___1_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m09724A069B804345B439D7797E2F812D0C66AD48_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 ___1_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m6484EFC9AF5CAC6A61B7C4575465037F30F7720D_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 ___1_data, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m714CDE1380C64F24D3FFA0C3A05220010855A1A3_gshared_inline (List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 List_1_get_Item_m96D208AAEBB2370590FC90F7F803453D7AE9F116_gshared (List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m780E93121AF45C1AE9F963A3E27BD6D79647BD6E_gshared_inline (List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E List_1_get_Item_m54313A208BF733F363077C5A2C48B534128B0889_gshared (List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* __this, int32_t ___0_index, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, intptr_t ___3_type_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_m32F70B1E6E7AE85F0AB1FC51B153598DEAE5F462 (RuntimeObject* ___0_delegateObj, bool ___1_isFunctionPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304 (intptr_t ___0_ptr, Type_t* ___1_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
inline void FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_inline (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	((  void (*) (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2*, intptr_t, const RuntimeMethod*))FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline)(__this, ___0_ptr, method);
}
inline UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* CustomAttributeExtensions_GetCustomAttribute_TisUnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833_m26DF826A20F7C37269D72198549354AC5E8A3C6C (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___0_element, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnmanagedFunctionPointerAttribute_get_CallingConvention_m1F7BA425C1936CAA9F62483B4699A4DB52B887A6_inline (UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_AddEventCallbackCategories_m82D772243B9402773AC11E82A73A835FE8103DF6 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_eventCategories, int32_t ___1_trickleDown, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallbackRegistry__ctor_mE8515F2569FA228418791385E09A1DAAF959591A (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, const RuntimeMethod* method) ;
inline void EventCallbackRegistry_RegisterCallback_TisRuntimeObject_mB4EF7159D7E9A0E1435729B4B488CEF2DA58ACDB (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, int32_t ___2_invokePolicy, const RuntimeMethod* method)
{
	((  void (*) (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07*, int32_t, int32_t, const RuntimeMethod*))EventCallbackRegistry_RegisterCallback_TisRuntimeObject_mB4EF7159D7E9A0E1435729B4B488CEF2DA58ACDB_gshared)(__this, ___0_callback, ___1_useTrickleDown, ___2_invokePolicy, method);
}
inline void CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, int32_t ___0_useTrickleDown, const RuntimeMethod* method)
{
	((  void (*) (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*, int32_t, const RuntimeMethod*))CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE_gshared)(__this, ___0_useTrickleDown, method);
}
inline void EventCallbackRegistry_RegisterCallback_TisRuntimeObject_TisRuntimeObject_m2D9855863C5CB36B83A07D8006643A522C3E3919 (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, RuntimeObject* ___1_userArgs, int32_t ___2_useTrickleDown, int32_t ___3_invokePolicy, const RuntimeMethod* method)
{
	((  void (*) (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))EventCallbackRegistry_RegisterCallback_TisRuntimeObject_TisRuntimeObject_m2D9855863C5CB36B83A07D8006643A522C3E3919_gshared)(__this, ___0_callback, ___1_userArgs, ___2_useTrickleDown, ___3_invokePolicy, method);
}
inline bool EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_m19464A9219CFA09D521E6F6981885276025BC97A (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method)
{
	return ((  bool (*) (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07*, int32_t, const RuntimeMethod*))EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_m19464A9219CFA09D521E6F6981885276025BC97A_gshared)(__this, ___0_callback, ___1_useTrickleDown, method);
}
inline bool EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_TisRuntimeObject_m9E686DAEC604B7BFF8BF99DBDEC655151A08378C (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method)
{
	return ((  bool (*) (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0*, int32_t, const RuntimeMethod*))EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_TisRuntimeObject_m9E686DAEC604B7BFF8BF99DBDEC655151A08378C_gshared)(__this, ___0_callback, ___1_useTrickleDown, method);
}
inline int64_t EventBase_1_TypeId_m08396DED606ACD1093BEEA8D939E5DA37B797C12 (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))EventBase_1_TypeId_m4B18042A64FC5F54DF0B830CE4C9F0FC82C661A5_gshared)(method);
}
inline int32_t PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F*, const RuntimeMethod*))PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7 (ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, const RuntimeMethod* method) ;
inline int64_t EventBase_1_TypeId_m3FC722D85FBD1538CE6B96AD3364192799BF1CA6 (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))EventBase_1_TypeId_m4B18042A64FC5F54DF0B830CE4C9F0FC82C661A5_gshared)(method);
}
inline int32_t PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F*, const RuntimeMethod*))PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310 (ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, const RuntimeMethod* method) ;
inline int32_t PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F*, const RuntimeMethod*))PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_gshared_inline)(__this, method);
}
inline ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB (List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* (*) (List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline int64_t EventBase_1_TypeId_m1A2720F11AB0D624809678ADE4E6D8C250E43741 (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))EventBase_1_TypeId_m4B18042A64FC5F54DF0B830CE4C9F0FC82C661A5_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickDetector_CancelClickTracking_m93EDACD3A68DC09BD1DB229F9D390466E25E4339 (ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31* __this, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, const RuntimeMethod* method) ;
inline int64_t EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))EventBase_1_TypeId_m4B18042A64FC5F54DF0B830CE4C9F0FC82C661A5_gshared)(method);
}
inline RuntimeObject* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mE0F1FA5E6172950D35D6FD8F6708B433954C4168 (RuntimeObject* ___0_dictionary, RuntimeObject* ___1_key, RuntimeObject* ___2_defaultValue, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mE0F1FA5E6172950D35D6FD8F6708B433954C4168_gshared)(___0_dictionary, ___1_key, ___2_defaultValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void U3CU3Ec__DisplayClass3_0_1__ctor_mE792B790BEEC4F42873AE6056A077A23D0F6FE08 (U3CU3Ec__DisplayClass3_0_1_t978BDB5D5952406BBFB6E332150D230FCE274300* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass3_0_1_t978BDB5D5952406BBFB6E332150D230FCE274300*, const RuntimeMethod*))U3CU3Ec__DisplayClass3_0_1__ctor_mE792B790BEEC4F42873AE6056A077A23D0F6FE08_gshared)(__this, method);
}
inline void Func_2__ctor_mD6767DE619116219CD1567BC735C4AC96B9348CF (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisString_t_m4212A6B9DDC97D402346EC78AE3115A600469C8C (RuntimeObject* ___0_source, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorHandle_get_IsCustomAllocator_mB40C586EBB549E9D5F46BF0CDA12966E2F1CF9A1 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m94DB1A0F1293F5BAA65533ED74C41E31D71CA979 (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m94DB1A0F1293F5BAA65533ED74C41E31D71CA979_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m40C9739B189BB2A5A4B5D375C33123A039D65C2B (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m40C9739B189BB2A5A4B5D375C33123A039D65C2B_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mAEE080A594D2B54E62742BCBAC067BD86B62EE90 (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mAEE080A594D2B54E62742BCBAC067BD86B62EE90_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mDB05DADCD82C0753A10F968BC12105C013F004F6 (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mDB05DADCD82C0753A10F968BC12105C013F004F6_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m5D9AB1CF4D2E70F87BE8C5DA8BB700B0DBAEC960 (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m5D9AB1CF4D2E70F87BE8C5DA8BB700B0DBAEC960_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mF03BC6853C9DD519B47323DDAB4B990501463489 (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mF03BC6853C9DD519B47323DDAB4B990501463489_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m81CC7BB6F9FA4BD6A271BECB0E8979FAFBBFF8F2 (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m81CC7BB6F9FA4BD6A271BECB0E8979FAFBBFF8F2_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m02029B2BD79047E1295F3C1F6D403DAE546C3F79 (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m02029B2BD79047E1295F3C1F6D403DAE546C3F79_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mACF77E80482D69D54E384207E8EF83F56714FEBF (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mACF77E80482D69D54E384207E8EF83F56714FEBF_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m13B5E98249D94532DD7700C04ADA9346B6C01646 (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m13B5E98249D94532DD7700C04ADA9346B6C01646_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_mA22E1F5DC673C0DBE2D35C0E170FADEF9EE9BC53 (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_mA22E1F5DC673C0DBE2D35C0E170FADEF9EE9BC53_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m48B5E526D82D23460D26CC391BD64752F97ABF18 (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m48B5E526D82D23460D26CC391BD64752F97ABF18_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_mDAB772BAC6F20741B210B3AB37819FDEAC556936 (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_mDAB772BAC6F20741B210B3AB37819FDEAC556936_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m7CD61B8B4CCB40810552A5884C7F1EDE208688B5 (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m7CD61B8B4CCB40810552A5884C7F1EDE208688B5_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m875FDB5805D73A9DB2D203063E5CCC07999F43A7 (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m875FDB5805D73A9DB2D203063E5CCC07999F43A7_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mE947909B5D5477F068B16DF1CDB86DB6A68B6994 (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE947909B5D5477F068B16DF1CDB86DB6A68B6994_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mF5D608563990BDF4A932F444C5C91CD6791E7DE6 (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mF5D608563990BDF4A932F444C5C91CD6791E7DE6_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m7F2B3220F3366EAB71B0C62942CB678827036666 (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m7F2B3220F3366EAB71B0C62942CB678827036666_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_mB293485A46F4CD60A26427EA159A60016470DF7A (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_mB293485A46F4CD60A26427EA159A60016470DF7A_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m6AB15133D68784F1E9BB1C5CF6AF21EE4DC4FBBF (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m6AB15133D68784F1E9BB1C5CF6AF21EE4DC4FBBF_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mFBA847E240CBCFD6742ACEE692097A3686EB1478 (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mFBA847E240CBCFD6742ACEE692097A3686EB1478_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mD0F26C30D505CF393A50CEAD19D9BAAD3E77CB87 (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mD0F26C30D505CF393A50CEAD19D9BAAD3E77CB87_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m4219EEB937F0AA2846952934259518672640C2F0 (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m4219EEB937F0AA2846952934259518672640C2F0_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mAF7AEA5C34BE1F328FB3175B67928729025E5AB1 (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mAF7AEA5C34BE1F328FB3175B67928729025E5AB1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m2AC2D93055F73106FDF21A17E4B628111A55A673 (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m2AC2D93055F73106FDF21A17E4B628111A55A673_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m2BE74BAAAACB2FB8C886355218332C3D71CC870D (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2BE74BAAAACB2FB8C886355218332C3D71CC870D_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m92C729A213EC9B6599360003A73F4FF36FDCFEC5 (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m92C729A213EC9B6599360003A73F4FF36FDCFEC5_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m2B08A55873756E21BCB6D1C2CD1D3ED18D00BCA2 (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2B08A55873756E21BCB6D1C2CD1D3ED18D00BCA2_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mED77F59553BE97385BAF8D6FB358529A1E959379 (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mED77F59553BE97385BAF8D6FB358529A1E959379_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mE3B7F1A32ACB2193062CBB170B4ED9A7843325C4 (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE3B7F1A32ACB2193062CBB170B4ED9A7843325C4_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_mEEFD81D6225622D3284E00E58E9979E357EA3846 (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_mEEFD81D6225622D3284E00E58E9979E357EA3846_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC59BF07E462EBB1B63D0EEBDA144231E87EC237 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC59BF07E462EBB1B63D0EEBDA144231E87EC237_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m0D4D6107C1C882F6D813E0CC53744262582D6110 (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m0D4D6107C1C882F6D813E0CC53744262582D6110_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m20661CE34BF69BC0B801A3909158DEA04D621DEB (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m20661CE34BF69BC0B801A3909158DEA04D621DEB_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m48A94190A440E505DCB0C725DF4FE2DBDE33CCB6 (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m48A94190A440E505DCB0C725DF4FE2DBDE33CCB6_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m4DB28141C684B6B39DE44C899ECFD06EE0B7C8D4 (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4DB28141C684B6B39DE44C899ECFD06EE0B7C8D4_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_mFC9CFF15D4351863CC7ED0178D46D69735188B6F (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_mFC9CFF15D4351863CC7ED0178D46D69735188B6F_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mB4F24E1671E46B6A5A5BE881EED6B8FA573BC045 (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB4F24E1671E46B6A5A5BE881EED6B8FA573BC045_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_mC87C5E72BEAA8A1E94A6C34A486DA2BB429E48C4 (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_mC87C5E72BEAA8A1E94A6C34A486DA2BB429E48C4_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m18E7F9491A74B9BBAD80C7FA7871313EED3797D6 (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m18E7F9491A74B9BBAD80C7FA7871313EED3797D6_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_mDA389B33EA02F4831D5C7EA695532A0B10AA3EEC (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_mDA389B33EA02F4831D5C7EA695532A0B10AA3EEC_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m00D8BF626DE89E941B6C7F7DE6BDB75ACDBDA821 (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m00D8BF626DE89E941B6C7F7DE6BDB75ACDBDA821_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7C87C137316B6924C29233A2E467ADA6B8A7DCA8 (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7C87C137316B6924C29233A2E467ADA6B8A7DCA8_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m2BB43FE24726BC2669A5FF0927379742A7DA6A43 (NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2BB43FE24726BC2669A5FF0927379742A7DA6A43_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_mBDE57D9985060D3B58307A46D33E435BEE7410F4 (NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_mBDE57D9985060D3B58307A46D33E435BEE7410F4_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mEFB8E1E68865EC5B4261DB29AC8E4C467C4EFB94 (NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mEFB8E1E68865EC5B4261DB29AC8E4C467C4EFB94_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m04975597CB38CA33477F3046802FA01A5946560C (NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m04975597CB38CA33477F3046802FA01A5946560C_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mDFC0DD4650AAC132F79654F50B616DF732D38536 (NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mDFC0DD4650AAC132F79654F50B616DF732D38536_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_m00339F2317A97F4DE666D7BC4C2F2BD71D798F12 (NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_m00339F2317A97F4DE666D7BC4C2F2BD71D798F12_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m0FA5AEDDA6696B431FB7C64367D35EB510D2740A (NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m0FA5AEDDA6696B431FB7C64367D35EB510D2740A_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_m11DDDFF0EA8FBCCBD94EA172DA8E64E1A9BCB46F (NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_m11DDDFF0EA8FBCCBD94EA172DA8E64E1A9BCB46F_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mBF1EA4278622BA874802F1EE442736E67D6185C2 (NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mBF1EA4278622BA874802F1EE442736E67D6185C2_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m5A7ADFCA1C19C4C757E0C264C94AE07368AB8089 (NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m5A7ADFCA1C19C4C757E0C264C94AE07368AB8089_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m2A6BACB54D11B29827A2DC7686CB9A6E271F1785 (NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2A6BACB54D11B29827A2DC7686CB9A6E271F1785_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m1FC1B6667A9447473B93607A53FA956634D30866 (NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m1FC1B6667A9447473B93607A53FA956634D30866_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m510985F3EE136D53A615D9ECE9501552B7DAC956 (NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m510985F3EE136D53A615D9ECE9501552B7DAC956_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m48B684A93CE38CC729A9A40D9EB0EABB0A1EE549 (NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m48B684A93CE38CC729A9A40D9EB0EABB0A1EE549_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m8DF6ADCE991D8F508D027338C1667E82CD6B075F (NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m8DF6ADCE991D8F508D027338C1667E82CD6B075F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_m94D7DC77FB6C882C92C18BF66FE103BCEAB26EC4 (NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_m94D7DC77FB6C882C92C18BF66FE103BCEAB26EC4_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mA2D3D5EA3CCCAD7698FF06E24E935C5FA5F84B05 (NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mA2D3D5EA3CCCAD7698FF06E24E935C5FA5F84B05_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m9635158C65650FC350A869EBD6CAB1C50F89AFB7 (NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m9635158C65650FC350A869EBD6CAB1C50F89AFB7_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m582687BCC0935B30CB5E855EF9481583775D8D5F (NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m582687BCC0935B30CB5E855EF9481583775D8D5F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_m525E6F66B5B617418AF056ED577392B3A2DC1227 (NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_m525E6F66B5B617418AF056ED577392B3A2DC1227_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m6165D913BDBF3F9B89AF521B895ACED78E784B8A (NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m6165D913BDBF3F9B89AF521B895ACED78E784B8A_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_mB66EA7BEE3C5C596974B4D6FC6E18820727A862F (NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_mB66EA7BEE3C5C596974B4D6FC6E18820727A862F_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mB0AD337C4EA82C18D214D63D1B478193CBCA5D27 (NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB0AD337C4EA82C18D214D63D1B478193CBCA5D27_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m732AA5DD55098C318EA10B2DE4A82FA910EFB7E5 (NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m732AA5DD55098C318EA10B2DE4A82FA910EFB7E5_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mA76161D15ADAA61DE55A02DD16BB9714F3C35121 (NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mA76161D15ADAA61DE55A02DD16BB9714F3C35121_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisSubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9_mEEBCADC277F33B029A6B0666EF0F4ACB4F20EA11 (NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisSubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9_mEEBCADC277F33B029A6B0666EF0F4ACB4F20EA11_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m75E60949F4AE81A148CE446B1DC84D8E27C108CD (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m75E60949F4AE81A148CE446B1DC84D8E27C108CD_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m683C223E404B0555C6905473CEC887AC850BA0B7 (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m683C223E404B0555C6905473CEC887AC850BA0B7_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mD99AA89741F3ABE4BA39182EB4BC1ADEBBD34A19 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mD99AA89741F3ABE4BA39182EB4BC1ADEBBD34A19_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m2D4ED9F9308EEB313A60954B64E0DB259EF67CFE (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m2D4ED9F9308EEB313A60954B64E0DB259EF67CFE_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m5979892FC554CEAA78DCDEC92B686F38E61F9DB1 (NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m5979892FC554CEAA78DCDEC92B686F38E61F9DB1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_mAD887F66D285E6E91501A32BE4BB22EDACB3E3D3 (NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_mAD887F66D285E6E91501A32BE4BB22EDACB3E3D3_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m33B1BDE41C4FC3509C94E34A1A2E9976E452A0D1 (NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m33B1BDE41C4FC3509C94E34A1A2E9976E452A0D1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_mC4A0E9868E565D827FEB2117E79FD30822C9A2FD (NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_mC4A0E9868E565D827FEB2117E79FD30822C9A2FD_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m69CA451E8DF83418562F6577C370FEF240540082 (NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m69CA451E8DF83418562F6577C370FEF240540082_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_mA202A50D5E8E341C1CE333B65D9ED08181D1AB5C (NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_mA202A50D5E8E341C1CE333B65D9ED08181D1AB5C_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_mACF86E12FBF5AC701EDE1D413766634F712804AE (NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mACF86E12FBF5AC701EDE1D413766634F712804AE_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m4E449922364E9B8E4866691F93F6732CEAA7ABFD (NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m4E449922364E9B8E4866691F93F6732CEAA7ABFD_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m4CE99671753B56A03C2BA8726AF38498C63775BF (NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4CE99671753B56A03C2BA8726AF38498C63775BF_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m2B2B3C2CF331B986B51A47C36A235AA04C30AEAC (NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m2B2B3C2CF331B986B51A47C36A235AA04C30AEAC_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m744CC038AEEEB857D41E84288EAC9BFF94431F7F (NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m744CC038AEEEB857D41E84288EAC9BFF94431F7F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m34E414E2482728954419B608C89D1997EE9B9A15 (NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m34E414E2482728954419B608C89D1997EE9B9A15_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m6B41EEBC0C00FA050194DEE026E2A51FE05A8A34 (NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m6B41EEBC0C00FA050194DEE026E2A51FE05A8A34_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_m3C9F2A22CEEEFE5A903070AC581C1013599DAAE7 (NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_m3C9F2A22CEEEFE5A903070AC581C1013599DAAE7_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
inline void NativeArray_1__ctor_m0630A2E8FE16DDE58234955801207466A5D881C8 (NativeArray_1_t0ACB9B0C86A6C4EB0F75988F15C3A24D9F919F92* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0ACB9B0C86A6C4EB0F75988F15C3A24D9F919F92*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m0630A2E8FE16DDE58234955801207466A5D881C8_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArrayExtensions_Initialize_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m3A41FA005797063A3F0675A24BB256EB3E17A293 (NativeArray_1_t0ACB9B0C86A6C4EB0F75988F15C3A24D9F919F92* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0ACB9B0C86A6C4EB0F75988F15C3A24D9F919F92*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeArrayExtensions_Initialize_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m3A41FA005797063A3F0675A24BB256EB3E17A293_gshared)(___0_array, ___1_length, ___2_allocator, ___3_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___0_requiredFlags, int32_t ___1_invalidFlags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Internal_RequestAsyncReadback_1_mD92FCFF0A5712EC23031E44F71783F38034D034F (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___1_callback, AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505* ___2_nativeArrayData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Internal_RequestAsyncReadback_8_m692C8F4F6702E7C197148FE8BEF5D515C789C0E3 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___1_callback, AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505* ___2_nativeArrayData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Internal_RequestAsyncReadback_3_mDD8EC14FD70411A63B6E9860823D9EA4BF86971B (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___1_callback, AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505* ___2_nativeArrayData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Internal_RequestAsyncReadback_4_m8A6C738D493AA70208179008DC21E0FED3889C04 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_src, int32_t ___1_mipIndex, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505* ___3_nativeArrayData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Internal_RequestAsyncReadback_2_m459CD0BD2B2A2863E643D0D0FA4A23BE6DF6BB5B (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_src, int32_t ___1_size, int32_t ___2_offset, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___3_callback, AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505* ___4_nativeArrayData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Internal_RequestAsyncReadback_9_mFF677D39B192F7843DDDB13DF252C06329733A07 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_src, int32_t ___1_size, int32_t ___2_offset, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___3_callback, AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505* ___4_nativeArrayData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Internal_RequestAsyncReadback_5_mAD282E59BBD82201850D5DC22A05F7BAA4EF1DD3 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_src, int32_t ___1_mipIndex, int32_t ___2_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___3_callback, AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505* ___4_nativeArrayData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Internal_RequestAsyncReadback_6_m0A6A9A328C6D6E003DA56371F082B1EE6C3176E8 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_src, int32_t ___1_mipIndex, int32_t ___2_x, int32_t ___3_width, int32_t ___4_y, int32_t ___5_height, int32_t ___6_z, int32_t ___7_depth, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___8_callback, AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505* ___9_nativeArrayData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Internal_RequestAsyncReadback_7_mD6E8F388C0AC4AA23877A0741519BC73FBBEB20D (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_src, int32_t ___1_mipIndex, int32_t ___2_x, int32_t ___3_width, int32_t ___4_y, int32_t ___5_height, int32_t ___6_z, int32_t ___7_depth, int32_t ___8_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___9_callback, AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505* ___10_nativeArrayData, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m1EAF77ABE62FF1E1E3B1BD150AE4C63D7577E7B2 (NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m1EAF77ABE62FF1E1E3B1BD150AE4C63D7577E7B2_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m50EA3632EB1CDEF0AC4FA6E77CE06A357B7F3BAA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m50EA3632EB1CDEF0AC4FA6E77CE06A357B7F3BAA_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_InternalSetComputeBufferNativeData_m8AD3F2597301A0E6A444F36909BEC29667A08B11 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, intptr_t ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, int32_t ___5_elemSize, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_m37DB29CABCCCB94E4502465E2E50DDF02478F4BD (NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_m37DB29CABCCCB94E4502465E2E50DDF02478F4BD_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_mB0E36A30678F290202CF790F64FDABD61C0E4FDB_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_mB0E36A30678F290202CF790F64FDABD61C0E4FDB_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m8AAE2A39FA31466921CBEBECF80387284719501F (NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m8AAE2A39FA31466921CBEBECF80387284719501F_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m3634617FCC0586139135B4C5B15EB5E4DA8E35EA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m3634617FCC0586139135B4C5B15EB5E4DA8E35EA_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m1417D907BD32B676780C55DC924AB1764F94842F (NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m1417D907BD32B676780C55DC924AB1764F94842F_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m663BD9D7D3900AFE1F17906E4ACD10A7ABE007AE_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m663BD9D7D3900AFE1F17906E4ACD10A7ABE007AE_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7 (Type_t* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_InternalSetComputeBufferData_m38538B360DFA94F1AD4BC30AF1F9EEC77766884E (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, RuntimeArray* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, int32_t ___5_elemSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_InternalSetGraphicsBufferData_mE0119D4AE443BB200D5F9999C83EF93FC4523193 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, RuntimeArray* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, int32_t ___5_elemSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_InternalSetGraphicsBufferNativeData_m77470BE717A25292C4C2EED230233EC6317C8955 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, intptr_t ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, int32_t ___5_elemSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mF5CB3F1637D18C7B5BD86C3BED07EA90E78029EA (NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mF5CB3F1637D18C7B5BD86C3BED07EA90E78029EA_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mB3AF0FE4F628350C7A4F409515FA6BB0C2B73A24_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mB3AF0FE4F628350C7A4F409515FA6BB0C2B73A24_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_mF64456E866EE1F76315840C53E63AC29EE378F0A (NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_mF64456E866EE1F76315840C53E63AC29EE378F0A_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_mCD3F2A814C3004BFC9680B8C8E62A1FCFCBD6702_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_mCD3F2A814C3004BFC9680B8C8E62A1FCFCBD6702_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentFastPath_mE4FD8E93F76B2C79314274295DBB74B0FC250EA0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Type_t* ___0_type, intptr_t ___1_oneFurtherThanResultValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* Component_GetComponentInChildren_m4050899166730E8F6629B895597CF4ECC894B597 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Type_t* ___0_t, bool ___1_includeInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* Component_GetComponentInParent_mA402B7F87D23E039BB045630E5EA3AC020D8A7C2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Type_t* ___0_t, bool ___1_includeInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsForListInternal_m7B3A61AF88E5E6F845817EC28E22FD39944EFBC7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Type_t* ___0_searchType, RuntimeObject* ___1_resultList, const RuntimeMethod* method) ;
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___0_includeInactive, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540_gshared)(__this, ___0_includeInactive, method);
}
inline void Component_GetComponentsInChildren_TisRuntimeObject_m7AFED511573059D0DA49E1966117E7F80F9112CC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_result, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m7AFED511573059D0DA49E1966117E7F80F9112CC_gshared)(__this, ___0_includeInactive, ___1_result, method);
}
inline void GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743_gshared)(__this, ___0_includeInactive, ___1_results, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInParent_TisRuntimeObject_m28B780AC357FCF95670D111FF933290A5B13FEAB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInParent_TisRuntimeObject_m28B780AC357FCF95670D111FF933290A5B13FEAB_gshared)(__this, ___0_includeInactive, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInParent_TisRuntimeObject_mD5BE6FB438CCF9B0E707282DA2D24E98C12BF845 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentsInParent_TisRuntimeObject_mD5BE6FB438CCF9B0E707282DA2D24E98C12BF845_gshared)(__this, ___0_includeInactive, method);
}
inline void GameObject_GetComponentsInParent_TisRuntimeObject_mC4527CDE5CC2128D895CDAC4B85A6DE25028205C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_includeInactive, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_results, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))GameObject_GetComponentsInParent_TisRuntimeObject_mC4527CDE5CC2128D895CDAC4B85A6DE25028205C_gshared)(__this, ___0_includeInactive, ___1_results, method);
}
inline bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, RuntimeObject**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___0_component, method);
}
inline int32_t UnsafeUtility_SizeOf_TisLayoutCacheData_t1C9D16AB3B4EF0EC7A51422286D2E84ABBDEEA92_m6AD907969ED820C7B597DBDE5A62251F0BAAEBB5_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisLayoutCacheData_t1C9D16AB3B4EF0EC7A51422286D2E84ABBDEEA92_m6AD907969ED820C7B597DBDE5A62251F0BAAEBB5_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisLayoutComputedData_t37CD62B9A6B59283679F1126AD9C4BB9FD15B9C1_m8E2B97AA6AB1779936EAA4893F7CE096024BCE54_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisLayoutComputedData_t37CD62B9A6B59283679F1126AD9C4BB9FD15B9C1_m8E2B97AA6AB1779936EAA4893F7CE096024BCE54_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisLayoutConfigData_t6B1D36F00422E7EB7C51CF9103FC9D522B5481F4_m6BD3023222CB03E8462517B9F40193D9A085A1C2_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisLayoutConfigData_t6B1D36F00422E7EB7C51CF9103FC9D522B5481F4_m6BD3023222CB03E8462517B9F40193D9A085A1C2_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisLayoutNodeData_t1D56A4D5BFA0B262C0B70873ADB2B38C6A677858_mF86E7726D232D0C06A598629B29651A120967D95_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisLayoutNodeData_t1D56A4D5BFA0B262C0B70873ADB2B38C6A677858_mF86E7726D232D0C06A598629B29651A120967D95_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisLayoutStyleData_t4ECF9E0634219C4C7360FAFA6379DCCB964F2E2F_mC9FE389F5DD604C6212396EF5EB740EA25ECA488_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisLayoutStyleData_t4ECF9E0634219C4C7360FAFA6379DCCB964F2E2F_mC9FE389F5DD604C6212396EF5EB740EA25ECA488_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, intptr_t ___0_data, int32_t ___1_nativeBufferStartIndex, int32_t ___2_computeBufferStartIndex, int32_t ___3_count, int32_t ___4_elemSize, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_mE40BACF79A091E5731B90216509ED13E487D32B2 (NativeArray_1_tCD560B25A8B4F8654C3DF3626A5F13D31353E25A ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tCD560B25A8B4F8654C3DF3626A5F13D31353E25A, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_mE40BACF79A091E5731B90216509ED13E487D32B2_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m8D2118F47D07AF9F9E22DF33134FDD73C68EE9EC_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m8D2118F47D07AF9F9E22DF33134FDD73C68EE9EC_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mDDFF527C13230D02E56283C52100BF7950B93FF8 (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mDDFF527C13230D02E56283C52100BF7950B93FF8_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m9FA55C1771EBABDC880FF9C5C91C840EA25173B4_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m9FA55C1771EBABDC880FF9C5C91C840EA25173B4_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_mCD5DAB337FAF53E4D21DDD2F5AEF09BDB80EBFE2 (NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_mCD5DAB337FAF53E4D21DDD2F5AEF09BDB80EBFE2_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_mF4C788B8223AC24A8099C9B543B70454D86FE1C9_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_mF4C788B8223AC24A8099C9B543B70454D86FE1C9_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mC693FE6F866F8AD8F97901E37F0B21464E6C292D (NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mC693FE6F866F8AD8F97901E37F0B21464E6C292D_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mF03AC59110A26BC79993B3466BC2B83DDEBD44BE_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mF03AC59110A26BC79993B3466BC2B83DDEBD44BE_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD08EACF1B4D85335818C197334D6F9E10225992E (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD08EACF1B4D85335818C197334D6F9E10225992E_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m09504C772721F76D367E7DBCF2CD3B350182B0E7 (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m09504C772721F76D367E7DBCF2CD3B350182B0E7_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_mEE9B4692F083FB78082237B38064C3E4ECAA5D96 (NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_mEE9B4692F083FB78082237B38064C3E4ECAA5D96_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0BD2704CD677D45FAEDAD35D6C7208EE167961F7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0BD2704CD677D45FAEDAD35D6C7208EE167961F7_gshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m736F4DA91F99B096FD7F086054FB31077AB480E0 (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m736F4DA91F99B096FD7F086054FB31077AB480E0_gshared)(___0_nativeArray, method);
}
inline int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m90780EC8030A711CE1682E39A74278F5F6BBD031_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m90780EC8030A711CE1682E39A74278F5F6BBD031_gshared_inline)(method);
}
inline void CommandBuffer_SetBufferData_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m4F36200EC1FF6F64F0A11D1BB8793DCE3A94E12F (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E ___1_data, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E, const RuntimeMethod*))CommandBuffer_SetBufferData_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m4F36200EC1FF6F64F0A11D1BB8793DCE3A94E12F_gshared)(__this, ___0_buffer, ___1_data, method);
}
inline void CommandBuffer_SetBufferData_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_mBF3C1E98ED861AFFF6F1517B759727C2B8B166C5 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 ___1_data, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9, const RuntimeMethod*))CommandBuffer_SetBufferData_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_mBF3C1E98ED861AFFF6F1517B759727C2B8B166C5_gshared)(__this, ___0_buffer, ___1_data, method);
}
inline void CommandBuffer_SetBufferData_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m09724A069B804345B439D7797E2F812D0C66AD48 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 ___1_data, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8, const RuntimeMethod*))CommandBuffer_SetBufferData_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m09724A069B804345B439D7797E2F812D0C66AD48_gshared)(__this, ___0_buffer, ___1_data, method);
}
inline void CommandBuffer_SetBufferData_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m6484EFC9AF5CAC6A61B7C4575465037F30F7720D (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 ___1_data, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554, const RuntimeMethod*))CommandBuffer_SetBufferData_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m6484EFC9AF5CAC6A61B7C4575465037F30F7720D_gshared)(__this, ___0_buffer, ___1_data, method);
}
inline int32_t List_1_get_Count_m714CDE1380C64F24D3FFA0C3A05220010855A1A3_inline (List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B*, const RuntimeMethod*))List_1_get_Count_m714CDE1380C64F24D3FFA0C3A05220010855A1A3_gshared_inline)(__this, method);
}
inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 List_1_get_Item_m96D208AAEBB2370590FC90F7F803453D7AE9F116 (List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 (*) (List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B*, int32_t, const RuntimeMethod*))List_1_get_Item_m96D208AAEBB2370590FC90F7F803453D7AE9F116_gshared)(__this, ___0_index, method);
}
inline int32_t List_1_get_Count_m780E93121AF45C1AE9F963A3E27BD6D79647BD6E_inline (List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF*, const RuntimeMethod*))List_1_get_Count_m780E93121AF45C1AE9F963A3E27BD6D79647BD6E_gshared_inline)(__this, method);
}
inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E List_1_get_Item_m54313A208BF733F363077C5A2C48B534128B0889 (List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E (*) (List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF*, int32_t, const RuntimeMethod*))List_1_get_Item_m54313A208BF733F363077C5A2C48B534128B0889_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49_mB020FE36A95248E17F02AFAD99294E33BE87EBB7_gshared (DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* ___0_destination, DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_m3AB80BE2651836BC6D6235533746976454F760B2_gshared (DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* ___0_destination, DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54_gshared (DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_destination, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m6AAEDA6D4101BC102C278A650ACE547DB784D03B_gshared (DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* ___0_destination, DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_m209C2AA6C05B334B5F3A8BCD998B7D82B299DA03_gshared (DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* ___0_destination, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_m6F2BA74A7DBF719AE1754F3527EEA972637626A0_gshared (DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* ___0_destination, DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD_m70F47463A76C3CEC5A60BF38409A206BE7D50A49_gshared (FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* ___0_destination, FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<FrameTiming_tD5EE8535CF7DB0D391A5E9E0DB0CBEEA0D8600AD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m7146E166797850AFFFC5C0B8AFE6FACAC714FB6B_gshared (GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* ___0_destination, GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m5E50631671535491F4124E183D496FE30921E8C9_gshared (GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* ___0_destination, GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mFE85A77CF4B3338FC9F32B0EA8E7210F35665C1B_gshared (GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* ___0_destination, GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mD479C3965ADC585B6CA62A6136D07509F042E52C_gshared (GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* ___0_destination, GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m33C6006A3976CB7B6910ED7366970B135FDC814A_gshared (GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___0_destination, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m2CA00C03921B3C30B95A8129FDEA92912124ED5E_gshared (GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___0_destination, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C_mD8743760DD56DCCB29E24BA5B8E1CF9985894AEC_gshared (GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___0_destination, GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphMarshallingStruct_tB45F92185E1A4A7880004B36591D7C73E4A2B87C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E_m83ADCB7461E31FE528831F5B88B8022C10ADE134_gshared (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___0_destination, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mFB25FA133B31E1050322787D41168D5F313B4AE7_gshared (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_destination, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0_mEA71C71CAFCA3F9ED7F25460A0A4A3FA3914F816_gshared (GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* ___0_destination, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A_m4AE6CAF77C6479EB90DB7B65987256C032E3D768_gshared (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___0_destination, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704_m68888F3441F2A44FD565D9EC942658422E97507F_gshared (HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___0_destination, HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D_m31148BC9E64E6998B9195D19EE3DC7309F795FF4_gshared (InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* ___0_destination, InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02_m09B1854526DAF2C7071C6F820280DBEE74DF86A2_gshared (IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* ___0_destination, IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectBufferAllocInfo_t144662EBC9E70E789D782D2340097DF38DCFAB02>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m1752DB1596C4C4586766BA2A8E5507DA34D09731_gshared (IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* ___0_destination, IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_m05DEEBCE948053CBFFA6C094E423741164584AF3_gshared (IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* ___0_destination, IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_m2D74F1A4370C5E1065B193D91E60173CBBD0D7D9_gshared (IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* ___0_destination, IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m3B632A22634A03CAF6057149181CAB1BD31A9740_gshared (InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* ___0_destination, InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m8C253FF157C04780CD45441FF7BD611F0F4B4F5C_gshared (InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___0_destination, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m6846F5DED6276BB72762DCFF6DEE1B40BF57BBEF_gshared (InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* ___0_destination, InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_m608B6E3A4051EA12739AA32FFDC046DDE15FC89D_gshared (InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* ___0_destination, InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31_gshared (int16_t* ___0_destination, int16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int16_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int16_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int16_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2F2ACB99CC1A9CA46487DC49524C0BB7FFD583FE_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4_gshared (int64_t* ___0_destination, int64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int64_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int64_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int64_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F_gshared (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		intptr_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		intptr_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<intptr_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m4DF13B5C2D27E38BFD7112649345659B81B99988_gshared (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_destination, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05_gshared (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_destination, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_m59D4034115D09B7995687545F7C6855F1FA51788_gshared (LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* ___0_destination, LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_m433B7A1CA94D568396DF3741053FC07B09E4BAAD_gshared (LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* ___0_destination, LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mFAAF3AF84767549D3DF70C7D527FDD5E42EAF197_gshared (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___0_destination, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E_m7F3C07C5DF89FD9E467CF118710A8F5C7660A1DB_gshared (LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* ___0_destination, LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightShadowCasterCullingInfo_tC79A492F8AA85DE1FE3AA0F5E1C023C672780D5E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C_mB299AD4CE049174320A1A22C157EF59CCDB3A6B2_gshared (LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* ___0_destination, LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LoadAudit_t417FC3BB0E7799755F8AD6FF4AB6386508CB7D0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607_m59E46AC18F0285D5A56C690CDD262F9ADA84663C_gshared (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___0_destination, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C_mBFE5AB7E5EA648284EEC0A6201B70C58BF6D4367_gshared (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___0_destination, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3_gshared (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_m9CC9BB5524CD97C8007D1EEBE09C53ED6D819499_gshared (MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___0_destination, MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m23A0A1DC27829526256D3EA18AF15897CD688CB4_gshared (ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___0_destination, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisName_t9E47EF25D1808C27515EB99D71DB90E187AC1354_m8A9793514C049D29935B8879F1ABE6C9ADB6728B_gshared (Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* ___0_destination, Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		Name_t9E47EF25D1808C27515EB99D71DB90E187AC1354* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4_m92D158431A5BC9D2B05C80575A0DDA8B5ED9B213_gshared (NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* ___0_destination, NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NativePassAttachment_t55DBA5EF1FDFC2F35EF13D395908A90497585ED4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7877A89A8912BD549B31F67DAC4FEEE193752C28_gshared (NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* ___0_destination, NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9_m718F6BA93DE096A72722F7717D6DF440848E00B6_gshared (NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* ___0_destination, NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NativeTextElementInfo_t22D74EF7B1ACD2E352A7F6EBEB13B6421F0916A9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m1344A30C8C64641C8CB6DB508EC56FE1BF15F736_gshared (NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___0_destination, NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRuntimeObject_mD13EEA1538F26A567D15A7615D8851A427DFD15A_gshared (RuntimeObject** ___0_destination, RuntimeObject** ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		RuntimeObject** L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		RuntimeObject** L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_m43F8A4AC2388A9F0C27AB0A185085F53623608CA_gshared (OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* ___0_destination, OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933_m5A003E688413079C66237DE790878F634A60F8EB_gshared (OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* ___0_destination, OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderDerivedData_tF558D611762DC3E3DDB33625EEC5CF5A07F18933>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB_mC6AFBBAA2DFE1E74FF820515977ACF76A6F110EC_gshared (OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* ___0_destination, OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderMipBounds_t8054D1DF47047C9BFC6D7C77F703BCE6EA4779BB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7_mED6034C6AE7A91FD3482A1B2F2F57DC6CAEC124F_gshared (OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* ___0_destination, OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_mB35746D9853EBB9E5ABDFA095D7C5B7C58C8B51F_gshared (OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* ___0_destination, OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m0E5023F31322576D419474CB9F7795E2E5D7688C_gshared (OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* ___0_destination, OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_m2C86E0E5D4E10481221216636DD7BC3BDD8A5214_gshared (PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* ___0_destination, PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m41BC15726CAB8F70CD000CB3674D3128237FE452_gshared (PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* ___0_destination, PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_m1C1B67C346EEED0CD456B9E87D080590068B3082_gshared (PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* ___0_destination, PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_m9E7E2846C3D4BCC5B682D0E2EAEABACFEEE1845E_gshared (PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* ___0_destination, PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassOutputData_t8EA364E560775D19D285839BA06710B337503E0D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m39B28318F5BDEAE4BD94956E767CC9704364FEE2_gshared (PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* ___0_destination, PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81_m53B76166E7C643B991C527349F0CB94CF181551D_gshared (PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81* ___0_destination, PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PerLight2D_t71709AC145689F2E850FEE9930D6E9373B627D81>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_mFFA415BC5699C28FB7D9351423688F092CD77B8A_gshared (PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0* ___0_destination, PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F_gshared (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___0_destination, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m98F8F240CF9617ADC53CB29DC7D50C943055F818_gshared (PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C* ___0_destination, PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m52BBDC9369F0B2213AC12BE9396E3416598DB060_gshared (PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12* ___0_destination, PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA_gshared (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFFD97FF079AD2A975D7DF2A78BA8D205567AB2FD_gshared (RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* ___0_destination, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7_gshared (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_destination, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mA76873E6FBF3E2A2C2C393A6FBA33ACF4BB2323E_gshared (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___0_destination, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F_m79B934C6299FBEAD050C8623DEECA5910C785A77_gshared (ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___0_destination, ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m92FE1E0AD06DBA4DEAFD8CF4FCB25C5206BE61BA_gshared (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_destination, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m6894206E85F92C7E4AF252F3E44348C8831A8A95_gshared (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___0_destination, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_m3E9036AC6B2F145C0BD1D5BF478C68862E3D162D_gshared (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* ___0_destination, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68_mCC5FE82DA6115518D0515F505693D2403D91255F_gshared (RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* ___0_destination, RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RendererListLegacyResource_tEF05A444F7845E04F5E6568549AF26D434AD1B68>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214_m8C5EFDBB84C3693069DECF855A3A029189508D96_gshared (RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* ___0_destination, RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RendererListResource_tCB75EF1874F8A294101A45F937987CC314B92214>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_mE56E868D1E861AD9139DDD68E2FC6520686F0235_gshared (ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* ___0_destination, ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m487A364CEA8D45CA1019912E652DBE060211AD52_gshared (ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* ___0_destination, ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_m7A2C6E00E5CCE631EFDFD1737985A5805815B52F_gshared (ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* ___0_destination, ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_mDEF8860657F738E1C37779358F5FC2EC8B4F795D_gshared (ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* ___0_destination, ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mCCC311A9CB3BBFDF387DB99FA39A44D1D64A739F_gshared (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___0_destination, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3_mA466B3EC6F5C5235453D952AF18AAD4C75654FD6_gshared (ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3* ___0_destination, ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowEdge_t9B99D17786729B2E4CDBEF396B52B6E49B3D55A3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m44539DB4218E8B9D6803A1DB854D6A394284EC2F_gshared (ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* ___0_destination, ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF_mB33B125C7A1AC219217D2366979A4B5E8EEEB129_gshared (ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* ___0_destination, ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5_m12B84C7512D4AB965886549A8F87C4ADA8C255E9_gshared (ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* ___0_destination, ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShapeControlPoint_tFB166AFC7B226867782300A7448C406D6DE6F8F5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m94E6E2313F69F3768A56E42612429E5C38D5FAA2_gshared (SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* ___0_destination, SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106_mC66BC9906CD26C4203D0566DC87425459D5F94EE_gshared (SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* ___0_destination, SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SmallIntegerArray_tDC55C2B2EF90CB455909CEE2EFF59B5C50BBE106>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_m7994A64D0123C15A209C4D252F012167DEEFCA46_gshared (SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___0_destination, SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70_m62F0A1933499CAFC1B7396FFAB0569A5F700942A_gshared (SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70* ___0_destination, SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SplinePointMetaData_t2CF2683AF64DE8F3E27100C4680176B11D945E70>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB_mA774A7373AAC35BA5E6344386892BD09BFF91407_gshared (SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB* ___0_destination, SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SpriteShapeGeneratorStats_t1E3B98A473A38856AA128EA98CA3CDB4C65DB0FB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377_mBFFDC70AF7C7288885211812EC88572F01A7A4E9_gshared (SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377* ___0_destination, SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SpriteShapeGeometryInfo_tFCB5625E68EA832829F4A6EE2A0E25A1FD18E377>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501_m7AD0BECEC9B54891D69D6D125E15C046BF75DF4A_gshared (SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501* ___0_destination, SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SpriteShapeMetaData_t4BE8536E08C9D310F1CD53928F802D0B9439A501>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5_mA421BF5B036FC8DAF8C4DCB2B32BCB63652EBBC7_gshared (SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5* ___0_destination, SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SpriteShapeSegment_tB32CE039E823A27997165CD087F6DE1906C4C8D5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mC763D241ED329703E317A747036299F8CBB5044C_gshared (SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4* ___0_destination, SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisStoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292_mF8CA7DBA4C0513981099CE00AEC5A00DBBF590CB_gshared (StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* ___0_destination, StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<StoreAudit_t9E8FF144788FDFF9C68E912C5BB87C533F860292>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m5673359DA14F42D418757E17AA8B63D5D9CCC337_gshared (SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* ___0_destination, SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9_mF6F7C1814773F69C958C41B232379EBD4896E28F_gshared (SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* ___0_destination, SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026_m32A23337029ABE0E84B9CF615FBDADE927B6BC4F_gshared (SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* ___0_destination, SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_m15B0C879197615CE8FBB0E507065369653A60CEB_gshared (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___0_destination, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mB9203CCBA27231FC655442726FF84EF63FA9164C_gshared (TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* ___0_destination, TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUEncroachingSegment_t4B5747FEABEE5473FDE3D8FD80213DAF038BFB95_m5E22A8DBFA1EB5078D226A7573488E8D4F29150D_gshared (UEncroachingSegment_t4B5747FEABEE5473FDE3D8FD80213DAF038BFB95* ___0_destination, UEncroachingSegment_t4B5747FEABEE5473FDE3D8FD80213DAF038BFB95* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UEncroachingSegment_t4B5747FEABEE5473FDE3D8FD80213DAF038BFB95* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UEncroachingSegment_t4B5747FEABEE5473FDE3D8FD80213DAF038BFB95* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UEncroachingSegment_t4B5747FEABEE5473FDE3D8FD80213DAF038BFB95>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_m675176C927D2071817427A6217082CEF618E1611_gshared (UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE* ___0_destination, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48_m18AFD09C3FE27B8C36C9DF3C60BA229EF8B0F9AE_gshared (UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48* ___0_destination, UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UEvent_tAA238B4F530A2AB0CA3D77B5D6AB2BA12E5D1F48>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_mE863F0DCE46432BE1828F28D71C0A43799F33DE6_gshared (UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5* ___0_destination, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE_m7EAB6440554D87A8B7A4F45C2FA7D7F068BDC9B8_gshared (UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE* ___0_destination, UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UHull_t120C7AC3AB30ADD49845481C37359ADE2DB360EE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint16_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint16_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint16_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908_gshared (uint64_t* ___0_destination, uint64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint64_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint64_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint64_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisURPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9_mA5606AC3FC8189982A0ACF7B89C9843420DFB899_gshared (URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* ___0_destination, URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD_m6774C630CC6A44BA612763FD4F97B5A8CF2AA84B_gshared (UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD* ___0_destination, UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9_m92E3E23114DB2D2D46E537DEB6502584A51CEA20_gshared (UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9* ___0_destination, UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUTriangle_t4AE58A93753064D88E46927E12725F5BCD799547_mB47A4C2FCE2AD504A380F3BC267F036B7D23B598_gshared (UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547* ___0_destination, UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUTriangle_t8058F44B73B054F659C538A0787B0A3DCEF08A3E_m042125B6EC91F7C9508BA1183BE6F9D076ED7A54_gshared (UTriangle_t8058F44B73B054F659C538A0787B0A3DCEF08A3E* ___0_destination, UTriangle_t8058F44B73B054F659C538A0787B0A3DCEF08A3E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UTriangle_t8058F44B73B054F659C538A0787B0A3DCEF08A3E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UTriangle_t8058F44B73B054F659C538A0787B0A3DCEF08A3E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UTriangle_t8058F44B73B054F659C538A0787B0A3DCEF08A3E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_destination, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m4D4024BA66A2549F3712E54CBBD60CA1C70EF840_gshared (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_destination, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2ECC58795F80608DCE149900D7BF78998799A046_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_destination, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mB63FF1B03BD081ACDE9355ECF72840C863C44004_gshared (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___0_destination, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mD33F0334F37E4CBF4BBF4008EA599ECF998329B8_gshared (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___0_destination, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m79148948778E3104E3C071F66CC59832555DFCAD_gshared (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* ___0_destination, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_m274E314A6717CAF400EF0120DB9D11F934E8BE39_gshared (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* ___0_destination, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB_gshared (Il2CppFullySharedGenericAny* ___0_destination, Il2CppFullySharedGenericAny* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1 = ___0_destination;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		V_1 = L_2;
		uint8_t* L_3 = V_1;
		Il2CppFullySharedGenericAny* L_4 = ___1_source;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		V_2 = L_5;
		uint8_t* L_6 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_6);
		uint8_t* L_7 = V_0;
		uint64_t L_8 = ___2_elementCount;
		int32_t L_9;
		L_9 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_3), L_7, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_8), L_9)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_002f:
	{
		Il2CppFullySharedGenericAny* L_10 = ___0_destination;
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		V_2 = L_11;
		uint8_t* L_12 = V_2;
		Il2CppFullySharedGenericAny* L_13 = ___1_source;
		uint8_t* L_14;
		L_14 = il2cpp_unsafe_as_ref<uint8_t>(L_13);
		V_1 = L_14;
		uint8_t* L_15 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_15);
		uint8_t* L_16 = V_3;
		uint64_t L_17 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20;
		L_20 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106, L_19);
		V_4 = L_20;
		intptr_t L_21;
		L_21 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_12), L_16, (uint32_t)((int32_t)(uint32_t)L_17), L_21, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisdouble2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_m3D2C0263B68F4D44243553B23C0A0C14E95E2322_gshared (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* ___0_destination, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_mE1C20BE133A63D6CC6948C9487F57339C0BC8F32_gshared (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___0_destination, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m1FE843767EBB89D4C9C6B1733207A4734A84E113_gshared (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m01F6470836C56C7320DCDD3F7E32BED921C0F96B_gshared (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___0_destination, float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float4_t89D9A294E7A79BD81BFBDD18654508532958555E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m51100B40C91645487D1AAD6E5794EC56F2A63181_gshared (float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* ___0_destination, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF32F9299CAEB9B2AB5CDA311A60410A07602CED7_gshared (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* ___0_destination, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m0FAE5C1803884C2AD6E5E9A6FD4F19EF557234F7_gshared (int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* ___0_destination, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisint4_tBA77D4945786DE82C3A487B33955EA1004996052_m73E2D0C74A5472DCD4BD6EDC9129323AF4118272_gshared (int4_tBA77D4945786DE82C3A487B33955EA1004996052* ___0_destination, int4_tBA77D4945786DE82C3A487B33955EA1004996052* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int4_tBA77D4945786DE82C3A487B33955EA1004996052>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D_gshared (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_destination, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisquaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_m52E1497C43DE412479D7444BCD2225259751DD64_gshared (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* ___0_destination, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m374FD45DB3712CE8C4E9C2E21951BF4B61FE868D_gshared (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* ___0_destination, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPathArguments_t445220F54870AED8F8384306CF72A316887AD98C_m23AC459C79425F5C0FDE188A5A16C5133D49AFE6_gshared (PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* ___0_destination, PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PathArguments_t445220F54870AED8F8384306CF72A316887AD98C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PathArguments_t445220F54870AED8F8384306CF72A316887AD98C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1_m167F3C32DC24A2213A702C1202291926D9812795_gshared (PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* ___0_destination, PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_m27C842FDDC4609D12CC008E33EE82FE9F88ABF2B_gshared (PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* ___0_destination, PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_mFAC4CA3124027F9D2ACDDEEAED00CC1B73CCB7C5_gshared (SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* ___0_destination, SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_mDD4BB16024FE8319599CDD76F5E7529158D977F7_gshared (Info_tA3039772991DEEDBC29A00439A055C5166133A27* ___0_destination, Info_tA3039772991DEEDBC29A00439A055C5166133A27* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Info_tA3039772991DEEDBC29A00439A055C5166133A27* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Info_tA3039772991DEEDBC29A00439A055C5166133A27* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Info_tA3039772991DEEDBC29A00439A055C5166133A27>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInfo_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84_m4459B99AC69CF7BAD0540083B494271EC495A353_gshared (Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* ___0_destination, Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m602BF5309F0C6B80514810B5E212FF9AE24BAF58_gshared (Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* ___0_destination, Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Request_tAA55F47806E39B0E19B53273DCBFB5CF457F9187>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightMeshVertex_tC5C456CBCF889B89B395DCE82DBEBA91BEA3015A_mB0F226DF4551FFF80283A8E0D536060089FE56D8_gshared (LightMeshVertex_tC5C456CBCF889B89B395DCE82DBEBA91BEA3015A* ___0_destination, LightMeshVertex_tC5C456CBCF889B89B395DCE82DBEBA91BEA3015A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightMeshVertex_tC5C456CBCF889B89B395DCE82DBEBA91BEA3015A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightMeshVertex_tC5C456CBCF889B89B395DCE82DBEBA91BEA3015A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightMeshVertex_tC5C456CBCF889B89B395DCE82DBEBA91BEA3015A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mAE7A77FA8C0635FAB0E0B125C31FDF0DDAB972D0_gshared (BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___0_destination, BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m748375D298CF0CFDB00586CA14508B83AFF1EABE_gshared (TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___0_destination, TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_mCCC9E64E51DF62CEBFC029AB9042DF9EE6ED4553_gshared (OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* ___0_destination, OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m72FFBAE30B1F456A77DD43B5E122CC44C2E7EBBE_gshared (Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___0_destination, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBrick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0_m991D7C18C9D456BE72563A3353755563F1C81E5B_gshared (Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* ___0_destination, Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m7AF8542D5D6488FC667EDE92FC22F56CE2241189_gshared (SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* ___0_destination, SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_m427CDFE46D4CC628C19ABDAB8DE106E667CA228D_gshared (CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* ___0_destination, CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_m597AEFDEA861960C01875FED55DA2DFD78E4B50C_gshared (CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* ___0_destination, CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m47BAB4AC929DEF79404CCB3EC8AA33FF067DAC26_gshared (LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* ___0_destination, LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4_m1C4B8F41C789DEE4D7E3ACD7E81859355E6AE528_gshared (RemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4* ___0_destination, RemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79_mB5CD75C4BEE7513C27FDC585D332327A552659BD_gshared (ShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79* ___0_destination, ShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_mA80B75EC509DDA1E958A97AEAF0D2B7F9E5E23D2_gshared (Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* ___0_destination, Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13_mBDA8007530D24CEAB48ECA7012DC53F72039934F_gshared (JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13* ___0_destination, JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobAngleRange_t974C3D0183C9572CE9C7D88703CABC5FAE543F13>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3_m00D442353BAD7E84F1A3D7BE8B7B9006B3B3774B_gshared (JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3* ___0_destination, JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobContourPoint_t4C410C8E8FEECD48C1DE496790BA15C88F09E3E3>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36_m0E560A7A97315D8FD4E93282CB6041DC06F9AC66_gshared (JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36* ___0_destination, JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobControlPoint_t4A1C76318BCFAEC1F3FBA7879A2FB6FD0AFB2A36>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99_mF7E37F366C7EE1702F9E6B816B8493CC73110CFE_gshared (JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99* ___0_destination, JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobCornerInfo_t4B00296B36DDE3A9780DD95B9FF3D93CD8F3FD99>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C_m929F8771E9403B15E75467FA10E465D82F2026B9_gshared (JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C* ___0_destination, JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobIntersectPoint_t0F9A7C2D6E77A6B8C54351175052D3E5691BDB0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481_mCAFD9F598B29605EEF2F950E9EDBE810F3648F69_gshared (JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481* ___0_destination, JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobSegmentInfo_tA77A98E2F21524FDF0D28D2E53452DF45FC40481>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC_m92C33413E684576A95C18CB9E2EB80D5F2E88BA1_gshared (JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC* ___0_destination, JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobShapeVertex_t630D64AD32E441EC9BC0B7B54948F861B2ECE9CC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29_m8BC240046677FB4698E4F6AEF2AF39862BE33DFF_gshared (JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29* ___0_destination, JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobSpriteInfo_t002F5BF7D329A7F7A8DA7E9CB9B923C73B1C5E29>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mB2F912B94540B16F09DB23C8409016AA5FA9FAA7_gshared (TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* ___0_destination, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E_m808B9ED32CAD5D10F627D7FD60EA2705C8DD953B_gshared (Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E* ___0_destination, Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Rune_tE8DB196113D1DBF48E710C120CC50D2AD7D5915E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BurstCompiler_CompileDelegate_TisRuntimeObject_m9016B8BD36F60ECA8159C8A7BB122B1A9CD0DC19_gshared (RuntimeObject* ___0_delegateMethod, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeObject* L_0 = ___0_delegateMethod;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_1;
		L_1 = BurstCompiler_Compile_m32F70B1E6E7AE85F0AB1FC51B153598DEAE5F462(L_0, (bool)0, NULL);
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_1, NULL);
		RuntimeObject* L_3 = ___0_delegateMethod;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_5;
		L_5 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_2, L_4, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 BurstCompiler_CompileFunctionPointer_TisRuntimeObject_m9AB9AE50036FBC10C6765A0FAC83200CAEC21384_gshared (RuntimeObject* ___0_delegateMethod, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeObject* L_0 = ___0_delegateMethod;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_1;
		L_1 = BurstCompiler_Compile_m32F70B1E6E7AE85F0AB1FC51B153598DEAE5F462(L_0, (bool)1, NULL);
		intptr_t L_2;
		memset((&L_2), 0, sizeof(L_2));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_2), L_1, NULL);
		FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_inline((&L_3), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_VerifyDelegateHasCorrectUnmanagedFunctionPointerAttribute_TisRuntimeObject_m4B6D0A0C15F61050E88A3C96EF07E76C4EF5DC85_gshared (RuntimeObject* ___0_delegateMethod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisUnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833_m26DF826A20F7C37269D72198549354AC5E8A3C6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5311420545596C9B1638507268F520A401FE62C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67C4031EAE3C5DCD4BEFE0E373EB416000EDAAAD);
		s_Il2CppMethodInitialized = true;
	}
	UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_delegateMethod;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* L_2;
		L_2 = CustomAttributeExtensions_GetCustomAttribute_TisUnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833_m26DF826A20F7C37269D72198549354AC5E8A3C6C((MemberInfo_t*)L_1, CustomAttributeExtensions_GetCustomAttribute_TisUnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833_m26DF826A20F7C37269D72198549354AC5E8A3C6C_RuntimeMethod_var);
		V_0 = L_2;
		UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UnmanagedFunctionPointerAttribute_get_CallingConvention_m1F7BA425C1936CAA9F62483B4699A4DB52B887A6_inline(L_4, NULL);
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0041;
		}
	}

IL_001d:
	{
		RuntimeObject* L_6 = ___0_delegateMethod;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral5311420545596C9B1638507268F520A401FE62C8, L_8, _stringLiteral67C4031EAE3C5DCD4BEFE0E373EB416000EDAAAD, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)L_9, NULL);
	}

IL_0041:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_VerifyDelegateIsNotMulticast_TisRuntimeObject_m5BEC9A691C1152B254CAE08B153BDB2E1344D5A5_gshared (RuntimeObject* ___0_delegateMethod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_delegateMethod;
		NullCheck(((Delegate_t*)IsInstClass((RuntimeObject*)L_0, Delegate_t_il2cpp_TypeInfo_var)));
		DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* L_1;
		L_1 = VirtualFuncInvoker0< DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* >::Invoke(9, ((Delegate_t*)IsInstClass((RuntimeObject*)L_0, Delegate_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) <= ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___0_delegateMethod;
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E8B6F20D65FFFC0BC56A6D76C920145A8DCD2F3)), L_2, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstRuntime_GetHashCode32_TisIl2CppFullySharedGenericAny_m668EC99E5F95164E178998B9A0D2FAEC5D229CD3_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((HashCode32_1_tD2DD63035F543FDD8643588FA88CD9475D8107B9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t0BC9036A453E1965D76D9B3BE6C780F42C402BBD_m6A163700BA4F18E3DF651E0D197DA2D234B9DD7C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tE17B8F4EB1955CE37A78FDA1D0940AD6B79DE88B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_tE832AA34CAE2057E4F9E9B490B1B284D43B961AB_m9B60F0D4B41D3F3A027331725767A4FEBEC97D8B_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t7D07C74DD41061E9ED06C78A82A6E8160CB46E07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t97F62BD9B81457B3C951E4731A189682A75B0618_m452E81BDA5B4D572CBC1C0B2FA4D5609D578A502_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t45C902BA4A85819B6C31A686FF699BD734C810A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t4B219CBD450518068824DE0C112518BC2384C721_mE16070B428834E590A710A12F880FFDB3DE9F24F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tE592078EFC6F2A37620503BFAB99FEF70B71584A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t2D0A24921EF91E7ECCFCEC7F881A27622B8F2A70_mB967F2697C91AB840A9202023B02D8465000F449_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t843A0CF337E84638F3DEB38ADAFB4FC2204CA22F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t58F74E58E137EF1DE356A985ABA4748586462B89_mF8D2B2184797A3249B22C20E9CE3037E58760AB5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t6609EC1C8FD637D0704C9D40931A83EE7EBCA23D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t69439B0894C33F9B27AD85917AD7E0DAE9016112_mAF531E97828F6EA873611A4571BDDD25F990D368_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tD3243DF9FA8B7B703E45F521152F4E500EAA808E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t655382769C4282682A84F553F5FF0B1AB97370EA_m9ACB4FE7846789D8E3F49F5DED3B35839E51B0E6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t6494BEDFB3823C50BCCE1457CC83EBABF9FC3718_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t3E06B0B953E3304DB73E71071FC7DB2646022C2C_mAB129228331E6149CB76835022FC9F8E60D2B347_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t1E9825203BCACDE03EA9806FA3B6D9667833FDB7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t18FA6B9845CACA8547C4FAEAC0C5FF7C6E487DAF_m5764084E845D08310A8F59782C5314965084EFE7_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t7F36E26E9C60DAE7E6BF03E72A6B9BEB0E70508E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t1CDF7FDFE988A5218A7D870586CD04293F25682E_mB3F1D65A7AF0C35CE47E0AAD490420B640CF00C1_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t728259C125E4C28AE80A80B41491CF221EF1B9B7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_tE8D83243564C34800FF950A808D4733A2ACB852D_mB6A684433C5061494098A9D16C1215872FC44AB3_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tDA241AE7DD0993FBFA911AC316BB51A154854AC7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobParallelForBatchProducer_1_t93B90034EC7615CA68546F4CF38E2C812CB52105_m0460A39EC62EA75F5D6D35DE720B842933C70F79_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t09ABD1A71EC5CE3684E6F1DA80681B54DB1691B5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisIl2CppFullySharedGenericAny_mDBD3D49859D60324F44B9713584BA42CD4CCB3A5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tA49B79C998BF9022A0836C168EC2089C5ABCBE43_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t82FE1DCC76AE9AF3DDDA1472151EEF68858CE976_mF406F4A8EEDB21069BF045968FB3647C0C412AB5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tBE03AFEF199A91EC38E3678A953160AFBAEA044F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t531492AAE2A0CC46F30E1151715140443DF9EBDE_m197451F45A6299E4DFC983447A2B1235A2E701F5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t772DFCA20062D55EF275D420692E6231EFE8C99A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_tFA026EED004440AB13FB96680FBB802EC06A0637_mB27A7FF33AAB386045C7BA54F75FB7741AF795F6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tDBBA29E0FF58D0BD292B04DADFEFA25FAF30082F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_tAB70A942463BA39DC3970BA6B694CFE5D0D966DD_m786D0CBF87B2E6BFCA616B6D8D6F4132F58DB29A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tEFE47363FE9BD2DA23EF9C44B91C8401015063BE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t6E436619321F6CA11F646C1D0865C3B46ED2499F_m368D6F5F31DECCC50791A2FC184DE5274DA0A313_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t0AE3CC08D24A1BE759562DBCEEA6B459AC8507E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t0827DBBBCFCD98D0F017FC5D16C42BF77EF3C7CB_m502E3720DA119E62B3950310E875FCD9F7730638_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t4200429421A827A0B5F3036C1DB9D66CCB8B0445_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t7D4041DF12531E7E97FBE35B3D9BEE667D648D1C_m87B66E17E92304247CFE304E03375B5ADC85B844_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t19BA4FD53EFCDB3494D3E641F479A304B0A42D21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_t071E29BF77D320738D7C5491E147758B1DF5A972_mAC32C7C3D3791BFA6903ACD4B038F7C44F2E5029_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tB6E735C2CEB2283242D5171F9F071C4076FEB378_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisForJobStruct_1_tF0D5C70B0548157708D433CE2F9B065804239845_m488BD3FCCAD1B7B5720EB3BA57F1E1547EE28C17_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t088700758E948CB3167EC6E10FD03B1B11125586_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tB335BE3E222FEFFBA94D48B738E26C60BB280AD4_mCED504886A1F077D04BE6D54EA15A0C341D74230_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tA3E7348CF613CEAF3CEA3485D9D30F9A483610A1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tB1699C1806AA3CB8C55AED0C5D71EF39FD806967_m6D5F673469DBCE69EA53D3E0DC781C519D7ED84D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tAF0A4B39260FE7FD741C97BD8D2F43012A7D5133_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t0E023EEFF5856D3A06085DB7B9BB8AE0F3A36A92_m83BEF73EFC16965A7D1288EC81C1F5597C702D16_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t917F3D3D5EA46CC128521D07ECFC4201E6D1B7DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tE8B0D76B9F2791E997EDC0430F5E5DC79A09DF09_m5F9489715ECAA37AB8B641DCA46F0A89D90A462C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tE91648EAFFF631BF00C9786421718E02AE8FD147_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t3D164E442296852B02B541BD69992113751E8D09_mBFB092F8DBBA717C8D4E6AD6CC012331906FC26B_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t921B60FC387B846EB96F5AE75BB67B04AB1B8563_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t9ED727D56D4E63907D11A47FADD26F3A1778FCA6_mC3EC3BAEEFF3DFFB8D871C1C68C50EC16D8BA669_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tAACED5C219BCE704BB23DEE5411688A66F4FA312_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t0E1EA68CC733192D5C0DC9BE19DEE329F74C074D_m988F1957834AD1F8063D2B90A11D3C99A5D9DF1B_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t6486E3C865F1211D498A95362EA771CDFE256DED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t00917949B940AC19091B997DCFD370DFECE38FE9_m3C646029675CC25C9D06BE2B7C4B34752E8A9255_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t33425DAD62BA77C00555B8218BCC45319A29B991_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t6EB9A6D4E1ECE62B02A7E3ACBEB37B6B25B89E7F_m1327474A75AFE89176F5E070BCCFEC18E2E9E363_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t9A899B4771FBF788C65EC3AAED858797329647AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t890D9223E4EB910E7788D46FA6ABDEDE1352182A_m96514D159AD286C785D797E437C10095BE5D8E5C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t6D9D3CEC802B9E24CA6ABA6FA982B615B2DC8196_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t9C24DB4B7EE6A1CD756F9C6708F31C9AEE702F66_m32735A0D7E89B780F844FA90D4A39893F6D1ACBD_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t5AB59BEFEDF62F7AA82DF462D661D14F572822AB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t5B7D8154095323B2AF129E93B24BC93BA2F1B833_mDDE7E31F4DA7BB727499E6D568971B4CD3415B6D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t51A883EA9A52EBE95F05710B50C0A662C53D201D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t8B199FB4EF242DFFFAD1DCD519F636EAD8F17289_mD6AAE56D82AF54522E2E58548C6EF765B39979C6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t73EDE881A4A610E09E76E2E3589D30974001309C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t424D70E5F52FE05C9A6F5A74306B282E536A5950_m3371C825174AF1CC12C4CF523B770EA787B74D24_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tB033103B595D25458BCF189B1B8FEEDC765C6DD9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t4C0B7BF9853E55BE375E3304E31593FEFCD76E16_m452BCDE130A057AC5D39927415370370E5F354A8_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t4EEE3EED6A1F40DD523EC9B520CEDF73603F903F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tA47F731959268B5473E0B848F4BB1867DC24BA49_m0ADB08E94B58501A9EEDBBE3CCA26FA2F2F6E01C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t540AB6784E401BA021A24A6FDE63F1CB91615951_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tDD02EA1BA54814C24D2D8346C8E9EF75A251A4CB_mD2B9BA89E4675718A166CB51765AF30A60A238B2_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t525093B60DF9E3EDBEC57C2CAB5538644D25195E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tBC50FEEFF2AB4106501ECCC5C93C49514F3A95E9_m71700B6DF639242958DBBAF0D70B708FBCA8836F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tAFCB1B0285DF0A149D68DB8C099B4AB4E024F6C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tF8C32BC84C78C6F7A28EEDEC58E8C5064DEC4FAE_mC23BE617F0C2C190F04261FE7C0042873B02DE1B_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t1DFA17BA969BAF3B0ABCD287BF2B61E3511BB692_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t8945D0C1062873D441B458483BA77CECF20CF088_m099D22518DABE349D2EBC1348091BB7AB19600A6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tBB94DF557F1073A1974A322A1A44C7126DA37529_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t0FA796943B0D2D4AF0282F204C8777E2571688D7_m1ACD092F5C667A34D4D34B762F7BE433DDB8E862_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t940007CBF08B5ABD14D7423675D4910FE0B9755B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tB0658A7306F669774009ADA5DB6E265BA665FD31_mEE5EB1CDD0123FC328BC532FD3C38DE0BA22F956_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t3A727467BDFEAFF7A4CB568E28A00E4D6B4EC69B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tCF007F6FD9F2D7FE1B2F0674ED2A883398ECD985_m41F6B8256DA51907C52548DD3610E514BC1CAC3F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tF27C6D205FED69279D60297E9A62238FADF949C1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t7DA9941879B20347789683661078D0F3B528FA92_mEE7AA46A6B6D93672B53EED9FE5F5A72E6BE93D6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tAC13F0ACD4FE21581D24A405FB04DC6CE62107F2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t991D9919F0467821B9AA3F6C283A7962DD7A5746_m90F7668BA98B6909311FB180037DE1A5F682F582_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t1E6FA524337B539C19D5D02E0DB5A26462E0B389_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t0750E8E7DE99CDD37B3DBB824068FA88E9F6E4C1_mCE67FB6A75ADEBFF5E71F4655846A3C5F7090CDA_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t508FCCF440E6434CFFFA2F3631E598CD0C05F692_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t380B6860108F97119E394D7D76E7A978EA6B5E0D_m2E8EDEC8017939B4524DD7D00F9210996533A958_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t14F72F5369A95C1B27EEE643C7C18A4423CA3990_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tA216BB13EE9189155009913CD6BCE46B6667EC2E_m38D4B9F331E31CA49067312E853CE17C5D7140E6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tB40823AD36588BE324C2BA3C355DFADA13F520E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t4893E7C416E7915C2BE94817517EC2CAEEA9038D_mA0A18913D2D0AB9A96A68D300970949DFD57D129_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t2F229ECC88B28D532EE6550312AB5B1B2294B745_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t50BE75CA652DEB31071FA579130333FA79653079_m80A3ED26E7050BFD31FDDAAE2E8414BB7AAE1860_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t3E1E1267782365D9D1C6E9EAD96BBC6C9E2B8BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t9EB5C9ED29911125326893A8E77EE2D636BCD32F_mE66202E3C3E907DEC5EDB2C0A8715F114B4AE6EF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t9940D5A3249D07F1B8EECA042ACC48DF71081D98_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tEE5084685EBD9FAF27CCA92C7DEFED901EFD9518_m57CE2E44B682A8897C79E6219D28332A4FE117FE_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tB565080AF7C252BCE5DD51586A5FEBEE18996C0E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tE9B102673F655EDBF297325B9BAC26D3EB778B06_mDF93F1372A78E3147EE964B10FDD47C11A560BAD_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t2B83362CA7E70B86BD1A86B8D27E4F1672407417_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_tB734C09BFD6922AB895D644BDDE01AC7A8510C72_m70C39B892FC51A321297F6E0BC020F011F5D5DC7_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tCA0BC36BEF1B0537653D2C164EBFB71E2E7FE57F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t26D49AAB3F1B079B680DAE4C2A28F2CAE89DDA72_m20CBFF16570F598FA2A8824BF4784C09E62FCA76_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tC86B716B0629811F38CCA2922A9A6E9128F7B487_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t7FF8E576D3C8BC4DD24F19FD6E0906888CAC2717_m48C2320147024B006FF2AB2AE1912119619621AB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tEEB1F167CB1FF50533D39ECB4E2F4DB8F48095BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t256A7C289152588D86B81F532D204650E6E00EB3_mFCA610F77730580DC1EC779587CF0AF8FFE68852_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t0E540E776B4BA9631D2B21027E3D44679BBFDE7E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisJobStruct_1_t1AD15154F5FCF717FDB6B0B280C49766B4D14137_m121BAD3952F93497FCBC7390F47A4F41D95E2942_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t9F79C5D3EEDC24E31844F18936B7A7152BDF014E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t4A3199F0D7FD487CFB500FD748B5B2003C22EE55_m5DA1232DB7123C86B109DF95CE22F7F5E4E37E4D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t0B497DADDE4C8A74260C67223CA08BE885726512_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t61B5A4A610410E1B5E86A3665C45C3803C7592EE_m8AB400511890A46364109096F8368C4CA63167EB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t2089B57811D9851DA3FA2E1B60AC2EC6EB561956_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_tE984E806290C7040E2250FBF1CD156D4A87ABBE3_m56DBA8A70CE0395345DB4653A6D256512E190674_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t6D41DDF544ECC8EE81B2FB170732F8772126D088_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_tB4C2158B416D17DDD248CD1F2E0DFEF8327BC4D6_m4561829ED91A55C7CFBD45460A6F4F79FCA7D82E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t4649F2A499D1914EAA249B234F1CB3520A35611B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t14561BAF37C0FAB12F40722E1948E919AA927769_mEF590D8F5CFFE96553BC225AF5681C7817D48670_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t21902CE3BB8566DD3CF37D5FBF26DDE580F687FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t27C350DE7B8F627BFCE779F296EE44797353D1D0_m193CCE88074CAFF2BBC5CC7767436D45280E3187_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t7CFB081FDD903CC5A200D3CD6E79CA92462EC9A5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t9BF1C79B2BF5FA39CE44FB1DDEFE088D8FCBC3B8_mDCB00064ED2B0BCE9427A7F8AE5DFE81E84CA8F1_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t744F317F9CFBC3EE2DF71AE33FE2D5C9DF6D2336_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t67AF5B776CBF0AFE8C876EE57FE6815F6905A9B1_m44319E8215FFB0C32EDC16C084E03ACB76AB8C67_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t67754EDF06D14076F91B36A2D64F460B2A6406DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_tF586EC68EAA3916F6C26D395EDDC6BE055272A14_mC95FDF2AC9D709157E88AE07DA519BA1E40F7D05_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t285034DF371CEE21CB88B0078A8E5924F2300E0C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t38084700F299A46ADC6D51D6FD7EB3D0F9962EDC_m39892862746C23F37D72D90975D5AF814FAE566E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t27DC634456476CF1B4E26CE9E1613932D5D5E1F2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t2697899555706F25E6AE86F2432578842EC621D1_m81120983BCB0CC307EBDE9A9161E31149D575AD4_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tE4E9A886FAEA128F91F4BB47288E327F2FB2A590_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t114C146789003F45A1EA189C449FE5E15DCC6A55_m6C3F100A2013FD886F152C98F775366959204940_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t35854EE2A1679DA8AD9F4B6EBE37867348F4D8DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t28E2228788FC00E85FBEF0B3407652A8B21D0972_m05718E362E777F5512B5D2FBB3E61EEAC4172458_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t48F9CB60083B059F824DFDCDA2D5C3954AC131F4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_tACC0AEB51A3D8EF191C11C9C8B6358DFC00DACCC_m812FE05A1D9B245688F790744CF276DB21D0AA5C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tC585CEA3A7F1AB7F02BFD57720D6DEBBA4E4006E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t961692D3952C1F6D4F30B6BAC07E9CD186C66F31_m9B85B3F2F624D2A830B87CF38F3AF795C2DF3DF7_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t38B65A784388197E4D694073DDD68712A68ECFBC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t9E9CB87132A33EEF9E532A3A703C0D285ADB71E2_m42A47534A1D14217F01678F9E49A69A9978FDC93_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t162E0FE2417CF2171436BC6E9A0524E8CD7A331D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t758AE7966A2E22F06595DCBFF5CDD219207B71E2_m0074981E038B03BE3BD7A3722F34BBA7B030CA70_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t61B99859778637445427E508875C833C26007C3F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t509445D2125F0871131DA13B592FA4A9657F5AA3_m76EA61813D784CD25276DF68FD2116ED3C6930D6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t12646CDC1DEFCCFAE4EC21C2691E3AD07CC3243D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t7A9FF3D868A2F2AD69ED514B7607FD35D7819143_m3BA4B2B37F1F68CAE2E1E8B297BAF68F76E25038_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t7397C98D3A61DF788247816CFDDCFAB68F11FF31_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_tE3940B0A77A7F084149FB706BF7F1382C2CC6894_m3A569E9347079D503672607881ECA776C2B198E8_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tF4465274EC7B7ABA123154CB3244A352EDE2086F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t81FACA0319AA796083C8ECE95C995DB3542D8A2E_m63FE0B207F291F915D0805D84B8EA4CC93F6388F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tABB39B622E5219D2DA172EACDEC8B74052BB164A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t4A21E4E3B137372075645DE6FE4A22ADC4598532_m33C2BFC6B23318AB472027B0E2DFA7EDD03A3A84_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tF6AB644D2ABBE925B3A3543F20FD5FB992312461_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t9E5F4A6DEFCAEEFDA5D7D16F86D49AF6F18DFBA0_mC868D7951E7B13E58A1845BA8CDA43F54206ECD9_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tA894B4C4BE3681992148A70D1492F8EEA6825E4E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t194E9263F9E278076331CFC3296E74ABAA89D391_mF521C55221FF0D0F2200C5A5881E77D03F6F1742_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t258221577FA59C0B1D9B188C325409BB62050DAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t7CE30E4F7E5070AEDF18707A56561EF7C715ADD9_mBA8A54E3552535D1AF17EA90471BBD5D90A1EBA1_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tC28C1D947A4D0E70163666E4692F1B1CDCEC09A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t64F389F7CF0153EAF6AB628929F2873F0FD9A0A3_m5CB40651FAD4BD498147C7FD32D719ED2FBB9593_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t844B153ACA1ED334277B6FB6C7454250AF529FB4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisParallelForJobStruct_1_t5FAFA25EADD61355075A981C5FDE8B3024C58F34_m841756BC0676293AB7A0012F688C3DCE69D1693A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tE62B31A9B7BD017DBE50F2BC947FCDED9605A714_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisTransformParallelForLoopStruct_1_t69F1C24B9377113A11116BA5B7F72F9A0FDA8459_m367C218E550F7DFA3D70382A1F6D28D8D90EBE6E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t49CA23EDF4DB68FCFD7564115E65F4D23452160A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisTransformParallelForLoopStruct_1_tBC3264BA1FE07BCEEA1B9D5852E2576F73E8314B_m772F6B242289AF1627A68911D9605723AADD703D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_tC9D36B8B37721F4D2809B01166AAF2928F55B3EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisTransformParallelForLoopStruct_1_tB280C75DF37D8BB52EB670F970BDBDA72C40572E_m06EC66901E593B74D8BA09605435B77C5E846EEF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t1C4700728BA9E409FB64757DAADF1A0CC5A44DE7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_GetHashCode64_TisIl2CppFullySharedGenericAny_m469AED5D9ACBE5277201D8FD554BBB838C1256CE_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int64_t L_0 = ((HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Value;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, int32_t ___0_useTrickleDown, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	bool V_1 = false;
	{
		V_0 = ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)IsInstClass((RuntimeObject*)__this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_3 = ((EventBase_1_t2B9B970022841F58172C0C783B7E1040BEF85AC1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___EventCategory;
		int32_t L_4 = ___0_useTrickleDown;
		NullCheck(L_2);
		VisualElement_AddEventCallbackCategories_m82D772243B9402773AC11E82A73A835FE8103DF6(L_2, ((int32_t)(1<<((int32_t)((int32_t)L_3&((int32_t)31))))), L_4, NULL);
	}

IL_0024:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallback_TisRuntimeObject_m221D8BDDC2D60A7D22B11CBCC628C7990BE1C8F9_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* V_1 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_002c;
		}
		G_B3_0 = L_4;
	}
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_5 = (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*)il2cpp_codegen_object_new(EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		EventCallbackRegistry__ctor_mE8515F2569FA228418791385E09A1DAAF959591A(L_5, NULL);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_6 = L_5;
		V_1 = L_6;
		__this->___m_CallbackRegistry = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallbackRegistry), (void*)L_6);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_7 = V_1;
		G_B4_0 = L_7;
	}

IL_002c:
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_8 = ___0_callback;
		int32_t L_9 = ___1_useTrickleDown;
		NullCheck(G_B4_0);
		EventCallbackRegistry_RegisterCallback_TisRuntimeObject_mB4EF7159D7E9A0E1435729B4B488CEF2DA58ACDB(G_B4_0, L_8, L_9, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_10 = ___1_useTrickleDown;
		CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE(__this, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallback_TisRuntimeObject_m084BF1775D11490688A8705EE6F6FFDE63E0462E_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_invokePolicy, int32_t ___2_useTrickleDown, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* V_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B2_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B1_0 = NULL;
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_0 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
		G_B1_0 = L_1;
	}
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_2 = (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*)il2cpp_codegen_object_new(EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		EventCallbackRegistry__ctor_mE8515F2569FA228418791385E09A1DAAF959591A(L_2, NULL);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = L_2;
		V_0 = L_3;
		__this->___m_CallbackRegistry = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallbackRegistry), (void*)L_3);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0019:
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_5 = ___0_callback;
		int32_t L_6 = ___2_useTrickleDown;
		int32_t L_7 = ___1_invokePolicy;
		NullCheck(G_B2_0);
		EventCallbackRegistry_RegisterCallback_TisRuntimeObject_mB4EF7159D7E9A0E1435729B4B488CEF2DA58ACDB(G_B2_0, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___2_useTrickleDown;
		CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE(__this, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallback_TisRuntimeObject_TisRuntimeObject_m7BEC6354DF13DBB505B3F5A1CACDDB9ED39ACD58_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, RuntimeObject* ___1_userArgs, int32_t ___2_useTrickleDown, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* V_1 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_002c;
		}
		G_B3_0 = L_4;
	}
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_5 = (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*)il2cpp_codegen_object_new(EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		EventCallbackRegistry__ctor_mE8515F2569FA228418791385E09A1DAAF959591A(L_5, NULL);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_6 = L_5;
		V_1 = L_6;
		__this->___m_CallbackRegistry = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallbackRegistry), (void*)L_6);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_7 = V_1;
		G_B4_0 = L_7;
	}

IL_002c:
	{
		EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* L_8 = ___0_callback;
		RuntimeObject* L_9 = ___1_userArgs;
		int32_t L_10 = ___2_useTrickleDown;
		NullCheck(G_B4_0);
		EventCallbackRegistry_RegisterCallback_TisRuntimeObject_TisRuntimeObject_m2D9855863C5CB36B83A07D8006643A522C3E3919(G_B4_0, L_8, L_9, L_10, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_11 = ___2_useTrickleDown;
		CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_RegisterCallback_TisRuntimeObject_TisIl2CppFullySharedGenericAny_mBF11474CD706E57F2E7A29006BFE03C233CE1A7B_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* ___0_callback, Il2CppFullySharedGenericAny ___1_userArgs, int32_t ___2_useTrickleDown, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TUserArgsType_t6FE3524CF9F229B1DE6FDD1C5C86E6CAAB721920 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TUserArgsType_t6FE3524CF9F229B1DE6FDD1C5C86E6CAAB721920);
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* V_1 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_002c;
		}
		G_B3_0 = L_4;
	}
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_5 = (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*)il2cpp_codegen_object_new(EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85_il2cpp_TypeInfo_var);
		EventCallbackRegistry__ctor_mE8515F2569FA228418791385E09A1DAAF959591A(L_5, NULL);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_6 = L_5;
		V_1 = L_6;
		__this->___m_CallbackRegistry = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallbackRegistry), (void*)L_6);
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_7 = V_1;
		G_B4_0 = L_7;
	}

IL_002c:
	{
		EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* L_8 = ___0_callback;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_userArgs : &___1_userArgs), SizeOf_TUserArgsType_t6FE3524CF9F229B1DE6FDD1C5C86E6CAAB721920);
		int32_t L_10 = ___2_useTrickleDown;
		NullCheck(G_B4_0);
		InvokerActionInvoker4< EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), G_B4_0, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_9: *(void**)L_9), L_10, (int32_t)0);
		int32_t L_11 = ___2_useTrickleDown;
		CallbackEventHandler_AddEventCategories_TisRuntimeObject_m743965FB860B614C76687D353B0F71F12FAD75AE(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_UnregisterCallback_TisRuntimeObject_m2E6CDD2C9FDA8EDB685996370F77E36063A68CD6_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0020;
		}
		G_B3_0 = L_4;
	}
	{
		goto IL_0028;
	}

IL_0020:
	{
		EventCallback_1_t15E400616AB56B841F72D09E503D6377E8366E07* L_5 = ___0_callback;
		int32_t L_6 = ___1_useTrickleDown;
		NullCheck(G_B4_0);
		bool L_7;
		L_7 = EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_m19464A9219CFA09D521E6F6981885276025BC97A(G_B4_0, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_UnregisterCallback_TisRuntimeObject_TisRuntimeObject_m6699A7B46A880B015AA865785EB4C432646D45B0_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0020;
		}
		G_B3_0 = L_4;
	}
	{
		goto IL_0028;
	}

IL_0020:
	{
		EventCallback_2_t34CBF6F72A351419A87A6856DE900206A609D1C0* L_5 = ___0_callback;
		int32_t L_6 = ___1_useTrickleDown;
		NullCheck(G_B4_0);
		bool L_7;
		L_7 = EventCallbackRegistry_UnregisterCallback_TisRuntimeObject_TisRuntimeObject_m9E686DAEC604B7BFF8BF99DBDEC655151A08378C(G_B4_0, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackEventHandler_UnregisterCallback_TisRuntimeObject_TisIl2CppFullySharedGenericAny_mDADB76B9253BD1CD24F2359F04039C99A52F8968_gshared (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4* __this, EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* ___0_callback, int32_t ___1_useTrickleDown, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B4_0 = NULL;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* G_B3_0 = NULL;
	{
		EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* L_0 = ___0_callback;
		V_0 = (bool)((((RuntimeObject*)(EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A0A3608A3C4012D35E5DE3B2BA646379CCF198F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_3 = __this->___m_CallbackRegistry;
		EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0020;
		}
		G_B3_0 = L_4;
	}
	{
		goto IL_0028;
	}

IL_0020:
	{
		EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E* L_5 = ___0_callback;
		int32_t L_6 = ___1_useTrickleDown;
		NullCheck(G_B4_0);
		bool L_7;
		L_7 = ((  bool (*) (EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85*, EventCallback_2_t6344509DF1241099F774ABCFD5A82141C5D35B6E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(G_B4_0, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickDetector_ProcessEvent_TisRuntimeObject_m5088E5F9DF807F9769E59A932191695559200880_gshared (ClickDetector_t6B5A82C99CFD12E051D8E84A7C8F7488355B8F31* __this, PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* ___0_evt, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_TypeId_m08396DED606ACD1093BEEA8D939E5DA37B797C12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_TypeId_m1A2720F11AB0D624809678ADE4E6D8C250E43741_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_TypeId_m3FC722D85FBD1538CE6B96AD3364192799BF1CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_t2637736704939772A86A2904BCFD1B314097DD1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_t4941B5AE834AA028696C83756491CE8884F30DDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_t7D3D212E8AD9C53105AAC51DBD4FA5F700586F68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_tB8AF17419B0E6B39E32F8925FCA535F5CF5C79D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B25_0 = 0;
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_0 = ___0_evt;
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(5, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_0);
		il2cpp_codegen_runtime_class_init_inline(EventBase_1_t7D3D212E8AD9C53105AAC51DBD4FA5F700586F68_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = EventBase_1_TypeId_m08396DED606ACD1093BEEA8D939E5DA37B797C12(EventBase_1_TypeId_m08396DED606ACD1093BEEA8D939E5DA37B797C12_RuntimeMethod_var);
		if ((!(((uint64_t)L_1) == ((uint64_t)L_2))))
		{
			goto IL_0019;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_3 = ___0_evt;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_6 = ___0_evt;
		ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_6, NULL);
		goto IL_0109;
	}

IL_002d:
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_7 = ___0_evt;
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_7);
		int64_t L_8;
		L_8 = VirtualFuncInvoker0< int64_t >::Invoke(5, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_7);
		il2cpp_codegen_runtime_class_init_inline(EventBase_1_t4941B5AE834AA028696C83756491CE8884F30DDE_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = EventBase_1_TypeId_m3FC722D85FBD1538CE6B96AD3364192799BF1CA6(EventBase_1_TypeId_m3FC722D85FBD1538CE6B96AD3364192799BF1CA6_RuntimeMethod_var);
		V_1 = (bool)((((int64_t)L_8) == ((int64_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00c1;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_11 = ___0_evt;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline(L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_13 = ___0_evt;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_inline(L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B9_0 = ((((int32_t)((int32_t)(L_14&1))) == ((int32_t)1))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B9_0 = 0;
	}

IL_0058:
	{
		V_2 = (bool)G_B9_0;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_16 = ___0_evt;
		ClickDetector_StartClickTracking_mF87B35BA2F55B42F47709D89FA651EEFCE615CE7(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_16, NULL);
		goto IL_00be;
	}

IL_0068:
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_17 = ___0_evt;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_18)
		{
			goto IL_007d;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_19 = ___0_evt;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B14_0 = ((((int32_t)((int32_t)(L_20&1))) == ((int32_t)0))? 1 : 0);
		goto IL_007e;
	}

IL_007d:
	{
		G_B14_0 = 0;
	}

IL_007e:
	{
		V_3 = (bool)G_B14_0;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_008e;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_22 = ___0_evt;
		ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_22, NULL);
		goto IL_00be;
	}

IL_008e:
	{
		List_1_tBDD12EAD3C5C46706730C230F223EE020C6822D6* L_23 = __this->___m_ClickStatus;
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_24 = ___0_evt;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_inline(L_24, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_23);
		ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* L_26;
		L_26 = List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB(L_23, L_25, List_1_get_Item_m97E4330A4B3A01D99AD2ACC1BAE011F8FD18C7BB_RuntimeMethod_var);
		V_4 = L_26;
		ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* L_27 = V_4;
		NullCheck(L_27);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28 = L_27->___m_Target;
		V_5 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00bd;
		}
	}
	{
		ButtonClickStatus_tD4248512DB59E16501C4DDB6EDC2C6DE04290470* L_30 = V_4;
		NullCheck(L_30);
		L_30->___m_LastPointerDownTime = ((int64_t)0);
	}

IL_00bd:
	{
	}

IL_00be:
	{
		goto IL_0109;
	}

IL_00c1:
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_31 = ___0_evt;
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_31);
		int64_t L_32;
		L_32 = VirtualFuncInvoker0< int64_t >::Invoke(5, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_31);
		il2cpp_codegen_runtime_class_init_inline(EventBase_1_tB8AF17419B0E6B39E32F8925FCA535F5CF5C79D2_il2cpp_TypeInfo_var);
		int64_t L_33;
		L_33 = EventBase_1_TypeId_m1A2720F11AB0D624809678ADE4E6D8C250E43741(EventBase_1_TypeId_m1A2720F11AB0D624809678ADE4E6D8C250E43741_RuntimeMethod_var);
		V_6 = (bool)((((int64_t)L_32) == ((int64_t)L_33))? 1 : 0);
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00e0;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_35 = ___0_evt;
		ClickDetector_CancelClickTracking_m93EDACD3A68DC09BD1DB229F9D390466E25E4339(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_35, NULL);
		goto IL_0109;
	}

IL_00e0:
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_36 = ___0_evt;
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_36);
		int64_t L_37;
		L_37 = VirtualFuncInvoker0< int64_t >::Invoke(5, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_36);
		il2cpp_codegen_runtime_class_init_inline(EventBase_1_t2637736704939772A86A2904BCFD1B314097DD1E_il2cpp_TypeInfo_var);
		int64_t L_38;
		L_38 = EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D(EventBase_1_TypeId_mA90FE9E21D00125CFC53652D23DB65FD2574D60D_RuntimeMethod_var);
		if ((!(((uint64_t)L_37) == ((uint64_t)L_38))))
		{
			goto IL_00f8;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_39 = ___0_evt;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_inline(L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B25_0 = ((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		goto IL_00f9;
	}

IL_00f8:
	{
		G_B25_0 = 0;
	}

IL_00f9:
	{
		V_7 = (bool)G_B25_0;
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_0109;
		}
	}
	{
		PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* L_42 = ___0_evt;
		ClickDetector_SendClickEvent_m3AC03E996C28D79AAB47D49BEA01887AFF21B310(__this, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_42, NULL);
	}

IL_0109:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m27201A0D92B39DBDD10227D96E3B66AF07DA924D_gshared (RuntimeObject* ___0_dictionary, RuntimeObject* ___1_key, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		RuntimeObject* L_1 = ___1_key;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mE0F1FA5E6172950D35D6FD8F6708B433954C4168(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_GetValueOrDefault_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m10948CC318B59EE0179567DC22D028973DF073FF_gshared (RuntimeObject* ___0_dictionary, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_TKey_t5925DFE690058CBAB61EC7E93512AEF6D32862C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t5925DFE690058CBAB61EC7E93512AEF6D32862C1);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
	memset(V_0, 0, SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
	{
		RuntimeObject* L_0 = ___0_dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_key : &___1_key), SizeOf_TKey_t5925DFE690058CBAB61EC7E93512AEF6D32862C1);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
		InvokerActionInvoker4< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_2: *(void**)L_2), (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_tFEE7DCFC3B904D417796C332A4AFBE5C1298EA56);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mE0F1FA5E6172950D35D6FD8F6708B433954C4168_gshared (RuntimeObject* ___0_dictionary, RuntimeObject* ___1_key, RuntimeObject* ___2_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_dictionary;
		RuntimeObject* L_3 = ___1_key;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, L_3, (&V_0));
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_5 = ___2_defaultValue;
		return L_5;
	}

IL_001b:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionExtensions_GetValueOrDefault_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m64F62F848FC640FEA0A7176567655B4C1E6783AF_gshared (RuntimeObject* ___0_dictionary, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny ___2_defaultValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_TKey_tA3F6A7E1955A82041CECC138C619409DAB9C8BC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tA3F6A7E1955A82041CECC138C619409DAB9C8BC3);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
	const Il2CppFullySharedGenericAny L_6 = L_5;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
	memset(V_0, 0, SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_dictionary;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_key : &___1_key), SizeOf_TKey_tA3F6A7E1955A82041CECC138C619409DAB9C8BC3);
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_3: *(void**)L_3), (Il2CppFullySharedGenericAny*)V_0);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___2_defaultValue : &___2_defaultValue), SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
		return;
	}

IL_001b:
	{
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_tEBA10F9D90EB194DB01999A57278A952FF03DA0F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CollectionExtensions_SerializedView_TisRuntimeObject_mE0E432A02B333BDBAFBAC0E961A3FCAC94B89CCB_gshared (RuntimeObject* ___0_collection, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___1_serializeElement, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass3_0_1_t978BDB5D5952406BBFB6E332150D230FCE274300* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_1_t978BDB5D5952406BBFB6E332150D230FCE274300* L_0 = (U3CU3Ec__DisplayClass3_0_1_t978BDB5D5952406BBFB6E332150D230FCE274300*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__DisplayClass3_0_1__ctor_mE792B790BEEC4F42873AE6056A077A23D0F6FE08(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_1_t978BDB5D5952406BBFB6E332150D230FCE274300* L_1 = V_0;
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_2 = ___1_serializeElement;
		NullCheck(L_1);
		L_1->___serializeElement = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___serializeElement), (void*)L_2);
		RuntimeObject* L_3 = ___0_collection;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDFD5BA0EE5BD56B383E144892054DCB0A59D3ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0021:
	{
		U3CU3Ec__DisplayClass3_0_1_t978BDB5D5952406BBFB6E332150D230FCE274300* L_6 = V_0;
		NullCheck(L_6);
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_7 = L_6->___serializeElement;
		V_2 = (bool)((((RuntimeObject*)(Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECC4BC659FB1526108BFFD6AD5E7F03E47806740)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0039:
	{
		RuntimeObject* L_10 = ___0_collection;
		U3CU3Ec__DisplayClass3_0_1_t978BDB5D5952406BBFB6E332150D230FCE274300* L_11 = V_0;
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_12 = (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		Func_2__ctor_mD6767DE619116219CD1567BC735C4AC96B9348CF(L_12, (RuntimeObject*)L_11, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 5));
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisRuntimeObject_TisString_t_m4212A6B9DDC97D402346EC78AE3115A600469C8C(L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 6));
		String_t* L_14;
		L_14 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_14, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_3 = L_15;
		goto IL_0067;
	}

IL_0067:
	{
		String_t* L_16 = V_3;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CollectionExtensions_SerializedView_TisIl2CppFullySharedGenericAny_mCE17D8BD9D3423A2464201AAA28CF0A2216727ED_gshared (RuntimeObject* ___0_collection, Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* ___1_serializeElement, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass3_0_1_tEB269220B30C0F124F2835FF966E584A79B541F3* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_1_tEB269220B30C0F124F2835FF966E584A79B541F3* L_0 = (U3CU3Ec__DisplayClass3_0_1_tEB269220B30C0F124F2835FF966E584A79B541F3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass3_0_1_tEB269220B30C0F124F2835FF966E584A79B541F3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_1_tEB269220B30C0F124F2835FF966E584A79B541F3* L_1 = V_0;
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_2 = ___1_serializeElement;
		NullCheck(L_1);
		L_1->___serializeElement = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___serializeElement), (void*)L_2);
		RuntimeObject* L_3 = ___0_collection;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDFD5BA0EE5BD56B383E144892054DCB0A59D3ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0021:
	{
		U3CU3Ec__DisplayClass3_0_1_tEB269220B30C0F124F2835FF966E584A79B541F3* L_6 = V_0;
		NullCheck(L_6);
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_7 = L_6->___serializeElement;
		V_2 = (bool)((((RuntimeObject*)(Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECC4BC659FB1526108BFFD6AD5E7F03E47806740)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0039:
	{
		RuntimeObject* L_10 = ___0_collection;
		U3CU3Ec__DisplayClass3_0_1_tEB269220B30C0F124F2835FF966E584A79B541F3* L_11 = V_0;
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_12 = (Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		((  void (*) (Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_12, (RuntimeObject*)L_11, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 5));
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_10, L_12, il2cpp_rgctx_method(method->rgctx_data, 6));
		String_t* L_14;
		L_14 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_14, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_3 = L_15;
		goto IL_0067;
	}

IL_0067:
	{
		String_t* L_16 = V_3;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionHelper_CheckConvertArguments_TisIl2CppFullySharedGenericStruct_mEE33400C53979ECF5C307B2B83F6F1BC18955CAD_gshared (int32_t ___0_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E612D5C4A642D3635F6EB9985DD8EF20BEEFC73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		bool L_2;
		L_2 = il2cpp_codegen_is_unmanaged(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AEC4F0CCAC6A14C3FA879080C5907BEF6980462)), (RuntimeObject*)L_4, (RuntimeObject*)L_6, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionHelper_CheckIsUnmanaged_TisIl2CppFullySharedGenericAny_m1E26EA4313AF9D7C7B99FC803C344ADC6742A0ED_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_unmanaged(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral093872F2B91CF97AF817E102A9B984C29552DADB)), (RuntimeObject*)L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionHelper_CheckReflectionDataCorrect_TisIl2CppFullySharedGenericAny_mEA45C07DC52D17AFE9878044676C6CF86E383B52_gshared (intptr_t ___0_reflectionData, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionHelper_CheckReflectionDataCorrectInternal_TisIl2CppFullySharedGenericAny_m704472361907F9EEDC0769A68381E7E3087B70AD_gshared (intptr_t ___0_reflectionData, bool* ___1_burstCompiled, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t L_0 = ___0_reflectionData;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AEB6C175037170017B161A77CCF8F6B0E629351)), (RuntimeObject*)L_3, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		bool* L_6 = ___1_burstCompiled;
		*((int8_t*)L_6) = (int8_t)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m53ED670E537C28B115C56EABA4C6C47BA456C5BE_gshared (void* ___0_dataPointer, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, bool ___3_setTempMemoryHandle, const RuntimeMethod* method) 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		bool L_2;
		L_2 = AllocatorHandle_get_IsCustomAllocator_mB40C586EBB549E9D5F46BF0CDA12966E2F1CF9A1((&___2_allocator), NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		(&V_0)->___m_AllocatorLabel = L_3;
		goto IL_0039;
	}

IL_0031:
	{
		(&V_0)->___m_AllocatorLabel = (int32_t)1;
	}

IL_0039:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_ConvertExistingNativeListToNativeArray_TisIl2CppFullySharedGenericStruct_m81A04D0556A2EAC7D125830380F66E04F340724A_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___0_nativeList, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_0 = ___0_nativeList;
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_1 = (*(NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)L_0);
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3 = ___1_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___2_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5;
		L_5 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((void*)L_2, L_3, L_4, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m38CA34336126E8685168D490620B3A64ED26118C_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___0_array;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_0), L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0039;
	}

IL_0019:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 3));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&V_0), L_4, L_5, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 4));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = ___0_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))((&V_0), L_6, il2cpp_rgctx_method(method->rgctx_data, 6));
	}

IL_0039:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m9ABDCCD844D499C118A575A2DCB65C744C9FF6DA_gshared (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = ___0_array;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_0), L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0035;
	}

IL_0019:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = ___0_array;
		NullCheck(L_4);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&V_0), ((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 4));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_6 = ___0_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))((&V_0), L_6, il2cpp_rgctx_method(method->rgctx_data, 6));
	}

IL_0035:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m47C0F168D576B0ED4372A8922108736E0481857F_gshared (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, Il2CppFullySharedGenericStruct* ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___1_allocator;
		bool L_2;
		L_2 = ConstrainedFuncInvoker0< bool >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = ___0_array;
		Il2CppFullySharedGenericStruct* L_4 = ___1_allocator;
		int32_t L_6;
		L_6 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), L_5, (void*)L_4);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&V_0), L_3, L_6, il2cpp_rgctx_method(method->rgctx_data, 5));
		goto IL_0040;
	}

IL_0024:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_7 = ___0_array;
		NullCheck(L_7);
		Il2CppFullySharedGenericStruct* L_8 = ___1_allocator;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))((&V_0), ((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 8));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_9 = ___0_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))((&V_0), L_9, il2cpp_rgctx_method(method->rgctx_data, 10));
	}

IL_0040:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 CollectionHelper_CreateNativeArray_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m56A228C789F80C2614D2D93138DCF34B1A1D3170_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m94DB1A0F1293F5BAA65533ED74C41E31D71CA979((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_m40C9739B189BB2A5A4B5D375C33123A039D65C2B((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 CollectionHelper_CreateNativeArray_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mAC11C2894EF66688A35EAE15A382DCE11A9AD070_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mAEE080A594D2B54E62742BCBAC067BD86B62EE90((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_mDB05DADCD82C0753A10F968BC12105C013F004F6((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t60C2883F9133642CF381234B3DD254605DD4F0A5 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 CollectionHelper_CreateNativeArray_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m87143076B93EA12528D5E9372750D49B132918DD_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m5D9AB1CF4D2E70F87BE8C5DA8BB700B0DBAEC960((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_mF03BC6853C9DD519B47323DDAB4B990501463489((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tB7D9C79EBF3AEA35F54C11110B41E68AE0A214F6 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 CollectionHelper_CreateNativeArray_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m545446B6CCCFA78F28D0BF324AAABD721468B8EC_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m81CC7BB6F9FA4BD6A271BECB0E8979FAFBBFF8F2((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m02029B2BD79047E1295F3C1F6D403DAE546C3F79((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF CollectionHelper_CreateNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE89A180FD53BA60F5FA7F6F059773A378080BA34_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mACF77E80482D69D54E384207E8EF83F56714FEBF((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 CollectionHelper_CreateNativeArray_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_m90AD36F5317BB0056D3D87BC47F382ED77D236BF_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m13B5E98249D94532DD7700C04ADA9346B6C01646((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisDebugOccluderStats_t7B4C48EC856FCC7FDF2811DF6C222E53DD80AD93_mA22E1F5DC673C0DBE2D35C0E170FADEF9EE9BC53((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tAADB0CA74296D16E5C5393E212397F4F29915DC6 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 CollectionHelper_CreateNativeArray_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_mDA23C29F9FA1539AC20957605446E6C9D2EB8189_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m48B5E526D82D23460D26CC391BD64752F97ABF18((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisDrawBatch_t5B13B0C8AFD02B2878B6FA9ED48DDA1A0696F5FF_mDAB772BAC6F20741B210B3AB37819FDEAC556936((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tAB18C607322AEEA1DDD98E3423BC851F484EDD56 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 CollectionHelper_CreateNativeArray_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m6CE1FBED8940C215ABD8F8C038F94E7659E0A582_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m7CD61B8B4CCB40810552A5884C7F1EDE208688B5((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisDrawInstance_tBE712DD78F80BD1B66343AC3B9A55ACFE80E8AF8_m875FDB5805D73A9DB2D203063E5CCC07999F43A7((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t0068563E6F8A81A3378813B063D32874F46B5C81 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 CollectionHelper_CreateNativeArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAF52A80BBB617F62596D58F8FFD9E3E6AA9DB60F_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mE947909B5D5477F068B16DF1CDB86DB6A68B6994((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mF5D608563990BDF4A932F444C5C91CD6791E7DE6((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 CollectionHelper_CreateNativeArray_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_m8E65D32099391BFDD95F615BCA15E55F0BA72DB1_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m7F2B3220F3366EAB71B0C62942CB678827036666((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisDrawRange_tFF5914E68DE5FBB5AE71F729F834D72149A6B010_mB293485A46F4CD60A26427EA159A60016470DF7A((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t9AC3F97F07E94E0A151F6B2C3D4429760CB36E49 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 CollectionHelper_CreateNativeArray_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_m3508C172D038BE19CBFAB919B67AED29F62876DC_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m6AB15133D68784F1E9BB1C5CF6AF21EE4DC4FBBF((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisGPUInstanceComponentDesc_tA386615944C32F7A0B71FF8B2F84E1A159C02E74_mFBA847E240CBCFD6742ACEE692097A3686EB1478((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t876CEFC10199E5B4C938C81E24EA346FB9F50DE6 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E CollectionHelper_CreateNativeArray_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m0D7F6CF92BCF84F265BA70040E0CAE6D56E363B6_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mD0F26C30D505CF393A50CEAD19D9BAAD3E77CB87((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m4219EEB937F0AA2846952934259518672640C2F0((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 CollectionHelper_CreateNativeArray_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_mEA905CFAB630A2381BA5740938DB1F85FA604F89_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mAF7AEA5C34BE1F328FB3175B67928729025E5AB1((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisIndirectBufferContext_tC867F1E4C07484F15773E7A382CCB107C57AC805_m2AC2D93055F73106FDF21A17E4B628111A55A673((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t8F1EA6967F7FA71644BE22EBD801207DD0345E74 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E CollectionHelper_CreateNativeArray_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m094715E5969482D358E5411558B459CC06519DF2_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m2BE74BAAAACB2FB8C886355218332C3D71CC870D((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisInstanceCullerViewStats_tCFA9E28BF5D8B9489040BD5DDE21173331CE2173_m92C729A213EC9B6599360003A73F4FF36FDCFEC5((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t2AAB92CF697074EE2D8098F45F64E9F56D03EA7E L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C CollectionHelper_CreateNativeArray_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mEB030D0A1BF6EA5944EEA67E4B82C0D33F24D14A_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m2B08A55873756E21BCB6D1C2CD1D3ED18D00BCA2((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mED77F59553BE97385BAF8D6FB358529A1E959379((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 CollectionHelper_CreateNativeArray_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_mCC3589A714ABB57A822E0F76BF92BBF3ECA83C39_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mE3B7F1A32ACB2193062CBB170B4ED9A7843325C4((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisInstanceOcclusionEventStats_t39015A29B5AE8D08BF95679C8A25869BD8715AAD_mEEFD81D6225622D3284E00E58E9979E357EA3846((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t2CC87693EF37B0C2EEE7B2E720FC701C4DEF0EF4 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC59BF07E462EBB1B63D0EEBDA144231E87EC237((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 CollectionHelper_CreateNativeArray_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mACC40E611BE1390509B0BCE29131B67F973BFAD8_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m0D4D6107C1C882F6D813E0CC53744262582D6110((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m20661CE34BF69BC0B801A3909158DEA04D621DEB((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 CollectionHelper_CreateNativeArray_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m87ED367DBA36450604720E68297A984787381308_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mAB9F77B2DF6AEE780DF94369A6332C6C7B9A238E((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m48A94190A440E505DCB0C725DF4FE2DBDE33CCB6((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t84C22AC03FE6517D060874E39A444D03469DD2F0 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 CollectionHelper_CreateNativeArray_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_m58904C83824C8C3F6644D1DF6407214A84DE9AEA_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m4DB28141C684B6B39DE44C899ECFD06EE0B7C8D4((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisLODGroupCullingData_t511A004D7CBAE84368FCAA62A0348C24CB46EABF_mFC9CFF15D4351863CC7ED0178D46D69735188B6F((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t81A98CB47CC3CC448BF340C94B99A75C5ADCB7F6 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF CollectionHelper_CreateNativeArray_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_m013610B611BD8210B089DEADE35074F88BE065CC_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mB4F24E1671E46B6A5A5BE881EED6B8FA573BC045((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisLODGroupData_t270D641C75EEBF4612A34E2398D4D0A10A5B1241_mC87C5E72BEAA8A1E94A6C34A486DA2BB429E48C4((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t2A6DBCE9D1522CC5FF53114CB98442AEAB5881EF L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 CollectionHelper_CreateNativeArray_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_mA6F7F37C7BFFA3C2F46F723DC3AED4259DC54E87_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m18E7F9491A74B9BBAD80C7FA7871313EED3797D6((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_mDA389B33EA02F4831D5C7EA695532A0B10AA3EEC((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t69A2AD487C8DD5AF97CD159933AC643A3B2C5212 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E CollectionHelper_CreateNativeArray_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_mD16946E6C24DF8AB8B71EC6A1AD692F96A632A85_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m00D8BF626DE89E941B6C7F7DE6BDB75ACDBDA821((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisNativePassData_tC0F1669A8ED49F7203325B91DF9C473D65AA9CD2_m7C87C137316B6924C29233A2E467ADA6B8A7DCA8((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t87C11A8464F2D1C243107E7079B539E2822AD30E L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 CollectionHelper_CreateNativeArray_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_m7494D974EF1090C5664097717125E0A1BFC5336A_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m2BB43FE24726BC2669A5FF0927379742A7DA6A43((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisPassData_t88911D47229A306D70A3F6A7D3B2FC8FF12F8BAD_mBDE57D9985060D3B58307A46D33E435BEE7410F4((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tBD6501FD237AB9D275988A6E9281666C95937C57 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A CollectionHelper_CreateNativeArray_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m8635F4C256213EAC6060A1EE12F79EAC21C6A5C1_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mEFB8E1E68865EC5B4261DB29AC8E4C467C4EFB94((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisPassFragmentData_t67D0B4EC16AF3DBC4233CC7537B93A27C78BFA8C_m04975597CB38CA33477F3046802FA01A5946560C((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tBA536E4EFD1CB2160664BDBEF13DC67ECB32E79A L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 CollectionHelper_CreateNativeArray_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_m85F2D781CFEE927BCBEA564A45C89AA0B0890D8D_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mDFC0DD4650AAC132F79654F50B616DF732D38536((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisPassInputData_tA1B8624F31DDB24770D8E0C8FA54189A567FC2DE_m00339F2317A97F4DE666D7BC4C2F2BD71D798F12((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tDD79324C48394834DB786BABDB44D2CD9B0A6C77 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 CollectionHelper_CreateNativeArray_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_m5D423301ADE53B0E9D11F469E64DE0B9E4156895_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m0FA5AEDDA6696B431FB7C64367D35EB510D2740A((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisPassOutputData_t8EA364E560775D19D285839BA06710B337503E0D_m11DDDFF0EA8FBCCBD94EA172DA8E64E1A9BCB46F((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t196FB7C2715A99B8FF3F20599B6BBAA704FE0A15 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE CollectionHelper_CreateNativeArray_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_mB1C8B45C1269C5F348608AB1857A935DF18BA73F_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mBF1EA4278622BA874802F1EE442736E67D6185C2((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisPassRandomWriteData_t5C298F6D2CA84B027F3D8A145304B0DCFDA1961B_m5A7ADFCA1C19C4C757E0C264C94AE07368AB8089((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t808F096A7B1C709645F38913EE6FE8116232AABE L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 CollectionHelper_CreateNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m739A3C2775D1D978A80A000C7A633ED118ABA8CE_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m2A6BACB54D11B29827A2DC7686CB9A6E271F1785((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m1FC1B6667A9447473B93607A53FA956634D30866((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D CollectionHelper_CreateNativeArray_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mD8A0337260F1AB0E734BE599FDBB3B2D3E2BB66E_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m510985F3EE136D53A615D9ECE9501552B7DAC956((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m48B684A93CE38CC729A9A40D9EB0EABB0A1EE549((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t8E236FFFE7B598011354300BFCED0A15647BBC5D L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 CollectionHelper_CreateNativeArray_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_mE50478B053979B1CCA774FCB849FE7DFE86108C2_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m8DF6ADCE991D8F508D027338C1667E82CD6B075F((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C_m94D7DC77FB6C882C92C18BF66FE103BCEAB26EC4((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t1E7B777A8CFDBA693DBDA83CA697D76544EBFF25 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 CollectionHelper_CreateNativeArray_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m64438839680A7050C4DC4B35E3D25897AC3C63C2_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mA2D3D5EA3CCCAD7698FF06E24E935C5FA5F84B05((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisResourceReaderData_t1B57A9C4CC76875899745E115AA53FF40C6412EC_m9635158C65650FC350A869EBD6CAB1C50F89AFB7((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t3A453D2A1B496485D6B8A03711BCB323169A9AC3 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 CollectionHelper_CreateNativeArray_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_m97FCDC3A973B1A01BC9B44E9E988D75B94989ACF_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m582687BCC0935B30CB5E855EF9481583775D8D5F((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisResourceUnversionedData_t3F4B539E7806E513C53A94EAABF5F969AAA384CC_m525E6F66B5B617418AF056ED577392B3A2DC1227((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t4FFD53EE638D75F000FE485546A6CCF0C2AC1771 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 CollectionHelper_CreateNativeArray_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_m58BFF04C8B28D4865B6FEE86A44B3F3BA75F05FA_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m6165D913BDBF3F9B89AF521B895ACED78E784B8A((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisResourceVersionedData_tC935A106FCF6C0800974D2C98DBE14E19A19B1DC_mB66EA7BEE3C5C596974B4D6FC6E18820727A862F((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t0604E67D54D439CB92C5A630816DBC343D7BADF2 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 CollectionHelper_CreateNativeArray_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_mED6651A80CC306E4B81ACF995E6382A1C0AB8EDE_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mB0AD337C4EA82C18D214D63D1B478193CBCA5D27((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisSharedInstanceHandle_tC3415E5C355DF902D26BACE70048BB60426A3692_m732AA5DD55098C318EA10B2DE4A82FA910EFB7E5((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tD50C1560C0B57B735333075DF206AB11B0E18565 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD CollectionHelper_CreateNativeArray_TisSubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9_m745BBD39C5FDF325B385E3DDC2703F4C30716324_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mA76161D15ADAA61DE55A02DD16BB9714F3C35121((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisSubPassDescriptor_t912FE0FF4C99BF293A1E4442353C35B2BB8997A9_mEEBCADC277F33B029A6B0666EF0F4ACB4F20EA11((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tCD49E6904B9F1D7D0CA91E370ADA7F2D7950AEFD L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 CollectionHelper_CreateNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFDB78539A3866F7CAC5C8D6EE26BABCFD2F02BD9_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m75E60949F4AE81A148CE446B1DC84D8E27C108CD((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m683C223E404B0555C6905473CEC887AC850BA0B7((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 CollectionHelper_CreateNativeArray_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mFA0DEE9E8FACFD72E7CF0ADAC9163EED587BD9C6_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mD99AA89741F3ABE4BA39182EB4BC1ADEBBD34A19((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 CollectionHelper_CreateNativeArray_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m5F638A5A8E765D21FD86347FA60FF66F00028E3E_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m2D4ED9F9308EEB313A60954B64E0DB259EF67CFE((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E CollectionHelper_CreateNativeArray_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_m9516871837B1D62B450E692AB75F2B7A7E97701C_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m5979892FC554CEAA78DCDEC92B686F38E61F9DB1((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_mAD887F66D285E6E91501A32BE4BB22EDACB3E3D3((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t12018DEC83E53274D542435F55D8BED16BD4E78E L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A CollectionHelper_CreateNativeArray_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_m26B5CC3F10E86CF7A6358371A321A00FB04804AF_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m33B1BDE41C4FC3509C94E34A1A2E9976E452A0D1((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_mC4A0E9868E565D827FEB2117E79FD30822C9A2FD((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t68166A4F733ADFE89591B8BCE0284E5970D2816A L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B CollectionHelper_CreateNativeArray_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_m076C73D317E195E7F3A206B01FE2CCAA6D487A16_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m69CA451E8DF83418562F6577C370FEF240540082((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_mA202A50D5E8E341C1CE333B65D9ED08181D1AB5C((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tE0C639D5B71B3DE26056273F311F51F67916192B L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 CollectionHelper_CreateNativeArray_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m5A3DA7515C9E11742B6606C78A5EB62D09B2AA8B_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_mACF86E12FBF5AC701EDE1D413766634F712804AE((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisRequest_tAA55F47806E39B0E19B53273DCBFB5CF457F9187_m4E449922364E9B8E4866691F93F6732CEAA7ABFD((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tC9A7C1CF975245C55FAB1FC710CCCB9E500CB2A9 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF CollectionHelper_CreateNativeArray_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m23485C56F64000354C8762D6060CEF6BF947C5F9_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m4CE99671753B56A03C2BA8726AF38498C63775BF((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m2B2B3C2CF331B986B51A47C36A235AA04C30AEAC((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t0C50A3E7F549E148C8748605A2BC3D9BB1BC80DF L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 CollectionHelper_CreateNativeArray_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m37DA0021F89BEA77F5F49E999E23E34FB09327D8_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m744CC038AEEEB857D41E84288EAC9BFF94431F7F((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m34E414E2482728954419B608C89D1997EE9B9A15((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t933EB4C2ED1CCB3C68D5E2EC18C770C2893C8443 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C CollectionHelper_CreateNativeArray_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_m274DA3F7FC0466CFB79CE507205D58B31EFB5279_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m6B41EEBC0C00FA050194DEE026E2A51FE05A8A34((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_m3C9F2A22CEEEFE5A903070AC581C1013599DAAE7((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_tB8D8B86A987B7E27BD621893A826604AA3A66C5C L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0ACB9B0C86A6C4EB0F75988F15C3A24D9F919F92 CollectionHelper_CreateNativeArray_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m6CC10B223D67915614A5EA4B2720F12E6559A8B9_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	NativeArray_1_t0ACB9B0C86A6C4EB0F75988F15C3A24D9F919F92 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_length;
		int32_t L_3;
		L_3 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___1_allocator), NULL);
		int32_t L_4 = ___2_options;
		NativeArray_1__ctor_m0630A2E8FE16DDE58234955801207466A5D881C8((&V_0), L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t0ACB9B0C86A6C4EB0F75988F15C3A24D9F919F92));
		int32_t L_5 = ___0_length;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___1_allocator;
		int32_t L_7 = ___2_options;
		NativeArrayExtensions_Initialize_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m3A41FA005797063A3F0675A24BB256EB3E17A293((&V_0), L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_002c:
	{
		NativeArray_1_t0ACB9B0C86A6C4EB0F75988F15C3A24D9F919F92 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m664F5869BEFA57CF86BAB60F33E28922796DE6A1_gshared (int32_t ___0_length, Il2CppFullySharedGenericStruct* ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___1_allocator;
		bool L_2;
		L_2 = ConstrainedFuncInvoker0< bool >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___0_length;
		Il2CppFullySharedGenericStruct* L_4 = ___1_allocator;
		int32_t L_6;
		L_6 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_5, (void*)L_4);
		int32_t L_7 = ___2_options;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&V_0), L_3, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		goto IL_0037;
	}

IL_0025:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		int32_t L_8 = ___0_length;
		Il2CppFullySharedGenericStruct* L_9 = ___1_allocator;
		int32_t L_10 = ___2_options;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))((&V_0), L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 7));
	}

IL_0037:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 CollectionHelper_CreateNativeParallelMultiHashMap_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m435116BB50022F2FC57A79478BB64E87524BCE51_gshared (int32_t ___0_length, Il2CppFullySharedGenericStruct* ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22));
		int32_t L_0 = ___0_length;
		Il2CppFullySharedGenericStruct* L_1 = ___1_allocator;
		((  void (*) (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&V_0), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionHelper_Dispose_TisIl2CppFullySharedGenericStruct_m6BDDA05ECF0848C7ADD82C6B7F216FCB5B6B29B6_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_nativeArray), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionHelper_DisposeNativeArray_TisIl2CppFullySharedGenericStruct_m968F92F4F2503D0334AD5AFBD72BB2DD5D52FDE2_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_nativeArray), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mB190CFDC57C06AF1DF123853DD1278C9DB8EC42E_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF(__this, (int32_t)0, (int32_t)2, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_3;
		L_3 = ((  AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_4 = ___1_src;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_5 = ___2_callback;
		CommandBuffer_Internal_RequestAsyncReadback_1_mD92FCFF0A5712EC23031E44F71783F38034D034F(__this, L_4, L_5, (AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505*)((uintptr_t)(&V_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mB40434355F9A08D0DA2248B8AA43B5F43DF3BF81_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF(__this, (int32_t)0, (int32_t)2, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_3;
		L_3 = ((  AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_4 = ___1_src;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_5 = ___2_callback;
		CommandBuffer_Internal_RequestAsyncReadback_8_m692C8F4F6702E7C197148FE8BEF5D515C789C0E3(__this, L_4, L_5, (AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505*)((uintptr_t)(&V_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m0EDB9D505D4D6E4B57D0FD2777645B1D99A65D6A_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF(__this, (int32_t)0, (int32_t)2, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_3;
		L_3 = ((  AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___1_src;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_5 = ___2_callback;
		CommandBuffer_Internal_RequestAsyncReadback_3_mDD8EC14FD70411A63B6E9860823D9EA4BF86971B(__this, L_4, L_5, (AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505*)((uintptr_t)(&V_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mDD01DE312FC030F4A8DF80AD1372BCBD1DC05125_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___3_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF(__this, (int32_t)0, (int32_t)2, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_3;
		L_3 = ((  AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___1_src;
		int32_t L_5 = ___2_mipIndex;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_6 = ___3_callback;
		CommandBuffer_Internal_RequestAsyncReadback_4_m8A6C738D493AA70208179008DC21E0FED3889C04(__this, L_4, L_5, L_6, (AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505*)((uintptr_t)(&V_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mC71C3E90230FC0B882941FBCA180A79CB4B3D7C0_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___1_src, int32_t ___2_size, int32_t ___3_offset, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF(__this, (int32_t)0, (int32_t)2, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_3;
		L_3 = ((  AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_4 = ___1_src;
		int32_t L_5 = ___2_size;
		int32_t L_6 = ___3_offset;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_7 = ___4_callback;
		CommandBuffer_Internal_RequestAsyncReadback_2_m459CD0BD2B2A2863E643D0D0FA4A23BE6DF6BB5B(__this, L_4, L_5, L_6, L_7, (AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505*)((uintptr_t)(&V_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m80A71B32A2F66B101D42719A336551C45B26FB43_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___1_src, int32_t ___2_size, int32_t ___3_offset, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF(__this, (int32_t)0, (int32_t)2, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_3;
		L_3 = ((  AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_4 = ___1_src;
		int32_t L_5 = ___2_size;
		int32_t L_6 = ___3_offset;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_7 = ___4_callback;
		CommandBuffer_Internal_RequestAsyncReadback_9_mFF677D39B192F7843DDDB13DF252C06329733A07(__this, L_4, L_5, L_6, L_7, (AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505*)((uintptr_t)(&V_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m1B493216B5E83D012F9115886CCEECD06C1AB25F_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF(__this, (int32_t)0, (int32_t)2, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_3;
		L_3 = ((  AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___1_src;
		int32_t L_5 = ___2_mipIndex;
		int32_t L_6 = ___3_dstFormat;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_7 = ___4_callback;
		CommandBuffer_Internal_RequestAsyncReadback_5_mAD282E59BBD82201850D5DC22A05F7BAA4EF1DD3(__this, L_4, L_5, L_6, L_7, (AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505*)((uintptr_t)(&V_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m52B12AC67F1FA2F11EC56A98477C30F17203E95A_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF(__this, (int32_t)0, (int32_t)2, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_3;
		L_3 = ((  AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___1_src;
		int32_t L_5 = ___2_mipIndex;
		int32_t L_6 = ___3_dstFormat;
		int32_t L_7;
		L_7 = QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9(NULL);
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C(L_6, (bool)((((int32_t)L_7) == ((int32_t)1))? 1 : 0), NULL);
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_9 = ___4_callback;
		CommandBuffer_Internal_RequestAsyncReadback_5_mAD282E59BBD82201850D5DC22A05F7BAA4EF1DD3(__this, L_4, L_5, L_8, L_9, (AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505*)((uintptr_t)(&V_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mA68B0253E6ACBB21E5797B846534E3E273E24DFD_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___9_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF(__this, (int32_t)0, (int32_t)2, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_3;
		L_3 = ((  AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___1_src;
		int32_t L_5 = ___2_mipIndex;
		int32_t L_6 = ___3_x;
		int32_t L_7 = ___4_width;
		int32_t L_8 = ___5_y;
		int32_t L_9 = ___6_height;
		int32_t L_10 = ___7_z;
		int32_t L_11 = ___8_depth;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_12 = ___9_callback;
		CommandBuffer_Internal_RequestAsyncReadback_6_m0A6A9A328C6D6E003DA56371F082B1EE6C3176E8(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, (AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505*)((uintptr_t)(&V_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m32E317ED0628441FF263BC1B940C46B76CC27BD1_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, int32_t ___9_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___10_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF(__this, (int32_t)0, (int32_t)2, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_3;
		L_3 = ((  AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___1_src;
		int32_t L_5 = ___2_mipIndex;
		int32_t L_6 = ___3_x;
		int32_t L_7 = ___4_width;
		int32_t L_8 = ___5_y;
		int32_t L_9 = ___6_height;
		int32_t L_10 = ___7_z;
		int32_t L_11 = ___8_depth;
		int32_t L_12 = ___9_dstFormat;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_13 = ___10_callback;
		CommandBuffer_Internal_RequestAsyncReadback_7_mD6E8F388C0AC4AA23877A0741519BC73FBBEB20D(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, (AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505*)((uintptr_t)(&V_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m42E911D7FE5A94506B1631439CFFAED6A4C7F919_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, int32_t ___9_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___10_callback, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = CommandBuffer_ValidateAgainstExecutionFlags_mA5F027DDA6B0DCD8BC9AE296C3A6D8E1BD244FEF(__this, (int32_t)0, (int32_t)2, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_3;
		L_3 = ((  AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___1_src;
		int32_t L_5 = ___2_mipIndex;
		int32_t L_6 = ___3_x;
		int32_t L_7 = ___4_width;
		int32_t L_8 = ___5_y;
		int32_t L_9 = ___6_height;
		int32_t L_10 = ___7_z;
		int32_t L_11 = ___8_depth;
		int32_t L_12 = ___9_dstFormat;
		int32_t L_13;
		L_13 = QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9(NULL);
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C(L_12, (bool)((((int32_t)L_13) == ((int32_t)1))? 1 : 0), NULL);
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_15 = ___10_callback;
		CommandBuffer_Internal_RequestAsyncReadback_7_mD6E8F388C0AC4AA23877A0741519BC73FBBEB20D(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_14, L_15, (AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505*)((uintptr_t)(&V_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m4F36200EC1FF6F64F0A11D1BB8793DCE3A94E12F_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_0 = ___0_buffer;
		NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E L_1 = ___1_data;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m1EAF77ABE62FF1E1E3B1BD150AE4C63D7577E7B2(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_2, NULL);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_data))->___m_Length);
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m50EA3632EB1CDEF0AC4FA6E77CE06A357B7F3BAA_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		CommandBuffer_InternalSetComputeBufferNativeData_m8AD3F2597301A0E6A444F36909BEC29667A08B11(__this, L_0, L_3, 0, 0, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_mBF3C1E98ED861AFFF6F1517B759727C2B8B166C5_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_0 = ___0_buffer;
		NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 L_1 = ___1_data;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_m37DB29CABCCCB94E4502465E2E50DDF02478F4BD(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_2, NULL);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_data))->___m_Length);
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_mB0E36A30678F290202CF790F64FDABD61C0E4FDB_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		CommandBuffer_InternalSetComputeBufferNativeData_m8AD3F2597301A0E6A444F36909BEC29667A08B11(__this, L_0, L_3, 0, 0, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m09724A069B804345B439D7797E2F812D0C66AD48_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_0 = ___0_buffer;
		NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 L_1 = ___1_data;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m8AAE2A39FA31466921CBEBECF80387284719501F(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_2, NULL);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_data))->___m_Length);
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m3634617FCC0586139135B4C5B15EB5E4DA8E35EA_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		CommandBuffer_InternalSetComputeBufferNativeData_m8AD3F2597301A0E6A444F36909BEC29667A08B11(__this, L_0, L_3, 0, 0, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m6484EFC9AF5CAC6A61B7C4575465037F30F7720D_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_0 = ___0_buffer;
		NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 L_1 = ___1_data;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m1417D907BD32B676780C55DC924AB1764F94842F(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_2, NULL);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_data))->___m_Length);
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m663BD9D7D3900AFE1F17906E4ACD10A7ABE007AE_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		CommandBuffer_InternalSetComputeBufferNativeData_m8AD3F2597301A0E6A444F36909BEC29667A08B11(__this, L_0, L_3, 0, 0, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m086EFD47795E3190149B7619BF9C146710ECB8AB_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___1_data;
		V_0 = (bool)((((RuntimeObject*)(List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		bool L_3;
		L_3 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		String_t* L_7;
		L_7 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37DECF682BF526A92CA9F53667C7BE15425846D5)), (RuntimeObject*)L_6, (RuntimeObject*)L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0040:
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_10 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_11 = ___1_data;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_12;
		L_12 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_13 = ___1_data;
		int32_t L_14;
		L_14 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_13, il2cpp_rgctx_method(method->rgctx_data, 6));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_16, NULL);
		CommandBuffer_InternalSetComputeBufferData_m38538B360DFA94F1AD4BC30AF1F9EEC77766884E(__this, L_10, (RuntimeArray*)L_12, 0, 0, L_14, L_17, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m46409F218741C0D24E21228312B5DA8446D174A8_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_0 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___1_data;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_2, NULL);
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___1_data), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		CommandBuffer_InternalSetComputeBufferNativeData_m8AD3F2597301A0E6A444F36909BEC29667A08B11(__this, L_0, L_3, 0, 0, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m22C0E39C23FA8F79F6AF704381F9821ECB636708_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___1_data;
		V_0 = (bool)((((RuntimeObject*)(List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		bool L_3;
		L_3 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		String_t* L_7;
		L_7 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37DECF682BF526A92CA9F53667C7BE15425846D5)), (RuntimeObject*)L_6, (RuntimeObject*)L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0040:
	{
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_10 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_11 = ___1_data;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_12;
		L_12 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_13 = ___1_data;
		int32_t L_14;
		L_14 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_13, il2cpp_rgctx_method(method->rgctx_data, 6));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_16, NULL);
		CommandBuffer_InternalSetGraphicsBufferData_mE0119D4AE443BB200D5F9999C83EF93FC4523193(__this, L_10, (RuntimeArray*)L_12, 0, 0, L_14, L_17, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mBF059314517180FE72340F8EA07CC2D0C9FDE3D7_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_0 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___1_data;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_2, NULL);
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___1_data), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		CommandBuffer_InternalSetGraphicsBufferNativeData_m77470BE717A25292C4C2EED230233EC6317C8955(__this, L_0, L_3, 0, 0, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mFD55BF7A4011646D930C1D7744D1D893002DF1F1_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___2_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ___3_graphicsBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___4_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___2_nativeBufferStartIndex;
		int32_t L_4 = ___4_count;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_data))->___m_Length);
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7 = ___2_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___3_graphicsBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___4_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF07572772E1056825827902AE7297CE3835AD3C6)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0047:
	{
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_18 = ___0_buffer;
		NativeArray_1_t53D1F8A0601B0A0A14155D124CA9BE481C9F9507 L_19 = ___1_data;
		void* L_20;
		L_20 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mF5CB3F1637D18C7B5BD86C3BED07EA90E78029EA(L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_21;
		L_21 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_20, NULL);
		int32_t L_22 = ___2_nativeBufferStartIndex;
		int32_t L_23 = ___3_graphicsBufferStartIndex;
		int32_t L_24 = ___4_count;
		int32_t L_25;
		L_25 = UnsafeUtility_SizeOf_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mB3AF0FE4F628350C7A4F409515FA6BB0C2B73A24_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		CommandBuffer_InternalSetGraphicsBufferNativeData_m77470BE717A25292C4C2EED230233EC6317C8955(__this, L_18, L_21, L_22, L_23, L_24, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_m107100948069CE1DB83FDE27BF8EC45AB2BC6AFB_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___2_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ___3_graphicsBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___4_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___2_nativeBufferStartIndex;
		int32_t L_4 = ___4_count;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_data))->___m_Length);
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7 = ___2_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___3_graphicsBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___4_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF07572772E1056825827902AE7297CE3835AD3C6)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0047:
	{
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_18 = ___0_buffer;
		NativeArray_1_tB8F0DDF2408274818FBB9DB19DE6BF57FCE751A2 L_19 = ___1_data;
		void* L_20;
		L_20 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_mF64456E866EE1F76315840C53E63AC29EE378F0A(L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_21;
		L_21 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_20, NULL);
		int32_t L_22 = ___2_nativeBufferStartIndex;
		int32_t L_23 = ___3_graphicsBufferStartIndex;
		int32_t L_24 = ___4_count;
		int32_t L_25;
		L_25 = UnsafeUtility_SizeOf_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_mCD3F2A814C3004BFC9680B8C8E62A1FCFCBD6702_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		CommandBuffer_InternalSetGraphicsBufferNativeData_m77470BE717A25292C4C2EED230233EC6317C8955(__this, L_18, L_21, L_22, L_23, L_24, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mA86AD9DC4378D4FAFD843411F356622DC338CC1E_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B9_0 = 0;
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___1_data;
		V_0 = (bool)((((RuntimeObject*)(List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		bool L_3;
		L_3 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		String_t* L_7;
		L_7 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37DECF682BF526A92CA9F53667C7BE15425846D5)), (RuntimeObject*)L_6, (RuntimeObject*)L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0040:
	{
		int32_t L_10 = ___2_managedBufferStartIndex;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_11 = ___3_graphicsBufferStartIndex;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_12 = ___4_count;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_13 = ___2_managedBufferStartIndex;
		int32_t L_14 = ___4_count;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_15 = ___1_data;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		G_B9_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14))) > ((int32_t)L_16))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B9_0 = 1;
	}

IL_005d:
	{
		V_2 = (bool)G_B9_0;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_18 = ___2_managedBufferStartIndex;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_defaults.int32_class, &L_19);
		int32_t L_21 = ___3_graphicsBufferStartIndex;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_defaults.int32_class, &L_22);
		int32_t L_24 = ___4_count;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(il2cpp_defaults.int32_class, &L_25);
		String_t* L_27;
		L_27 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D35A76C2DA044B8EB3644BD233D767857B51142)), L_20, L_23, L_26, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_28 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_0085:
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_29 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_30 = ___1_data;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_31;
		L_31 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_30, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_32 = ___2_managedBufferStartIndex;
		int32_t L_33 = ___3_graphicsBufferStartIndex;
		int32_t L_34 = ___4_count;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_36, NULL);
		CommandBuffer_InternalSetComputeBufferData_m38538B360DFA94F1AD4BC30AF1F9EEC77766884E(__this, L_29, (RuntimeArray*)L_31, L_32, L_33, L_34, L_37, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m14E6204274D0FD89CB6457CE966661D0650A8666_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___2_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ___3_graphicsBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___4_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___2_nativeBufferStartIndex;
		int32_t L_4 = ___4_count;
		int32_t L_5;
		L_5 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_data), il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7 = ___2_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___3_graphicsBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___4_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF07572772E1056825827902AE7297CE3835AD3C6)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0047:
	{
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_18 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_19 = ___1_data;
		void* L_20;
		L_20 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_21;
		L_21 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_20, NULL);
		int32_t L_22 = ___2_nativeBufferStartIndex;
		int32_t L_23 = ___3_graphicsBufferStartIndex;
		int32_t L_24 = ___4_count;
		int32_t L_25;
		L_25 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		CommandBuffer_InternalSetComputeBufferNativeData_m8AD3F2597301A0E6A444F36909BEC29667A08B11(__this, L_18, L_21, L_22, L_23, L_24, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mCF53CDE2D0D26941A2E556B78EFD306B8185A618_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B9_0 = 0;
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___1_data;
		V_0 = (bool)((((RuntimeObject*)(List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		bool L_3;
		L_3 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		String_t* L_7;
		L_7 = ((  String_t* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37DECF682BF526A92CA9F53667C7BE15425846D5)), (RuntimeObject*)L_6, (RuntimeObject*)L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0040:
	{
		int32_t L_10 = ___2_managedBufferStartIndex;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_11 = ___3_graphicsBufferStartIndex;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_12 = ___4_count;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_13 = ___2_managedBufferStartIndex;
		int32_t L_14 = ___4_count;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_15 = ___1_data;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		G_B9_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14))) > ((int32_t)L_16))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B9_0 = 1;
	}

IL_005d:
	{
		V_2 = (bool)G_B9_0;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_18 = ___2_managedBufferStartIndex;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_defaults.int32_class, &L_19);
		int32_t L_21 = ___3_graphicsBufferStartIndex;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_defaults.int32_class, &L_22);
		int32_t L_24 = ___4_count;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(il2cpp_defaults.int32_class, &L_25);
		String_t* L_27;
		L_27 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D35A76C2DA044B8EB3644BD233D767857B51142)), L_20, L_23, L_26, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_28 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_0085:
	{
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_29 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_30 = ___1_data;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_31;
		L_31 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_30, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_32 = ___2_managedBufferStartIndex;
		int32_t L_33 = ___3_graphicsBufferStartIndex;
		int32_t L_34 = ___4_count;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_36, NULL);
		CommandBuffer_InternalSetGraphicsBufferData_mE0119D4AE443BB200D5F9999C83EF93FC4523193(__this, L_29, (RuntimeArray*)L_31, L_32, L_33, L_34, L_37, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m51DFEC65C4C610333B2B55F5FBC5441BEA86265F_gshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___2_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ___3_graphicsBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___4_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___2_nativeBufferStartIndex;
		int32_t L_4 = ___4_count;
		int32_t L_5;
		L_5 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_data), il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7 = ___2_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___3_graphicsBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___4_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF07572772E1056825827902AE7297CE3835AD3C6)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0047:
	{
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_18 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_19 = ___1_data;
		void* L_20;
		L_20 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_19, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_21;
		L_21 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_20, NULL);
		int32_t L_22 = ___2_nativeBufferStartIndex;
		int32_t L_23 = ___3_graphicsBufferStartIndex;
		int32_t L_24 = ___4_count;
		int32_t L_25;
		L_25 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		CommandBuffer_InternalSetGraphicsBufferNativeData_m77470BE717A25292C4C2EED230233EC6317C8955(__this, L_18, L_21, L_22, L_23, L_24, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CastHelper_1_t840A2A992306C55D7D7AFD778AF5A3177B562FBD V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t840A2A992306C55D7D7AFD778AF5A3177B562FBD));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		intptr_t* L_2 = (intptr_t*)(&(&V_0)->___onePointerFurtherThanT);
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_3), (void*)((uintptr_t)L_2), NULL);
		Component_GetComponentFastPath_mE4FD8E93F76B2C79314274295DBB74B0FC250EA0(__this, L_1, L_3, NULL);
		CastHelper_1_t840A2A992306C55D7D7AFD778AF5A3177B562FBD L_4 = V_0;
		RuntimeObject* L_5 = L_4.___t;
		V_1 = L_5;
		goto IL_0030;
	}

IL_0030:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_CastHelper_1_t97EDA6A098EF44000504FBDF21BB6044ED7F9A5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T_t1E55920ACC166F48B3917FD084904933E8AFE7F1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1E55920ACC166F48B3917FD084904933E8AFE7F1);
	const Il2CppFullySharedGenericAny L_5 = L_4;
	const CastHelper_1_t00C06D46BE3AF87B68448415B3631660EE48DCD4 L_3 = alloca(SizeOf_CastHelper_1_t97EDA6A098EF44000504FBDF21BB6044ED7F9A5C);
	CastHelper_1_t00C06D46BE3AF87B68448415B3631660EE48DCD4 V_0 = alloca(SizeOf_CastHelper_1_t97EDA6A098EF44000504FBDF21BB6044ED7F9A5C);
	memset(V_0, 0, SizeOf_CastHelper_1_t97EDA6A098EF44000504FBDF21BB6044ED7F9A5C);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1E55920ACC166F48B3917FD084904933E8AFE7F1);
	memset(V_1, 0, SizeOf_T_t1E55920ACC166F48B3917FD084904933E8AFE7F1);
	{
		il2cpp_codegen_initobj((CastHelper_1_t00C06D46BE3AF87B68448415B3631660EE48DCD4*)V_0, SizeOf_CastHelper_1_t97EDA6A098EF44000504FBDF21BB6044ED7F9A5C);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		intptr_t L_2;
		memset((&L_2), 0, sizeof(L_2));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_2), (void*)((uintptr_t)(((intptr_t*)il2cpp_codegen_get_instance_field_data_pointer((CastHelper_1_t00C06D46BE3AF87B68448415B3631660EE48DCD4*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),1))))), NULL);
		Component_GetComponentFastPath_mE4FD8E93F76B2C79314274295DBB74B0FC250EA0(__this, L_1, L_2, NULL);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_CastHelper_1_t97EDA6A098EF44000504FBDF21BB6044ED7F9A5C);
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),0)), SizeOf_T_t1E55920ACC166F48B3917FD084904933E8AFE7F1);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t1E55920ACC166F48B3917FD084904933E8AFE7F1);
		goto IL_0030;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_T_t1E55920ACC166F48B3917FD084904933E8AFE7F1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t1E55920ACC166F48B3917FD084904933E8AFE7F1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2;
		L_2 = Component_GetComponentInChildren_m4050899166730E8F6629B895597CF4ECC894B597(__this, L_1, (bool)0, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m6C912B287F81A629FB1D697E7CEB80D3B940295F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t15C649661EFEF4630AEAB738C610F68EA352E1B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t15C649661EFEF4630AEAB738C610F68EA352E1B2);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t15C649661EFEF4630AEAB738C610F68EA352E1B2);
	memset(V_0, 0, SizeOf_T_t15C649661EFEF4630AEAB738C610F68EA352E1B2);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2;
		L_2 = Component_GetComponentInChildren_m4050899166730E8F6629B895597CF4ECC894B597(__this, L_1, (bool)0, NULL);
		void* L_4 = UnBox_Any((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1), L_3);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_T_t15C649661EFEF4630AEAB738C610F68EA352E1B2);
		goto IL_001a;
	}

IL_001a:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_T_t15C649661EFEF4630AEAB738C610F68EA352E1B2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t15C649661EFEF4630AEAB738C610F68EA352E1B2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___0_includeInactive;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3;
		L_3 = Component_GetComponentInChildren_m4050899166730E8F6629B895597CF4ECC894B597(__this, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m88F97ECDCFC117CFB7775DF3F3E7AD27D6E6EC41_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4EE4CA54C3E7A96380E4843F10670E31E8D293EA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t4EE4CA54C3E7A96380E4843F10670E31E8D293EA);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t4EE4CA54C3E7A96380E4843F10670E31E8D293EA);
	memset(V_0, 0, SizeOf_T_t4EE4CA54C3E7A96380E4843F10670E31E8D293EA);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___0_includeInactive;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3;
		L_3 = Component_GetComponentInChildren_m4050899166730E8F6629B895597CF4ECC894B597(__this, L_1, L_2, NULL);
		void* L_5 = UnBox_Any((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1), L_4);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_5)), SizeOf_T_t4EE4CA54C3E7A96380E4843F10670E31E8D293EA);
		goto IL_001a;
	}

IL_001a:
	{
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T_t4EE4CA54C3E7A96380E4843F10670E31E8D293EA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t4EE4CA54C3E7A96380E4843F10670E31E8D293EA);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2;
		L_2 = Component_GetComponentInParent_mA402B7F87D23E039BB045630E5EA3AC020D8A7C2(__this, L_1, (bool)0, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentInParent_TisIl2CppFullySharedGenericAny_mC623E57DF1C1113E52B35DF8F5130A698B7174A5_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2A6C94BDAF110BD8403F6F2865F59F93528931C5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t2A6C94BDAF110BD8403F6F2865F59F93528931C5);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t2A6C94BDAF110BD8403F6F2865F59F93528931C5);
	memset(V_0, 0, SizeOf_T_t2A6C94BDAF110BD8403F6F2865F59F93528931C5);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_2;
		L_2 = Component_GetComponentInParent_mA402B7F87D23E039BB045630E5EA3AC020D8A7C2(__this, L_1, (bool)0, NULL);
		void* L_4 = UnBox_Any((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1), L_3);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_T_t2A6C94BDAF110BD8403F6F2865F59F93528931C5);
		goto IL_001a;
	}

IL_001a:
	{
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_T_t2A6C94BDAF110BD8403F6F2865F59F93528931C5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t2A6C94BDAF110BD8403F6F2865F59F93528931C5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Component_GetComponents_TisIl2CppFullySharedGenericAny_mD0F0A24D99D5E839646E6037D7E2DE05A9E1B67D_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponents_TisRuntimeObject_m2CD12FB45EFC625510F7E12FE2EB7D0EC2BA4421_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_results, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___0_results;
		Component_GetComponentsForListInternal_m7B3A61AF88E5E6F845817EC28E22FD39944EFBC7(__this, L_1, (RuntimeObject*)L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponents_TisIl2CppFullySharedGenericAny_m301FE8944E539A9FD40BC5DE3EB37D66F6BB65A0_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_results, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_results;
		Component_GetComponentsForListInternal_m7B3A61AF88E5E6F845817EC28E22FD39944EFBC7(__this, L_1, (RuntimeObject*)L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926(__this, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Component_GetComponentsInChildren_TisIl2CppFullySharedGenericAny_m173581815FF84722B49A5E4DE5A2820B5D2DB00E_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_includeInactive;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_mF5CFEDA88E7B7E944C9BE14D1DA8F46101AEE83B_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_results, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_results;
		Component_GetComponentsInChildren_TisRuntimeObject_m7AFED511573059D0DA49E1966117E7F80F9112CC(__this, (bool)0, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Component_GetComponentsInChildren_TisIl2CppFullySharedGenericAny_mB27BBCE995DC86EC5D047AE9D0804238DA9B4E28_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_includeInactive;
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2;
		L_2 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisIl2CppFullySharedGenericAny_mE4F8A731B0B2A6293CDAC8B19B0BA2A275089BF0_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_results, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_results;
		((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, (bool)0, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_m7AFED511573059D0DA49E1966117E7F80F9112CC_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_includeInactive;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___1_result;
		NullCheck(L_0);
		GameObject_GetComponentsInChildren_TisRuntimeObject_m6462BA998B6A62B78B77875E7AF3B26AA29FF743(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisIl2CppFullySharedGenericAny_mB3B314FA2B0FB49AB1B2E190A9FBC8337638078B_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_includeInactive;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___1_result;
		NullCheck(L_0);
		((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInParent_TisRuntimeObject_m161F08219ECBE099E346F616990662F0117D4C8E_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Component_GetComponentsInParent_TisRuntimeObject_m28B780AC357FCF95670D111FF933290A5B13FEAB(__this, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Component_GetComponentsInParent_TisIl2CppFullySharedGenericAny_m7DBB34BAB9422139D82BE02CA44558059A74136E_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInParent_TisRuntimeObject_m28B780AC357FCF95670D111FF933290A5B13FEAB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_includeInactive;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = GameObject_GetComponentsInParent_TisRuntimeObject_mD5BE6FB438CCF9B0E707282DA2D24E98C12BF845(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Component_GetComponentsInParent_TisIl2CppFullySharedGenericAny_m66D0CCEEF66E1B1598B57995FD87FC3CEEE1CA5C_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_includeInactive;
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2;
		L_2 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInParent_TisRuntimeObject_m19BF5A23D33BB30483A4E59F34C4A213E96C7487_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___1_results, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_includeInactive;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___1_results;
		NullCheck(L_0);
		GameObject_GetComponentsInParent_TisRuntimeObject_mC4527CDE5CC2128D895CDAC4B85A6DE25028205C(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInParent_TisIl2CppFullySharedGenericAny_mA29FCD472D98F35A351009B48ACA71BBE902C28A_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___1_results, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_includeInactive;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___1_results;
		NullCheck(L_0);
		((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeObject** L_1 = ___0_component;
		NullCheck(L_0);
		bool L_2;
		L_2 = GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisIl2CppFullySharedGenericAny_m754E9486E0B3F9C50B4261F1F2088D02098E214B_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* ___0_component, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Il2CppFullySharedGenericAny* L_1 = ___0_component;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 ComponentType_Create_TisLayoutCacheData_t1C9D16AB3B4EF0EC7A51422286D2E84ABBDEEA92_m1B7E7BA70DE60B16B480685B64E037DC99E3BDB5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisLayoutCacheData_t1C9D16AB3B4EF0EC7A51422286D2E84ABBDEEA92_m6AD907969ED820C7B597DBDE5A62251F0BAAEBB5_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___Size = L_0;
		ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 ComponentType_Create_TisLayoutComputedData_t37CD62B9A6B59283679F1126AD9C4BB9FD15B9C1_mC4FCDC7174A1965820DE31C6BFDEF113787874B5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisLayoutComputedData_t37CD62B9A6B59283679F1126AD9C4BB9FD15B9C1_m8E2B97AA6AB1779936EAA4893F7CE096024BCE54_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___Size = L_0;
		ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 ComponentType_Create_TisLayoutConfigData_t6B1D36F00422E7EB7C51CF9103FC9D522B5481F4_m2EE11C8C1E27B665BDB9010CDB34EA58BB26693E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisLayoutConfigData_t6B1D36F00422E7EB7C51CF9103FC9D522B5481F4_m6BD3023222CB03E8462517B9F40193D9A085A1C2_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___Size = L_0;
		ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 ComponentType_Create_TisLayoutNodeData_t1D56A4D5BFA0B262C0B70873ADB2B38C6A677858_mF4140F5291E049F09AED583939B267EF56E5B532_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisLayoutNodeData_t1D56A4D5BFA0B262C0B70873ADB2B38C6A677858_mF86E7726D232D0C06A598629B29651A120967D95_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___Size = L_0;
		ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 ComponentType_Create_TisLayoutStyleData_t4ECF9E0634219C4C7360FAFA6379DCCB964F2E2F_m364318AAE0F2EAE85D0CD4E48A3B45D86804CF01_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisLayoutStyleData_t4ECF9E0634219C4C7360FAFA6379DCCB964F2E2F_mC9FE389F5DD604C6212396EF5EB740EA25ECA488_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___Size = L_0;
		ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 ComponentType_Create_TisIl2CppFullySharedGenericStruct_mEAD36D7AAE0AB23C137E4151BDFD7D1DB1E64D73_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924));
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___Size = L_0;
		ComponentType_t061A392A67018E3189F0C34C896B0E95FF27B924 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_TisIl2CppFullySharedGenericStruct_m5985488AD855563F05D8D1B941067D3627A37C07_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_data;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_1, NULL);
		int32_t L_3;
		L_3 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___0_data), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC(__this, L_2, 0, 0, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_mD067CD8F8709FDF4ACC8BF4162B3901E172C902E_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, NativeArray_1_tCD560B25A8B4F8654C3DF3626A5F13D31353E25A ___0_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tCD560B25A8B4F8654C3DF3626A5F13D31353E25A L_0 = ___0_data;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_mE40BACF79A091E5731B90216509ED13E487D32B2(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_1, NULL);
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_data))->___m_Length);
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m8D2118F47D07AF9F9E22DF33134FDD73C68EE9EC_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC(__this, L_2, 0, 0, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mFE77504C430969E35C6811A1768735CD8A511987_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E ___0_data, int32_t ___1_nativeBufferStartIndex, int32_t ___2_computeBufferStartIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___1_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___2_computeBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___3_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___1_nativeBufferStartIndex;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_data))->___m_Length);
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = ___1_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___2_computeBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___3_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C80868ED807D30CD87E7BACE1DFC57B2C47C706)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0045:
	{
		NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E L_18 = ___0_data;
		void* L_19;
		L_19 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mDDFF527C13230D02E56283C52100BF7950B93FF8(L_18, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_19, NULL);
		int32_t L_21 = ___1_nativeBufferStartIndex;
		int32_t L_22 = ___2_computeBufferStartIndex;
		int32_t L_23 = ___3_count;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m9FA55C1771EBABDC880FF9C5C91C840EA25173B4_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC(__this, L_20, L_21, L_22, L_23, L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE8ADE921E2DB59E51B375FA350D46D35E6842B3_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_data, int32_t ___1_nativeBufferStartIndex, int32_t ___2_computeBufferStartIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___1_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___2_computeBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___3_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___1_nativeBufferStartIndex;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_data))->___m_Length);
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = ___1_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___2_computeBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___3_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C80868ED807D30CD87E7BACE1DFC57B2C47C706)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0045:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_18 = ___0_data;
		void* L_19;
		L_19 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B(L_18, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_19, NULL);
		int32_t L_21 = ___1_nativeBufferStartIndex;
		int32_t L_22 = ___2_computeBufferStartIndex;
		int32_t L_23 = ___3_count;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC(__this, L_20, L_21, L_22, L_23, L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_mC2B7C2012D1C516E851BDCF2F20393F1893766F2_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A ___0_data, int32_t ___1_nativeBufferStartIndex, int32_t ___2_computeBufferStartIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___1_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___2_computeBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___3_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___1_nativeBufferStartIndex;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_data))->___m_Length);
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = ___1_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___2_computeBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___3_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C80868ED807D30CD87E7BACE1DFC57B2C47C706)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0045:
	{
		NativeArray_1_tACE671995F84D8CA234E816D2E35EC01C009C82A L_18 = ___0_data;
		void* L_19;
		L_19 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_mCD5DAB337FAF53E4D21DDD2F5AEF09BDB80EBFE2(L_18, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_19, NULL);
		int32_t L_21 = ___1_nativeBufferStartIndex;
		int32_t L_22 = ___2_computeBufferStartIndex;
		int32_t L_23 = ___3_count;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_mF4C788B8223AC24A8099C9B543B70454D86FE1C9_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC(__this, L_20, L_21, L_22, L_23, L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mFB0686F11F87BE0123079E431F9E044B22DBE8BA_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B ___0_data, int32_t ___1_nativeBufferStartIndex, int32_t ___2_computeBufferStartIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___1_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___2_computeBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___3_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___1_nativeBufferStartIndex;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_data))->___m_Length);
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = ___1_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___2_computeBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___3_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C80868ED807D30CD87E7BACE1DFC57B2C47C706)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0045:
	{
		NativeArray_1_tA0FD3EA2FB9DAF1D87C749D92E7400691ED4530B L_18 = ___0_data;
		void* L_19;
		L_19 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mC693FE6F866F8AD8F97901E37F0B21464E6C292D(L_18, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_19, NULL);
		int32_t L_21 = ___1_nativeBufferStartIndex;
		int32_t L_22 = ___2_computeBufferStartIndex;
		int32_t L_23 = ___3_count;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mF03AC59110A26BC79993B3466BC2B83DDEBD44BE_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC(__this, L_20, L_21, L_22, L_23, L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC64D44268B5D05F59E9BC7322F91C2EA4B745FB5_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ___0_data, int32_t ___1_nativeBufferStartIndex, int32_t ___2_computeBufferStartIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___1_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___2_computeBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___3_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___1_nativeBufferStartIndex;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_data))->___m_Length);
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = ___1_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___2_computeBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___3_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C80868ED807D30CD87E7BACE1DFC57B2C47C706)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0045:
	{
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_18 = ___0_data;
		void* L_19;
		L_19 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD08EACF1B4D85335818C197334D6F9E10225992E(L_18, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_19, NULL);
		int32_t L_21 = ___1_nativeBufferStartIndex;
		int32_t L_22 = ___2_computeBufferStartIndex;
		int32_t L_23 = ___3_count;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC(__this, L_20, L_21, L_22, L_23, L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C5101980655EF267D88672F4DF77B36A8FFE814_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___0_data, int32_t ___1_nativeBufferStartIndex, int32_t ___2_computeBufferStartIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___1_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___2_computeBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___3_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___1_nativeBufferStartIndex;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_data))->___m_Length);
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = ___1_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___2_computeBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___3_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C80868ED807D30CD87E7BACE1DFC57B2C47C706)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0045:
	{
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_18 = ___0_data;
		void* L_19;
		L_19 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m09504C772721F76D367E7DBCF2CD3B350182B0E7(L_18, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_19, NULL);
		int32_t L_21 = ___1_nativeBufferStartIndex;
		int32_t L_22 = ___2_computeBufferStartIndex;
		int32_t L_23 = ___3_count;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC(__this, L_20, L_21, L_22, L_23, L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_TisIl2CppFullySharedGenericStruct_m30ACAF6178277D4CA7E8E233A2A07F3CD93009AD_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_data, int32_t ___1_nativeBufferStartIndex, int32_t ___2_computeBufferStartIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___1_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___2_computeBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___3_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___1_nativeBufferStartIndex;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_data), il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = ___1_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___2_computeBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___3_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C80868ED807D30CD87E7BACE1DFC57B2C47C706)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0045:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_18 = ___0_data;
		void* L_19;
		L_19 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_19, NULL);
		int32_t L_21 = ___1_nativeBufferStartIndex;
		int32_t L_22 = ___2_computeBufferStartIndex;
		int32_t L_23 = ___3_count;
		int32_t L_24;
		L_24 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC(__this, L_20, L_21, L_22, L_23, L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_mE7688CA575F08CB3680C5CED8C471E19CDA1CC2F_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 ___0_data, int32_t ___1_nativeBufferStartIndex, int32_t ___2_computeBufferStartIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___1_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___2_computeBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___3_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___1_nativeBufferStartIndex;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_data))->___m_Length);
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = ___1_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___2_computeBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___3_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C80868ED807D30CD87E7BACE1DFC57B2C47C706)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0045:
	{
		NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 L_18 = ___0_data;
		void* L_19;
		L_19 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_mEE9B4692F083FB78082237B38064C3E4ECAA5D96(L_18, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_19, NULL);
		int32_t L_21 = ___1_nativeBufferStartIndex;
		int32_t L_22 = ___2_computeBufferStartIndex;
		int32_t L_23 = ___3_count;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0BD2704CD677D45FAEDAD35D6C7208EE167961F7_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC(__this, L_20, L_21, L_22, L_23, L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_SetData_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m2AD5A694E521AC9F3A6491AB65E87AF3ACA39580_gshared (ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* __this, NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___0_data, int32_t ___1_nativeBufferStartIndex, int32_t ___2_computeBufferStartIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___1_nativeBufferStartIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___2_computeBufferStartIndex;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___3_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___1_nativeBufferStartIndex;
		int32_t L_4 = ___3_count;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_data))->___m_Length);
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((int32_t)L_5))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B5_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = ___1_nativeBufferStartIndex;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.int32_class, &L_8);
		int32_t L_10 = ___2_computeBufferStartIndex;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		int32_t L_13 = ___3_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C80868ED807D30CD87E7BACE1DFC57B2C47C706)), L_9, L_12, L_15, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0045:
	{
		NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A L_18 = ___0_data;
		void* L_19;
		L_19 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m736F4DA91F99B096FD7F086054FB31077AB480E0(L_18, il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_19, NULL);
		int32_t L_21 = ___1_nativeBufferStartIndex;
		int32_t L_22 = ___2_computeBufferStartIndex;
		int32_t L_23 = ___3_count;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m90780EC8030A711CE1682E39A74278F5F6BBD031_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		ComputeBuffer_InternalSetNativeData_m77690E79461BD938F0BA7718FD51FF9B931893AC(__this, L_20, L_21, L_22, L_23, L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m820F54B059D444F0DDCAF5FB47FAFEA3C290C9A9_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		NativeArray_1_t4F815DBC475817C50E7C63B3C14F7AEF8272FA9E L_2 = ___1_data;
		NullCheck(L_0);
		CommandBuffer_SetBufferData_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m4F36200EC1FF6F64F0A11D1BB8793DCE3A94E12F(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_mD85D7D7A8C73CFDC01D3A5B1482E8BE1531E3E47_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		NativeArray_1_t96CEF42677DEFA822FCF9EABABD69E7624393AC9 L_2 = ___1_data;
		NullCheck(L_0);
		CommandBuffer_SetBufferData_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_mBF3C1E98ED861AFFF6F1517B759727C2B8B166C5(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m032997C6BEE6472C00E22C5E668E9671CAA11680_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		NativeArray_1_tA65DF3C93200CA9EE1285F1D2DDD8FB5657EAAF8 L_2 = ___1_data;
		NullCheck(L_0);
		CommandBuffer_SetBufferData_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m09724A069B804345B439D7797E2F812D0C66AD48(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m2AEBEA259CF44A75197B496481FEB5BC81515CA3_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		NativeArray_1_t1DE29B20DF59D7CF0F8F69260363FB6E9CD19554 L_2 = ___1_data;
		NullCheck(L_0);
		CommandBuffer_SetBufferData_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m6484EFC9AF5CAC6A61B7C4575465037F30F7720D(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m56847E8A77DA9331F965DC9BFB088B4C01EC8FC6_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_2 = ___1_data;
		NullCheck(L_0);
		((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m3B3F678C8653332D843D00C6350F3DD995919BB8_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___1_data;
		NullCheck(L_0);
		((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m922B29C6683AFDA85FE0A6E8A8AB70A96D232491_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_1 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_2 = ___1_data;
		NullCheck(L_0);
		((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m4167735EB5BC34E67B32AF7F3F5EC6612F4CCBA8_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_1 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___1_data;
		NullCheck(L_0);
		((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mDC871198732A22D0073356BE86EC7C753DD8A489_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_2 = ___1_data;
		int32_t L_3 = ___2_managedBufferStartIndex;
		int32_t L_4 = ___3_graphicsBufferStartIndex;
		int32_t L_5 = ___4_count;
		NullCheck(L_0);
		((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mBE53B7883814A520300D1E100CE069F8D64B79DE_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___1_data;
		int32_t L_3 = ___2_nativeBufferStartIndex;
		int32_t L_4 = ___3_graphicsBufferStartIndex;
		int32_t L_5 = ___4_count;
		NullCheck(L_0);
		((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m2C743B2E3B9B505EC3411DD653975D11143F0024_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_1 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_2 = ___1_data;
		int32_t L_3 = ___2_managedBufferStartIndex;
		int32_t L_4 = ___3_graphicsBufferStartIndex;
		int32_t L_5 = ___4_count;
		NullCheck(L_0);
		((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m7A7F2A7335D9B2DF0A39B3A8EF6EDE1EB517FE98_gshared (ComputeCommandBuffer_tA6FA5F68FE745317C94802C6A828FC21AC0ADF61* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_1 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___1_data;
		int32_t L_3 = ___2_nativeBufferStartIndex;
		int32_t L_4 = ___3_graphicsBufferStartIndex;
		int32_t L_5 = ___4_count;
		NullCheck(L_0);
		((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ComputedTransitionUtils_GetWrappingTransitionData_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m233E74800F72E0878F26BE044511E7B8FA490E84_gshared (List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___0_list, int32_t ___1_i, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___2_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m714CDE1380C64F24D3FFA0C3A05220010855A1A3_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* L_2 = ___0_list;
		int32_t L_3 = ___1_i;
		List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* L_4 = ___0_list;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m714CDE1380C64F24D3FFA0C3A05220010855A1A3_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_6;
		L_6 = List_1_get_Item_m96D208AAEBB2370590FC90F7F803453D7AE9F116(L_2, ((int32_t)(L_3%L_5)), il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B3_0 = L_6;
		goto IL_001a;
	}

IL_0019:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_7 = ___2_defaultValue;
		G_B3_0 = L_7;
	}

IL_001a:
	{
		V_0 = G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ComputedTransitionUtils_GetWrappingTransitionData_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m6CD7BED6CF04DF81F36422F080DAB7F37132103E_gshared (List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___0_list, int32_t ___1_i, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___2_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m780E93121AF45C1AE9F963A3E27BD6D79647BD6E_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* L_2 = ___0_list;
		int32_t L_3 = ___1_i;
		List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* L_4 = ___0_list;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m780E93121AF45C1AE9F963A3E27BD6D79647BD6E_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_6;
		L_6 = List_1_get_Item_m54313A208BF733F363077C5A2C48B534128B0889(L_2, ((int32_t)(L_3%L_5)), il2cpp_rgctx_method(method->rgctx_data, 2));
		G_B3_0 = L_6;
		goto IL_001a;
	}

IL_0019:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_7 = ___2_defaultValue;
		G_B3_0 = L_7;
	}

IL_001a:
	{
		V_0 = G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputedTransitionUtils_GetWrappingTransitionData_TisIl2CppFullySharedGenericAny_m806AEA95468FF6BA87AF573702CC626DADA3C07E_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_i, Il2CppFullySharedGenericAny ___2_defaultValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD);
	const Il2CppFullySharedGenericAny L_7 = L_6;
	const Il2CppFullySharedGenericAny L_8 = L_6;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD);
	memset(V_0, 0, SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD);
	memset(G_B3_0, 0, SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		int32_t L_3 = ___1_i;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = ___0_list;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_2, ((int32_t)(L_3%L_5)), (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(G_B3_0, L_6, SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD);
		goto IL_001a;
	}

IL_0019:
	{
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___2_defaultValue : &___2_defaultValue), SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD);
		il2cpp_codegen_memcpy(G_B3_0, L_7, SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD);
	}

IL_001a:
	{
		il2cpp_codegen_memcpy(V_0, G_B3_0, SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD);
		goto IL_001d;
	}

IL_001d:
	{
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_tE4A29B5170C41BE5A8B7ABBC31F5126117306CFD);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcreteTypeVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_m6D56D3D58280407A79A62254E9129FCD5E01F3A5_gshared (ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2* __this, RuntimeObject* ___0_properties, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* L_0 = ___1_container;
		GenericVirtualActionInvoker1< StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcreteTypeVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m89A5AD9F9CBA63042660A0C0D9CB8CA928716F65_gshared (ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2* __this, RuntimeObject* ___0_properties, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_0 = ___1_container;
		GenericVirtualActionInvoker1< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcreteTypeVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mEC48E4683DF8EC3F42B7354A836063F9BC5320FC_gshared (ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2* __this, RuntimeObject* ___0_properties, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_0 = ___1_container;
		GenericVirtualActionInvoker1< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcreteTypeVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mA074A4DC2F87CD0F39C0634BCBF64C4A5327F54B_gshared (ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2* __this, RuntimeObject* ___0_properties, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___1_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_0 = ___1_container;
		GenericVirtualActionInvoker1< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnmanagedFunctionPointerAttribute_get_CallingConvention_m1F7BA425C1936CAA9F62483B4699A4DB52B887A6_inline (UnmanagedFunctionPointerAttribute_t9305303B86AAE7DFF3B996E83D3ADF2435F93833* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_callingConvention;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mE2BD136AA4DB860E4183D3293D3AE1A04B978DA3_gshared_inline (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_ptr;
		__this->____ptr = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_button_m3FC007A6430390DB59817E93D8AB324EC13FE995_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CbuttonU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pressedButtons_mD44593EB9F5A5992961586234A01D44B871A1F64_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpressedButtonsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pointerId_mF0B5F3F2655036A39E6ECAB56386CADBFDF1CF99_gshared_inline (PointerEventBase_1_tCC99C5B34F8B8F012105435FC4A3CE4FD098045F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpointerIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431_m50EA3632EB1CDEF0AC4FA6E77CE06A357B7F3BAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InstanceOcclusionCullerShaderVariables_tAF12690F2EA15B17E95E7ECE9EB6846CAFFCE431);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisOccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627_mB0E36A30678F290202CF790F64FDABD61C0E4FDB_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(OccluderDepthPyramidConstants_t299096B4539EC7AB7A58FC8D7636C0E3280E4627);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisOcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74_m3634617FCC0586139135B4C5B15EB5E4DA8E35EA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(OcclusionCullingCommonShaderVariables_t88F2739D504549F7A5FF95DD1D3598F6062FFF74);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisOcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185_m663BD9D7D3900AFE1F17906E4ACD10A7ABE007AE_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(OcclusionCullingDebugShaderVariables_tC6B7F442582F6F91DEBADAE753DB8490464FE185);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB_mB3AF0FE4F628350C7A4F409515FA6BB0C2B73A24_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(IndirectDrawInfo_t24CC9D6B2D8EB28E5C42E90B284B3031B81AAEDB);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB_mCD3F2A814C3004BFC9680B8C8E62A1FCFCBD6702_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(IndirectInstanceInfo_t94ECCE7BC6DF23C75D2354238F38A0008643F9DB);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLayoutCacheData_t1C9D16AB3B4EF0EC7A51422286D2E84ABBDEEA92_m6AD907969ED820C7B597DBDE5A62251F0BAAEBB5_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LayoutCacheData_t1C9D16AB3B4EF0EC7A51422286D2E84ABBDEEA92);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLayoutComputedData_t37CD62B9A6B59283679F1126AD9C4BB9FD15B9C1_m8E2B97AA6AB1779936EAA4893F7CE096024BCE54_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LayoutComputedData_t37CD62B9A6B59283679F1126AD9C4BB9FD15B9C1);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLayoutConfigData_t6B1D36F00422E7EB7C51CF9103FC9D522B5481F4_m6BD3023222CB03E8462517B9F40193D9A085A1C2_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LayoutConfigData_t6B1D36F00422E7EB7C51CF9103FC9D522B5481F4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLayoutNodeData_t1D56A4D5BFA0B262C0B70873ADB2B38C6A677858_mF86E7726D232D0C06A598629B29651A120967D95_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LayoutNodeData_t1D56A4D5BFA0B262C0B70873ADB2B38C6A677858);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLayoutStyleData_t4ECF9E0634219C4C7360FAFA6379DCCB964F2E2F_mC9FE389F5DD604C6212396EF5EB740EA25ECA488_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LayoutStyleData_t4ECF9E0634219C4C7360FAFA6379DCCB964F2E2F);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m8D2118F47D07AF9F9E22DF33134FDD73C68EE9EC_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m9FA55C1771EBABDC880FF9C5C91C840EA25173B4_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2_mF4C788B8223AC24A8099C9B543B70454D86FE1C9_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18_mF03AC59110A26BC79993B3466BC2B83DDEBD44BE_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TransformUpdatePacket_t056014168D7AE17359B1BD85E70A6E1B43C3AB18);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0BD2704CD677D45FAEDAD35D6C7208EE167961F7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4_t89D9A294E7A79BD81BFBDD18654508532958555E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m90780EC8030A711CE1682E39A74278F5F6BBD031_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m714CDE1380C64F24D3FFA0C3A05220010855A1A3_gshared_inline (List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m780E93121AF45C1AE9F963A3E27BD6D79647BD6E_gshared_inline (List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
