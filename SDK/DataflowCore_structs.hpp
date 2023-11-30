#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct DataflowCore.DataflowConnection
struct DataflowCore_DataflowConnection
{
public:
	uint8                                        Pad_31C[0x40];                                     // Fixing Size Of Struct 
};

// 0x8 (0x48 - 0x40)
// ScriptStruct DataflowCore.DataflowInput
struct DataflowCore_DataflowInput : public DataflowCore_DataflowConnection
{
public:
	uint8                                        Pad_325[0x8];                                      // Fixing Size Of Struct 
};

// 0x28 (0x68 - 0x40)
// ScriptStruct DataflowCore.DataflowOutput
struct DataflowCore_DataflowOutput : public DataflowCore_DataflowConnection
{
public:
	uint8                                        Pad_32E[0x28];                                     // Fixing Size Of Struct 
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct DataflowCore.DataflowNode
struct DataflowCore_DataflowNode
{
public:
	uint8                                        Pad_331[0xC8];                                     // Fixing Size After Last Property  
	bool                                         bActive;                                           // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335[0x1F];                                     // Fixing Size Of Struct 
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct DataflowCore.DataflowOverrideNode
struct DataflowCore_DataflowOverrideNode : public DataflowCore_DataflowNode
{
public:
	class FName                                  Key;                                               // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Default;                                           // 0xF0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverriden;                                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34F[0x7];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DataflowCore.DataflowSelection
struct DataflowCore_DataflowSelection
{
public:
	uint8                                        Pad_359[0x20];                                     // Fixing Size Of Struct 
};

// 0x0 (0x20 - 0x20)
// ScriptStruct DataflowCore.DataflowTransformSelection
struct DataflowCore_DataflowTransformSelection : public DataflowCore_DataflowSelection
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct DataflowCore.DataflowVertexSelection
struct DataflowCore_DataflowVertexSelection : public DataflowCore_DataflowSelection
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct DataflowCore.DataflowFaceSelection
struct DataflowCore_DataflowFaceSelection : public DataflowCore_DataflowSelection
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DataflowCore.NodeColors
struct DataflowCore_NodeColors
{
public:
	struct CoreUObject_LinearColor               NodeTitleColor;                                    // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               NodeBodyTintColor;                                 // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0xE8 - 0xE8)
// ScriptStruct DataflowCore.DataflowTerminalNode
struct DataflowCore_DataflowTerminalNode : public DataflowCore_DataflowNode
{
public:
};

}


