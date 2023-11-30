#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TeamSupport.WithTeamInterface
class IWithTeamInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWithTeamInterface* GetDefaultObj();

	void SetTeamId(int32 TeamId);
	void RemoveOnTeamChangedDelegate(FDelegateProperty_& Delegate);
	void RemoveAllOnTeamChangedDelegates();
	bool HasATeam();
	enum class ETeamRelation GetTeamRelation(class UObject* Other);
	int32 GetTeamId();
	class FName GetTeamDefinitionToRegisterWith();
	void AddOnTeamChangedDelegate(FDelegateProperty_& Delegate);
};

// 0x20 (0xC0 - 0xA0)
// Class TeamSupport.TeamCreationComponent
class UTeamCreationComponent : public UActorComponent
{
public:
	TSubclassOf<class ATeamState>                TeamStateClass;                                    // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          ReservedDefinitions;                               // 0xA8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bServerCreatedTeams;                               // 0xB8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1132[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTeamCreationComponent* GetDefaultObj();

	void ServerCreateTeams();
	class ATeamState* ServerCreateTeam(int32 TeamId, class FName& Definition);
	int32 ServerChooseTeamForPlayer(class APlayerState* Player);
	void ServerAssignPlayerToTeam(class APlayerState* Player);
	int32 GetNextAvailableTeamId();
};

// 0x10 (0xD0 - 0xC0)
// Class TeamSupport.SimpleTeamCreationComponent
class USimpleTeamCreationComponent : public UTeamCreationComponent
{
public:
	enum class EFixedTeamCreationMode            CreationMode;                                      // 0xC0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_122B[0x3];                                     // Fixing Size After Last Property  
	int32                                        Count;                                             // 0xC4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAssignPlayersToReservedTeams;                     // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1233[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USimpleTeamCreationComponent* GetDefaultObj();

	enum class EFixedTeamCreationMode GetCreationMode();
	int32 GetCount();
	bool CanAssignPlayersToReserveTeams();
};

// 0x30 (0x2C8 - 0x298)
// Class TeamSupport.TeamState
class ATeamState : public AInfo
{
public:
	int32                                        R_TeamId;                                          // 0x298(0x4)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1388[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnTeamMembersUpdatedDel;                           // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1392[0x10];                                    // Fixing Size After Last Property  
	class FName                                  R_TeamDefinition;                                  // 0x2C0(0x8)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ATeamState* GetDefaultObj();

	void OnRep_TeamId();
	bool HasMember(class UObject* Member);
	int32 GetTeamId();
	class FName GetTeamDefinition();
	void GetMembers(TArray<class UObject*>* OutMembers);
	int32 GetMemberCount();
};

// 0x0 (0x28 - 0x28)
// Class TeamSupport.TeamStatics
class UTeamStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTeamStatics* GetDefaultObj();

	bool ObjectHasTeam(class UObject* Object, bool bDebugLog);
	bool IsOnSameTeam(class UObject* Reference, class UObject* Other, bool bDebugLog);
	bool IsOnDifferentTeam(class UObject* Reference, class UObject* Other, bool bDebugLog);
	bool IsFriendlyWith(class UObject* Reference, class UObject* Other, bool bDebugLog);
	bool IsEnemyWith(class UObject* Reference, class UObject* Other, bool bDebugLog);
	class ATeamState* GetTeamStateFromTeamId(class UObject* WorldContextObject, int32 TeamId, bool bDebugLog);
	class ATeamState* GetTeamStateFromTeamDefinition(class UObject* WorldContextObject, class FName& TeamDefinition, bool bDebugLog);
	class ATeamState* GetTeamStateFromObject(class UObject* Object, bool bDebugLog);
	enum class ETeamRelation GetTeamRelation(class UObject* Reference, class UObject* Other, bool bDebugLog);
	void GetTeamFromObject(class UObject* Object, bool* bHasATeam, int32* TeamId, bool bDebugLog);
	void GetAllTeamStates(class UObject* WorldContextObject, TArray<class ATeamState*>* OutTeams);
};

// 0x80 (0xB0 - 0x30)
// Class TeamSupport.TeamSubsystem
class UTeamSubsystem : public UWorldSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnTeamRegistered;                                  // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTeamUnregistered;                                // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<int32, class ATeamState*>               Teams;                                             // 0x50(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1757[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTeamSubsystem* GetDefaultObj();

};

}


