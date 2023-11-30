#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class EyeTracker.EyeTrackerFunctionLibrary
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEyeTrackerFunctionLibrary* GetDefaultObj();

	void SetEyeTrackedPlayer(class APlayerController* PlayerController);
	bool IsStereoGazeDataAvailable();
	bool IsEyeTrackerConnected();
	bool GetStereoGazeData(struct EyeTracker_EyeTrackerStereoGazeData* OutGazeData);
	bool GetGazeData(struct EyeTracker_EyeTrackerGazeData* OutGazeData);
};

}


