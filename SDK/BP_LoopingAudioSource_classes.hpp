#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2D0 - 0x298)
// BlueprintGeneratedClass BP_LoopingAudioSource.BP_LoopingAudioSource_C
class ABP_LoopingAudioSource_C : public AActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedEventId;                                     // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DefaultStartWithDebugEnabled;                      // 0x2AC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13E1[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               CachedDebugColor;                                  // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedIsPaused;                                    // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13EA[0x7];                                     // Fixing Size After Last Property  
	class UAkAudioEvent*                         CachedAkEvent;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LoopingAudioSource_C* GetDefaultObj();

	void IsPaused(bool* IsPaused);
	void ExecuteAudioAction(enum class EAkActionOnEventType ActionType, int32 CallFunc_ExecuteAction_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void DisablePositionDebugSphere();
	void EnablePositionDebugSphere(const struct CoreUObject_LinearColor& DebugColor);
	void StopAudioEvent();
	void PostAudioEvent(class UAkAudioEvent* Event);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_LoopingAudioSource(int32 EntryPoint, float K2Node_Event_DeltaSeconds, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_DrawDebugSphere_Duration_ImplicitCast);
};

}


