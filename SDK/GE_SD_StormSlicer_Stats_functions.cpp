#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SD_StormSlicer_Stats.GE_SD_StormSlicer_Stats_C
// (None)

class UClass* UGE_SD_StormSlicer_Stats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SD_StormSlicer_Stats_C");

	return Clss;
}


// GE_SD_StormSlicer_Stats_C GE_SD_StormSlicer_Stats.Default__GE_SD_StormSlicer_Stats_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class UGE_SD_StormSlicer_Stats_C* UGE_SD_StormSlicer_Stats_C::GetDefaultObj()
{
	static class UGE_SD_StormSlicer_Stats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SD_StormSlicer_Stats_C*>(UGE_SD_StormSlicer_Stats_C::StaticClass()->DefaultObject);

	return Default;
}

}


