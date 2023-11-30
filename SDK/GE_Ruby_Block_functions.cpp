#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ruby_Block.GE_Ruby_Block_C
// (None)

class UClass* UGE_Ruby_Block_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ruby_Block_C");

	return Clss;
}


// GE_Ruby_Block_C GE_Ruby_Block.Default__GE_Ruby_Block_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ruby_Block_C* UGE_Ruby_Block_C::GetDefaultObj()
{
	static class UGE_Ruby_Block_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ruby_Block_C*>(UGE_Ruby_Block_C::StaticClass()->DefaultObject);

	return Default;
}

}


