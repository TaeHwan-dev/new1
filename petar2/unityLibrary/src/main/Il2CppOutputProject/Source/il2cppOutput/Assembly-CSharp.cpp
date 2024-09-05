#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<NineSoftTabControl/Tab>
struct List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.XR.ARFoundation.ARAnchor[]
struct ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// NineSoftTabControl/Tab[]
struct TabU5BU5D_t49131719677FCDB4C0581B782971AD09383BDC30;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// AnchorPlacement
struct AnchorPlacement_tE9109B30F2EC30804E5CF4AEBB2FAD984B69BA50;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DogMove
struct DogMove_t4B5103333A0685F54FAFE2C995A5090144BDEC7D;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FollowMe
struct FollowMe_t794F724C0C7BCAC0B550E10731F33A740C28391E;
// FollowMeC
struct FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Moving
struct Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// NineSoftCursor
struct NineSoftCursor_tF775AD67DDF171BAFDE968951407F032EA808B8D;
// NineSoftProgressbar
struct NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115;
// NineSoftSliderAnimation
struct NineSoftSliderAnimation_t35C9E1F0D713EBD913AA52BD6EE3A3C54FA4E478;
// NineSoftTabButton
struct NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2;
// NineSoftTabControl
struct NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// Status
struct Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean
struct ToggleSetAnimatorBoolean_t6FA60B6C0ED0E2CDA823B7FDAA64A29A95133944;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIonoff
struct UIonoff_t0656A34E8A6D3F56AD31AE2C415A2672ED3FB1BD;
// UIstartCtrl
struct UIstartCtrl_t6AC90C3DCF73DDA7141AE2FBAD835677EC06E309;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// drone_move
struct drone_move_tA68DFDEB7EDF075430ABF302198FCA74C45635D6;
// interaction
struct interaction_t58DB2B210A32AAE2F98A5A7F582490683B8CC999;
// menuToggle
struct menuToggle_tAED74B6AEC2281511AD1A615AC7AAB9AF1C1CBEA;
// modeChg
struct modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36;
// objInteraction
struct objInteraction_t22C6D4128228D59EA16C6FFA60695F449AB9CF9B;
// ray_tracer
struct ray_tracer_tC6BE5DA494D1903192B6CF5AA5600B51D11F20F8;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NineSoftSliderAnimation/<DestroyText>d__7
struct U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3;
// NineSoftTabControl/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C;
// NineSoftTabControl/Tab
struct Tab_t641162C39D7E0F332985EA4CC301CCCD51151780;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2;
IL2CPP_EXTERN_C String_t* _stringLiteral1CCBE5A0AD8B1E14B1F9B4CDF23CD554AE1E51E3;
IL2CPP_EXTERN_C String_t* _stringLiteral1ED9BF5E8C6C2F3AF4A650DD6D7E6AEF9351E826;
IL2CPP_EXTERN_C String_t* _stringLiteral211CD37AA63592C136A096F893A5362619328946;
IL2CPP_EXTERN_C String_t* _stringLiteral2BBABFA4D890D0C0C2F34E2CC7C26377A5963212;
IL2CPP_EXTERN_C String_t* _stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9;
IL2CPP_EXTERN_C String_t* _stringLiteral443FD192456EA11DFC73B69C90F7F8FDBF25B6D4;
IL2CPP_EXTERN_C String_t* _stringLiteral4B29B71EFF4A42420196790CFBF698B1EBF3C182;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral62304C5290425A707B9D685F513F2ADC2A59150E;
IL2CPP_EXTERN_C String_t* _stringLiteral6B1340D077A4F943E0557C6D2277F741AE7BE788;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04;
IL2CPP_EXTERN_C String_t* _stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B;
IL2CPP_EXTERN_C String_t* _stringLiteralA1AC2EA06291EF0A60F6323B59D90CB425D5759A;
IL2CPP_EXTERN_C String_t* _stringLiteralC3E5B6DE12D878D632BC14EDA5528A847619B98D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB6F3663755F3D7A576CFBB1E90139FDA6F8E28E;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA;
IL2CPP_EXTERN_C String_t* _stringLiteralD93F3BBC30D2DD72B908885E299611095BDD75C8;
IL2CPP_EXTERN_C String_t* _stringLiteralDF4F507D162A6B35F0ACD929B316C925755159FC;
IL2CPP_EXTERN_C String_t* _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740;
IL2CPP_EXTERN_C String_t* _stringLiteralE7B34EA7BB94956D8039953DD2FE66A45FED4665;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m4005DFE32A3F44556C2CC9365D31C3DDAB22CBB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisMoving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A_m0A1A837FCF153E31BD5186323107AE5CCD773CE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_m352B503784BB68953253ED4AD666B68C6CF05BA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF_m6B4849722A14B3449E17A8AAED7DA93650A83951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m9C9CF5BF57A2C013287512FCF8061FBA59B5D4CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NineSoftSliderAnimation_ChangeValue_mD6858FD37251456AB7B50C1A421C17A78E936AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mD0AD654B5C45D1968901D27D7F4F1B486215DCD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m28DDC14F4C1EDDC71DCE27C39C0A10B0F1E1EE87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mD97416521AFAAF8D111EEB27867F47F24445C938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m75570136D1908AC20AAB6716B0CEEAD7FF304B3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestroyTextU3Ed__7_System_Collections_IEnumerator_Reset_m5C580CD34DE22153B68F6E7B3E4349FD79C22783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CInitializeTabsU3Eb__0_m035DA42924445A9151470D1A2BBC47C274A944F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* menuToggle_ToggleMenu_m9BC081980658061E9E005FF639CF005E50EB6A8C_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<NineSoftTabControl/Tab>
struct List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TabU5BU5D_t49131719677FCDB4C0581B782971AD09383BDC30* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// NineSoftSliderAnimation/<DestroyText>d__7
struct U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3  : public RuntimeObject
{
	// System.Int32 NineSoftSliderAnimation/<DestroyText>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NineSoftSliderAnimation/<DestroyText>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Text NineSoftSliderAnimation/<DestroyText>d__7::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_2;
	// System.Single NineSoftSliderAnimation/<DestroyText>d__7::<t>5__2
	float ___U3CtU3E5__2_3;
};

// NineSoftTabControl/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C  : public RuntimeObject
{
	// System.Int32 NineSoftTabControl/<>c__DisplayClass12_0::index
	int32_t ___index_0;
	// NineSoftTabControl NineSoftTabControl/<>c__DisplayClass12_0::<>4__this
	NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D* ___U3CU3E4__this_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// NineSoftTabControl/Tab
struct Tab_t641162C39D7E0F332985EA4CC301CCCD51151780  : public RuntimeObject
{
	// System.String NineSoftTabControl/Tab::TabName
	String_t* ___TabName_0;
	// UnityEngine.Sprite NineSoftTabControl/Tab::TabIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___TabIcon_1;
	// UnityEngine.Color NineSoftTabControl/Tab::CheckMarkColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___CheckMarkColor_2;
	// NineSoftTabButton NineSoftTabControl/Tab::TabButton
	NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* ___TabButton_3;
	// UnityEngine.GameObject NineSoftTabControl/Tab::TabPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TabPanel_4;
};

// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ARTapToPlaceObject::copyTarget
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___copyTarget_4;
	// UnityEngine.GameObject ARTapToPlaceObject::Dog
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Dog_5;
	// UnityEngine.GameObject ARTapToPlaceObject::targetGoal_Now
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetGoal_Now_6;
	// UnityEngine.GameObject ARTapToPlaceObject::targetGoal
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetGoal_7;
	// UnityEngine.UI.Text ARTapToPlaceObject::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_8;
	// UnityEngine.GameObject ARTapToPlaceObject::selectedTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectedTarget_9;
	// UnityEngine.GameObject ARTapToPlaceObject::spwandObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spwandObject_10;
	// UnityEngine.GameObject ARTapToPlaceObject::selectObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectObject_11;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARTapToPlaceObject::_arRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ____arRaycastManager_12;
	// UnityEngine.XR.ARFoundation.ARAnchorManager ARTapToPlaceObject::_arAnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ____arAnchorManager_13;
	// UnityEngine.Vector2 ARTapToPlaceObject::touchPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchPosition_14;
	// System.Single ARTapToPlaceObject::rotateY
	float ___rotateY_15;
	// System.Single ARTapToPlaceObject::scaleFactor
	float ___scaleFactor_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> ARTapToPlaceObject::placedAnchors
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___placedAnchors_17;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AnchorPlacement
struct AnchorPlacement_tE9109B30F2EC30804E5CF4AEBB2FAD984B69BA50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AnchorPlacement::cubePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cubePrefab_4;
	// UnityEngine.XR.ARFoundation.ARRaycastManager AnchorPlacement::raycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___raycastManager_5;
	// UnityEngine.XR.ARFoundation.ARAnchorManager AnchorPlacement::anchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> AnchorPlacement::hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hits_7;
};

// DogMove
struct DogMove_t4B5103333A0685F54FAFE2C995A5090144BDEC7D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform DogMove::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Single DogMove::speed
	float ___speed_5;
	// UnityEngine.Transform DogMove::targetTomove
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTomove_6;
	// UnityEngine.Animator DogMove::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_7;
	// DogMove/DogState DogMove::currentState
	int32_t ___currentState_8;
};

// FollowMe
struct FollowMe_t794F724C0C7BCAC0B550E10731F33A740C28391E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FollowMe::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Single FollowMe::distanceFromCamera
	float ___distanceFromCamera_5;
	// System.Single FollowMe::speed
	float ___speed_6;
	// UnityEngine.Collider FollowMe::dogCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___dogCollider_7;
	// UnityEngine.Collider FollowMe::toolCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___toolCollider_8;
	// UnityEngine.Animator FollowMe::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_9;
	// System.Boolean FollowMe::isMovingToTarget
	bool ___isMovingToTarget_10;
	// UnityEngine.Vector3 FollowMe::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_11;
	// System.Single FollowMe::arrivalTime
	float ___arrivalTime_12;
	// System.Single FollowMe::elapsedTime
	float ___elapsedTime_13;
	// System.Boolean FollowMe::Walking
	bool ___Walking_14;
	// System.Boolean FollowMe::Eating
	bool ___Eating_15;
	// System.Boolean FollowMe::Sneezing
	bool ___Sneezing_16;
	// System.Boolean FollowMe::Idle
	bool ___Idle_17;
};

// FollowMeC
struct FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FollowMeC::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// UnityEngine.Transform FollowMeC::cameratarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameratarget_5;
	// System.Single FollowMeC::speed
	float ___speed_6;
	// UnityEngine.Animator FollowMeC::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_7;
	// UnityEngine.GameObject FollowMeC::yesno
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___yesno_8;
};

// Moving
struct Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Moving::maxSpeed
	float ___maxSpeed_4;
	// System.Single Moving::minSpeed
	float ___minSpeed_5;
	// System.Single Moving::defaultSpeed
	float ___defaultSpeed_6;
	// System.Single Moving::speed
	float ___speed_7;
	// System.Single Moving::turningForce
	float ___turningForce_8;
	// System.Single Moving::turningTime
	float ___turningTime_9;
	// System.Single Moving::currentTurningForce
	float ___currentTurningForce_10;
	// System.Single Moving::rotateAmount
	float ___rotateAmount_11;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Moving::initialWaypoints
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___initialWaypoints_12;
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> Moving::waypointQueue
	Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* ___waypointQueue_13;
	// UnityEngine.Transform Moving::currentWaypoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___currentWaypoint_14;
	// System.Single Moving::waypointDistance
	float ___waypointDistance_15;
	// System.Single Moving::prevWaypointDistance
	float ___prevWaypointDistance_16;
	// System.Boolean Moving::isComingClose
	bool ___isComingClose_17;
	// UnityEngine.GameObject Moving::waypointObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waypointObject_18;
	// UnityEngine.Collider Moving::areaCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___areaCollider_19;
	// System.Single Moving::stopTime
	float ___stopTime_20;
	// UnityEngine.Animator Moving::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_21;
	// UnityEngine.Vector3 Moving::startScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startScale_22;
	// UnityEngine.GameObject Moving::feedingbowl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___feedingbowl_23;
	// System.Boolean Moving::stop
	bool ___stop_24;
};

// NineSoftCursor
struct NineSoftCursor_tF775AD67DDF171BAFDE968951407F032EA808B8D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NineSoftProgressbar
struct NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single NineSoftProgressbar::value
	float ___value_4;
	// UnityEngine.UI.Image NineSoftProgressbar::bar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___bar_5;
	// System.Single NineSoftProgressbar::DefaultValue
	float ___DefaultValue_6;
	// UnityEngine.UI.Image/FillMethod NineSoftProgressbar::ProgressType
	int32_t ___ProgressType_7;
};

// NineSoftSliderAnimation
struct NineSoftSliderAnimation_t35C9E1F0D713EBD913AA52BD6EE3A3C54FA4E478  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean NineSoftSliderAnimation::RandomPosition
	bool ___RandomPosition_4;
	// System.Boolean NineSoftSliderAnimation::RandomRotation
	bool ___RandomRotation_5;
	// UnityEngine.UI.Text NineSoftSliderAnimation::textPrefab
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textPrefab_6;
	// UnityEngine.UI.Slider NineSoftSliderAnimation::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_7;
};

// NineSoftTabButton
struct NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent NineSoftTabButton::OnTabChanged
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnTabChanged_4;
	// UnityEngine.UI.Image NineSoftTabButton::Icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___Icon_5;
	// UnityEngine.UI.Image NineSoftTabButton::CheckMark
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___CheckMark_6;
	// UnityEngine.UI.Text NineSoftTabButton::Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Text_7;
	// UnityEngine.UI.Image NineSoftTabButton::Image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___Image_8;
	// UnityEngine.Color NineSoftTabButton::SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___SelectedColor_9;
	// UnityEngine.Color NineSoftTabButton::DefaultColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DefaultColor_10;
};

// NineSoftTabControl
struct NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color NineSoftTabControl::SelectedTabColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___SelectedTabColor_4;
	// UnityEngine.Color NineSoftTabControl::OtherTabsColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___OtherTabsColor_5;
	// System.Single NineSoftTabControl::TabButtonMinimumWidth
	float ___TabButtonMinimumWidth_6;
	// System.Single NineSoftTabControl::TabButtonMaximumWidth
	float ___TabButtonMaximumWidth_7;
	// System.Single NineSoftTabControl::TabButtonMinimumHeight
	float ___TabButtonMinimumHeight_8;
	// System.Single NineSoftTabControl::TabButtonMaximumHeight
	float ___TabButtonMaximumHeight_9;
	// UnityEngine.RectTransform NineSoftTabControl::ButtonsParent
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___ButtonsParent_10;
	// UnityEngine.UI.GridLayoutGroup NineSoftTabControl::GridLayoutGroup
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ___GridLayoutGroup_11;
	// System.Boolean NineSoftTabControl::PreviewOnEditor
	bool ___PreviewOnEditor_12;
	// System.Collections.Generic.List`1<NineSoftTabControl/Tab> NineSoftTabControl::Tabs
	List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* ___Tabs_13;
};

// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Status
struct Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean
struct ToggleSetAnimatorBoolean_t6FA60B6C0ED0E2CDA823B7FDAA64A29A95133944  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// System.String HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean::booleanName
	String_t* ___booleanName_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIonoff
struct UIonoff_t0656A34E8A6D3F56AD31AE2C415A2672ED3FB1BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] UIonoff::UI_
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___UI__4;
	// System.Boolean UIonoff::isActive
	bool ___isActive_5;
};

// UIstartCtrl
struct UIstartCtrl_t6AC90C3DCF73DDA7141AE2FBAD835677EC06E309  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UIstartCtrl::UI_
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UI__4;
};

// drone_move
struct drone_move_tA68DFDEB7EDF075430ABF302198FCA74C45635D6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject drone_move::marker_goal
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___marker_goal_4;
	// UnityEngine.GameObject drone_move::start_point
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___start_point_5;
	// UnityEngine.AI.NavMeshAgent drone_move::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_6;
	// UnityEngine.Vector3 drone_move::parent_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___parent_position_7;
};

// interaction
struct interaction_t58DB2B210A32AAE2F98A5A7F582490683B8CC999  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// menuToggle
struct menuToggle_tAED74B6AEC2281511AD1A615AC7AAB9AF1C1CBEA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject menuToggle::menuPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menuPanel_4;
	// System.Single menuToggle::animationDuration
	float ___animationDuration_5;
	// UnityEngine.AnimationCurve menuToggle::animationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animationCurve_6;
	// UnityEngine.UI.Button menuToggle::toggleButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___toggleButton_7;
	// System.Boolean menuToggle::isMenuActive
	bool ___isMenuActive_8;
	// System.Boolean menuToggle::isAnimating
	bool ___isAnimating_9;
	// System.Single menuToggle::animationTimer
	float ___animationTimer_10;
	// System.Single menuToggle::initialAlpha
	float ___initialAlpha_11;
};

// modeChg
struct modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject modeChg::uiObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiObject_5;
	// System.Single modeChg::displayDuration
	float ___displayDuration_6;
	// UnityEngine.UI.Text modeChg::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_7;
	// System.Boolean modeChg::isDisplaying
	bool ___isDisplaying_8;
	// System.Single modeChg::displayTimer
	float ___displayTimer_9;
};

// objInteraction
struct objInteraction_t22C6D4128228D59EA16C6FFA60695F449AB9CF9B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject objInteraction::spwandObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spwandObject_4;
	// UnityEngine.GameObject objInteraction::yesno
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___yesno_5;
	// UnityEngine.GameObject[] objInteraction::tools
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___tools_6;
	// UnityEngine.UI.Text objInteraction::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_7;
	// UnityEngine.XR.ARFoundation.ARRaycastManager objInteraction::_arRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ____arRaycastManager_8;
};

// ray_tracer
struct ray_tracer_tC6BE5DA494D1903192B6CF5AA5600B51D11F20F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ray_tracer::touch_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___touch_list_4;
	// UnityEngine.GameObject[] ray_tracer::touch_prev
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___touch_prev_5;
	// UnityEngine.RaycastHit ray_tracer::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_6;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// System.Collections.Generic.List`1<NineSoftTabControl/Tab>
struct List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TabU5BU5D_t49131719677FCDB4C0581B782971AD09383BDC30* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<NineSoftTabControl/Tab>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<UnityEngine.Transform>

// System.Collections.Generic.Queue`1<UnityEngine.Transform>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// NineSoftSliderAnimation/<DestroyText>d__7

// NineSoftSliderAnimation/<DestroyText>d__7

// NineSoftTabControl/<>c__DisplayClass12_0

// NineSoftTabControl/<>c__DisplayClass12_0

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Single>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.Touch

// UnityEngine.Touch

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// NineSoftTabControl/Tab

// NineSoftTabControl/Tab

// UnityEngine.UI.Slider/SliderEvent

// UnityEngine.UI.Slider/SliderEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// UnityEngine.Events.UnityAction`1<System.Single>

// UnityEngine.Events.UnityAction`1<System.Single>

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.CanvasRenderer

// UnityEngine.CanvasRenderer

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AI.NavMeshAgent

// UnityEngine.AI.NavMeshAgent

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> ARTapToPlaceObject::hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hits_18;
};

// ARTapToPlaceObject

// AnchorPlacement

// AnchorPlacement

// DogMove

// DogMove

// FollowMe

// FollowMe

// FollowMeC

// FollowMeC

// Moving

// Moving

// NineSoftCursor

// NineSoftCursor

// NineSoftProgressbar

// NineSoftProgressbar

// NineSoftSliderAnimation

// NineSoftSliderAnimation

// NineSoftTabButton

// NineSoftTabButton

// NineSoftTabControl

// NineSoftTabControl

// Score

// Score

// Status

// Status

// HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean

// HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean

// UIonoff

// UIonoff

// UIstartCtrl

// UIstartCtrl

// drone_move

// drone_move

// interaction

// interaction

// menuToggle

// menuToggle

// modeChg
struct modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_StaticFields
{
	// System.Int32 modeChg::mode
	int32_t ___mode_4;
};

// modeChg

// objInteraction

// objInteraction

// ray_tracer

// ray_tracer

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.XR.ARFoundation.ARAnchor

// UnityEngine.XR.ARFoundation.ARAnchor

// UnityEngine.XR.ARFoundation.ARAnchorManager

// UnityEngine.XR.ARFoundation.ARAnchorManager

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.GridLayoutGroup

// UnityEngine.UI.GridLayoutGroup

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___0_call, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARAnchorManager>()
inline ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___1_hitResults, int32_t ___2_trackableTypes, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___0_index, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARAnchor UnityEngine.XR.ARFoundation.ARAnchorManager::AddAnchor(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ARAnchorManager_AddAnchor_mF86AC736D4568019E5BF0DA99720697F8970C559 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean ARTapToPlaceObject::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTapToPlaceObject_TryGetTouchPosition_m37EFBE292089562CBB6BB562333B296B8E274999 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_touchPosition, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, int32_t ___0_pointerId, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::.ctor()
inline void List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void FollowMe::MoveToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMe_MoveToTarget_m0AEE1718D36B5B1B38FF8BD1FAC47A6DFAEB84E2 (FollowMe_t794F724C0C7BCAC0B550E10731F33A740C28391E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void FollowMe::StartMovingToTarget(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMe_StartMovingToTarget_mFEBD0164D3EE8EE1F6EE8E51CD88A33077E1CA47 (FollowMe_t794F724C0C7BCAC0B550E10731F33A740C28391E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, int32_t ___1_relativeTo, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.CanvasRenderer>()
inline CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* GameObject_GetComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_m352B503784BB68953253ED4AD666B68C6CF05BA9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.CanvasRenderer::GetAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasRenderer_GetAlpha_m19845F19FF0A2DA9EEE8F97474E3B85D295C4F05 (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasRenderer::SetAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_SetAlpha_m97E196A1CC718DE16300954D25B4125952D7632C (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, float ___0_alpha, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void NineSoftProgressbar::UpdateValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftProgressbar_UpdateValue_mA12F52DDE2FDCBCB6F4B56FD81DDA5EC523FB6B3 (NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Image/Type UnityEngine.UI.Image::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Image_get_type_m7CE3AA14B38E1C50AC8362176AE842992DA8C639_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::get_fillMethod()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Image_get_fillMethod_mAFB1FAAFA913DB0EE050C4053DBBA6FAAD68A5F1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillMethod(UnityEngine.UI.Image/FillMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillMethod_m5361D29BA950BEFE72E7270AC3BFA0B00AE7E294 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void NineSoftProgressbar::CheckBarImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftProgressbar_CheckBarImage_mE9228B00B83AEAFDE84F8F1636714F16439C3482 (NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115* __this, const RuntimeMethod* method) ;
// System.Void NineSoftProgressbar::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftProgressbar_set_Value_mA4CB760CBB1699435EC554772305312F5ACFF024 (NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___0_call, method);
}
// System.Void NineSoftSliderAnimation::CreateText(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftSliderAnimation_CreateText_mA2D66F010A4A4245CCBD0D140EB134032C38437F (NineSoftSliderAnimation_t35C9E1F0D713EBD913AA52BD6EE3A3C54FA4E478* __this, float ___0_v, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.UI.Text>(T)
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mD0AD654B5C45D1968901D27D7F4F1B486215DCD8 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_original, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Slider_get_handleRect_mF6564572F3D7074E01D17661BD012F5987D328D9_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator NineSoftSliderAnimation::DestroyText(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NineSoftSliderAnimation_DestroyText_m315F1EA8207D8716571E059D1CD18FA93AD213BE (NineSoftSliderAnimation_t35C9E1F0D713EBD913AA52BD6EE3A3C54FA4E478* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_text, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void NineSoftSliderAnimation/<DestroyText>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyTextU3Ed__7__ctor_m4FAF79B5DBDEE744BB6BDF2BE0C8B36A45D966D8 (U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// System.Void NineSoftTabControl::InitializeTabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabControl_InitializeTabs_mF4C2D736BF1229CE829D3BC49FD36613700D24A3 (NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D* __this, const RuntimeMethod* method) ;
// System.Void NineSoftTabControl::ChangeTab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabControl_ChangeTab_m49B4BE88A144C854DC10E4F9CD94C77465B8F9F6 (NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::get_cellSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<NineSoftTabControl/Tab>::get_Count()
inline int32_t List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_inline (List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.GridLayoutGroup::set_cellSize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9 (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void NineSoftTabControl/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m741C8439A5B494F75E4F7DB8998D7D4E3BC0C354 (U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<NineSoftTabControl/Tab>::get_Item(System.Int32)
inline Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC (List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* (*) (List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<NineSoftTabControl/Tab>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m9C9CF5BF57A2C013287512FCF8061FBA59B5D4CD (List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void NineSoftTabButton::Initialize(System.String,UnityEngine.Sprite,UnityEngine.Color,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabButton_Initialize_m936D4CED355CE2370DE61CD39F9A9A5ACE65EBC6 (NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* __this, String_t* ___0_tabName, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_icon, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_defaultColor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_selectedColor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_checkMarkColor, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void NineSoftTabButton::Unselect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabButton_Unselect_mFF3E98016FD33009A5DF5A6B9313265819D06859 (NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* __this, const RuntimeMethod* method) ;
// System.Void NineSoftTabButton::Select()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabButton_Select_m0DCF069C6047821354114D99B42FE50A843C1091 (NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// System.Void DogMove::MoveToPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogMove_MoveToPosition_m14F42116DF46252F7C31678BD9376ED94B98EF98 (DogMove_t4B5103333A0685F54FAFE2C995A5090144BDEC7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) ;
// System.Void DogMove::UpdateAnimationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogMove_UpdateAnimationState_m3152CF8CA1D6D9E14D908FAF3E10D048BB3F6585 (DogMove_t4B5103333A0685F54FAFE2C995A5090144BDEC7D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void modeChg::HideUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void modeChg_HideUI_m78A00489F9A70645D1E0FE9D915AD6830C8E5DEC (modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36* __this, const RuntimeMethod* method) ;
// System.Void modeChg::ShowUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void modeChg_ShowUI_m2279E576D7D1CAF3BF96737550E234E1E0127590 (modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<FollowMeC>()
inline FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* GameObject_GetComponent_TisFollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF_m6B4849722A14B3449E17A8AAED7DA93650A83951 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void FollowMeC::TriggerShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMeC_TriggerShake_m0179079281F404F469487D47132937B32661AB3B (FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* __this, const RuntimeMethod* method) ;
// System.Void FollowMeC::resetTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMeC_resetTarget_mF72E6E4FD889C0B25B2C14E615E720EFD1ABA6C2 (FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void drone_move::MoveToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void drone_move_MoveToTarget_mE29B73B4B047167CF012AC7E825B92EACB7A8A31 (drone_move_tA68DFDEB7EDF075430ABF302198FCA74C45635D6* __this, const RuntimeMethod* method) ;
// System.Void drone_move::PitchCtrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void drone_move_PitchCtrl_mF23F315C1C347F4032D078709C85D257F84C22C8 (drone_move_tA68DFDEB7EDF075430ABF302198FCA74C45635D6* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshAgent_get_velocity_m028219D0E4678D727F00C53AE3DCBCF29AF04DA7 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single drone_move::MapRange(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float drone_move_MapRange_m49F3B5714418730EE05C718A4682E71C0385FF70 (drone_move_tA68DFDEB7EDF075430ABF302198FCA74C45635D6* __this, float ___0_s, float ___1_a1, float ___2_a2, float ___3_b1, float ___4_b2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponentInParent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m4005DFE32A3F44556C2CC9365D31C3DDAB22CBB5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<Moving>()
inline Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* GameObject_GetComponentInParent_TisMoving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A_m0A1A837FCF153E31BD5186323107AE5CCD773CE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Moving::RandomPointInBounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Moving_RandomPointInBounds_m7C0C5060F397B8994D5D206133544339985C06CD (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_bounds, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Transform>::get_Count()
inline int32_t Queue_1_get_Count_m75570136D1908AC20AAB6716B0CEEAD7FF304B3E_inline (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void Moving::CreateWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_CreateWaypoint_mBC6369DFD940DC5AF7C45627B7F3E47B353D371A (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<UnityEngine.Transform>::Dequeue()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Queue_1_Dequeue_m28DDC14F4C1EDDC71DCE27C39C0A10B0F1E1EE87 (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void Moving::RandomizeSpeedAndTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_RandomizeSpeedAndTurn_mF287E3977221250C0F60A1ECF47C7C74B10C22C8 (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) ;
// System.Void Moving::ChangeWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_ChangeWaypoint_mE14480A1C071E880D283857F5BD9CD4BF04CB9BD (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::.ctor()
inline void Queue_1__ctor_mD97416521AFAAF8D111EEB27867F47F24445C938 (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::Enqueue(T)
inline void Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Moving::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_Rotate_m4479EA58C5DD846B0909563AF5BBCCEF495F9173 (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) ;
// System.Void Moving::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_Move_m51FC7529143642E54546DCFD9C91B51BEC16960C (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) ;
// System.Void Moving::CheckWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_CheckWaypoint_m4B4ED1140A6F850E594E01868D0B78CF36342176 (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248 (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
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
// System.Void AnchorPlacement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorPlacement_Awake_mD797A4F06CDB25F58E45FB174E75E3003F23FB2F (AnchorPlacement_tE9109B30F2EC30804E5CF4AEBB2FAD984B69BA50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___raycastManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___raycastManager_5), (void*)L_0);
		// anchorManager = GetComponent<ARAnchorManager>(); // ARAnchorManager ??
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_1;
		L_1 = Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907(__this, Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		__this->___anchorManager_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anchorManager_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void AnchorPlacement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorPlacement_Update_m694D65CE405A95422245FBBAEA3EA486ACC06200 (AnchorPlacement_tE9109B30F2EC30804E5CF4AEBB2FAD984B69BA50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_2 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		// if (raycastManager.Raycast(touch.position, hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_3 = __this->___raycastManager_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = __this->___hits_7;
		NullCheck(L_3);
		bool L_6;
		L_6 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_3, L_4, L_5, 1, NULL);
		if (!L_6)
		{
			goto IL_007c;
		}
	}
	{
		// Pose hitPose = hits[0].pose;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = __this->___hits_7;
		NullCheck(L_7);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_8;
		L_8 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_7, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_3 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_3), NULL);
		V_1 = L_9;
		// ARAnchor anchor = anchorManager.AddAnchor(hitPose); // ?????? ARAnchorManager ??? AddAnchor ??? ??
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_10 = __this->___anchorManager_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_1;
		NullCheck(L_10);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_12;
		L_12 = ARAnchorManager_AddAnchor_mF86AC736D4568019E5BF0DA99720697F8970C559(L_10, L_11, NULL);
		V_2 = L_12;
		// GameObject cube = Instantiate(cubePrefab, hitPose.position, hitPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___cubePrefab_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = L_16.___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_13, L_15, L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// cube.transform.parent = anchor.transform;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_20 = V_2;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_19);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_19, L_21, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void AnchorPlacement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorPlacement__ctor_mF72FFDC55052F8B1F9775AE52C150CBF0A9374A6 (AnchorPlacement_tE9109B30F2EC30804E5CF4AEBB2FAD984B69BA50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		__this->___hits_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hits_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ARTapToPlaceObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Awake_mD41874ABE87A6EB0F15949E24F6632BD8C246173 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arRaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->____arRaycastManager_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arRaycastManager_12), (void*)L_0);
		// _arAnchorManager = GetComponent<ARAnchorManager>();
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_1;
		L_1 = Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907(__this, Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		__this->____arAnchorManager_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arAnchorManager_13), (void*)L_1);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Start_m4A8A22AA04062DE0229C41BC767914F2C04F3020 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		// selectedTarget = copyTarget[0];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___copyTarget_4;
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		__this->___selectedTarget_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedTarget_9), (void*)L_2);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Update_m9B0A45DCE03CA35CFA8CF6CAB12F0369A1C1BAF4 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_3 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!TryGetTouchPosition(out Vector2 touchPosition)) return;
		bool L_0;
		L_0 = ARTapToPlaceObject_TryGetTouchPosition_m37EFBE292089562CBB6BB562333B296B8E274999(__this, (&V_0), NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// if (!TryGetTouchPosition(out Vector2 touchPosition)) return;
		return;
	}

IL_000b:
	{
		// if (EventSystem.current.IsPointerOverGameObject() == true) return;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1;
		L_1 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// if (EventSystem.current.IsPointerOverGameObject() == true) return;
		return;
	}

IL_0018:
	{
		// if (EventSystem.current.IsPointerOverGameObject(0) == true) return;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_3;
		L_3 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// if (EventSystem.current.IsPointerOverGameObject(0) == true) return;
		return;
	}

IL_0026:
	{
		// if (_arRaycastManager.Raycast(touchPosition, hits, UnityEngine.XR.ARSubsystems.TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_5 = __this->____arRaycastManager_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_18;
		NullCheck(L_5);
		bool L_8;
		L_8 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_5, L_6, L_7, 1, NULL);
		if (!L_8)
		{
			goto IL_00f1;
		}
	}
	{
		// var hitPose = hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_9 = ((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_18;
		NullCheck(L_9);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_10;
		L_10 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_9, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_10;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		V_1 = L_11;
		// if (modeChg.mode == 1)
		int32_t L_12 = ((modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_StaticFields*)il2cpp_codegen_static_fields_for(modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var))->___mode_4;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_006a;
		}
	}
	{
		// Dog = GameObject.FindGameObjectWithTag("Dog");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2, NULL);
		__this->___Dog_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Dog_5), (void*)L_13);
		// return;
		return;
	}

IL_006a:
	{
		// if (spwandObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___spwandObject_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00db;
		}
	}
	{
		// ARAnchor anchor = _arAnchorManager.AddAnchor(hitPose);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_16 = __this->____arAnchorManager_13;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_17 = V_1;
		NullCheck(L_16);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_18;
		L_18 = ARAnchorManager_AddAnchor_mF86AC736D4568019E5BF0DA99720697F8970C559(L_16, L_17, NULL);
		V_3 = L_18;
		// Quaternion e = Quaternion.Euler(0, 0, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		V_4 = L_19;
		// spwandObject = Instantiate(selectedTarget, hitPose.position, e);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___selectedTarget_9;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21.___position_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_20, L_22, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spwandObject_10 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spwandObject_10), (void*)L_24);
		// spwandObject.transform.parent = anchor.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___spwandObject_10;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_27 = V_3;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		NullCheck(L_26);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_26, L_28, NULL);
		// Dog = GameObject.FindGameObjectWithTag("Dog");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2, NULL);
		__this->___Dog_5 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Dog_5), (void*)L_29);
		return;
	}

IL_00db:
	{
		// spwandObject.transform.position = hitPose.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___spwandObject_10;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_32 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = L_32.___position_0;
		NullCheck(L_31);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_33, NULL);
	}

IL_00f1:
	{
		// }
		return;
	}
}
// System.Boolean ARTapToPlaceObject::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTapToPlaceObject_TryGetTouchPosition_m37EFBE292089562CBB6BB562333B296B8E274999 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_touchPosition, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// touchPosition = Input.GetTouch(0).position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___0_touchPosition;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_3 = L_5;
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// touchPosition = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = ___0_touchPosition;
		il2cpp_codegen_initobj(L_6, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// return false;
		return (bool)0;
	}
}
// System.Void ARTapToPlaceObject::changeObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_changeObject_m9543CB670EA7F33918AE287F34CFC3A3BD9C4471 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedTarget = copyTarget[i];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___copyTarget_4;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->___selectedTarget_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedTarget_9), (void*)L_3);
		// spwandObject = null;
		__this->___spwandObject_10 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spwandObject_10), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// if (i==0)
		int32_t L_4 = ___0_i;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// spwandObject = GameObject.FindGameObjectWithTag("Dog");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2, NULL);
		__this->___spwandObject_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spwandObject_10), (void*)L_5);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::changeRotateY(UnityEngine.UI.Slider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_changeRotateY_m7F772D4E32B89F20D2AB95E54777B02C07A47D20 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rotateY = s.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = ___0_s;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		__this->___rotateY_15 = L_1;
		// if (spwandObject) spwandObject.transform.eulerAngles = new Vector3(0, rotateY, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___spwandObject_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// if (spwandObject) spwandObject.transform.eulerAngles = new Vector3(0, rotateY, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___spwandObject_10;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		float L_6 = __this->___rotateY_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), L_6, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_5, L_7, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::changeScaleFactor(UnityEngine.UI.Slider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_changeScaleFactor_mCA01138CFAA462A0E02C371D519EC3260889B275 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scaleFactor = s.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = ___0_s;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		__this->___scaleFactor_16 = L_1;
		// if (spwandObject) spwandObject.transform.localScale = new Vector3(scaleFactor, scaleFactor, scaleFactor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___spwandObject_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// if (spwandObject) spwandObject.transform.localScale = new Vector3(scaleFactor, scaleFactor, scaleFactor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___spwandObject_10;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		float L_6 = __this->___scaleFactor_16;
		float L_7 = __this->___scaleFactor_16;
		float L_8 = __this->___scaleFactor_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_9, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject__ctor_m835E4B900ABF4C300EE8938022D18FA3FDD16884 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObject[] copyTarget = new GameObject[3];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___copyTarget_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___copyTarget_4), (void*)L_0);
		// private float scaleFactor = 1;
		__this->___scaleFactor_16 = (1.0f);
		// private List<ARAnchor> placedAnchors = new List<ARAnchor>();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_1 = (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*)il2cpp_codegen_object_new(List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4(L_1, List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		__this->___placedAnchors_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedAnchors_17), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARTapToPlaceObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject__cctor_m18195ED73E851BD165089C409F9D25A878143E21 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_StaticFields*)il2cpp_codegen_static_fields_for(ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994_il2cpp_TypeInfo_var))->___hits_18), (void*)L_0);
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
// System.Void FollowMe::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMe_Start_m3A8483BD0E2E4948C574ADB215222DA093D9D786 (FollowMe_t794F724C0C7BCAC0B550E10731F33A740C28391E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dogCollider == null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___dogCollider_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// dogCollider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2;
		L_2 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___dogCollider_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dogCollider_7), (void*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void FollowMe::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMe_Update_m19AF3F1308F34A63FE4778E8FAD3E78219ABF06A (FollowMe_t794F724C0C7BCAC0B550E10731F33A740C28391E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (target == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (isMovingToTarget)
		bool L_2 = __this->___isMovingToTarget_10;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// MoveToTarget();
		FollowMe_MoveToTarget_m0AEE1718D36B5B1B38FF8BD1FAC47A6DFAEB84E2(__this, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// Vector3 targetPosition = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___target_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_0 = L_4;
		// Vector3 cameraPosition = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		V_1 = L_7;
		// Vector3 desiredPosition = targetPosition + (cameraPosition - targetPosition).normalized * distanceFromCamera;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_10, NULL);
		V_4 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_13 = __this->___distanceFromCamera_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_14, NULL);
		V_2 = L_15;
		// Vector3 newPosition = Vector3.Lerp(transform.position, desiredPosition, speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		float L_19 = __this->___speed_6;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_17, L_18, ((float)il2cpp_codegen_multiply(L_19, L_20)), NULL);
		V_3 = L_21;
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_23, NULL);
		// if (dogCollider.bounds.Contains(toolCollider.bounds.min) && dogCollider.bounds.Contains(toolCollider.bounds.max))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_24 = __this->___dogCollider_7;
		NullCheck(L_24);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_25;
		L_25 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_24, NULL);
		V_5 = L_25;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_26 = __this->___toolCollider_8;
		NullCheck(L_26);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_27;
		L_27 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_26, NULL);
		V_6 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_6), NULL);
		bool L_29;
		L_29 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555((&V_5), L_28, NULL);
		if (!L_29)
		{
			goto IL_00f0;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_30 = __this->___dogCollider_7;
		NullCheck(L_30);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_31;
		L_31 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_30, NULL);
		V_5 = L_31;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_32 = __this->___toolCollider_8;
		NullCheck(L_32);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_33;
		L_33 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_32, NULL);
		V_6 = L_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&V_6), NULL);
		bool L_35;
		L_35 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555((&V_5), L_34, NULL);
		if (!L_35)
		{
			goto IL_00f0;
		}
	}
	{
		// StartMovingToTarget(toolCollider.transform.position);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_36 = __this->___toolCollider_8;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		FollowMe_StartMovingToTarget_mFEBD0164D3EE8EE1F6EE8E51CD88A33077E1CA47(__this, L_38, NULL);
	}

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void FollowMe::MoveToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMe_MoveToTarget_m0AEE1718D36B5B1B38FF8BD1FAC47A6DFAEB84E2 (FollowMe_t794F724C0C7BCAC0B550E10731F33A740C28391E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E5B6DE12D878D632BC14EDA5528A847619B98D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// elapsedTime += Time.deltaTime;
		float L_0 = __this->___elapsedTime_13;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___elapsedTime_13 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (elapsedTime >= arrivalTime)
		float L_2 = __this->___elapsedTime_13;
		float L_3 = __this->___arrivalTime_12;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_00ab;
		}
	}
	{
		// elapsedTime = 0.0f;
		__this->___elapsedTime_13 = (0.0f);
		// isMovingToTarget = false;
		__this->___isMovingToTarget_10 = (bool)0;
		// targetPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___targetPosition_11 = L_4;
		// if (Sneezing)
		bool L_5 = __this->___Sneezing_16;
		if (!L_5)
		{
			goto IL_00da;
		}
	}
	{
		// animator.SetBool("Walking", Walking);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_9;
		bool L_7 = __this->___Walking_14;
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, L_7, NULL);
		// animator.SetBool("Eating", Eating);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___animator_9;
		bool L_9 = __this->___Eating_15;
		NullCheck(L_8);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteralC3E5B6DE12D878D632BC14EDA5528A847619B98D, L_9, NULL);
		// animator.SetBool("Sneezing", Sneezing);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_9;
		bool L_11 = __this->___Sneezing_16;
		NullCheck(L_10);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B, L_11, NULL);
		// animator.SetBool("Idle", Idle);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___animator_9;
		bool L_13 = __this->___Idle_17;
		NullCheck(L_12);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, L_13, NULL);
		// Sneezing = false;
		__this->___Sneezing_16 = (bool)0;
		return;
	}

IL_00ab:
	{
		// Vector3 newPosition = Vector3.Lerp(transform.position, targetPosition, speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___targetPosition_11;
		float L_17 = __this->___speed_6;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_15, L_16, ((float)il2cpp_codegen_multiply(L_17, L_18)), NULL);
		V_0 = L_19;
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_21, NULL);
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void FollowMe::StartMovingToTarget(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMe_StartMovingToTarget_mFEBD0164D3EE8EE1F6EE8E51CD88A33077E1CA47 (FollowMe_t794F724C0C7BCAC0B550E10731F33A740C28391E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E5B6DE12D878D632BC14EDA5528A847619B98D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isMovingToTarget = true;
		__this->___isMovingToTarget_10 = (bool)1;
		// targetPosition = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		__this->___targetPosition_11 = L_0;
		// elapsedTime = 0.0f;
		__this->___elapsedTime_13 = (0.0f);
		// Idle = false;
		__this->___Idle_17 = (bool)0;
		// Walking = true;
		__this->___Walking_14 = (bool)1;
		// Eating = false;
		__this->___Eating_15 = (bool)0;
		// Sneezing = false;
		__this->___Sneezing_16 = (bool)0;
		// animator.SetBool("Walking", Walking);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_9;
		bool L_2 = __this->___Walking_14;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, L_2, NULL);
		// animator.SetBool("Eating", Eating);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_9;
		bool L_4 = __this->___Eating_15;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralC3E5B6DE12D878D632BC14EDA5528A847619B98D, L_4, NULL);
		// animator.SetBool("Sneezing", Sneezing);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___animator_9;
		bool L_6 = __this->___Sneezing_16;
		NullCheck(L_5);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B, L_6, NULL);
		// animator.SetBool("Idle", Idle);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_9;
		bool L_8 = __this->___Idle_17;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, L_8, NULL);
		// }
		return;
	}
}
// System.Void FollowMe::TriggerSneeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMe_TriggerSneeze_m201030DB3E377B15F3F77949CC1037FD6AF40CC1 (FollowMe_t794F724C0C7BCAC0B550E10731F33A740C28391E* __this, const RuntimeMethod* method) 
{
	{
		// Sneezing = true;
		__this->___Sneezing_16 = (bool)1;
		// }
		return;
	}
}
// System.Void FollowMe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMe__ctor_m00EBB757C6670EA0833C4A1DAD6AE0B5ECEBDB03 (FollowMe_t794F724C0C7BCAC0B550E10731F33A740C28391E* __this, const RuntimeMethod* method) 
{
	{
		// public float distanceFromCamera = 2.0f;
		__this->___distanceFromCamera_5 = (2.0f);
		// public float speed = 1.0f;
		__this->___speed_6 = (1.0f);
		// private float arrivalTime = 5.0f;
		__this->___arrivalTime_12 = (5.0f);
		// private bool Idle = true;
		__this->___Idle_17 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FollowMeC::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMeC_Start_mF4BF46F6E60510550EB4CD7A34CC25EB3FC00F4D (FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* __this, const RuntimeMethod* method) 
{
	{
		// target = yesno.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___yesno_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___target_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_1);
		// cameratarget = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		__this->___cameratarget_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameratarget_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void FollowMeC::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMeC_Update_m3EA44E2EC01A5231D29DD55BEDBC7A25C05DD820 (FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// Vector3 targetPosition = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// targetPosition.y = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___y_3;
		(&V_0)->___y_3 = L_4;
		// transform.LookAt(targetPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_5, L_6, NULL);
		// transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_8, NULL);
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_7, L_11, NULL);
		// Vector3 posTemp = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___target_4;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		V_1 = L_13;
		// Vector3 posTemp2 = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		V_2 = L_15;
		// posTemp.y = 0;
		(&V_1)->___y_3 = (0.0f);
		// posTemp2.y = 0;
		(&V_2)->___y_3 = (0.0f);
		// float distance = Vector3.Distance(posTemp2, posTemp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18;
		L_18 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_16, L_17, NULL);
		V_3 = L_18;
		// if (anim.GetBool("Sneezing") || anim.GetBool("Shake"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = __this->___anim_7;
		NullCheck(L_19);
		bool L_20;
		L_20 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_19, _stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B, NULL);
		if (L_20)
		{
			goto IL_00b5;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___anim_7;
		NullCheck(L_21);
		bool L_22;
		L_22 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_21, _stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9, NULL);
		if (!L_22)
		{
			goto IL_00e2;
		}
	}

IL_00b5:
	{
		// speed = 0f;
		__this->___speed_6 = (0.0f);
		// anim.SetBool("Walking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___anim_7;
		NullCheck(L_23);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_23, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, (bool)0, NULL);
		// transform.LookAt(targetPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		NullCheck(L_24);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_24, L_25, NULL);
		goto IL_0176;
	}

IL_00e2:
	{
		// if (distance > 2f)
		float L_26 = V_3;
		if ((!(((float)L_26) > ((float)(2.0f)))))
		{
			goto IL_011e;
		}
	}
	{
		// speed = 0.5f;
		__this->___speed_6 = (0.5f);
		// anim.SetFloat("Speed", speed);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___anim_7;
		float L_28 = __this->___speed_6;
		NullCheck(L_27);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_27, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_28, NULL);
		// anim.SetBool("Walking", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___anim_7;
		NullCheck(L_29);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_29, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, (bool)1, NULL);
		goto IL_0176;
	}

IL_011e:
	{
		// else if (distance > 0.5f)
		float L_30 = V_3;
		if ((!(((float)L_30) > ((float)(0.5f)))))
		{
			goto IL_015a;
		}
	}
	{
		// speed = 0.25f;
		__this->___speed_6 = (0.25f);
		// anim.SetFloat("Speed", speed);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_31 = __this->___anim_7;
		float L_32 = __this->___speed_6;
		NullCheck(L_31);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_31, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_32, NULL);
		// anim.SetBool("Walking", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33 = __this->___anim_7;
		NullCheck(L_33);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_33, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, (bool)1, NULL);
		goto IL_0176;
	}

IL_015a:
	{
		// speed = 0f;
		__this->___speed_6 = (0.0f);
		// anim.SetBool("Walking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34 = __this->___anim_7;
		NullCheck(L_34);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_34, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, (bool)0, NULL);
	}

IL_0176:
	{
		// transform.Translate(Vector3.forward * Time.deltaTime * speed, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_37;
		L_37 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_36, L_37, NULL);
		float L_39 = __this->___speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, L_39, NULL);
		NullCheck(L_35);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_35, L_40, 1, NULL);
		// }
		return;
	}
}
// System.Void FollowMeC::setTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMeC_setTarget_m4F3B71389C32F2BD2200191C1EBECC7967BCF338 (FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_trans, const RuntimeMethod* method) 
{
	{
		// target = trans;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_trans;
		__this->___target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void FollowMeC::resetTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMeC_resetTarget_mF72E6E4FD889C0B25B2C14E615E720EFD1ABA6C2 (FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* __this, const RuntimeMethod* method) 
{
	{
		// target = cameratarget;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___cameratarget_5;
		__this->___target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void FollowMeC::TriggerSneeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMeC_TriggerSneeze_m2E59B59250FFF4A1D5911E2FC576A28A86C7F5A4 (FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(anim.GetBool("Shake"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_0, _stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// anim.SetBool("Shake", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_7;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9, (bool)1, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void FollowMeC::TriggerShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMeC_TriggerShake_m0179079281F404F469487D47132937B32661AB3B (FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(anim.GetBool("Shake")){
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_0, _stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// anim.SetBool("Shake", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_7;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9, (bool)0, NULL);
		return;
	}

IL_0024:
	{
		// anim.SetBool("Shake", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___anim_7;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FollowMeC::OnAnimationTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMeC_OnAnimationTrigger_m1F0D61859CB79DF5CC5B130367EDE126DB42958D (FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* __this, String_t* ___0_triggerName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62304C5290425A707B9D685F513F2ADC2A59150E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (triggerName == "ActionOut")
		String_t* L_0 = ___0_triggerName;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral62304C5290425A707B9D685F513F2ADC2A59150E, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// anim.SetBool("Shake", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_7;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral424CB2B1DDF0703D9F4845DFE8DF6E1D6E3B2EF9, (bool)0, NULL);
		// anim.SetBool("Sneezing", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___anim_7;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B, (bool)0, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void FollowMeC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowMeC__ctor_m3613063A8939A6E8168A66AA5ED1985ABECB4588 (FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1.0f;
		__this->___speed_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void menuToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menuToggle_Start_m121D2A28E1939124A5B107957D8BE287F985177B (menuToggle_tAED74B6AEC2281511AD1A615AC7AAB9AF1C1CBEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_m352B503784BB68953253ED4AD666B68C6CF05BA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&menuToggle_ToggleMenu_m9BC081980658061E9E005FF639CF005E50EB6A8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// initialAlpha = menuPanel.GetComponent<CanvasRenderer>().GetAlpha();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___menuPanel_4;
		NullCheck(L_0);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_1;
		L_1 = GameObject_GetComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_m352B503784BB68953253ED4AD666B68C6CF05BA9(L_0, GameObject_GetComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_m352B503784BB68953253ED4AD666B68C6CF05BA9_RuntimeMethod_var);
		NullCheck(L_1);
		float L_2;
		L_2 = CanvasRenderer_GetAlpha_m19845F19FF0A2DA9EEE8F97474E3B85D295C4F05(L_1, NULL);
		__this->___initialAlpha_11 = L_2;
		// toggleButton.onClick.AddListener(ToggleMenu);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___toggleButton_7;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)menuToggle_ToggleMenu_m9BC081980658061E9E005FF639CF005E50EB6A8C_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void menuToggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menuToggle_Update_mBCDEA3449FF80FA7707B83F7A88C7A4BC858CD9B (menuToggle_tAED74B6AEC2281511AD1A615AC7AAB9AF1C1CBEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_m352B503784BB68953253ED4AD666B68C6CF05BA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (isAnimating)
		bool L_0 = __this->___isAnimating_9;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		// animationTimer -= Time.deltaTime;
		float L_1 = __this->___animationTimer_10;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___animationTimer_10 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// float t = Mathf.Clamp01(animationTimer / animationDuration);
		float L_3 = __this->___animationTimer_10;
		float L_4 = __this->___animationDuration_5;
		float L_5;
		L_5 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_3/L_4)), NULL);
		V_0 = L_5;
		// float alpha = initialAlpha * (1f - animationCurve.Evaluate(t));
		float L_6 = __this->___initialAlpha_11;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = __this->___animationCurve_6;
		float L_8 = V_0;
		NullCheck(L_7);
		float L_9;
		L_9 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_7, L_8, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_6, ((float)il2cpp_codegen_subtract((1.0f), L_9))));
		// menuPanel.GetComponent<CanvasRenderer>().SetAlpha(alpha);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___menuPanel_4;
		NullCheck(L_10);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_11;
		L_11 = GameObject_GetComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_m352B503784BB68953253ED4AD666B68C6CF05BA9(L_10, GameObject_GetComponent_TisCanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860_m352B503784BB68953253ED4AD666B68C6CF05BA9_RuntimeMethod_var);
		float L_12 = V_1;
		NullCheck(L_11);
		CanvasRenderer_SetAlpha_m97E196A1CC718DE16300954D25B4125952D7632C(L_11, L_12, NULL);
		// if (animationTimer <= 0f)
		float L_13 = __this->___animationTimer_10;
		if ((!(((float)L_13) <= ((float)(0.0f)))))
		{
			goto IL_0080;
		}
	}
	{
		// isAnimating = false;
		__this->___isAnimating_9 = (bool)0;
		// if (!isMenuActive)
		bool L_14 = __this->___isMenuActive_8;
		if (L_14)
		{
			goto IL_0080;
		}
	}
	{
		// menuPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___menuPanel_4;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void menuToggle::ToggleMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menuToggle_ToggleMenu_m9BC081980658061E9E005FF639CF005E50EB6A8C (menuToggle_tAED74B6AEC2281511AD1A615AC7AAB9AF1C1CBEA* __this, const RuntimeMethod* method) 
{
	{
		// isMenuActive = !isMenuActive;
		bool L_0 = __this->___isMenuActive_8;
		__this->___isMenuActive_8 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (isMenuActive)
		bool L_1 = __this->___isMenuActive_8;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// menuPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___menuPanel_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
	}

IL_0023:
	{
		// animationTimer = animationDuration;
		float L_3 = __this->___animationDuration_5;
		__this->___animationTimer_10 = L_3;
		// isAnimating = true;
		__this->___isAnimating_9 = (bool)1;
		// }
		return;
	}
}
// System.Void menuToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menuToggle__ctor_m998D23BA8BDED9DEB255C946AE222F49CCB416B4 (menuToggle_tAED74B6AEC2281511AD1A615AC7AAB9AF1C1CBEA* __this, const RuntimeMethod* method) 
{
	{
		// public float animationDuration = 0.5f; // ????? ?? ??
		__this->___animationDuration_5 = (0.5f);
		// private bool isMenuActive = true; // ??? ??? ??
		__this->___isMenuActive_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NineSoftCursor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftCursor_Update_m3EF6329F5E27CA653203BE9B99CBE7678070ABD7 (NineSoftCursor_tF775AD67DDF171BAFDE968951407F032EA808B8D* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = Input.mousePosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// if (Input.GetMouseButtonDown(0)) transform.localScale = Vector3.one * .9f;
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0)) transform.localScale = Vector3.one * .9f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, (0.899999976f), NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_5, NULL);
	}

IL_0032:
	{
		// if (Input.GetMouseButtonUp(0)) transform.localScale = Vector3.one * 1;
		bool L_6;
		L_6 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		// if (Input.GetMouseButtonUp(0)) transform.localScale = Vector3.one * 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, (1.0f), NULL);
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_9, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void NineSoftCursor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftCursor__ctor_m700DD3C2B2897081A728739F07F7A92DF6A5EDE8 (NineSoftCursor_tF775AD67DDF171BAFDE968951407F032EA808B8D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single NineSoftProgressbar::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NineSoftProgressbar_get_Value_m65049E660F280E4B21E73713D83E24252C130BBB (NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115* __this, const RuntimeMethod* method) 
{
	{
		// get => this.value;
		float L_0 = __this->___value_4;
		return L_0;
	}
}
// System.Void NineSoftProgressbar::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftProgressbar_set_Value_mA4CB760CBB1699435EC554772305312F5ACFF024 (NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115* __this, float ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float v = Mathf.Clamp01(value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		V_0 = L_1;
		// this.value = v;
		float L_2 = V_0;
		__this->___value_4 = L_2;
		// bar.fillAmount = v;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___bar_5;
		float L_4 = V_0;
		NullCheck(L_3);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void NineSoftProgressbar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftProgressbar_Start_mC06061DB40FB44725424DC8FDB64C0E2D6889EDE (NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115* __this, const RuntimeMethod* method) 
{
	{
		// UpdateValue();
		NineSoftProgressbar_UpdateValue_mA12F52DDE2FDCBCB6F4B56FD81DDA5EC523FB6B3(__this, NULL);
		// }
		return;
	}
}
// System.Void NineSoftProgressbar::CheckBarImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftProgressbar_CheckBarImage_mE9228B00B83AEAFDE84F8F1636714F16439C3482 (NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bar == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___bar_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// bar = transform.GetChild(0).GetComponent<Image>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, 0, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_3, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___bar_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bar_5), (void*)L_4);
	}

IL_0025:
	{
		// if (bar.type != Image.Type.Filled)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___bar_5;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Image_get_type_m7CE3AA14B38E1C50AC8362176AE842992DA8C639_inline(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_003f;
		}
	}
	{
		// bar.type = Image.Type.Filled;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___bar_5;
		NullCheck(L_7);
		Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF(L_7, 3, NULL);
	}

IL_003f:
	{
		// if (bar.fillMethod != ProgressType)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___bar_5;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Image_get_fillMethod_mAFB1FAAFA913DB0EE050C4053DBBA6FAAD68A5F1_inline(L_8, NULL);
		int32_t L_10 = __this->___ProgressType_7;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0063;
		}
	}
	{
		// bar.fillMethod = ProgressType;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___bar_5;
		int32_t L_12 = __this->___ProgressType_7;
		NullCheck(L_11);
		Image_set_fillMethod_m5361D29BA950BEFE72E7270AC3BFA0B00AE7E294(L_11, L_12, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void NineSoftProgressbar::UpdateValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftProgressbar_UpdateValue_mA12F52DDE2FDCBCB6F4B56FD81DDA5EC523FB6B3 (NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115* __this, const RuntimeMethod* method) 
{
	{
		// CheckBarImage();
		NineSoftProgressbar_CheckBarImage_mE9228B00B83AEAFDE84F8F1636714F16439C3482(__this, NULL);
		// Value = DefaultValue;
		float L_0 = __this->___DefaultValue_6;
		NineSoftProgressbar_set_Value_mA4CB760CBB1699435EC554772305312F5ACFF024(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void NineSoftProgressbar::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftProgressbar_OnDrawGizmos_m6CAE1B5BD75D5EBD8365DD46FCA6EB710217CF01 (NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying) return;
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (Application.isPlaying) return;
		return;
	}

IL_0008:
	{
		// UpdateValue();
		NineSoftProgressbar_UpdateValue_mA12F52DDE2FDCBCB6F4B56FD81DDA5EC523FB6B3(__this, NULL);
		// }
		return;
	}
}
// System.Void NineSoftProgressbar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftProgressbar__ctor_mE73A0E959335A181F68DD768CB29B8A4BAA42AB1 (NineSoftProgressbar_tE3F902ABD2A1B0545AB660EE2A9BB586BEF24115* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NineSoftSliderAnimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftSliderAnimation_Awake_m98B8939D1107899A0BE02160D966500921027B65 (NineSoftSliderAnimation_t35C9E1F0D713EBD913AA52BD6EE3A3C54FA4E478* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NineSoftSliderAnimation_ChangeValue_mD6858FD37251456AB7B50C1A421C17A78E936AB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___slider_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_7), (void*)L_0);
		// slider.onValueChanged.AddListener(ChangeValue);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_7;
		NullCheck(L_1);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_2;
		L_2 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_1, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_3 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_3, __this, (intptr_t)((void*)NineSoftSliderAnimation_ChangeValue_mD6858FD37251456AB7B50C1A421C17A78E936AB5_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_2, L_3, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NineSoftSliderAnimation::ChangeValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftSliderAnimation_ChangeValue_mD6858FD37251456AB7B50C1A421C17A78E936AB5 (NineSoftSliderAnimation_t35C9E1F0D713EBD913AA52BD6EE3A3C54FA4E478* __this, float ___0_v, const RuntimeMethod* method) 
{
	{
		// CreateText(v);
		float L_0 = ___0_v;
		NineSoftSliderAnimation_CreateText_mA2D66F010A4A4245CCBD0D140EB134032C38437F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void NineSoftSliderAnimation::CreateText(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftSliderAnimation_CreateText_mA2D66F010A4A4245CCBD0D140EB134032C38437F (NineSoftSliderAnimation_t35C9E1F0D713EBD913AA52BD6EE3A3C54FA4E478* __this, float ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mD0AD654B5C45D1968901D27D7F4F1B486215DCD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_2 = NULL;
	{
		// if (textPrefab == null) return;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (textPrefab == null) return;
		return;
	}

IL_000f:
	{
		// Text t = Instantiate(textPrefab);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___textPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3;
		L_3 = Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mD0AD654B5C45D1968901D27D7F4F1B486215DCD8(L_2, Object_Instantiate_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mD0AD654B5C45D1968901D27D7F4F1B486215DCD8_RuntimeMethod_var);
		V_0 = L_3;
		// t.text = v.ToString("0.#");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = V_0;
		String_t* L_5;
		L_5 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___0_v), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// t.transform.parent = this.transform.transform;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_7);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, L_9, NULL);
		// t.transform.position = this.transform.position + (RandomPosition ? new Vector3(Random.Range(-150, 150), Random.Range(-70, 70)) : new Vector3(slider.handleRect.transform.localPosition.x, 50));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		bool L_14 = __this->___RandomPosition_4;
		G_B3_0 = L_13;
		G_B3_1 = L_11;
		if (L_14)
		{
			G_B4_0 = L_13;
			G_B4_1 = L_11;
			goto IL_0082;
		}
	}
	{
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_15 = __this->___slider_7;
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = Slider_get_handleRect_mF6564572F3D7074E01D17661BD012F5987D328D9_inline(L_15, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19 = L_18.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_20), L_19, (50.0f), /*hidden argument*/NULL);
		G_B5_0 = L_20;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_00a1;
	}

IL_0082:
	{
		int32_t L_21;
		L_21 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-150), ((int32_t)150), NULL);
		int32_t L_22;
		L_22 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-70), ((int32_t)70), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_23), ((float)L_21), ((float)L_22), /*hidden argument*/NULL);
		G_B5_0 = L_23;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_00a1:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B5_1, G_B5_0, NULL);
		NullCheck(G_B5_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B5_2, L_24, NULL);
		// if (RandomRotation) t.transform.rotation = Quaternion.Euler(0, 0, Random.Range(-45, 45));
		bool L_25 = __this->___RandomRotation_5;
		if (!L_25)
		{
			goto IL_00d7;
		}
	}
	{
		// if (RandomRotation) t.transform.rotation = Quaternion.Euler(0, 0, Random.Range(-45, 45));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = V_0;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		int32_t L_28;
		L_28 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-45), ((int32_t)45), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)L_28), NULL);
		NullCheck(L_27);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_27, L_29, NULL);
	}

IL_00d7:
	{
		// StartCoroutine(DestroyText(t));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = V_0;
		RuntimeObject* L_31;
		L_31 = NineSoftSliderAnimation_DestroyText_m315F1EA8207D8716571E059D1CD18FA93AD213BE(__this, L_30, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_32;
		L_32 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_31, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator NineSoftSliderAnimation::DestroyText(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NineSoftSliderAnimation_DestroyText_m315F1EA8207D8716571E059D1CD18FA93AD213BE (NineSoftSliderAnimation_t35C9E1F0D713EBD913AA52BD6EE3A3C54FA4E478* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3* L_0 = (U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3*)il2cpp_codegen_object_new(U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDestroyTextU3Ed__7__ctor_m4FAF79B5DBDEE744BB6BDF2BE0C8B36A45D966D8(L_0, 0, NULL);
		U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3* L_1 = L_0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = ___0_text;
		NullCheck(L_1);
		L_1->___text_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___text_2), (void*)L_2);
		return L_1;
	}
}
// System.Void NineSoftSliderAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftSliderAnimation__ctor_mC7BCB88A06D85456352500484CEDAC7B16574521 (NineSoftSliderAnimation_t35C9E1F0D713EBD913AA52BD6EE3A3C54FA4E478* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private bool RandomRotation = true;
		__this->___RandomRotation_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NineSoftSliderAnimation/<DestroyText>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyTextU3Ed__7__ctor_m4FAF79B5DBDEE744BB6BDF2BE0C8B36A45D966D8 (U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NineSoftSliderAnimation/<DestroyText>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyTextU3Ed__7_System_IDisposable_Dispose_m7BC32A0E95354F2D329936CF285D079652232D19 (U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NineSoftSliderAnimation/<DestroyText>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestroyTextU3Ed__7_MoveNext_m674E4582C983BEC89A7C4E915D009F540841ACC1 (U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_003b;
			}
			case 2:
			{
				goto IL_00ac;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_2 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_2, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_2);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t = 0;
		__this->___U3CtU3E5__2_3 = (0.0f);
		goto IL_00b3;
	}

IL_004f:
	{
		// t += Time.deltaTime * .25f;
		float L_3 = __this->___U3CtU3E5__2_3;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtU3E5__2_3 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, (0.25f)))));
		// Color c = text.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___text_2;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		V_1 = L_6;
		// c.a = Mathf.Lerp(c.a, 0, t);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_1;
		float L_8 = L_7.___a_3;
		float L_9 = __this->___U3CtU3E5__2_3;
		float L_10;
		L_10 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_8, (0.0f), L_9, NULL);
		(&V_1)->___a_3 = L_10;
		// text.color = c;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___text_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_1;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ac:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b3:
	{
		// while (t < 1)
		float L_13 = __this->___U3CtU3E5__2_3;
		if ((((float)L_13) < ((float)(1.0f))))
		{
			goto IL_004f;
		}
	}
	{
		// Destroy(text.gameObject);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___text_2;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_15, NULL);
		// }
		return (bool)0;
	}
}
// System.Object NineSoftSliderAnimation/<DestroyText>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDestroyTextU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3A9E1656F93EF94C24D0E90A6C0129FCA41DC8B6 (U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NineSoftSliderAnimation/<DestroyText>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyTextU3Ed__7_System_Collections_IEnumerator_Reset_m5C580CD34DE22153B68F6E7B3E4349FD79C22783 (U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestroyTextU3Ed__7_System_Collections_IEnumerator_Reset_m5C580CD34DE22153B68F6E7B3E4349FD79C22783_RuntimeMethod_var)));
	}
}
// System.Object NineSoftSliderAnimation/<DestroyText>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDestroyTextU3Ed__7_System_Collections_IEnumerator_get_Current_m1F44D66B1FD0BE71974909D2472CA59BCA2569A1 (U3CDestroyTextU3Ed__7_tC9EAB947DE99B304609E4B783FA31DF11FB69ED3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void NineSoftTabButton::Initialize(System.String,UnityEngine.Sprite,UnityEngine.Color,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabButton_Initialize_m936D4CED355CE2370DE61CD39F9A9A5ACE65EBC6 (NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* __this, String_t* ___0_tabName, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_icon, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_defaultColor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_selectedColor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_checkMarkColor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___Image_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Image_8), (void*)L_0);
		// if (Text != null) Text.text = tabName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___Text_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if (Text != null) Text.text = tabName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___Text_7;
		String_t* L_4 = ___0_tabName;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
	}

IL_0026:
	{
		// Icon.sprite = icon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___Icon_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = ___1_icon;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		// DefaultColor = defaultColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___2_defaultColor;
		__this->___DefaultColor_10 = L_7;
		// SelectedColor = selectedColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___3_selectedColor;
		__this->___SelectedColor_9 = L_8;
		// CheckMark.color = checkMarkColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___CheckMark_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___4_checkMarkColor;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// }
		return;
	}
}
// System.Void NineSoftTabButton::ChangeMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabButton_ChangeMe_m876A11B23351CD740BE27FCB9F63111C6662A72F (NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// public void ChangeMe() => OnTabChanged?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnTabChanged_4;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		return;
	}
}
// System.Void NineSoftTabButton::Select()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabButton_Select_m0DCF069C6047821354114D99B42FE50A843C1091 (NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Image.color = SelectedColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___Image_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___SelectedColor_9;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// CheckMark.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___CheckMark_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// if (Text != null) Text.color = CheckMark.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___Text_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// if (Text != null) Text.color = CheckMark.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___Text_7;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___CheckMark_6;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_8);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void NineSoftTabButton::Unselect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabButton_Unselect_mFF3E98016FD33009A5DF5A6B9313265819D06859 (NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Image.color =DefaultColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___Image_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___DefaultColor_10;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// CheckMark.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___CheckMark_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// if (Text != null) Text.color = Color.gray;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___Text_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// if (Text != null) Text.color = Color.gray;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___Text_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void NineSoftTabButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabButton__ctor_m11C3F13EC13F694D6984AF8D467D921B3D585D7B (NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NineSoftTabControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabControl_Awake_m41311A97033596077ABE6AE3911D515CAB5E57A3 (NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D* __this, const RuntimeMethod* method) 
{
	{
		// InitializeTabs();
		NineSoftTabControl_InitializeTabs_mF4C2D736BF1229CE829D3BC49FD36613700D24A3(__this, NULL);
		// ChangeTab(0);
		NineSoftTabControl_ChangeTab_m49B4BE88A144C854DC10E4F9CD94C77465B8F9F6(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void NineSoftTabControl::InitializeTabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabControl_InitializeTabs_mF4C2D736BF1229CE829D3BC49FD36613700D24A3 (NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m9C9CF5BF57A2C013287512FCF8061FBA59B5D4CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CInitializeTabsU3Eb__0_m035DA42924445A9151470D1A2BBC47C274A944F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB6F3663755F3D7A576CFBB1E90139FDA6F8E28E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7B34EA7BB94956D8039953DD2FE66A45FED4665);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C* V_4 = NULL;
	float G_B4_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		// float width = (TabButtonMaximumWidth != 0 && TabButtonMinimumWidth != 0) ? Mathf.Clamp(ButtonsParent.rect.width / Tabs.Count, TabButtonMinimumWidth, TabButtonMaximumWidth) : GridLayoutGroup.cellSize.x;
		float L_0 = __this->___TabButtonMaximumWidth_7;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_001a;
		}
	}
	{
		float L_1 = __this->___TabButtonMinimumWidth_6;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}

IL_001a:
	{
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_2 = __this->___GridLayoutGroup_11;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D_inline(L_2, NULL);
		float L_4 = L_3.___x_0;
		G_B4_0 = L_4;
		goto IL_005d;
	}

IL_002c:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___ButtonsParent_10;
		NullCheck(L_5);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_5, NULL);
		V_2 = L_6;
		float L_7;
		L_7 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_8 = __this->___Tabs_13;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_inline(L_8, List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_RuntimeMethod_var);
		float L_10 = __this->___TabButtonMinimumWidth_6;
		float L_11 = __this->___TabButtonMaximumWidth_7;
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/((float)L_9))), L_10, L_11, NULL);
		G_B4_0 = L_12;
	}

IL_005d:
	{
		V_0 = G_B4_0;
		// float height = (TabButtonMaximumHeight != 0 && TabButtonMinimumHeight != 0) ? Mathf.Clamp(ButtonsParent.rect.height / Tabs.Count, TabButtonMinimumHeight, TabButtonMaximumHeight) : GridLayoutGroup.cellSize.y;
		float L_13 = __this->___TabButtonMaximumHeight_9;
		if ((((float)L_13) == ((float)(0.0f))))
		{
			goto IL_0078;
		}
	}
	{
		float L_14 = __this->___TabButtonMinimumHeight_8;
		if ((!(((float)L_14) == ((float)(0.0f)))))
		{
			goto IL_008a;
		}
	}

IL_0078:
	{
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_15 = __this->___GridLayoutGroup_11;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D_inline(L_15, NULL);
		float L_17 = L_16.___y_1;
		G_B8_0 = L_17;
		goto IL_00bb;
	}

IL_008a:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___ButtonsParent_10;
		NullCheck(L_18);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_19;
		L_19 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_18, NULL);
		V_2 = L_19;
		float L_20;
		L_20 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_21 = __this->___Tabs_13;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_inline(L_21, List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_RuntimeMethod_var);
		float L_23 = __this->___TabButtonMinimumHeight_8;
		float L_24 = __this->___TabButtonMaximumHeight_9;
		float L_25;
		L_25 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_20/((float)L_22))), L_23, L_24, NULL);
		G_B8_0 = L_25;
	}

IL_00bb:
	{
		V_1 = G_B8_0;
		// GridLayoutGroup.cellSize = new Vector2(width, height);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_26 = __this->___GridLayoutGroup_11;
		float L_27 = V_0;
		float L_28 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9(L_26, L_29, NULL);
		// for (int i = 0; i < Tabs.Count; i++)
		V_3 = 0;
		goto IL_01f3;
	}

IL_00d5:
	{
		U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C* L_30 = (U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		U3CU3Ec__DisplayClass12_0__ctor_m741C8439A5B494F75E4F7DB8998D7D4E3BC0C354(L_30, NULL);
		V_4 = L_30;
		U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C* L_31 = V_4;
		NullCheck(L_31);
		L_31->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___U3CU3E4__this_1), (void*)__this);
		// if (Application.isPlaying)
		bool L_32;
		L_32 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_32)
		{
			goto IL_014f;
		}
	}
	{
		// if (Tabs[i].TabButton == null && Tabs[i].TabPanel == null)
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_33 = __this->___Tabs_13;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_35;
		L_35 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_33, L_34, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_35);
		NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* L_36 = L_35->___TabButton_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_014f;
		}
	}
	{
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_38 = __this->___Tabs_13;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_40;
		L_40 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_38, L_39, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = L_40->___TabPanel_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_41, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_42)
		{
			goto IL_014f;
		}
	}
	{
		// Debug.LogError("This tab is incorrect: " + Tabs[i].TabName + "\nPlease delete this tab manually from List or add TabPanel and TabButton\n-----");
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_43 = __this->___Tabs_13;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_45;
		L_45 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_43, L_44, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_45);
		String_t* L_46 = L_45->___TabName_0;
		String_t* L_47;
		L_47 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralCB6F3663755F3D7A576CFBB1E90139FDA6F8E28E, L_46, _stringLiteralE7B34EA7BB94956D8039953DD2FE66A45FED4665, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_47, NULL);
		// Tabs.RemoveAt(i);
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_48 = __this->___Tabs_13;
		int32_t L_49 = V_3;
		NullCheck(L_48);
		List_1_RemoveAt_m9C9CF5BF57A2C013287512FCF8061FBA59B5D4CD(L_48, L_49, List_1_RemoveAt_m9C9CF5BF57A2C013287512FCF8061FBA59B5D4CD_RuntimeMethod_var);
		// break;
		return;
	}

IL_014f:
	{
		// int index = i;
		U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C* L_50 = V_4;
		int32_t L_51 = V_3;
		NullCheck(L_50);
		L_50->___index_0 = L_51;
		// Tabs[i].TabButton.Initialize(Tabs[i].TabName, Tabs[i].TabIcon, OtherTabsColor, SelectedTabColor, Tabs[i].CheckMarkColor);
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_52 = __this->___Tabs_13;
		int32_t L_53 = V_3;
		NullCheck(L_52);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_54;
		L_54 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_52, L_53, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_54);
		NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* L_55 = L_54->___TabButton_3;
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_56 = __this->___Tabs_13;
		int32_t L_57 = V_3;
		NullCheck(L_56);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_58;
		L_58 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_56, L_57, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_58);
		String_t* L_59 = L_58->___TabName_0;
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_60 = __this->___Tabs_13;
		int32_t L_61 = V_3;
		NullCheck(L_60);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_62;
		L_62 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_60, L_61, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_62);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_63 = L_62->___TabIcon_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64 = __this->___OtherTabsColor_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_65 = __this->___SelectedTabColor_4;
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_66 = __this->___Tabs_13;
		int32_t L_67 = V_3;
		NullCheck(L_66);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_68;
		L_68 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_66, L_67, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_68);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69 = L_68->___CheckMarkColor_2;
		NullCheck(L_55);
		NineSoftTabButton_Initialize_m936D4CED355CE2370DE61CD39F9A9A5ACE65EBC6(L_55, L_59, L_63, L_64, L_65, L_69, NULL);
		// Tabs[i].TabButton.OnTabChanged.RemoveAllListeners();
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_70 = __this->___Tabs_13;
		int32_t L_71 = V_3;
		NullCheck(L_70);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_72;
		L_72 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_70, L_71, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_72);
		NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* L_73 = L_72->___TabButton_3;
		NullCheck(L_73);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_74 = L_73->___OnTabChanged_4;
		NullCheck(L_74);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_74, NULL);
		// Tabs[i].TabButton.OnTabChanged.AddListener(() => { ChangeTab(index); });
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_75 = __this->___Tabs_13;
		int32_t L_76 = V_3;
		NullCheck(L_75);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_77;
		L_77 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_75, L_76, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_77);
		NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* L_78 = L_77->___TabButton_3;
		NullCheck(L_78);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_79 = L_78->___OnTabChanged_4;
		U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C* L_80 = V_4;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_81 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_81, L_80, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CInitializeTabsU3Eb__0_m035DA42924445A9151470D1A2BBC47C274A944F1_RuntimeMethod_var), NULL);
		NullCheck(L_79);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_79, L_81, NULL);
		// for (int i = 0; i < Tabs.Count; i++)
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01f3:
	{
		// for (int i = 0; i < Tabs.Count; i++)
		int32_t L_83 = V_3;
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_84 = __this->___Tabs_13;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_inline(L_84, List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_RuntimeMethod_var);
		if ((((int32_t)L_83) < ((int32_t)L_85)))
		{
			goto IL_00d5;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NineSoftTabControl::ChangeTab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabControl_ChangeTab_m49B4BE88A144C854DC10E4F9CD94C77465B8F9F6 (NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Tabs.Count; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// Tabs[i].TabPanel.SetActive(false);
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_0 = __this->___Tabs_13;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_2;
		L_2 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_0, L_1, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___TabPanel_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// Tabs[i].TabButton.Unselect();
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_4 = __this->___Tabs_13;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_6;
		L_6 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_4, L_5, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_6);
		NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* L_7 = L_6->___TabButton_3;
		NullCheck(L_7);
		NineSoftTabButton_Unselect_mFF3E98016FD33009A5DF5A6B9313265819D06859(L_7, NULL);
		// for (int i = 0; i < Tabs.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < Tabs.Count; i++)
		int32_t L_9 = V_0;
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_10 = __this->___Tabs_13;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_inline(L_10, List_1_get_Count_m2B96B7EA1E8EAB4EA679B7EEE42590571F0ECDB5_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// Tabs[index].TabPanel.SetActive(true);
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_12 = __this->___Tabs_13;
		int32_t L_13 = ___0_index;
		NullCheck(L_12);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_14;
		L_14 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_12, L_13, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___TabPanel_4;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// Tabs[index].TabButton.Select();
		List_1_t37181EC3B8DEED989520FF43088B5077FB7FAD47* L_16 = __this->___Tabs_13;
		int32_t L_17 = ___0_index;
		NullCheck(L_16);
		Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* L_18;
		L_18 = List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC(L_16, L_17, List_1_get_Item_m08ACE0D62D36E6FBC195A7C0F0FA6E70988618BC_RuntimeMethod_var);
		NullCheck(L_18);
		NineSoftTabButton_tB74B36CAA7F9E6DB90E09A3E56674442039C3ED2* L_19 = L_18->___TabButton_3;
		NullCheck(L_19);
		NineSoftTabButton_Select_m0DCF069C6047821354114D99B42FE50A843C1091(L_19, NULL);
		// }
		return;
	}
}
// System.Void NineSoftTabControl::AddNewTab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabControl_AddNewTab_m91FB9D456C37BDDD5230FA206DCE41A80135E112 (NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NineSoftTabControl::RemoveLastTab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabControl_RemoveLastTab_mB59B83E5049F1CDA5349A1538D1A3B8287309CA5 (NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NineSoftTabControl::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabControl_OnDrawGizmos_m0C7F539D4051BC3F3C53D7D73C57CEF68CFD3998 (NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D* __this, const RuntimeMethod* method) 
{
	{
		// if (PreviewOnEditor)
		bool L_0 = __this->___PreviewOnEditor_12;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// InitializeTabs();
		NineSoftTabControl_InitializeTabs_mF4C2D736BF1229CE829D3BC49FD36613700D24A3(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void NineSoftTabControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NineSoftTabControl__ctor_m47663123C775402C64FD7DB743940F8328944317 (NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float TabButtonMinimumWidth = 90;
		__this->___TabButtonMinimumWidth_6 = (90.0f);
		// [SerializeField] private float TabButtonMaximumWidth = 200;
		__this->___TabButtonMaximumWidth_7 = (200.0f);
		// [SerializeField] private float TabButtonMinimumHeight = 70;
		__this->___TabButtonMinimumHeight_8 = (70.0f);
		// [SerializeField] private float TabButtonMaximumHeight = 100;
		__this->___TabButtonMaximumHeight_9 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NineSoftTabControl/Tab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tab__ctor_m57649F1A0DB526E26E2C0262BCA97A4EF8F1D135 (Tab_t641162C39D7E0F332985EA4CC301CCCD51151780* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void NineSoftTabControl/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m741C8439A5B494F75E4F7DB8998D7D4E3BC0C354 (U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NineSoftTabControl/<>c__DisplayClass12_0::<InitializeTabs>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CInitializeTabsU3Eb__0_m035DA42924445A9151470D1A2BBC47C274A944F1 (U3CU3Ec__DisplayClass12_0_tBAF8B5B19AA043866A53FBA04076853B5D6BA87C* __this, const RuntimeMethod* method) 
{
	{
		// Tabs[i].TabButton.OnTabChanged.AddListener(() => { ChangeTab(index); });
		NineSoftTabControl_t70B700BD63CA9DA593F195AD8474A62F60AE055D* L_0 = __this->___U3CU3E4__this_1;
		int32_t L_1 = __this->___index_0;
		NullCheck(L_0);
		NineSoftTabControl_ChangeTab_m49B4BE88A144C854DC10E4F9CD94C77465B8F9F6(L_0, L_1, NULL);
		// Tabs[i].TabButton.OnTabChanged.AddListener(() => { ChangeTab(index); });
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
// System.Void DogMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogMove_Start_mBADC146C99FC22BC74D7290E512AC4118790AFC2 (DogMove_t4B5103333A0685F54FAFE2C995A5090144BDEC7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___target_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_1);
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void DogMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogMove_Update_m2ACFF63F0A23DE810CDDB58974DF2BA422A529AC (DogMove_t4B5103333A0685F54FAFE2C995A5090144BDEC7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (modeChg.mode == 0)
		int32_t L_0 = ((modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_StaticFields*)il2cpp_codegen_static_fields_for(modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var))->___mode_4;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// transform.LookAt(target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_4;
		NullCheck(L_1);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// if (targetTomove != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___targetTomove_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// MoveToPosition(targetTomove.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___targetTomove_6;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		DogMove_MoveToPosition_m14F42116DF46252F7C31678BD9376ED94B98EF98(__this, L_6, NULL);
	}

IL_0038:
	{
		// if (targetTomove == transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___targetTomove_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// targetTomove = null;
		__this->___targetTomove_6 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetTomove_6), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
	}

IL_0052:
	{
		// UpdateAnimationState();
		DogMove_UpdateAnimationState_m3152CF8CA1D6D9E14D908FAF3E10D048BB3F6585(__this, NULL);
		// }
		return;
	}
}
// System.Void DogMove::MoveToPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogMove_MoveToPosition_m14F42116DF46252F7C31678BD9376ED94B98EF98 (DogMove_t4B5103333A0685F54FAFE2C995A5090144BDEC7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = (targetPosition - transform.position).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_2, NULL);
		V_1 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		// Quaternion targetRotation = Quaternion.LookRotation(direction, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_4, L_5, NULL);
		V_0 = L_6;
		// transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, Time.deltaTime * 5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_0;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_9, L_10, ((float)il2cpp_codegen_multiply(L_11, (5.0f))), NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_12, NULL);
		// transform.position += transform.forward * speed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_16, NULL);
		float L_18 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_21, NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_22, NULL);
		// anim.SetBool("Walking", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___anim_7;
		NullCheck(L_23);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_23, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DogMove::UpdateAnimationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogMove_UpdateAnimationState_m3152CF8CA1D6D9E14D908FAF3E10D048BB3F6585 (DogMove_t4B5103333A0685F54FAFE2C995A5090144BDEC7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E5B6DE12D878D632BC14EDA5528A847619B98D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (currentState)
		int32_t L_0 = __this->___currentState_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_0082;
			}
		}
	}
	{
		return;
	}

IL_001a:
	{
		// anim.SetBool("Walking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___anim_7;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, (bool)0, NULL);
		// anim.SetBool("Eating", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___anim_7;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralC3E5B6DE12D878D632BC14EDA5528A847619B98D, (bool)0, NULL);
		// anim.SetBool("Sneezing", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_7;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B, (bool)0, NULL);
		// break;
		return;
	}

IL_004e:
	{
		// anim.SetBool("Walking", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_7;
		NullCheck(L_5);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, (bool)1, NULL);
		// anim.SetBool("Eating", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___anim_7;
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteralC3E5B6DE12D878D632BC14EDA5528A847619B98D, (bool)0, NULL);
		// anim.SetBool("Sneezing", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___anim_7;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B, (bool)0, NULL);
		// break;
		return;
	}

IL_0082:
	{
		// anim.SetBool("Walking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___anim_7;
		NullCheck(L_8);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, (bool)0, NULL);
		// anim.SetBool("Eating", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___anim_7;
		NullCheck(L_9);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_9, _stringLiteralC3E5B6DE12D878D632BC14EDA5528A847619B98D, (bool)1, NULL);
		// anim.SetBool("Sneezing", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___anim_7;
		NullCheck(L_10);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DogMove::FindTargetGoal(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogMove_FindTargetGoal_m3FAA5274B36C558FF765FF2F3C92D36D735662AC (DogMove_t4B5103333A0685F54FAFE2C995A5090144BDEC7D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_flag, const RuntimeMethod* method) 
{
	{
		// targetTomove = flag.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_flag;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___targetTomove_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetTomove_6), (void*)L_1);
		// if (currentState == DogState.Idle)
		int32_t L_2 = __this->___currentState_8;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// currentState = DogState.Walk;
		__this->___currentState_8 = 1;
		return;
	}

IL_001c:
	{
		// else if (currentState == DogState.Walk)
		int32_t L_3 = __this->___currentState_8;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002c;
		}
	}
	{
		// currentState = DogState.Eat;
		__this->___currentState_8 = 2;
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void DogMove::TriggerSneeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogMove_TriggerSneeze_mCD995E5BFCD68B87456FF4909BC9DA385877BF0E (DogMove_t4B5103333A0685F54FAFE2C995A5090144BDEC7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("Sneezing", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_7;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral85EB20F680312799E8EC74583FE4AE9D1B02147B, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DogMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DogMove__ctor_m2B041EA03D99AE8F369902A2A2827A4E86380C90 (DogMove_t4B5103333A0685F54FAFE2C995A5090144BDEC7D* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 3.0f;
		__this->___speed_5 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void modeChg::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void modeChg_Start_m24EABD79C29A31228CDA05D2811AD3C614BB72B5 (modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36* __this, const RuntimeMethod* method) 
{
	{
		// HideUI(); // ?? ? UI? ????.
		modeChg_HideUI_m78A00489F9A70645D1E0FE9D915AD6830C8E5DEC(__this, NULL);
		// }
		return;
	}
}
// System.Void modeChg::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void modeChg_Update_m6C66BE5E31B9DB249D669114C5273685E5AAD049 (modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BBABFA4D890D0C0C2F34E2CC7C26377A5963212);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B1340D077A4F943E0557C6D2277F741AE7BE788);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mode ==0)
		int32_t L_0 = ((modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_StaticFields*)il2cpp_codegen_static_fields_for(modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var))->___mode_4;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// text.text = "Mode : Place";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___text_7;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral2BBABFA4D890D0C0C2F34E2CC7C26377A5963212);
		goto IL_0029;
	}

IL_0019:
	{
		// text.text = "Mode : Ctrl";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___text_7;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral6B1340D077A4F943E0557C6D2277F741AE7BE788);
	}

IL_0029:
	{
		// if (isDisplaying)
		bool L_3 = __this->___isDisplaying_8;
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		// displayTimer -= Time.deltaTime;
		float L_4 = __this->___displayTimer_9;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___displayTimer_9 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// if (displayTimer <= 0f)
		float L_6 = __this->___displayTimer_9;
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		// HideUI();
		modeChg_HideUI_m78A00489F9A70645D1E0FE9D915AD6830C8E5DEC(__this, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void modeChg::onClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void modeChg_onClicked_mA9A16CE7FF8FFD35D46D5418DD1AC45256F46964 (modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mode == 0)
		int32_t L_0 = ((modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_StaticFields*)il2cpp_codegen_static_fields_for(modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var))->___mode_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// mode = 1;
		((modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_StaticFields*)il2cpp_codegen_static_fields_for(modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var))->___mode_4 = 1;
		// ShowUI();
		modeChg_ShowUI_m2279E576D7D1CAF3BF96737550E234E1E0127590(__this, NULL);
		goto IL_0021;
	}

IL_0015:
	{
		// mode = 0;
		((modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_StaticFields*)il2cpp_codegen_static_fields_for(modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var))->___mode_4 = 0;
		// ShowUI();
		modeChg_ShowUI_m2279E576D7D1CAF3BF96737550E234E1E0127590(__this, NULL);
	}

IL_0021:
	{
		// displayTimer = displayDuration;
		float L_1 = __this->___displayDuration_6;
		__this->___displayTimer_9 = L_1;
		// isDisplaying = true;
		__this->___isDisplaying_8 = (bool)1;
		// }
		return;
	}
}
// System.Void modeChg::ShowUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void modeChg_ShowUI_m2279E576D7D1CAF3BF96737550E234E1E0127590 (modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36* __this, const RuntimeMethod* method) 
{
	{
		// uiObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___uiObject_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void modeChg::HideUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void modeChg_HideUI_m78A00489F9A70645D1E0FE9D915AD6830C8E5DEC (modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36* __this, const RuntimeMethod* method) 
{
	{
		// uiObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___uiObject_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// isDisplaying = false;
		__this->___isDisplaying_8 = (bool)0;
		// }
		return;
	}
}
// System.Void modeChg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void modeChg__ctor_m5DE3D9CF0C30AC2441F1DAEB64A47006FD005AF9 (modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36* __this, const RuntimeMethod* method) 
{
	{
		// public float displayDuration = 1f; // ?? ?? ??
		__this->___displayDuration_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void objInteraction::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objInteraction_Awake_m3E0C08526B9000D08239AC746F5C6D4ED6CC08F2 (objInteraction_t22C6D4128228D59EA16C6FFA60695F449AB9CF9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arRaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->____arRaycastManager_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arRaycastManager_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void objInteraction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objInteraction_Start_m9FC033505C64BE07E74C0BAE6B820444DFD56C8A (objInteraction_t22C6D4128228D59EA16C6FFA60695F449AB9CF9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ED9BF5E8C6C2F3AF4A650DD6D7E6AEF9351E826);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = "Name: Detroy?";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_7;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1ED9BF5E8C6C2F3AF4A650DD6D7E6AEF9351E826);
		// }
		return;
	}
}
// System.Void objInteraction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objInteraction_Update_mB06996C048C1EC6B29A91AC1BB7F5BF3AF6BB8BC (objInteraction_t22C6D4128228D59EA16C6FFA60695F449AB9CF9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF_m6B4849722A14B3449E17A8AAED7DA93650A83951_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CCBE5A0AD8B1E14B1F9B4CDF23CD554AE1E51E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B29B71EFF4A42420196790CFBF698B1EBF3C182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* V_3 = NULL;
	{
		// if(modeChg.mode == 0) return;
		int32_t L_0 = ((modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_StaticFields*)il2cpp_codegen_static_fields_for(modeChg_t528B4ABA2C118CD99B5902724D9FC6A662F7EB36_il2cpp_TypeInfo_var))->___mode_4;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if(modeChg.mode == 0) return;
		return;
	}

IL_0008:
	{
		// Ray raycast = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_1 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		NullCheck(L_1);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_4, NULL);
		// if (Physics.Raycast(raycast, out raycastHit))
		bool L_6;
		L_6 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_5, (&V_0), NULL);
		if (!L_6)
		{
			goto IL_00f5;
		}
	}
	{
		// if (EventSystem.current.IsPointerOverGameObject() == true) return; // ui ??? ?? ??
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_7;
		L_7 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_7, NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// if (EventSystem.current.IsPointerOverGameObject() == true) return; // ui ??? ?? ??
		return;
	}

IL_003e:
	{
		// if (EventSystem.current.IsPointerOverGameObject(0) == true) return;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_9;
		L_9 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2(L_9, 0, NULL);
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		// if (EventSystem.current.IsPointerOverGameObject(0) == true) return;
		return;
	}

IL_004c:
	{
		// Vector3 hitPose = raycastHit.point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		// GameObject Dog = null;
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// if(raycastHit.collider.tag == "Dog")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12;
		L_12 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_12, NULL);
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2, NULL);
		if (!L_14)
		{
			goto IL_0098;
		}
	}
	{
		// Dog = raycastHit.collider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_15;
		L_15 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		V_2 = L_16;
		// dogMoveComponent = Dog.GetComponent<FollowMeC>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_2;
		NullCheck(L_17);
		FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* L_18;
		L_18 = GameObject_GetComponent_TisFollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF_m6B4849722A14B3449E17A8AAED7DA93650A83951(L_17, GameObject_GetComponent_TisFollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF_m6B4849722A14B3449E17A8AAED7DA93650A83951_RuntimeMethod_var);
		V_3 = L_18;
		// if (dogMoveComponent != null)
		FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* L_19 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00f5;
		}
	}
	{
		// dogMoveComponent.TriggerShake();
		FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* L_21 = V_3;
		NullCheck(L_21);
		FollowMeC_TriggerShake_m0179079281F404F469487D47132937B32661AB3B(L_21, NULL);
		// dogMoveComponent.resetTarget();
		FollowMeC_t48FD106B799952453DCE93C9572E49CEEBD426EF* L_22 = V_3;
		NullCheck(L_22);
		FollowMeC_resetTarget_mF72E6E4FD889C0B25B2C14E615E720EFD1ABA6C2(L_22, NULL);
		return;
	}

IL_0098:
	{
		// else if(raycastHit.collider.tag == "Tool")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_23;
		L_23 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_23, NULL);
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral4B29B71EFF4A42420196790CFBF698B1EBF3C182, NULL);
		if (!L_25)
		{
			goto IL_00f5;
		}
	}
	{
		// if(!Dog == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_26, NULL);
		// spwandObject = raycastHit.collider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28;
		L_28 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_28, NULL);
		__this->___spwandObject_4 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spwandObject_4), (void*)L_29);
		// yesno.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___yesno_5;
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
		// text.text = spwandObject.name + ": Detroy?";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = __this->___text_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___spwandObject_4;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_32, NULL);
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_33, _stringLiteral1CCBE5A0AD8B1E14B1F9B4CDF23CD554AE1E51E3, NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_34);
	}

IL_00f5:
	{
		// }
		return;
	}
}
// System.Void objInteraction::destroyObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objInteraction_destroyObject_m69E35FF72C7E2436CEF712E2912C02450346AE09 (objInteraction_t22C6D4128228D59EA16C6FFA60695F449AB9CF9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(spwandObject) Destroy(spwandObject); // ??? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___spwandObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if(spwandObject) Destroy(spwandObject); // ??? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___spwandObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0018:
	{
		// yesno.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___yesno_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// spwandObject = null;
		__this->___spwandObject_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spwandObject_4), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void objInteraction::interactionTool(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objInteraction_interactionTool_mA8B747487F728134B9636B2B172A02042DC0A048 (objInteraction_t22C6D4128228D59EA16C6FFA60695F449AB9CF9B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_tools, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CCBE5A0AD8B1E14B1F9B4CDF23CD554AE1E51E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spwandObject = tools;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_tools;
		__this->___spwandObject_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spwandObject_4), (void*)L_0);
		// yesno.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___yesno_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// text.text = spwandObject.name + ": Detroy?";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___text_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___spwandObject_4;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral1CCBE5A0AD8B1E14B1F9B4CDF23CD554AE1E51E3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void objInteraction::cancled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objInteraction_cancled_mF74132DBCFA6143A459B81A75B88730C8150B0B3 (objInteraction_t22C6D4128228D59EA16C6FFA60695F449AB9CF9B* __this, const RuntimeMethod* method) 
{
	{
		// yesno.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___yesno_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void objInteraction::detroyAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objInteraction_detroyAll_mFF9B147601CBF46FD3798304A962643D6DDDC1C0 (objInteraction_t22C6D4128228D59EA16C6FFA60695F449AB9CF9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B29B71EFF4A42420196790CFBF698B1EBF3C182);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// tools = GameObject.FindGameObjectsWithTag("Tool");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral4B29B71EFF4A42420196790CFBF698B1EBF3C182, NULL);
		__this->___tools_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tools_6), (void*)L_0);
		// for(int i=0; i<tools.Length; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		// Destroy(tools[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___tools_6;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// for(int i=0; i<tools.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		// for(int i=0; i<tools.Length; i++)
		int32_t L_6 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___tools_6;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		// tools = GameObject.FindGameObjectsWithTag("Dog");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8;
		L_8 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral1B7CDFAA052393BF0A4851F5F643E64EA20FAFC2, NULL);
		__this->___tools_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tools_6), (void*)L_8);
		// for(int i=0; i<tools.Length; i++)
		V_1 = 0;
		goto IL_0055;
	}

IL_0044:
	{
		// Destroy(tools[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___tools_6;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_12, NULL);
		// for(int i=0; i<tools.Length; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0055:
	{
		// for(int i=0; i<tools.Length; i++)
		int32_t L_14 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___tools_6;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		// }
		return;
	}
}
// System.Void objInteraction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objInteraction__ctor_m50393AFD844D15EC2328AAFE091133FC31C60098 (objInteraction_t22C6D4128228D59EA16C6FFA60695F449AB9CF9B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIonoff::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIonoff_Start_m0633C2C78DCBD7048D53154079AF498E802D38E1 (UIonoff_t0656A34E8A6D3F56AD31AE2C415A2672ED3FB1BD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIonoff::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIonoff_Update_m2E85071706B8AB27DF013F243E358F603C09956C (UIonoff_t0656A34E8A6D3F56AD31AE2C415A2672ED3FB1BD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIonoff::isClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIonoff_isClicked_m7FAF82F6F435DEC2F86AF97F9E3E87FFF9D79E4E (UIonoff_t0656A34E8A6D3F56AD31AE2C415A2672ED3FB1BD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(isActive == false)
		bool L_0 = __this->___isActive_5;
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		// for(int i=0; i<UI_.Length; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_000c:
	{
		// UI_[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___UI__4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// for(int i=0; i<UI_.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001e:
	{
		// for(int i=0; i<UI_.Length; i++)
		int32_t L_6 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___UI__4;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// isActive = true;
		__this->___isActive_5 = (bool)1;
		return;
	}

IL_0031:
	{
		// for(int i=0; i<UI_.Length; i++)
		V_1 = 0;
		goto IL_0047;
	}

IL_0035:
	{
		// UI_[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___UI__4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// for(int i=0; i<UI_.Length; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0047:
	{
		// for(int i=0; i<UI_.Length; i++)
		int32_t L_13 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___UI__4;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		// isActive = false;
		__this->___isActive_5 = (bool)0;
		// }
		return;
	}
}
// System.Void UIonoff::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIonoff__ctor_mAB48C7456D66422561F01EE57B81A58A1FBAF9CB (UIonoff_t0656A34E8A6D3F56AD31AE2C415A2672ED3FB1BD* __this, const RuntimeMethod* method) 
{
	{
		// bool isActive = true;
		__this->___isActive_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIstartCtrl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIstartCtrl_Start_m8594A1B11729C90F90E192681380B1CEE23EE78D (UIstartCtrl_t6AC90C3DCF73DDA7141AE2FBAD835677EC06E309* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIstartCtrl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIstartCtrl_Update_mACD899C9D59DAB1E8741BFDE6588ED9176A66642 (UIstartCtrl_t6AC90C3DCF73DDA7141AE2FBAD835677EC06E309* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIstartCtrl::isClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIstartCtrl_isClicked_m748FF53B6001275C4FEBFED816B3DB75FA5FB389 (UIstartCtrl_t6AC90C3DCF73DDA7141AE2FBAD835677EC06E309* __this, const RuntimeMethod* method) 
{
	{
		// UI_.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___UI__4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIstartCtrl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIstartCtrl__ctor_m61FCEA25301CC990A9EC545F5267C19F4DF4C325 (UIstartCtrl_t6AC90C3DCF73DDA7141AE2FBAD835677EC06E309* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void drone_move::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void drone_move_Start_m711A7F5B11F4B1200BFD7879F9BC6588085BA0EE (drone_move_tA68DFDEB7EDF075430ABF302198FCA74C45635D6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void drone_move::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void drone_move_Update_m4887DA0363778504AE0493E4090A654D2EFE4CF6 (drone_move_tA68DFDEB7EDF075430ABF302198FCA74C45635D6* __this, const RuntimeMethod* method) 
{
	{
		// MoveToTarget();
		drone_move_MoveToTarget_mE29B73B4B047167CF012AC7E825B92EACB7A8A31(__this, NULL);
		// PitchCtrl();
		drone_move_PitchCtrl_mF23F315C1C347F4032D078709C85D257F84C22C8(__this, NULL);
		// }
		return;
	}
}
// System.Void drone_move::MoveToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void drone_move_MoveToTarget_mE29B73B4B047167CF012AC7E825B92EACB7A8A31 (drone_move_tA68DFDEB7EDF075430ABF302198FCA74C45635D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parent_position = marker_goal.transform.parent.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___marker_goal_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___parent_position_7 = L_3;
		// Debug.Log(parent_position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___parent_position_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// if (!marker_goal.GetComponent<MeshRenderer>().enabled)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___marker_goal_4;
		NullCheck(L_7);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_8;
		L_8 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_7, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_9;
		L_9 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_8, NULL);
		if (L_9)
		{
			goto IL_005a;
		}
	}
	{
		// agent.SetDestination(start_point.transform.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_10 = __this->___agent_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___start_point_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		NullCheck(L_10);
		bool L_14;
		L_14 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_10, L_13, NULL);
		return;
	}

IL_005a:
	{
		// agent.SetDestination(parent_position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_15 = __this->___agent_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___parent_position_7;
		NullCheck(L_15);
		bool L_17;
		L_17 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Single drone_move::MapRange(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float drone_move_MapRange_m49F3B5714418730EE05C718A4682E71C0385FF70 (drone_move_tA68DFDEB7EDF075430ABF302198FCA74C45635D6* __this, float ___0_s, float ___1_a1, float ___2_a2, float ___3_b1, float ___4_b2, const RuntimeMethod* method) 
{
	{
		// if (s >= a2) return b2;
		float L_0 = ___0_s;
		float L_1 = ___2_a2;
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0007;
		}
	}
	{
		// if (s >= a2) return b2;
		float L_2 = ___4_b2;
		return L_2;
	}

IL_0007:
	{
		// if (s <= a1) return b1;
		float L_3 = ___0_s;
		float L_4 = ___1_a1;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_000e;
		}
	}
	{
		// if (s <= a1) return b1;
		float L_5 = ___3_b1;
		return L_5;
	}

IL_000e:
	{
		// return b1 + (s - a1) * (b2 - b1) / (a2 - a1);
		float L_6 = ___3_b1;
		float L_7 = ___0_s;
		float L_8 = ___1_a1;
		float L_9 = ___4_b2;
		float L_10 = ___3_b1;
		float L_11 = ___2_a2;
		float L_12 = ___1_a1;
		return ((float)il2cpp_codegen_add(L_6, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_7, L_8)), ((float)il2cpp_codegen_subtract(L_9, L_10))))/((float)il2cpp_codegen_subtract(L_11, L_12))))));
	}
}
// System.Void drone_move::PitchCtrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void drone_move_PitchCtrl_mF23F315C1C347F4032D078709C85D257F84C22C8 (drone_move_tA68DFDEB7EDF075430ABF302198FCA74C45635D6* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// transform.eulerAngles = new Vector3(
		//     MapRange(agent.velocity.magnitude, 0f, 2f, 0f, 20f),
		//     transform.eulerAngles.y,
		//     transform.eulerAngles.z
		//     );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_1 = __this->___agent_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = NavMeshAgent_get_velocity_m028219D0E4678D727F00C53AE3DCBCF29AF04DA7(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_4;
		L_4 = drone_move_MapRange_m49F3B5714418730EE05C718A4682E71C0385FF70(__this, L_3, (0.0f), (2.0f), (0.0f), (20.0f), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_5, NULL);
		float L_7 = L_6.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_4, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_11, NULL);
		// }
		return;
	}
}
// System.Void drone_move::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void drone_move__ctor_m3B400A8799B0E1C53FE82E70B1ABFA3020D53B88 (drone_move_tA68DFDEB7EDF075430ABF302198FCA74C45635D6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void interaction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void interaction_Start_m398B5D75DBB63B5217108CDE125D1BF8E7738C96 (interaction_t58DB2B210A32AAE2F98A5A7F582490683B8CC999* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void interaction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void interaction_Update_mDE76492D6E27C6CC2439BCFB2BF26D080C167D9C (interaction_t58DB2B210A32AAE2F98A5A7F582490683B8CC999* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void interaction::touchEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void interaction_touchEnded_mD3AD3CD6E34FF0373FF7F33EC672A4AFCB09ECA0 (interaction_t58DB2B210A32AAE2F98A5A7F582490683B8CC999* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1AC2EA06291EF0A60F6323B59D90CB425D5759A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Touch ended");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA1AC2EA06291EF0A60F6323B59D90CB425D5759A, NULL);
		// }
		return;
	}
}
// System.Void interaction::touchStay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void interaction_touchStay_m975DF9F2A636E483C1A780BC245F7C45EC2C8603 (interaction_t58DB2B210A32AAE2F98A5A7F582490683B8CC999* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF4F507D162A6B35F0ACD929B316C925755159FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Touch stays");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDF4F507D162A6B35F0ACD929B316C925755159FC, NULL);
		// }
		return;
	}
}
// System.Void interaction::touchExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void interaction_touchExit_m0BD471B2D53522E4EE703191C9782805E6BE3C67 (interaction_t58DB2B210A32AAE2F98A5A7F582490683B8CC999* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443FD192456EA11DFC73B69C90F7F8FDBF25B6D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Touch exited");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral443FD192456EA11DFC73B69C90F7F8FDBF25B6D4, NULL);
		// }
		return;
	}
}
// System.Void interaction::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void interaction_OnCollisionEnter_m18F88436813B55B5DC5F84ED5F2107D06BA8078C (interaction_t58DB2B210A32AAE2F98A5A7F582490683B8CC999* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m4005DFE32A3F44556C2CC9365D31C3DDAB22CBB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisMoving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A_m0A1A837FCF153E31BD5186323107AE5CCD773CE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E5B6DE12D878D632BC14EDA5528A847619B98D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD93F3BBC30D2DD72B908885E299611095BDD75C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Feed"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralD93F3BBC30D2DD72B908885E299611095BDD75C8, NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// this.gameObject.GetComponentInParent<Animator>().SetTrigger("Eating");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = GameObject_GetComponentInParent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m4005DFE32A3F44556C2CC9365D31C3DDAB22CBB5(L_3, GameObject_GetComponentInParent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m4005DFE32A3F44556C2CC9365D31C3DDAB22CBB5_RuntimeMethod_var);
		NullCheck(L_4);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_4, _stringLiteralC3E5B6DE12D878D632BC14EDA5528A847619B98D, NULL);
		// this.gameObject.GetComponentInParent<Moving>().stop = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* L_6;
		L_6 = GameObject_GetComponentInParent_TisMoving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A_m0A1A837FCF153E31BD5186323107AE5CCD773CE8(L_5, GameObject_GetComponentInParent_TisMoving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A_m0A1A837FCF153E31BD5186323107AE5CCD773CE8_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___stop_24 = (bool)1;
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void interaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void interaction__ctor_m0DEFFE08DFEE3CBCF175532A7713E1CB8652D555 (interaction_t58DB2B210A32AAE2F98A5A7F582490683B8CC999* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Vector3 Moving::RandomPointInBounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Moving_RandomPointInBounds_m7C0C5060F397B8994D5D206133544339985C06CD (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_bounds, const RuntimeMethod* method) 
{
	{
		// return new Vector3(
		//     Random.Range(bounds.min.x, bounds.max.x),
		//     Random.Range(bounds.min.y, bounds.max.y),
		//     Random.Range(bounds.min.z, bounds.max.z)
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&___0_bounds), NULL);
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&___0_bounds), NULL);
		float L_3 = L_2.___x_2;
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_1, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&___0_bounds), NULL);
		float L_6 = L_5.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&___0_bounds), NULL);
		float L_8 = L_7.___y_3;
		float L_9;
		L_9 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&___0_bounds), NULL);
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&___0_bounds), NULL);
		float L_13 = L_12.___z_4;
		float L_14;
		L_14 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_11, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Moving::RandomizeSpeedAndTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_RandomizeSpeedAndTurn_mF287E3977221250C0F60A1ECF47C7C74B10C22C8 (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) 
{
	{
		// speed = Random.Range(minSpeed, maxSpeed);
		float L_0 = __this->___minSpeed_5;
		float L_1 = __this->___maxSpeed_4;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_0, L_1, NULL);
		__this->___speed_7 = L_2;
		// currentTurningForce = Random.Range(0.5f * turningForce, turningForce);
		float L_3 = __this->___turningForce_8;
		float L_4 = __this->___turningForce_8;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_multiply((0.5f), L_3)), L_4, NULL);
		__this->___currentTurningForce_10 = L_5;
		// turningTime = 1 / currentTurningForce;
		float L_6 = __this->___currentTurningForce_10;
		__this->___turningTime_9 = ((float)((1.0f)/L_6));
		// stopTime = Random.Range(0.0f, 7.0f); // 0~7??? ???? ???
		float L_7;
		L_7 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (7.0f), NULL);
		__this->___stopTime_20 = L_7;
		// }
		return;
	}
}
// System.Void Moving::CreateWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_CreateWaypoint_mBC6369DFD940DC5AF7C45627B7F3E47B353D371A (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 waypointPosition = RandomPointInBounds(areaCollider.bounds);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___areaCollider_19;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Moving_RandomPointInBounds_m7C0C5060F397B8994D5D206133544339985C06CD(L_1, NULL);
		V_0 = L_2;
		// currentWaypoint.position = waypointPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___currentWaypoint_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Moving::ChangeWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_ChangeWaypoint_mE14480A1C071E880D283857F5BD9CD4BF04CB9BD (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m28DDC14F4C1EDDC71DCE27C39C0A10B0F1E1EE87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m75570136D1908AC20AAB6716B0CEEAD7FF304B3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (waypointQueue.Count == 0) // ??? ???? ????? 0?? ?? ???
		Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* L_0 = __this->___waypointQueue_13;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m75570136D1908AC20AAB6716B0CEEAD7FF304B3E_inline(L_0, Queue_1_get_Count_m75570136D1908AC20AAB6716B0CEEAD7FF304B3E_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// CreateWaypoint();
		Moving_CreateWaypoint_mBC6369DFD940DC5AF7C45627B7F3E47B353D371A(__this, NULL);
		goto IL_0026;
	}

IL_0015:
	{
		// currentWaypoint = waypointQueue.Dequeue();
		Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* L_2 = __this->___waypointQueue_13;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Queue_1_Dequeue_m28DDC14F4C1EDDC71DCE27C39C0A10B0F1E1EE87(L_2, Queue_1_Dequeue_m28DDC14F4C1EDDC71DCE27C39C0A10B0F1E1EE87_RuntimeMethod_var);
		__this->___currentWaypoint_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWaypoint_14), (void*)L_3);
	}

IL_0026:
	{
		// isComingClose = false;
		__this->___isComingClose_17 = (bool)0;
		// RandomizeSpeedAndTurn(); // ??? ??? ????? ????? ????? ??????? ?????????? ????
		Moving_RandomizeSpeedAndTurn_mF287E3977221250C0F60A1ECF47C7C74B10C22C8(__this, NULL);
		// }
		return;
	}
}
// System.Void Moving::CheckWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_CheckWaypoint_m4B4ED1140A6F850E594E01868D0B78CF36342176 (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) 
{
	{
		// waypointDistance = Vector3.Distance(transform.position, currentWaypoint.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___currentWaypoint_14;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_3, NULL);
		__this->___waypointDistance_15 = L_4;
		// if (waypointDistance >= prevWaypointDistance)
		float L_5 = __this->___waypointDistance_15;
		float L_6 = __this->___prevWaypointDistance_16;
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_003f;
		}
	}
	{
		// if (isComingClose == true)
		bool L_7 = __this->___isComingClose_17;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// ChangeWaypoint();
		Moving_ChangeWaypoint_mE14480A1C071E880D283857F5BD9CD4BF04CB9BD(__this, NULL);
		goto IL_0046;
	}

IL_003f:
	{
		// isComingClose = true;
		__this->___isComingClose_17 = (bool)1;
	}

IL_0046:
	{
		// prevWaypointDistance = waypointDistance;
		float L_8 = __this->___waypointDistance_15;
		__this->___prevWaypointDistance_16 = L_8;
		// }
		return;
	}
}
// System.Void Moving::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_Rotate_m4479EA58C5DD846B0909563AF5BBCCEF495F9173 (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (stopTime > 5.0f)
		float L_0 = __this->___stopTime_20;
		if ((!(((float)L_0) > ((float)(5.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		// Vector3 targetDir = currentWaypoint.position - transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___currentWaypoint_14;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_4, NULL);
		// Quaternion lookRotation = Quaternion.LookRotation(targetDir);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_5, NULL);
		V_0 = L_6;
		// float delta = Quaternion.Angle(transform.rotation, lookRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		float L_10;
		L_10 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_8, L_9, NULL);
		V_1 = L_10;
		// if (delta > 0f)
		float L_11 = V_1;
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		// float lerpAmount = Mathf.SmoothDampAngle(delta, 0.0f, ref rotateAmount, turningTime);
		float L_12 = V_1;
		float* L_13 = (&__this->___rotateAmount_11);
		float L_14 = __this->___turningTime_9;
		float L_15;
		L_15 = Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline(L_12, (0.0f), L_13, L_14, NULL);
		V_2 = L_15;
		// lerpAmount = 1.0f - (lerpAmount / delta);
		float L_16 = V_2;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_16/L_17))));
		// transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, lerpAmount);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_0;
		float L_22 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_20, L_21, L_22, NULL);
		NullCheck(L_18);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_18, L_23, NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void Moving::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_Move_m51FC7529143642E54546DCFD9C91B51BEC16960C (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetFloat("Speed", speed);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_21;
		float L_1 = __this->___speed_7;
		NullCheck(L_0);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_0, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_1, NULL);
		// if (stopTime < 5f)
		float L_2 = __this->___stopTime_20;
		if ((!(((float)L_2) < ((float)(5.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// transform.Translate(new Vector3(0, 0, 0));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_3, L_4, NULL);
		// anim.SetBool("Walking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_21;
		NullCheck(L_5);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, (bool)0, NULL);
		return;
	}

IL_0054:
	{
		// transform.Translate(new Vector3(0, 0, speed) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_7 = __this->___speed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		NullCheck(L_6);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_6, L_10, NULL);
		// anim.SetBool("Walking", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___anim_21;
		NullCheck(L_11);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_11, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Moving::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_Start_m821443F9EA8D1673923FA0D4BC8667644EA145BC (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mD97416521AFAAF8D111EEB27867F47F24445C938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// waypointQueue = new Queue<Transform>();
		Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* L_0 = (Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A*)il2cpp_codegen_object_new(Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mD97416521AFAAF8D111EEB27867F47F24445C938(L_0, Queue_1__ctor_mD97416521AFAAF8D111EEB27867F47F24445C938_RuntimeMethod_var);
		__this->___waypointQueue_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypointQueue_13), (void*)L_0);
		// foreach (Transform t in initialWaypoints)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___initialWaypoints_12;
		NullCheck(L_1);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_2;
		L_2 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_1, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_0), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0019_1:
			{
				// foreach (Transform t in initialWaypoints)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
				L_3 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_0), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				V_1 = L_3;
				// waypointQueue.Enqueue(t);
				Queue_1_tED3A82CB4024BD256422C3EF148E0EDAFDFC852A* L_4 = __this->___waypointQueue_13;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_1;
				NullCheck(L_4);
				Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE(L_4, L_5, Queue_1_Enqueue_mA058BEAD12331B5341BDD8127BBE1CDF3533FEBE_RuntimeMethod_var);
			}

IL_002d_1:
			{
				// foreach (Transform t in initialWaypoints)
				bool L_6;
				L_6 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_0), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// ChangeWaypoint();
		Moving_ChangeWaypoint_mE14480A1C071E880D283857F5BD9CD4BF04CB9BD(__this, NULL);
		// speed = defaultSpeed;
		float L_7 = __this->___defaultSpeed_6;
		__this->___speed_7 = L_7;
		// turningTime = 1 / turningForce;
		float L_8 = __this->___turningForce_8;
		__this->___turningTime_9 = ((float)((1.0f)/L_8));
		// anim = GetComponent<Animator>(); // ??????? ??????? ????
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9;
		L_9 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_21 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_21), (void*)L_9);
		// startScale = transform.localScale; // ??? ???? ?????? ????????
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		__this->___startScale_22 = L_11;
		// stop = false;
		__this->___stop_24 = (bool)0;
		// stopTime = 5f; // ???
		__this->___stopTime_20 = (5.0f);
		// }
		return;
	}
}
// System.Void Moving::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_Update_m03847FC4C139BD6D9BEEA096D2428BC557614677 (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral211CD37AA63592C136A096F893A5362619328946);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (stop)
		bool L_0 = __this->___stop_24;
		if (!L_0)
		{
			goto IL_0082;
		}
	}
	{
		// if (stopTime > 0f)
		float L_1 = __this->___stopTime_20;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// stopTime = -6f;
		__this->___stopTime_20 = (-6.0f);
	}

IL_0020:
	{
		// transform.Translate(new Vector3(0, 0, 0));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_2, L_3, NULL);
		// anim.SetBool("Walking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_21;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral7F4682F559107108074468C96021CDFA3B5C0C04, (bool)0, NULL);
		// if (stopTime > -1f)
		float L_5 = __this->___stopTime_20;
		if ((!(((float)L_5) > ((float)(-1.0f)))))
		{
			goto IL_00d5;
		}
	}
	{
		// stop = false;
		__this->___stop_24 = (bool)0;
		// anim.SetTrigger("Full");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___anim_21;
		NullCheck(L_6);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteral211CD37AA63592C136A096F893A5362619328946, NULL);
		// feedingbowl.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___feedingbowl_23;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		goto IL_00d5;
	}

IL_0082:
	{
		// if (feedingbowl.gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___feedingbowl_23;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_9, NULL);
		if (!L_10)
		{
			goto IL_00b2;
		}
	}
	{
		// stopTime = 7f;
		__this->___stopTime_20 = (7.0f);
		// currentWaypoint = feedingbowl.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___feedingbowl_23;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		__this->___currentWaypoint_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWaypoint_14), (void*)L_12);
		goto IL_00c3;
	}

IL_00b2:
	{
		// currentWaypoint = waypointObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___waypointObject_18;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		__this->___currentWaypoint_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWaypoint_14), (void*)L_14);
	}

IL_00c3:
	{
		// Rotate();
		Moving_Rotate_m4479EA58C5DD846B0909563AF5BBCCEF495F9173(__this, NULL);
		// Move();
		Moving_Move_m51FC7529143642E54546DCFD9C91B51BEC16960C(__this, NULL);
		// CheckWaypoint();
		Moving_CheckWaypoint_m4B4ED1140A6F850E594E01868D0B78CF36342176(__this, NULL);
	}

IL_00d5:
	{
		// stopTime += 1.0f * Time.deltaTime;
		float L_15 = __this->___stopTime_20;
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___stopTime_20 = ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply((1.0f), L_16))));
		// }
		return;
	}
}
// System.Void Moving::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving_LateUpdate_m3EBFBC636B5F62B1323500F5307D6BE2446367B6 (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.localScale != startScale)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___startScale_22;
		bool L_3;
		L_3 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// transform.localScale = startScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___startScale_22;
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Moving::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Moving__ctor_m45450BF9FB1BB9006CD865B0753A80D8CB13C9F2 (Moving_t91FF3FFA2F54FF5A3C0A995251864A2C0D82C27A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ray_tracer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ray_tracer_Start_mC8396B2293521680A579F969D940AC9BE70B9303 (ray_tracer_tC6BE5DA494D1903192B6CF5AA5600B51D11F20F8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ray_tracer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ray_tracer_Update_mAD58502DA1F162F2932BA2E6C97D691A250E39F8 (ray_tracer_tC6BE5DA494D1903192B6CF5AA5600B51D11F20F8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ray_tracer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ray_tracer__ctor_mFD6A6848BD09CED8C848262AA1AC4173D60C9CA4 (ray_tracer_tC6BE5DA494D1903192B6CF5AA5600B51D11F20F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> touch_list = new List<GameObject>(); // ??? ???? ????????? ???? ?????
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___touch_list_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touch_list_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Start_m9851EAC634456AE4AD4D1163695A64EB3E4AA8FF (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Update_m8F6F1768AC5316A30F5A79813D72B20EC6796E5A (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mDEDBA72E1F38C2F7CFF4E6C6556103C5D62C1670 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Status::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status_Start_mE8651C9F22DAD145162BDC3C6EBC6468D4D0567C (Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Status::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status_Update_m6518BEDBCF466CB346F414FC1B38CBAC07EF5D5C (Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Status::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status__ctor_mCD3A8B66754099A270AC6299DED340B74D998EE4 (Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean::SetBoolean(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSetAnimatorBoolean_SetBoolean_m815C8C5DC578CC62D212E263DDBCE697C673498F (ToggleSetAnimatorBoolean_t6FA60B6C0ED0E2CDA823B7FDAA64A29A95133944* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// animator.SetBool(booleanName, value);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_4;
		String_t* L_1 = __this->___booleanName_5;
		bool L_2 = ___0_value;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void HeathenEngineering.UX.Samples.ToggleSetAnimatorBoolean::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSetAnimatorBoolean__ctor_mB5F62D8E9CC2A3074161524E69FFAD7C63C238D5 (ToggleSetAnimatorBoolean_t6FA60B6C0ED0E2CDA823B7FDAA64A29A95133944* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Image_get_type_m7CE3AA14B38E1C50AC8362176AE842992DA8C639_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public Type type { get { return m_Type; } set { if (SetPropertyUtility.SetStruct(ref m_Type, value)) SetVerticesDirty(); } }
		int32_t L_0 = __this->___m_Type_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Image_get_fillMethod_mAFB1FAAFA913DB0EE050C4053DBBA6FAAD68A5F1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public FillMethod fillMethod { get { return m_FillMethod; } set { if (SetPropertyUtility.SetStruct(ref m_FillMethod, value)) { SetVerticesDirty(); m_FillOrigin = 0; } } }
		int32_t L_0 = __this->___m_FillMethod_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Slider_get_handleRect_mF6564572F3D7074E01D17661BD012F5987D328D9_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform handleRect { get { return m_HandleRect; } set { if (SetPropertyUtility.SetClass(ref m_HandleRect, value)) { UpdateCachedReferences(); UpdateVisuals(); } } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_HandleRect_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 cellSize { get { return m_CellSize; } set { SetProperty(ref m_CellSize, value); } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_CellSize_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_b;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_dot;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_current;
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float L_3;
		L_3 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_1, L_2, NULL);
		___1_target = ((float)il2cpp_codegen_add(L_0, L_3));
		float L_4 = ___0_current;
		float L_5 = ___1_target;
		float* L_6 = ___2_currentVelocity;
		float L_7 = ___3_smoothTime;
		float L_8 = ___4_maxSpeed;
		float L_9 = ___5_deltaTime;
		float L_10;
		L_10 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_001c;
	}

IL_001c:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
