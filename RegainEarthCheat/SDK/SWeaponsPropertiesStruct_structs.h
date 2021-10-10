#pragma once

// Name: RegainEart-FirtstStrike, Version: Version-1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SWeaponsPropertiesStruct.SWeaponsPropertiesStruct
// 0x0141
struct FSWeaponsPropertiesStruct
{
	TEnumAsByte<EWeaponIDs_EWeaponIDs>                 ID_167_794B21154B2E771A3C83C8AE7A3C054E;                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_34AM[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName_2_7CAA76344C80955C0E951B8E89EE3583;            // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FString                                     Description_165_FAC591F342019E3B51FCAEA267D8B5C0;          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	RegainEarth_FS_EWeaponTypes                        WeaponType_6_617B3FCF4042E3B9F118D29FA1E4AD4B;             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	RegainEarth_FS_EWeaponPawnAnimationGroups          PawnAnimationGroup_9_305F24824958568D2D9D00B3805144B9;     // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OJ26[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               WeaponSkeletonMesh_162_FC0273C64418C8F0BE0E64B14DEF2939;   // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Price_172_A3C8E57D48AFEDC56FEDB1AD48F28440;                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ValueOfWeaponManuallGuessed_173_3DC2590F4043B573581F908FB396C2E0; // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamagePerBullet_90_C5234B344F98FFB5C0ECA495690136FD;       // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RateInShotsPerSecond_179_77209F7B4F3FDD9E8A4688BF877B8554; // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DamageType_181_7EC3391146FF8BA0E8AF329ADD0D7B25;           // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpulseFactorOnBulletHit_92_C330B8B24B89F886A61382804CFF99F5; // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	RegainEarth_FS_EShootingMode                       InitialShootingModeWhenPickup_178_C8AE513945F46B5024E5C08D79E380AE; // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanAutoFirePressed_111_7653C8CB4880D55A6BF15FAF54EB18A6;   // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanToggleToBurstFire_105_3928DF2C4DB317D6D3B405928BE40E25; // 0x005E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IP7W[0x1];                                     // 0x005F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ShootMinBulletsPerShot_23_E1B99C654A5FE2887DA3E6B0D3F2FDB0; // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShootMaxBulletsPerShot_25_230FF41D4B2E38FDED449CA1E84AE6C0; // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnReloadDoOneBulletAfterOtherLikeShotguns_121_5608101640136894BE4A9B83374B23B8; // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_176Y[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxTotalRange_124_8B42203C4DE600C01B0E14907D883A61;        // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHighEffectiveRange_127_1841C32F4AA4D9864A579CAAA8851660; // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DamageOnProjectileHitInsteadSimpleTrace_134_D3F9651C4E53635A4C4B8E8282EA7D40; // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9O1Y[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProjectileClass_153_EB5C3C604B2CF7BC2A733F9AB40A371B;      // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectileSpeedFactor_142_97AB90694753A817B8F552BEC02AF8EF; // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectileSizeScaleFactor_157_0E6B1C1841F14A0BEA935E844CB1F39B; // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectileLifetimeFactor_160_DB4E99DF462350307F344FAA2171C52B; // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmmoClipSize_19_AB800A624E05FB3A135949828868972E;          // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ItemsIDsEnum_EItemsIDsEnum>            AmmoType_110_3FEBFDB14ED0B01A15203496D40D0E1B;             // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UnlimitAmmoWeapon_152_C21BC88649A490417D66958EC5038D4D;    // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I28R[0x2];                                     // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AmmoMaxPocketSize_115_CE328C9B4FB220BBFA9AEF871073CE0E;    // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RecoilMin_31_15E340D145F14676D4E236810D19449D;             // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RecoilMax_30_6C7591444F7717220837418C276ACA20;             // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RecoilIncreaseSpeed_149_7EEC2AF647445325884EB0BEC07F2392;  // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpreadConeMin_33_2D68C88341F3CF5FD55E9294BC026B4C;         // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpreadConeMax_35_1336456841510A04A38AB39ACA0B2DAB;         // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpreadConeIncreaseSpeed_146_C79B1F224C7F7B2CA2481DAA32A4D670; // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpreadConeDecreaseSpeed_147_E6B9BB6E4AA4FDFA2E39CF841299F3CE; // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KOZG[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CameraShakeClass_44_C01E6902486097C7D6B3DDA47B888914;      // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           WepAnimShoot_47_FFC560FC413F24D13A34BB9025A31722;          // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           WepAnimEmptyShoot_49_6E6B792144E3ED265F76238B846F8159;     // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           WepAnimReload_51_4089D2B44C1A72401D19129AEEA3D10B;         // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ShellParticle_61_F91AB86747E969D6A69162B4B7EDA029;         // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShellLifetime_63_0CB3CE6F43A105D4209ACA9470C06D4D;         // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_58FJ[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             MuzzleFlashParticle_135_F3C8F56D4D5B0D6A6B1DD9A6942C09D2;  // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SoundShoot_69_C58902CE420BCF14068875BE1A7ECF33;            // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SoundEmptyShoot_71_363CED074302D7852836B1879B035B32;       // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SoundReload_73_721DC82549CFA93A633AF998E79096C5;           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ClipClass_175_F819F06444765D74524FA9A8348CC4E4;            // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 ClipMesh_79_C76DDEF944FF9A7A40F06A987E7F840C;              // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ClipLifeTimeOnDrop_82_1AAD84624C899472536960B92DE12701;    // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IAJJ[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  ClipSoundOnHitGround_85_14BE5DC748553A55D562F094AFE16670;  // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ClipImpulseStrength_88_5B4AE07942AB9F96E178E7B96B1980CB;   // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpactParticleSizeScaleFactor_186_16D63E8B4EA42D6CE162D489A8877582; // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SignatureColor1_189_739A916C404A199B13940A96562F464C;      // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowLaserDotPointer_192_9C12B0024B04FA4ADE9F289C28A02E69;  // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
