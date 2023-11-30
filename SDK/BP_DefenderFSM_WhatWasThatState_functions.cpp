#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderFSM_WhatWasThatState.BP_DefenderFSM_WhatWasThatState_C
// (None)

class UClass* UBP_DefenderFSM_WhatWasThatState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderFSM_WhatWasThatState_C");

	return Clss;
}


// BP_DefenderFSM_WhatWasThatState_C BP_DefenderFSM_WhatWasThatState.Default__BP_DefenderFSM_WhatWasThatState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderFSM_WhatWasThatState_C* UBP_DefenderFSM_WhatWasThatState_C::GetDefaultObj()
{
	static class UBP_DefenderFSM_WhatWasThatState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderFSM_WhatWasThatState_C*>(UBP_DefenderFSM_WhatWasThatState_C::StaticClass()->DefaultObject);

	return Default;
}

}


