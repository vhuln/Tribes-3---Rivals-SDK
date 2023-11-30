#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAntiCheatClientAction : uint8
{
	Invalid                        = 0,
	RemovePlayer                   = 1,
	EAntiCheatClientAction_MAX     = 2,
};

enum class EAntiCheatClientActionReason : uint8
{
	Invalid                        = 0,
	InternalError                  = 1,
	InvalidMessage                 = 2,
	AuthenticationFailed           = 3,
	NullClient                     = 4,
	HeartbeatTimeout               = 5,
	ClientViolation                = 6,
	BackendViolation               = 7,
	TemporaryCooldown              = 8,
	TemporaryBanned                = 9,
	PermanentBanned                = 10,
	EAntiCheatClientActionReason_MAX = 11,
};

enum class EAntiCheatClientAuthStatus : uint8
{
	Invalid                        = 0,
	LocalAuthComplete              = 1,
	RemoteAuthComplete             = 2,
	EAntiCheatClientAuthStatus_MAX = 3,
};

enum class EAntiCheatClientType : uint8
{
	Protected                      = 0,
	Unprotected                    = 1,
	AIBot                          = 2,
	EAntiCheatClientType_MAX       = 3,
};

enum class EAntiCheatClientPlatform : uint8
{
	Unkown                         = 0,
	Windows                        = 1,
	Mac                            = 2,
	Linux                          = 3,
	Xbox                           = 4,
	PlayStation                    = 5,
	Nintendo                       = 6,
	IOS                            = 7,
	Android                        = 8,
	EAntiCheatClientPlatform_MAX   = 9,
};

enum class EAntiCheatClientFlags : uint8
{
	None                           = 0,
	Admin                          = 1,
	EAntiCheatClientFlags_MAX      = 2,
};

enum class EAntiCheatClientInput : uint8
{
	Unknown                        = 0,
	MouseKeyboard                  = 1,
	Gamepad                        = 2,
	TouchInput                     = 3,
	EAntiCheatClientInput_MAX      = 4,
};

enum class EAntiCheatClientViolationType : uint8
{
	Invalid                        = 0,
	IntegrityCatalogNotFound       = 1,
	IntegrityCatalogError          = 2,
	IntegrityCatalogCertificateRevoked = 3,
	IntegrityCatalogMissingMainExecutable = 4,
	GameFileMismatch               = 5,
	RequiredGameFileNotFound       = 6,
	UnknownGameFileForbidden       = 7,
	SystemFileUntrusted            = 8,
	ForbiddenModuleLoaded          = 9,
	CorruptedMemory                = 10,
	ForbiddenToolDetected          = 11,
	InternalAntiCheatViolation     = 12,
	CorruptedNetworkMessageFlow    = 13,
	VirtualMachineNotAllowed       = 14,
	ForbiddenSystemConfiguration   = 15,
	EAntiCheatClientViolationType_MAX = 16,
};

enum class EAntiCheatPlayerMovementState : uint8
{
	None                           = 0,
	Crouching                      = 1,
	Prone                          = 2,
	Mounted                        = 3,
	Swimming                       = 4,
	Falling                        = 5,
	Flying                         = 6,
	OnLadder                       = 7,
	EAntiCheatPlayerMovementState_MAX = 8,
};

enum class EAntiCheatPlayerTakeDamageSource : uint8
{
	None                           = 0,
	Player                         = 1,
	NonPlayerCharacter             = 2,
	World                          = 3,
	EAntiCheatPlayerTakeDamageSource_MAX = 4,
};

enum class EAntiCheatPlayerTakeDamageType : uint8
{
	None                           = 0,
	PointDamage                    = 1,
	RadialDamage                   = 2,
	DamageOverTime                 = 3,
	EAntiCheatPlayerTakeDamageType_MAX = 4,
};

enum class EAntiCheatPlayerTakeDamageResult : uint8
{
	None                           = 0,
	Downed                         = 1,
	Eliminated                     = 2,
	EAntiCheatPlayerTakeDamageResult_MAX = 3,
};

enum class EAntiCheatLoginStatus : uint8
{
	NotLoggedIn                    = 0,
	LoggingIn                      = 1,
	LoggedIn                       = 2,
	LoggingOut                     = 3,
	EAntiCheatLoginStatus_MAX      = 4,
};

enum class EEOSPlayerReportsCategory : uint8
{
	Invalid                        = 0,
	Cheating                       = 1,
	Exploiting                     = 2,
	OffensiveProfile               = 3,
	VerbalAbuse                    = 4,
	Scamming                       = 5,
	Spamming                       = 6,
	Other                          = 7,
	EEOSPlayerReportsCategory_MAX  = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


