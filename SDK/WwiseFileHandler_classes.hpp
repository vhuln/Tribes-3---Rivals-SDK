#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class WwiseFileHandler.WwiseExternalSourceStatics
class UWwiseExternalSourceStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWwiseExternalSourceStatics* GetDefaultObj();

	void SetExternalSourceMediaWithIds(const struct WwiseSoundEngine_AkUniqueID& ExternalSourceCookie, int32 MediaId);
	void SetExternalSourceMediaByName(const class FString& ExternalSourceName, const class FString& MediaName);
	void SetExternalSourceMediaById(const class FString& ExternalSourceName, int32 MediaId);
};

}


