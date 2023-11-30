#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Wwise.WwiseAudioLinkComponent
// (SceneComponent)

class UClass* UWwiseAudioLinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseAudioLinkComponent");

	return Clss;
}


// WwiseAudioLinkComponent Wwise.Default__WwiseAudioLinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseAudioLinkComponent* UWwiseAudioLinkComponent::GetDefaultObj()
{
	static class UWwiseAudioLinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseAudioLinkComponent*>(UWwiseAudioLinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Wwise.WwiseAudioLinkSettings
// (None)

class UClass* UWwiseAudioLinkSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseAudioLinkSettings");

	return Clss;
}


// WwiseAudioLinkSettings Wwise.Default__WwiseAudioLinkSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseAudioLinkSettings* UWwiseAudioLinkSettings::GetDefaultObj()
{
	static class UWwiseAudioLinkSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseAudioLinkSettings*>(UWwiseAudioLinkSettings::StaticClass()->DefaultObject);

	return Default;
}

}


