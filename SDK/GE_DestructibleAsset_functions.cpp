#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DestructibleAsset.GE_DestructibleAsset_C
// (None)

class UClass* UGE_DestructibleAsset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DestructibleAsset_C");

	return Clss;
}


// GE_DestructibleAsset_C GE_DestructibleAsset.Default__GE_DestructibleAsset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DestructibleAsset_C* UGE_DestructibleAsset_C::GetDefaultObj()
{
	static class UGE_DestructibleAsset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DestructibleAsset_C*>(UGE_DestructibleAsset_C::StaticClass()->DefaultObject);

	return Default;
}

}


