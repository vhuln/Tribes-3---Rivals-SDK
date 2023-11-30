#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SkeletalMerging.SkeletalMergingLibrary
class USkeletalMergingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USkeletalMergingLibrary* GetDefaultObj();

	class USkeleton* MergeSkeletons(struct SkeletalMerging_SkeletonMergeParams& Params);
	class USkeletalMesh* MergeMeshes(struct SkeletalMerging_SkeletalMeshMergeParams& Params);
};

}


