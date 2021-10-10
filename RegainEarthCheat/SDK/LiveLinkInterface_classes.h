﻿#pragma once

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
// Classes
//---------------------------------------------------------------------------

// Class LiveLinkInterface.LiveLinkSourceFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkSourceFactory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkRole : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkBasicRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkBasicRole : public ULiveLinkRole
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkBasicRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkAnimationRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkAnimationRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkTransformRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkTransformRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkCameraRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCameraRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkController
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkController : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkController");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkSourceSettings
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class ULiveLinkSourceSettings : public UObject
{
public:
	LiveLinkInterface_ELiveLinkSourceMode              Mode;                                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M893[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLiveLinkSourceBufferManagementSettings     BufferSettings;                                            // 0x0030(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ConnectionString;                                          // 0x0088(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Factory;                                                   // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// 0x0050 (FullSize[0x00F0] - InheritedSize[0x00A0])
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
public:
	struct FLiveLinkCurveConversionSettings            CurveConversionSettings;                                   // 0x00A0(0x0050) (Edit, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCurveRemapSettings");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkFrameInterpolationProcessor : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkFramePreProcessor
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkFramePreProcessor : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFramePreProcessor");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkFrameTranslator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkFrameTranslator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameTranslator");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkLightRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkLightRole : public ULiveLinkTransformRole
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkLightRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkSubjectSettings
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class ULiveLinkSubjectSettings : public UObject
{
public:
	TArray<class ULiveLinkFramePreProcessor*>          PreProcessors;                                             // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class ULiveLinkFrameInterpolationProcessor*        InterpolationProcessor;                                    // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULiveLinkFrameTranslator*>            Translators;                                               // 0x0040(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      Role;                                                      // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                                  FrameRate;                                                 // 0x0058(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRebroadcastSubject;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KI6R[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSubjectSettings");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkVirtualSubject
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class ULiveLinkVirtualSubject : public UObject
{
public:
	unsigned char                                      UnknownData_9SQZ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Role;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLiveLinkSubjectName>                Subjects;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ULiveLinkFrameTranslator*>            FrameTranslators;                                          // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_94A7[0x80];                                    // 0x0058(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkVirtualSubject");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
