#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonGame.AsyncAction_CreateWidgetAsync
// (None)

class UClass* UAsyncAction_CreateWidgetAsync::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncAction_CreateWidgetAsync");

	return Clss;
}


// AsyncAction_CreateWidgetAsync CommonGame.Default__AsyncAction_CreateWidgetAsync
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncAction_CreateWidgetAsync* UAsyncAction_CreateWidgetAsync::GetDefaultObj()
{
	static class UAsyncAction_CreateWidgetAsync* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncAction_CreateWidgetAsync*>(UAsyncAction_CreateWidgetAsync::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonGame.AsyncAction_CreateWidgetAsync.CreateWidgetAsync
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftClassPtr<class UUserWidget>   UserWidgetSoftClass                                              (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuspendInputUntilComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_CreateWidgetAsync*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_CreateWidgetAsync* UAsyncAction_CreateWidgetAsync::CreateWidgetAsync(class UObject* WorldContextObject, TSoftClassPtr<class UUserWidget> UserWidgetSoftClass, class APlayerController* OwningPlayer, bool bSuspendInputUntilComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_CreateWidgetAsync", "CreateWidgetAsync");

	Params::UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.UserWidgetSoftClass = UserWidgetSoftClass;
	Parms.OwningPlayer = OwningPlayer;
	Parms.bSuspendInputUntilComplete = bSuspendInputUntilComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonGame.AsyncAction_PushContentToLayerForPlayer
// (None)

class UClass* UAsyncAction_PushContentToLayerForPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncAction_PushContentToLayerForPlayer");

	return Clss;
}


// AsyncAction_PushContentToLayerForPlayer CommonGame.Default__AsyncAction_PushContentToLayerForPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncAction_PushContentToLayerForPlayer* UAsyncAction_PushContentToLayerForPlayer::GetDefaultObj()
{
	static class UAsyncAction_PushContentToLayerForPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncAction_PushContentToLayerForPlayer*>(UAsyncAction_PushContentToLayerForPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonGame.AsyncAction_PushContentToLayerForPlayer.PushContentToLayerForPlayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftClassPtr<class UCommonActivatableWidget>WidgetClass                                                      (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    LayerName                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuspendInputUntilComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_PushContentToLayerForPlayer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_PushContentToLayerForPlayer* UAsyncAction_PushContentToLayerForPlayer::PushContentToLayerForPlayer(class APlayerController* OwningPlayer, TSoftClassPtr<class UCommonActivatableWidget> WidgetClass, const struct GameplayTags_GameplayTag& LayerName, bool bSuspendInputUntilComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_PushContentToLayerForPlayer", "PushContentToLayerForPlayer");

	Params::UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.WidgetClass = WidgetClass;
	Parms.LayerName = LayerName;
	Parms.bSuspendInputUntilComplete = bSuspendInputUntilComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonGame.AsyncAction_ShowConfirmation
// (None)

class UClass* UAsyncAction_ShowConfirmation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncAction_ShowConfirmation");

	return Clss;
}


// AsyncAction_ShowConfirmation CommonGame.Default__AsyncAction_ShowConfirmation
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::GetDefaultObj()
{
	static class UAsyncAction_ShowConfirmation* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncAction_ShowConfirmation*>(UAsyncAction_ShowConfirmation::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationYesNo
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InWorldContextObject                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Title                                                            (Parm, NativeAccessSpecifierPublic)
// class FText                        Message                                                          (Parm, NativeAccessSpecifierPublic)
// class UAsyncAction_ShowConfirmation*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationYesNo(class UObject* InWorldContextObject, class FText Title, class FText Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_ShowConfirmation", "ShowConfirmationYesNo");

	Params::UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Params Parms{};

	Parms.InWorldContextObject = InWorldContextObject;
	Parms.Title = Title;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationOkCancel
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InWorldContextObject                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Title                                                            (Parm, NativeAccessSpecifierPublic)
// class FText                        Message                                                          (Parm, NativeAccessSpecifierPublic)
// class UAsyncAction_ShowConfirmation*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationOkCancel(class UObject* InWorldContextObject, class FText Title, class FText Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_ShowConfirmation", "ShowConfirmationOkCancel");

	Params::UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Params Parms{};

	Parms.InWorldContextObject = InWorldContextObject;
	Parms.Title = Title;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationCustom
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InWorldContextObject                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonGameDialogDescriptor* Descriptor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_ShowConfirmation*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationCustom(class UObject* InWorldContextObject, class UCommonGameDialogDescriptor* Descriptor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncAction_ShowConfirmation", "ShowConfirmationCustom");

	Params::UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Params Parms{};

	Parms.InWorldContextObject = InWorldContextObject;
	Parms.Descriptor = Descriptor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonGame.CommonGameDialogDescriptor
// (None)

class UClass* UCommonGameDialogDescriptor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonGameDialogDescriptor");

	return Clss;
}


// CommonGameDialogDescriptor CommonGame.Default__CommonGameDialogDescriptor
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonGameDialogDescriptor* UCommonGameDialogDescriptor::GetDefaultObj()
{
	static class UCommonGameDialogDescriptor* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonGameDialogDescriptor*>(UCommonGameDialogDescriptor::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonGame.CommonGameDialog
// (None)

class UClass* UCommonGameDialog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonGameDialog");

	return Clss;
}


// CommonGameDialog CommonGame.Default__CommonGameDialog
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonGameDialog* UCommonGameDialog::GetDefaultObj()
{
	static class UCommonGameDialog* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonGameDialog*>(UCommonGameDialog::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonGame.CommonLocalPlayer
// (None)

class UClass* UCommonLocalPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonLocalPlayer");

	return Clss;
}


// CommonLocalPlayer CommonGame.Default__CommonLocalPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonLocalPlayer* UCommonLocalPlayer::GetDefaultObj()
{
	static class UCommonLocalPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonLocalPlayer*>(UCommonLocalPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonGame.CommonMessagingSubsystem
// (None)

class UClass* UCommonMessagingSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonMessagingSubsystem");

	return Clss;
}


// CommonMessagingSubsystem CommonGame.Default__CommonMessagingSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonMessagingSubsystem* UCommonMessagingSubsystem::GetDefaultObj()
{
	static class UCommonMessagingSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonMessagingSubsystem*>(UCommonMessagingSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonGame.CommonUIExtensions
// (None)

class UClass* UCommonUIExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUIExtensions");

	return Clss;
}


// CommonUIExtensions CommonGame.Default__CommonUIExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUIExtensions* UCommonUIExtensions::GetDefaultObj()
{
	static class UCommonUIExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUIExtensions*>(UCommonUIExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonGame.CommonUIExtensions.SuspendInputForPlayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SuspendReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCommonUIExtensions::SuspendInputForPlayer(class APlayerController* PlayerController, class FName SuspendReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUIExtensions", "SuspendInputForPlayer");

	Params::UCommonUIExtensions_SuspendInputForPlayer_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.SuspendReason = SuspendReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonGame.CommonUIExtensions.ResumeInputForPlayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SuspendToken                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUIExtensions::ResumeInputForPlayer(class APlayerController* PlayerController, class FName SuspendToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUIExtensions", "ResumeInputForPlayer");

	Params::UCommonUIExtensions_ResumeInputForPlayer_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.SuspendToken = SuspendToken;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonGame.CommonUIExtensions.PushStreamedContentToLayer_ForPlayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    LayerName                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftClassPtr<class UCommonActivatableWidget>WidgetClass                                                      (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUIExtensions::PushStreamedContentToLayer_ForPlayer(class ULocalPlayer* LocalPlayer, const struct GameplayTags_GameplayTag& LayerName, TSoftClassPtr<class UCommonActivatableWidget> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUIExtensions", "PushStreamedContentToLayer_ForPlayer");

	Params::UCommonUIExtensions_PushStreamedContentToLayer_ForPlayer_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.LayerName = LayerName;
	Parms.WidgetClass = WidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonGame.CommonUIExtensions.PushContentToLayer_ForPlayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    LayerName                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCommonActivatableWidget>WidgetClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonActivatableWidget*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonActivatableWidget* UCommonUIExtensions::PushContentToLayer_ForPlayer(class ULocalPlayer* LocalPlayer, const struct GameplayTags_GameplayTag& LayerName, TSubclassOf<class UCommonActivatableWidget> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUIExtensions", "PushContentToLayer_ForPlayer");

	Params::UCommonUIExtensions_PushContentToLayer_ForPlayer_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.LayerName = LayerName;
	Parms.WidgetClass = WidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonGame.CommonUIExtensions.PopContentFromLayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatableWidget*    ActivatableWidget                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUIExtensions::PopContentFromLayer(class UCommonActivatableWidget* ActivatableWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUIExtensions", "PopContentFromLayer");

	Params::UCommonUIExtensions_PopContentFromLayer_Params Parms{};

	Parms.ActivatableWidget = ActivatableWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingTouch
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 WidgetContextObject                                              (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUIExtensions::IsOwningPlayerUsingTouch(class UUserWidget* WidgetContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUIExtensions", "IsOwningPlayerUsingTouch");

	Params::UCommonUIExtensions_IsOwningPlayerUsingTouch_Params Parms{};

	Parms.WidgetContextObject = WidgetContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingGamepad
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 WidgetContextObject                                              (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUIExtensions::IsOwningPlayerUsingGamepad(class UUserWidget* WidgetContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUIExtensions", "IsOwningPlayerUsingGamepad");

	Params::UCommonUIExtensions_IsOwningPlayerUsingGamepad_Params Parms{};

	Parms.WidgetContextObject = WidgetContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonGame.CommonUIExtensions.GetOwningPlayerInputType
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 WidgetContextObject                                              (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECommonInputType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonInputType UCommonUIExtensions::GetOwningPlayerInputType(class UUserWidget* WidgetContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUIExtensions", "GetOwningPlayerInputType");

	Params::UCommonUIExtensions_GetOwningPlayerInputType_Params Parms{};

	Parms.WidgetContextObject = WidgetContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonGame.CommonUIExtensions.GetLocalPlayerFromController
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULocalPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocalPlayer* UCommonUIExtensions::GetLocalPlayerFromController(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUIExtensions", "GetLocalPlayerFromController");

	Params::UCommonUIExtensions_GetLocalPlayerFromController_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonGame.GameUIManagerSubsystem
// (None)

class UClass* UGameUIManagerSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameUIManagerSubsystem");

	return Clss;
}


// GameUIManagerSubsystem CommonGame.Default__GameUIManagerSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameUIManagerSubsystem* UGameUIManagerSubsystem::GetDefaultObj()
{
	static class UGameUIManagerSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameUIManagerSubsystem*>(UGameUIManagerSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonGame.GameUIPolicy
// (None)

class UClass* UGameUIPolicy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameUIPolicy");

	return Clss;
}


// GameUIPolicy CommonGame.Default__GameUIPolicy
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameUIPolicy* UGameUIPolicy::GetDefaultObj()
{
	static class UGameUIPolicy* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameUIPolicy*>(UGameUIPolicy::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonGame.PrimaryGameLayout
// (None)

class UClass* UPrimaryGameLayout::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimaryGameLayout");

	return Clss;
}


// PrimaryGameLayout CommonGame.Default__PrimaryGameLayout
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrimaryGameLayout* UPrimaryGameLayout::GetDefaultObj()
{
	static class UPrimaryGameLayout* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimaryGameLayout*>(UPrimaryGameLayout::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonGame.PrimaryGameLayout.RegisterLayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct GameplayTags_GameplayTag    LayerTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonActivatableWidgetContainerBase*LayerWidget                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrimaryGameLayout::RegisterLayer(const struct GameplayTags_GameplayTag& LayerTag, class UCommonActivatableWidgetContainerBase* LayerWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimaryGameLayout", "RegisterLayer");

	Params::UPrimaryGameLayout_RegisterLayer_Params Parms{};

	Parms.LayerTag = LayerTag;
	Parms.LayerWidget = LayerWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


