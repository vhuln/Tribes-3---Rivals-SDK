#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2AAA - 0x2A82)
// BlueprintGeneratedClass BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C
class ABP_ValChar_Master_WithSpline_C : public ABP_ValChar_Master_C
{
public:
	uint8                                        Pad_30DE[0x6];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2A88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MoveAlongSpline_PositionOnTrack_2730975040E7A54742ED308729456AA9; // 0x2A90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveAlongSpline__Direction_2730975040E7A54742ED308729456AA9; // 0x2A94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E7[0x3];                                     // Fixing Size After Last Property  
	class UTimelineComponent*                    MoveAlongSpline;                                   // 0x2A98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      Spline;                                            // 0x2AA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         PlayForward;                                       // 0x2AA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Stunned;                                           // 0x2AA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ValChar_Master_WithSpline_C* GetDefaultObj();

	void IsStunned_Server(bool* OutStunned, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ShouldPlayStunnedVFX(bool* OutStunned);
	void ToggleStunnedVfx(bool bOn, const struct CoreUObject_LinearColor& K2Node_MakeStruct_LinearColor, const struct CoreUObject_Vector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct CoreUObject_LinearColor& K2Node_MakeStruct_LinearColor_1, const struct CoreUObject_Vector& CallFunc_Conv_LinearColorToVector_ReturnValue_1);
	void UpdateTransform(double Alpha, double LocalLerpValue, const struct CoreUObject_Vector& LocalDirection, double CallFunc_SelectFloat_ReturnValue, const struct CoreUObject_Rotator& CallFunc_MakeRotFromX_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_GetDirectionAtDistanceAlongSpline_Distance_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast);
	void SetTravelCompletionTime(bool CallFunc_IsClosedLoop_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, float CallFunc_GetMaxSpeed_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast);
	void IsFollowingSpline(bool* IsFollowing, bool CallFunc_IsPlaying_ReturnValue);
	void MoveAlongSpline__FinishedFunc();
	void MoveAlongSpline__UpdateFunc();
	void FollowSpline();
	void StopFollowingSpline();
	void ExecuteUbergraph_BP_ValChar_Master_WithSpline(int32 EntryPoint, bool CallFunc_IsClosedLoop_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_UpdateTransform_Alpha_ImplicitCast);
};

}


