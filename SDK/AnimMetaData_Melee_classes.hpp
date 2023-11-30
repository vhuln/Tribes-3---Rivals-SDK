#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass AnimMetaData_Melee.AnimMetaData_Melee_C
class UAnimMetaData_Melee_C : public UAnimMetaData
{
public:
	class UCurveVector*                          BonePositionCurve;                                 // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  BoneName;                                          // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimMetaData_Melee_C* GetDefaultObj();

};

}


