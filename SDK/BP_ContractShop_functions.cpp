#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ContractShop.BP_ContractShop_C
// (None)

class UClass* UBP_ContractShop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ContractShop_C");

	return Clss;
}


// BP_ContractShop_C BP_ContractShop.Default__BP_ContractShop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ContractShop_C* UBP_ContractShop_C::GetDefaultObj()
{
	static class UBP_ContractShop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ContractShop_C*>(UBP_ContractShop_C::StaticClass()->DefaultObject);

	return Default;
}

}


