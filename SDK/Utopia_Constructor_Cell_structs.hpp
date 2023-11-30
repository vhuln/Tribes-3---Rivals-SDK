#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x165 (0x165 - 0x0)
// UserDefinedStruct Utopia_Constructor_Cell.Utopia_Constructor_Cell
struct Utopia_Constructor_Cell_Utopia_Constructor_Cell
{
public:
	bool                                         IsCellActive_44_42B5437542C860BE5A5CBC858D44B85A;  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCellMiddle_47_DF075C9B408C9ADE65F8938E6CE424AC;  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCellOutside_50_5976E2E446B877D6B7DA14841D1B9929; // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasWallLeft_69_75EB5BCC43C592C468350BB5FD04C054;   // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasWallRight_70_0083C5A642603BD1E7F39B9EDC45D4E3;  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasWallBottom_63_1219643F4376C2E094EED6A16AC1F4C0; // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasWallTop_68_95E9DB6F4FD41030E3E419AC3B22C268;    // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2036[0x9];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 TransformLocation_95_BB5F5D3F4165D9332AA7909545647492; // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_73_8C576DBB427885E9A46E0988171D0852;         // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OutsideCornerBottomLeft_96_0C0242BD4AF55B45F03C59956F345285; // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OutsideCornerBottomRight_97_F965B85E48254DD89E3A24B1C7F5E0A2; // 0x75(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OutsideCornerTopRight_98_DDFDAC3B43EBEC6AC3E47E9043675C63; // 0x76(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OutsideCornerTopLeft_99_8FB8B8A341402D8995973F8DEC4D8C27; // 0x77(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FloorLevel_114_53626EB9464D19687D324D95F23F2CD5;   // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_203F[0x4];                                     // Fixing Size After Last Property  
	struct Utopia_Constructor_MeshExclusion_Utopia_Constructor_MeshExclusion WallMesh_136_E42287A3458BCCD8C4C50AA4501D7D90;     // 0x80(0x49)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_2040[0x7];                                     // Fixing Size After Last Property  
	struct Utopia_Constructor_MeshExclusion_Utopia_Constructor_MeshExclusion FloorMesh_137_2B2B21144F9DEB4ADBE143B3EF2C5E82;    // 0xD0(0x49)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_2041[0x7];                                     // Fixing Size After Last Property  
	struct Utopia_Constructor_CellFeature_Utopia_Constructor_CellFeature CellFeature_122_EE1040614837BAAFFACB858D05FB6B8F;  // 0x120(0x21)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2047[0x7];                                     // Fixing Size After Last Property  
	int32                                        CellFeaturePriority_125_D90FB2304B9E822CE4624D80FD0E3176; // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasDoor_131_DA6EC9564C22C96A58636E81F4B3E2D4;      // 0x14C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasFloor_133_82FD67B84BFFCA2AD13094BFC4DD7475;     // 0x14D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTwoStory_135_F49B5C724877AC9AB19BC283537F729B;   // 0x14E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InsideCornerBottomLeft_142_9A15845F4A36C1C731D9C2A5D93AD78C; // 0x14F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InsideCornerBottomRight_144_A819AF9E4B054F96CAE840A6A390D65B; // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InsideCornerTopRight_145_3785E52849B05E4B248ED0A9CF1CD1F2; // 0x151(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InsideCornerTopLeft_148_B2B4F3FD4DD3C405D8D8BDBA699FB3D7; // 0x152(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2050[0x1];                                     // Fixing Size After Last Property  
	int32                                        CellFeatureForceOrientation_151_5C188C344A267AAB4C20CE8AA399633E; // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSpecialWalls_153_A6D938434DE1DF22EA4EC4BE120210A2; // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLRCooridor_155_74FB60FC4C6582190D74AAB3947C56F9; // 0x159(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTBCooridor_157_C0F2494D493521CCD04E5C83645FDE91; // 0x15A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasDoorWallLeft_159_156C345B47DA12DD1B8D9782ADFA3C30; // 0x15B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasDoorWallRight_161_2652BB8C49314D6ADB3FB5A7554B13C8; // 0x15C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasDoorWallTop_163_78900F454DF910D08751D29A1F10CFE4; // 0x15D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasDoorWallBottom_165_15AAB81F4C4BE6115B6D0BB9ED33A856; // 0x15E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstColumn_167_2A2B0C7F4C7192EA4A3027ADEA9D55C0; // 0x15F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLastColumn_169_84667CB444689258B90D61A8EC72C656; // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstRow_171_2444059542CD266BD2B2D8A606A762B4;   // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLastRow_173_826B7AD24053EB7449B265B8C82982D8;    // 0x162(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUCConnector_175_BC1972C8480A05D98CAE60940B7BDCDD; // 0x163(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseBlockerUCConnector_177_5A881F3847DEFD8A1CF3F8BE4CC7DC3B; // 0x164(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


