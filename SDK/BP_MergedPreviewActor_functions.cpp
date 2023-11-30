#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MergedPreviewActor.BP_MergedPreviewActor_C
// (Actor)

class UClass* ABP_MergedPreviewActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MergedPreviewActor_C");

	return Clss;
}


// BP_MergedPreviewActor_C BP_MergedPreviewActor.Default__BP_MergedPreviewActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MergedPreviewActor_C* ABP_MergedPreviewActor_C::GetDefaultObj()
{
	static class ABP_MergedPreviewActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MergedPreviewActor_C*>(ABP_MergedPreviewActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


