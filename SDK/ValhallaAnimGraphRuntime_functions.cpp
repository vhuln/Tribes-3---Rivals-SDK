#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ValhallaAnimGraphRuntime.RecoilProfileAsset
// (None)

class UClass* URecoilProfileAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecoilProfileAsset");

	return Clss;
}


// RecoilProfileAsset ValhallaAnimGraphRuntime.Default__RecoilProfileAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class URecoilProfileAsset* URecoilProfileAsset::GetDefaultObj()
{
	static class URecoilProfileAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<URecoilProfileAsset*>(URecoilProfileAsset::StaticClass()->DefaultObject);

	return Default;
}

}


