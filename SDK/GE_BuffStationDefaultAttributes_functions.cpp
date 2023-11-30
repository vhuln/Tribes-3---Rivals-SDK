#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BuffStationDefaultAttributes.GE_BuffStationDefaultAttributes_C
// (None)

class UClass* UGE_BuffStationDefaultAttributes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BuffStationDefaultAttributes_C");

	return Clss;
}


// GE_BuffStationDefaultAttributes_C GE_BuffStationDefaultAttributes.Default__GE_BuffStationDefaultAttributes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BuffStationDefaultAttributes_C* UGE_BuffStationDefaultAttributes_C::GetDefaultObj()
{
	static class UGE_BuffStationDefaultAttributes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BuffStationDefaultAttributes_C*>(UGE_BuffStationDefaultAttributes_C::StaticClass()->DefaultObject);

	return Default;
}

}


