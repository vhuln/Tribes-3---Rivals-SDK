#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpawnIntroTag.GE_SpawnIntroTag_C
// (None)

class UClass* UGE_SpawnIntroTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpawnIntroTag_C");

	return Clss;
}


// GE_SpawnIntroTag_C GE_SpawnIntroTag.Default__GE_SpawnIntroTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpawnIntroTag_C* UGE_SpawnIntroTag_C::GetDefaultObj()
{
	static class UGE_SpawnIntroTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpawnIntroTag_C*>(UGE_SpawnIntroTag_C::StaticClass()->DefaultObject);

	return Default;
}

}


