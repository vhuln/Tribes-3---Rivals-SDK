#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WwiseSimpleExternalSource.WwiseExternalSourceSettings
// (None)

class UClass* UWwiseExternalSourceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseExternalSourceSettings");

	return Clss;
}


// WwiseExternalSourceSettings WwiseSimpleExternalSource.Default__WwiseExternalSourceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseExternalSourceSettings* UWwiseExternalSourceSettings::GetDefaultObj()
{
	static class UWwiseExternalSourceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseExternalSourceSettings*>(UWwiseExternalSourceSettings::StaticClass()->DefaultObject);

	return Default;
}

}


