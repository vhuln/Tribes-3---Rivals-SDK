#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x388 (0x3B8 - 0x30)
// Class ValhallaAnimGraphRuntime.RecoilProfileAsset
class URecoilProfileAsset : public UDataAsset
{
public:
	struct ValhallaAnimGraphRuntime_RecoilProfile RecoilProfile;                                     // 0x30(0x380)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDontPlayRecoilMontage;                            // 0x3B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30C[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URecoilProfileAsset* GetDefaultObj();

};

}


