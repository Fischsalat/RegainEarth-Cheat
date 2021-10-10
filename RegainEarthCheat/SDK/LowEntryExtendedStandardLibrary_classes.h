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
// Classes
//---------------------------------------------------------------------------

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataEntry
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class ULowEntryBitDataEntry : public UObject
{
public:
	unsigned char                                      Type;                                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ByteValue;                                                 // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZKDN[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IntegerValue;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryLong*                               LongBytesValue;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatValue;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JYRH[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULowEntryDouble*                             DoubleBytesValue;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BooleanValue;                                              // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_68KD[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringUtf8Value;                                           // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ByteArrayValue;                                            // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        IntegerArrayValue;                                         // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ULowEntryLong*>                       LongBytesArrayValue;                                       // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      FloatArrayValue;                                           // 0x0090(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ULowEntryDouble*>                     DoubleBytesArrayValue;                                     // 0x00A0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       BooleanArrayValue;                                         // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             StringUtf8ArrayValue;                                      // 0x00C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryBitDataEntry");
		return ptr;
	}



};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataReader
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class ULowEntryBitDataReader : public UObject
{
public:
	TArray<unsigned char>                              Bytes;                                                     // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                position;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CurrentByte;                                               // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XKJS[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentBytePosition;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_12BB[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryBitDataReader");
		return ptr;
	}



	void SetPosition(int Position_);
	void Reset();
	int Remaining();
	TArray<struct FString> GetStringUtf8Array();
	struct FString GetStringUtf8();
	TArray<int> GetPositiveInteger3Array();
	int GetPositiveInteger3();
	TArray<int> GetPositiveInteger2Array();
	int GetPositiveInteger2();
	TArray<int> GetPositiveInteger1Array();
	int GetPositiveInteger1();
	int GetPosition();
	TArray<class ULowEntryLong*> GetLongBytesArray();
	class ULowEntryLong* GetLongBytes();
	int GetIntegerMostSignificantBits(int BitCount);
	int GetIntegerLeastSignificantBits(int BitCount);
	TArray<int> GetIntegerArrayMostSignificantBits(int BitCount);
	TArray<int> GetIntegerArrayLeastSignificantBits(int BitCount);
	TArray<int> GetIntegerArray();
	int GetInteger();
	TArray<float> GetFloatArray();
	float GetFloat();
	TArray<class ULowEntryDouble*> GetDoubleBytesArray();
	class ULowEntryDouble* GetDoubleBytes();
	class ULowEntryBitDataReader* GetClone();
	unsigned char GetByteMostSignificantBits(int BitCount);
	unsigned char GetByteLeastSignificantBits(int BitCount);
	TArray<unsigned char> GetByteArrayMostSignificantBits(int BitCount);
	TArray<unsigned char> GetByteArrayLeastSignificantBits(int BitCount);
	TArray<unsigned char> GetByteArray();
	unsigned char GetByte();
	TArray<bool> GetBooleanArray();
	bool GetBoolean();
	TArray<bool> GetBitArray();
	bool GetBit();
	void Empty();
};

// Class LowEntryExtendedStandardLibrary.LowEntryBitDataWriter
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class ULowEntryBitDataWriter : public UObject
{
public:
	TArray<unsigned char>                              Bytes;                                                     // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      CurrentByte;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RDZZ[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentBytePosition;                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryBitDataWriter");
		return ptr;
	}



	void AddStringUtf8Array(TArray<struct FString> Value);
	void AddStringUtf8(const struct FString& Value);
	void AddPositiveInteger3Array(TArray<int> Value);
	void AddPositiveInteger3(int Value);
	void AddPositiveInteger2Array(TArray<int> Value);
	void AddPositiveInteger2(int Value);
	void AddPositiveInteger1Array(TArray<int> Value);
	void AddPositiveInteger1(int Value);
	void AddLongBytesArray(TArray<class ULowEntryLong*> Value);
	void AddLongBytes(class ULowEntryLong* Value);
	void AddIntegerMostSignificantBits(int Value, int BitCount);
	void AddIntegerLeastSignificantBits(int Value, int BitCount);
	void AddIntegerArrayMostSignificantBits(TArray<int> Value, int BitCount);
	void AddIntegerArrayLeastSignificantBits(TArray<int> Value, int BitCount);
	void AddIntegerArray(TArray<int> Value);
	void AddInteger(int Value);
	void AddFloatArray(TArray<float> Value);
	void AddFloat(float Value);
	void AddDoubleBytesArray(TArray<class ULowEntryDouble*> Value);
	void AddDoubleBytes(class ULowEntryDouble* Value);
	void AddByteMostSignificantBits(unsigned char Value, int BitCount);
	void AddByteLeastSignificantBits(unsigned char Value, int BitCount);
	void AddByteArrayMostSignificantBits(TArray<unsigned char> Value, int BitCount);
	void AddByteArrayLeastSignificantBits(TArray<unsigned char> Value, int BitCount);
	void AddByteArray(TArray<unsigned char> Value);
	void AddByte(unsigned char Value);
	void AddBooleanArray(TArray<bool> Value);
	void AddBoolean(bool Value);
	void AddBitArray(TArray<bool> Value);
	void AddBit(bool Value);
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteArray
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class ULowEntryByteArray : public UObject
{
public:
	TArray<unsigned char>                              ByteArray;                                                 // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryByteArray");
		return ptr;
	}



};

// Class LowEntryExtendedStandardLibrary.LowEntryByteDataEntry
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class ULowEntryByteDataEntry : public UObject
{
public:
	unsigned char                                      Type;                                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ByteValue;                                                 // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DMUU[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IntegerValue;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryLong*                               LongBytesValue;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatValue;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TP5Y[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULowEntryDouble*                             DoubleBytesValue;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BooleanValue;                                              // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FPII[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringUtf8Value;                                           // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ByteArrayValue;                                            // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        IntegerArrayValue;                                         // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ULowEntryLong*>                       LongBytesArrayValue;                                       // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      FloatArrayValue;                                           // 0x0090(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ULowEntryDouble*>                     DoubleBytesArrayValue;                                     // 0x00A0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       BooleanArrayValue;                                         // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             StringUtf8ArrayValue;                                      // 0x00C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryByteDataEntry");
		return ptr;
	}



};

// Class LowEntryExtendedStandardLibrary.LowEntryByteDataReader
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class ULowEntryByteDataReader : public UObject
{
public:
	TArray<unsigned char>                              Bytes;                                                     // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                position;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BWY9[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryByteDataReader");
		return ptr;
	}



	void SetPosition(int Position_);
	void Reset();
	int Remaining();
	TArray<struct FString> GetStringUtf8Array();
	struct FString GetStringUtf8();
	TArray<int> GetPositiveInteger3Array();
	int GetPositiveInteger3();
	TArray<int> GetPositiveInteger2Array();
	int GetPositiveInteger2();
	TArray<int> GetPositiveInteger1Array();
	int GetPositiveInteger1();
	int GetPosition();
	TArray<class ULowEntryLong*> GetLongBytesArray();
	class ULowEntryLong* GetLongBytes();
	TArray<int> GetIntegerArray();
	int GetInteger();
	TArray<float> GetFloatArray();
	float GetFloat();
	TArray<class ULowEntryDouble*> GetDoubleBytesArray();
	class ULowEntryDouble* GetDoubleBytes();
	class ULowEntryByteDataReader* GetClone();
	TArray<unsigned char> GetByteArray();
	unsigned char GetByte();
	TArray<bool> GetBooleanArray();
	bool GetBoolean();
	void Empty();
};

// Class LowEntryExtendedStandardLibrary.LowEntryByteDataWriter
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class ULowEntryByteDataWriter : public UObject
{
public:
	TArray<unsigned char>                              Bytes;                                                     // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryByteDataWriter");
		return ptr;
	}



	void AddStringUtf8Array(TArray<struct FString> Value);
	void AddStringUtf8(const struct FString& Value);
	void AddPositiveInteger3Array(TArray<int> Value);
	void AddPositiveInteger3(int Value);
	void AddPositiveInteger2Array(TArray<int> Value);
	void AddPositiveInteger2(int Value);
	void AddPositiveInteger1Array(TArray<int> Value);
	void AddPositiveInteger1(int Value);
	void AddLongBytesArray(TArray<class ULowEntryLong*> Value);
	void AddLongBytes(class ULowEntryLong* Value);
	void AddIntegerArray(TArray<int> Value);
	void AddInteger(int Value);
	void AddFloatArray(TArray<float> Value);
	void AddFloat(float Value);
	void AddDoubleBytesArray(TArray<class ULowEntryDouble*> Value);
	void AddDoubleBytes(class ULowEntryDouble* Value);
	void AddByteArray(TArray<unsigned char> Value);
	void AddByte(unsigned char Value);
	void AddBooleanArray(TArray<bool> Value);
	void AddBoolean(bool Value);
};

// Class LowEntryExtendedStandardLibrary.LowEntryDouble
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class ULowEntryDouble : public UObject
{
public:
	TArray<unsigned char>                              Bytes;                                                     // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryDouble");
		return ptr;
	}



	void SetBytes(TArray<unsigned char> ByteArray, int Index, int Length);
	bool LongBytes_LessThan(class ULowEntryLong* Value);
	bool LongBytes_GreaterThan(class ULowEntryLong* Value);
	bool Integer_LessThan(int Value);
	bool Integer_GreaterThan(int Value);
	TArray<unsigned char> GetBytes();
	void Float_Subtract(float Value);
	bool Float_LessThan(float Value);
	bool Float_GreaterThan(float Value);
	bool Float_Equals(float Value);
	void Float_Add(float Value);
	void DoubleBytes_Subtract(class ULowEntryDouble* Value);
	bool DoubleBytes_LessThan(class ULowEntryDouble* Value);
	bool DoubleBytes_GreaterThan(class ULowEntryDouble* Value);
	bool DoubleBytes_Equals(class ULowEntryDouble* Value);
	void DoubleBytes_Add(class ULowEntryDouble* Value);
	class ULowEntryDouble* CreateClone();
	struct FString CastToString(int MinFractionalDigits);
	class ULowEntryLong* CastToLongBytes();
};

// Class LowEntryExtendedStandardLibrary.LowEntryExecutionQueue
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class ULowEntryExecutionQueue : public UObject
{
public:
	int                                                Count;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Next;                                                      // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZOTN[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryExecutionQueue");
		return ptr;
	}



};

// Class LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULowEntryExtendedStandardLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary");
		return ptr;
	}



	bool STATIC_XboxOnePlatform();
	bool STATIC_WithEditor();
	bool STATIC_WindowsRtPlatform();
	bool STATIC_WindowsRtArmPlatform();
	bool STATIC_WindowsPlatform();
	struct FString STATIC_WindowsNewlineCharacter();
	bool STATIC_Windows64Platform();
	bool STATIC_Windows32Platform();
	void STATIC_TickSeconds(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int Ticks, float SecondsInterval, int* Tick);
	void STATIC_TickFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int Ticks, int FramesInterval, int* Tick);
	void STATIC_TextureUpdateResource(class UTexture* Texture);
	void STATIC_TextureRenderTarget2DToPixels(class UTextureRenderTarget2D* TextureRenderTarget2D, int* Width, int* Height, TArray<struct FColor>* Pixels);
	void STATIC_TextureRenderTarget2DToBytes(class UTextureRenderTarget2D* TextureRenderTarget2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int CompressionQuality);
	void STATIC_Texture2DToPixels(class UTexture2D* Texture2D, int* Width, int* Height, TArray<struct FColor>* Pixels);
	void STATIC_Texture2DToBytes(class UTexture2D* Texture2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int CompressionQuality);
	bool STATIC_TestBuild();
	struct FString STATIC_TabCharacter();
	bool STATIC_SwitchPlatform();
	TArray<unsigned char> STATIC_StringToBytesUtf8(const struct FString& String);
	void STATIC_SplitBytes(TArray<unsigned char> ByteArray, int LengthA, TArray<unsigned char>* A, TArray<unsigned char>* B);
	void STATIC_SoundClass_SetVolume(class USoundClass* SoundClass, float Volume);
	void STATIC_SoundClass_SetPitch(class USoundClass* SoundClass, float Pitch);
	float STATIC_SoundClass_GetVolume(class USoundClass* SoundClass);
	float STATIC_SoundClass_GetPitch(class USoundClass* SoundClass);
	void STATIC_SortTimespanArrayDirectly(TArray<struct FTimespan>* TimespanArray, bool Reversed);
	TArray<struct FTimespan> STATIC_SortTimespanArray(TArray<struct FTimespan> TimespanArray, bool Reversed);
	void STATIC_SortStringArrayDirectly(TArray<struct FString>* StringArray, bool Reversed);
	TArray<struct FString> STATIC_SortStringArray(TArray<struct FString> StringArray, bool Reversed);
	void STATIC_SortObjectArrayDirectly(TArray<class UObject*>* ObjectArray, const struct FScriptDelegate& Comparator, bool Reversed);
	TArray<class UObject*> STATIC_SortObjectArray(TArray<class UObject*> ObjectArray, const struct FScriptDelegate& Comparator, bool Reversed);
	void STATIC_SortIntegerArrayDirectly(TArray<int>* IntegerArray, bool Reversed);
	TArray<int> STATIC_SortIntegerArray(TArray<int> IntegerArray, bool Reversed);
	void STATIC_SortFloatArrayDirectly(TArray<float>* FloatArray, bool Reversed);
	TArray<float> STATIC_SortFloatArray(TArray<float> FloatArray, bool Reversed);
	void STATIC_SortDateTimeArrayDirectly(TArray<struct FDateTime>* DateTimeArray, bool Reversed);
	TArray<struct FDateTime> STATIC_SortDateTimeArray(TArray<struct FDateTime> DateTimeArray, bool Reversed);
	void STATIC_SortByteArrayDirectly(TArray<unsigned char>* ByteArray, bool Reversed);
	TArray<unsigned char> STATIC_SortByteArray(TArray<unsigned char> ByteArray, bool Reversed);
	void STATIC_SimpleKismetSystemLibraryPrintString(const struct FString& inString);
	bool STATIC_ShippingBuild();
	TArray<unsigned char> STATIC_Sha512(TArray<unsigned char> ByteArray, int Index, int Length);
	TArray<unsigned char> STATIC_Sha256(TArray<unsigned char> ByteArray, int Index, int Length);
	TArray<unsigned char> STATIC_Sha1(TArray<unsigned char> ByteArray, int Index, int Length);
	void STATIC_SetWorldRenderingEnabled(bool Enabled);
	void STATIC_SetWindowSize(int Width, int Height);
	void STATIC_SetWindowPosition(int X, int Y);
	void STATIC_SetWindowPositiomInPercentagesCentered(float X, float Y);
	void STATIC_SetWindowMode(bool Fullscreen, bool IsFullscreenWindowed);
	void STATIC_SetSplitScreenType_TwoPlayers(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers Type);
	void STATIC_SetSplitScreenType_ThreePlayers(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers Type);
	void STATIC_SetSplitScreenEnabled(bool Enabled);
	void STATIC_SetMousePositionInPercentages(float X, float Y);
	void STATIC_SetMousePosition(int X, int Y);
	void STATIC_SetMouseLockedToViewport(bool Locked);
	void STATIC_SetGenericTeamId(class AActor* Target, unsigned char TeamID);
	void STATIC_ServerChangeMap(class UObject* WorldContextObject, const struct FString& Map, const struct FString& Args, class APlayerController* SpecificPlayer);
	void STATIC_SceneCaptureComponent2DToPixels(class USceneCaptureComponent2D* SceneCaptureComponent2D, int* Width, int* Height, TArray<struct FColor>* Pixels);
	void STATIC_SceneCaptureComponent2DToBytes(class USceneCaptureComponent2D* SceneCaptureComponent2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int CompressionQuality);
	void STATIC_SceneCaptureComponent2D_SetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, float FOV);
	void STATIC_SceneCaptureComponent2D_GetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, float* FOV);
	void STATIC_SceneCapture2DToPixels(class ASceneCapture2D* SceneCapture2D, int* Width, int* Height, TArray<struct FColor>* Pixels);
	void STATIC_SceneCapture2DToBytes(class ASceneCapture2D* SceneCapture2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int CompressionQuality);
	void STATIC_SceneCapture2D_SetFov(class ASceneCapture2D* SceneCapture2D, float FOV);
	void STATIC_SceneCapture2D_GetFov(class ASceneCapture2D* SceneCapture2D, float* FOV);
	float STATIC_RoundDecimals(float Number, int Decimals);
	void STATIC_RetriggerableRandomDelayFrames(class UObject* WorldContextObject, int MinFrames, int MaxFrames, const struct FLatentActionInfo& LatentInfo);
	void STATIC_RetriggerableRandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, const struct FLatentActionInfo& LatentInfo);
	void STATIC_RetriggerableDelayFrames(class UObject* WorldContextObject, int Frames, const struct FLatentActionInfo& LatentInfo);
	struct FString STATIC_ReplaceCharactersExcept(const struct FString& String, const struct FString& ReplacementCharacter, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const struct FString& OtherCharactersToKeep);
	struct FString STATIC_RemoveCharactersExcept(const struct FString& String, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const struct FString& OtherCharactersToKeep);
	struct FString STATIC_RegexReplace(const struct FString& String, const struct FString& Pattern, const struct FString& Replacement);
	bool STATIC_RegexMatch(const struct FString& String, const struct FString& Pattern);
	TArray<struct FLowEntryRegexMatch> STATIC_RegexGetMatches(const struct FString& String, const struct FString& Pattern);
	int STATIC_RegexCount(const struct FString& String, const struct FString& Pattern);
	void STATIC_RandomDelayFrames(class UObject* WorldContextObject, int MinFrames, int MaxFrames, const struct FLatentActionInfo& LatentInfo);
	void STATIC_RandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, const struct FLatentActionInfo& LatentInfo);
	void STATIC_QueueExecutions(class UObject* WorldContextObject, class ULowEntryExecutionQueue** Queue, const struct FLatentActionInfo& LatentInfo);
	bool STATIC_Ps4Platform();
	void STATIC_PlayerControllerGetLocalPlayer(class APlayerController* PlayerController, bool* Success, class ULocalPlayer** LocalPlayer);
	class UTexture2D* STATIC_PixelsToTexture2D(int Width, int Height, TArray<struct FColor> Pixels);
	class UTexture2D* STATIC_PixelsToExistingTexture2D(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, int Width, int Height, TArray<struct FColor> Pixels);
	void STATIC_PixelsToBytes(int Width, int Height, TArray<struct FColor> Pixels, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int CompressionQuality);
	TArray<unsigned char> STATIC_Pearson(TArray<unsigned char> ByteArray, int HashLength, int Index, int Length);
	class ULowEntryLong* STATIC_ParseStringIntoLongBytes(const struct FString& String);
	class ULowEntryDouble* STATIC_ParseStringIntoDoubleBytes(const struct FString& String);
	bool STATIC_ParsedHashcashIsValid(class ULowEntryParsedHashcash* Target);
	void STATIC_NextQueueExecution(class ULowEntryExecutionQueue* Queue);
	struct FString STATIC_NewlineCharacter();
	struct FString STATIC_MinString(const struct FString& A, const struct FString& B);
	void STATIC_MinOfTimespanArray(TArray<struct FTimespan> TimespanArray, int* IndexOfMinValue, struct FTimespan* MinValue);
	void STATIC_MinOfStringArray(TArray<struct FString> StringArray, int* IndexOfMinValue, struct FString* MinValue);
	void STATIC_MinOfDateTimeArray(TArray<struct FDateTime> DateTimeArray, int* IndexOfMinValue, struct FDateTime* MinValue);
	TArray<unsigned char> STATIC_MergeEncapsulatedByteArrays(TArray<class ULowEntryByteArray*> ByteArrays);
	TArray<unsigned char> STATIC_MergeBytes(TArray<unsigned char> A, TArray<unsigned char> B);
	TArray<unsigned char> STATIC_Md5(TArray<unsigned char> ByteArray, int Index, int Length);
	struct FString STATIC_MaxString(const struct FString& A, const struct FString& B);
	void STATIC_MaxOfTimespanArray(TArray<struct FTimespan> TimespanArray, int* IndexOfMaxValue, struct FTimespan* MaxValue);
	void STATIC_MaxOfStringArray(TArray<struct FString> StringArray, int* IndexOfMaxValue, struct FString* MaxValue);
	void STATIC_MaxOfDateTimeArray(TArray<struct FDateTime> DateTimeArray, int* IndexOfMaxValue, struct FDateTime* MaxValue);
	bool STATIC_MacPlatform();
	class ULowEntryLong* STATIC_Long_CreateZero();
	class ULowEntryLong* STATIC_Long_Create(TArray<unsigned char> ByteArray, int Index, int Length);
	void STATIC_LoadVideo(class UMediaSoundComponent* MediaSoundComponent, const struct FString& URL, bool* Success, class UMediaPlayer** MediaPlayer, class UMediaTexture** MediaTexture, bool PlayOnOpen, bool Loop);
	bool STATIC_LinuxPlatform();
	bool STATIC_LessStringString(const struct FString& A, const struct FString& B);
	bool STATIC_LessIntegerFloat(int A, float B);
	bool STATIC_LessIntegerByte(int A, unsigned char B);
	bool STATIC_LessFloatInteger(float A, int B);
	bool STATIC_LessFloatByte(float A, unsigned char B);
	bool STATIC_LessEqualStringString(const struct FString& A, const struct FString& B);
	bool STATIC_LessEqualIntegerFloat(int A, float B);
	bool STATIC_LessEqualIntegerByte(int A, unsigned char B);
	bool STATIC_LessEqualFloatInteger(float A, int B);
	bool STATIC_LessEqualFloatByte(float A, unsigned char B);
	bool STATIC_LessEqualByteInteger(unsigned char A, int B);
	bool STATIC_LessEqualByteFloat(unsigned char A, float B);
	bool STATIC_LessByteInteger(unsigned char A, int B);
	bool STATIC_LessByteFloat(unsigned char A, float B);
	void STATIC_LatentAction_Create_String(class ULowEntryLatentActionString** LatentAction);
	void STATIC_LatentAction_Create_Object(class ULowEntryLatentActionObject** LatentAction);
	void STATIC_LatentAction_Create_None(class ULowEntryLatentActionNone** LatentAction);
	void STATIC_LatentAction_Create_Integer(class ULowEntryLatentActionInteger** LatentAction);
	void STATIC_LatentAction_Create_Float(class ULowEntryLatentActionFloat** LatentAction);
	void STATIC_LatentAction_Create_Boolean(class ULowEntryLatentActionBoolean** LatentAction);
	void STATIC_JoinGame(class UObject* WorldContextObject, const struct FString& ServerAddress, const struct FString& Args, class APlayerController* SpecificPlayer);
	void STATIC_IsWorldRenderingEnabled(bool* Success, bool* Enabled);
	bool STATIC_IsBitSet(unsigned char B, int Bit);
	bool STATIC_IsAndroidDaydreamApplication();
	bool STATIC_IosPlatform();
	TArray<unsigned char> STATIC_IntegerToBytes(int Value);
	bool STATIC_Html5Platform();
	void STATIC_HostGame(class UObject* WorldContextObject, const struct FString& Map, const struct FString& Args, class APlayerController* SpecificPlayer);
	TArray<unsigned char> STATIC_HMAC(TArray<unsigned char> ByteArray, TArray<unsigned char> Key, LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm Algorithm, int Index, int Length);
	TArray<unsigned char> STATIC_HexToBytes(const struct FString& Hex);
	TArray<class ULowEntryParsedHashcash*> STATIC_HashcashParseArray(TArray<struct FString> Hashes);
	class ULowEntryParsedHashcash* STATIC_HashcashParse(const struct FString& Hash);
	struct FString STATIC_HashcashCustomCreationDate(const struct FString& Resource, const struct FDateTime& UtcDate, int Bits);
	TArray<struct FString> STATIC_HashcashArrayCustomCreationDate(TArray<struct FString> Resources, const struct FDateTime& UtcDate, int Bits);
	TArray<struct FString> STATIC_HashcashArray(TArray<struct FString> Resources, int Bits);
	struct FString STATIC_Hashcash(const struct FString& Resource, int Bits);
	bool STATIC_GreaterStringString(const struct FString& A, const struct FString& B);
	bool STATIC_GreaterIntegerFloat(int A, float B);
	bool STATIC_GreaterIntegerByte(int A, unsigned char B);
	bool STATIC_GreaterFloatInteger(float A, int B);
	bool STATIC_GreaterFloatByte(float A, unsigned char B);
	bool STATIC_GreaterEqualStringString(const struct FString& A, const struct FString& B);
	bool STATIC_GreaterEqualIntegerFloat(int A, float B);
	bool STATIC_GreaterEqualIntegerByte(int A, unsigned char B);
	bool STATIC_GreaterEqualFloatInteger(float A, int B);
	bool STATIC_GreaterEqualFloatByte(float A, unsigned char B);
	bool STATIC_GreaterEqualByteInteger(unsigned char A, int B);
	bool STATIC_GreaterEqualByteFloat(unsigned char A, float B);
	bool STATIC_GreaterByteInteger(unsigned char A, int B);
	bool STATIC_GreaterByteFloat(unsigned char A, float B);
	TArray<struct FColor> STATIC_GrayscalePixels(TArray<struct FColor> Pixel);
	struct FColor STATIC_GrayscalePixel(const struct FColor& Pixel);
	void STATIC_GetWindowSize(bool* Success, int* Width, int* Height);
	void STATIC_GetWindowPosition(bool* Success, int* X, int* Y);
	void STATIC_GetWindowPositiomInPercentagesCentered(bool* Success, float* X, float* Y);
	void STATIC_GetWindowMode(bool* Success, bool* Fullscreen, bool* IsFullscreenWindowed);
	void STATIC_GetWindowBounds(bool* Success, int* X, int* Y, int* Width, int* Height);
	void STATIC_GetWindowBorderSize(bool* Success, struct FMargin* Margin);
	struct FName STATIC_GetUserFocusedWidgetType(int UserIndex);
	void STATIC_GetSplitScreenType(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType* Type);
	struct FString STATIC_GetProjectVersion();
	struct FString STATIC_GetProjectName();
	void STATIC_GetPrimaryMonitorWorkArea(int* X, int* Y, int* Width, int* Height);
	void STATIC_GetPrimaryMonitorResolution(int* Width, int* Height);
	void STATIC_GetMousePositionInPercentages(bool* Success, float* X, float* Y);
	void STATIC_GetMousePosition(bool* Success, int* X, int* Y);
	void STATIC_GetMaximumVolume(int* Volume, bool* Success);
	struct FVector2D STATIC_GetLocalToAbsoluteScale(const struct FGeometry& Geometry);
	struct FName STATIC_GetKeyboardFocusedWidgetType();
	void STATIC_GetGenericTeamId(class AActor* Target, unsigned char* TeamID);
	void STATIC_GetCurrentVolumePercentage(float* Percentage, bool* Success);
	void STATIC_GetCurrentVolume(int* Volume, bool* Success);
	void STATIC_GetClassWithName(const struct FString& ClassName, class UClass** Class_, bool* Success);
	unsigned char STATIC_GetByteWithBitSet(unsigned char Byte, int Bit, bool Value);
	void STATIC_GetBatteryTemperature(float* Celsius, bool* Success);
	void STATIC_GetBatteryState(LowEntryExtendedStandardLibrary_ELowEntryBatteryState* State, bool* Success);
	void STATIC_GetBatteryCharge(int* Percentage, bool* Success);
	void STATIC_GetAndroidVolume(int* Volume);
	struct FString STATIC_GetAndroidVersion();
	struct FString STATIC_GetAndroidOsLanguage();
	int STATIC_GetAndroidNumberOfCores();
	struct FString STATIC_GetAndroidGpuFamily();
	struct FString STATIC_GetAndroidGlVersion();
	struct FString STATIC_GetAndroidDeviceModel();
	struct FString STATIC_GetAndroidDeviceMake();
	struct FString STATIC_GetAndroidDefaultLocale();
	int STATIC_GetAndroidBuildVersion();
	struct FVector2D STATIC_GetAbsoluteToLocalScale(const struct FGeometry& Geometry);
	struct FVector2D STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);
	void STATIC_GenerateRandomBytesRandomLength(int MinLength, int MaxLength, TArray<unsigned char>* ByteArray);
	void STATIC_GenerateRandomBytes(int Length, TArray<unsigned char>* ByteArray);
	float STATIC_FloorDecimals(float Number, int Decimals);
	TArray<unsigned char> STATIC_FloatToBytes(float Value);
	void STATIC_ExecToInteger(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch, int* Value);
	void STATIC_ExecToByte(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch, unsigned char* Value);
	void STATIC_ExecToBoolean(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse Branch, bool* Value);
	class ULowEntryByteArray* STATIC_EncapsulateByteArray(TArray<unsigned char> ByteArray);
	class ULowEntryDouble* STATIC_Double_CreateZero();
	class ULowEntryDouble* STATIC_Double_Create(TArray<unsigned char> ByteArray, int Index, int Length);
	struct FVector2D STATIC_Divide_Vector2dVector2d(const struct FVector2D& A, const struct FVector2D& B);
	bool STATIC_DevelopmentBuild();
	bool STATIC_DesktopPlatform();
	void STATIC_DelayFrames(class UObject* WorldContextObject, int Frames, const struct FLatentActionInfo& LatentInfo);
	bool STATIC_DebugBuild();
	void STATIC_DateTime_ToUnixTimestamp(const struct FDateTime& DateTime, class ULowEntryLong** Timestamp);
	void STATIC_DateTime_ToString(const struct FDateTime& DateTime, struct FString* String, const struct FString& Format);
	void STATIC_DateTime_ToIso8601(const struct FDateTime& DateTime, struct FString* String);
	void STATIC_DateTime_FromUnixTimestamp(class ULowEntryLong* Timestamp, struct FDateTime* DateTime);
	struct FString STATIC_CreateString(int Length, const struct FString& Filler);
	void STATIC_CreateObject(class UClass* Class, class UObject** Object);
	void STATIC_Crash();
	void STATIC_ConvertUtcDateToLocalDate(const struct FDateTime& Utc, struct FDateTime* Local);
	void STATIC_ConvertLocalDateToUtcDate(const struct FDateTime& Local, struct FDateTime* Utc);
	void STATIC_ClipboardSet(const struct FString& Value);
	struct FString STATIC_ClipboardGet();
	void STATIC_ClearUserFocus(int UserIndex);
	void STATIC_ClearKeyboardFocus();
	void STATIC_ClearAllUserFocus();
	void STATIC_ChangeMap(class UObject* WorldContextObject, const struct FString& Map, const struct FString& Args, class APlayerController* SpecificPlayer);
	float STATIC_CeilDecimals(float Number, int Decimals);
	void STATIC_CaseSwitchObject(int OnlyCheckFirstX, class UObject* Value, class UObject* _1__, class UObject* _2__, class UObject* _3__, class UObject* _4__, class UObject* _5__, class UObject* _6__, class UObject* _7__, class UObject* _8__, class UObject* _9__, class UObject* _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch);
	void STATIC_CaseSwitchInteger(int OnlyCheckFirstX, int Value, int _1__, int _2__, int _3__, int _4__, int _5__, int _6__, int _7__, int _8__, int _9__, int _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch);
	void STATIC_CaseSwitchByte(int OnlyCheckFirstX, unsigned char Value, unsigned char _1__, unsigned char _2__, unsigned char _3__, unsigned char _4__, unsigned char _5__, unsigned char _6__, unsigned char _7__, unsigned char _8__, unsigned char _9__, unsigned char _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch);
	struct FString STATIC_CarriageReturnCharacter();
	TArray<unsigned char> STATIC_ByteToBytes(unsigned char Value);
	bool STATIC_ByteToBoolean(unsigned char Byte);
	void STATIC_ByteToBits(unsigned char Byte, bool* Bit1, bool* Bit2, bool* Bit3, bool* Bit4, bool* Bit5, bool* Bit6, bool* Bit7, bool* Bit8);
	struct FString STATIC_BytesToStringUtf8(TArray<unsigned char> ByteArray, int Index, int Length);
	void STATIC_BytesToPixels(TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int* Width, int* Height, TArray<struct FColor>* Pixels, int Index, int Length);
	class ULowEntryLong* STATIC_BytesToLongBytes(TArray<unsigned char> ByteArray, int Index, int Length);
	int STATIC_BytesToInteger(TArray<unsigned char> ByteArray, int Index, int Length);
	class UTexture2D* STATIC_BytesToImage(TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int Index, int Length);
	struct FString STATIC_BytesToHex(TArray<unsigned char> ByteArray, bool AddSpaces, int Index, int Length);
	float STATIC_BytesToFloat(TArray<unsigned char> ByteArray, int Index, int Length);
	class UTexture2D* STATIC_BytesToExistingImage(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int Index, int Length);
	class ULowEntryDouble* STATIC_BytesToDoubleBytes(TArray<unsigned char> ByteArray, int Index, int Length);
	unsigned char STATIC_BytesToByte(TArray<unsigned char> ByteArray, int Index, int Length);
	bool STATIC_BytesToBoolean(TArray<unsigned char> ByteArray, int Index, int Length);
	struct FString STATIC_BytesToBitString(TArray<unsigned char> ByteArray, bool AddSpaces, int Index, int Length);
	struct FString STATIC_BytesToBinary(TArray<unsigned char> ByteArray, bool AddSpaces, int Index, int Length);
	struct FString STATIC_BytesToBase64Url(TArray<unsigned char> ByteArray, int Index, int Length);
	struct FString STATIC_BytesToBase64(TArray<unsigned char> ByteArray, int Index, int Length);
	TArray<unsigned char> STATIC_BytesSubArray(TArray<unsigned char> ByteArray, int Index, int Length);
	TArray<unsigned char> STATIC_ByteDataWriter_GetBytes(class ULowEntryByteDataWriter* ByteDataWriter);
	class ULowEntryByteDataWriter* STATIC_ByteDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryByteDataEntry*> Array);
	class ULowEntryByteDataWriter* STATIC_ByteDataWriter_CreateFromEntryArray(TArray<class ULowEntryByteDataEntry*> Array);
	class ULowEntryByteDataReader* STATIC_ByteDataReader_Create(TArray<unsigned char> Bytes, int Index, int Length);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromStringUtf8Array(TArray<struct FString> Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromStringUtf8(const struct FString& Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger3Array(TArray<int> Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger3(int Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger2Array(TArray<int> Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger2(int Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger1Array(TArray<int> Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromPositiveInteger1(int Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*> Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromLongBytes(class ULowEntryLong* Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromIntegerArray(TArray<int> Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromInteger(int Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromFloatArray(TArray<float> Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromFloat(float Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*> Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromByteArray(TArray<unsigned char> Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromByte(unsigned char Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromBooleanArray(TArray<bool> Value);
	class ULowEntryByteDataEntry* STATIC_ByteDataEntry_CreateFromBoolean(bool Value);
	TArray<unsigned char> STATIC_BooleanToBytes(bool Value);
	unsigned char STATIC_BooleanToByte(bool Value);
	TArray<unsigned char> STATIC_BitStringToBytes(const struct FString& Bits);
	void STATIC_BitsToByte(bool Bit1, bool Bit2, bool Bit3, bool Bit4, bool Bit5, bool Bit6, bool Bit7, bool Bit8, unsigned char* Byte);
	TArray<unsigned char> STATIC_BitDataWriter_GetBytes(class ULowEntryBitDataWriter* BitDataWriter);
	class ULowEntryBitDataWriter* STATIC_BitDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryBitDataEntry*> Array);
	class ULowEntryBitDataWriter* STATIC_BitDataWriter_CreateFromEntryArray(TArray<class ULowEntryBitDataEntry*> Array);
	class ULowEntryBitDataReader* STATIC_BitDataReader_Create(TArray<unsigned char> Bytes, int Index, int Length);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromStringUtf8Array(TArray<struct FString> Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromStringUtf8(const struct FString& Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger3Array(TArray<int> Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger3(int Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger2Array(TArray<int> Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger2(int Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger1Array(TArray<int> Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromPositiveInteger1(int Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*> Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromLongBytes(class ULowEntryLong* Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromIntegerMostSignificantBits(int Value, int BitCount);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromIntegerLeastSignificantBits(int Value, int BitCount);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromIntegerArrayMostSignificantBits(TArray<int> Value, int BitCount);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromIntegerArrayLeastSignificantBits(TArray<int> Value, int BitCount);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromIntegerArray(TArray<int> Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromInteger(int Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromFloatArray(TArray<float> Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromFloat(float Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*> Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByteMostSignificantBits(unsigned char Value, int BitCount);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByteLeastSignificantBits(unsigned char Value, int BitCount);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByteArrayMostSignificantBits(TArray<unsigned char> Value, int BitCount);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByteArrayLeastSignificantBits(TArray<unsigned char> Value, int BitCount);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByteArray(TArray<unsigned char> Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromByte(unsigned char Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromBooleanArray(TArray<bool> Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromBoolean(bool Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromBitArray(TArray<bool> Value);
	class ULowEntryBitDataEntry* STATIC_BitDataEntry_CreateFromBit(bool Value);
	TArray<unsigned char> STATIC_BinaryToBytes(const struct FString& Binary);
	TArray<unsigned char> STATIC_BCrypt(TArray<unsigned char> ByteArray, TArray<unsigned char> Salt, int Strength, int Index, int Length);
	TArray<unsigned char> STATIC_Base64UrlToBytes(const struct FString& Base64Url);
	struct FString STATIC_Base64UrlToBase64(const struct FString& Base64Url);
	TArray<unsigned char> STATIC_Base64ToBytes(const struct FString& Base64);
	struct FString STATIC_Base64ToBase64Url(const struct FString& Base64);
	bool STATIC_AreBytesEqual(TArray<unsigned char> A, TArray<unsigned char> B, int IndexA, int LengthA, int IndexB, int LengthB);
	bool STATIC_AreAndroidHeadphonesPluggedIn();
	bool STATIC_AndroidPlatform();
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class ULowEntryLatentActionBoolean : public UObject
{
public:
	bool                                               Finished;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Result;                                                    // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UWBP[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                KeepAliveCount;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean");
		return ptr;
	}



	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, bool* Result_);
	bool IsDone();
	void GetResult(bool* Result_);
	void Done(bool Result_);
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class ULowEntryLatentActionFloat : public UObject
{
public:
	bool                                               Finished;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVN3[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Result;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KeepAliveCount;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6TPQ[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat");
		return ptr;
	}



	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float* Result_);
	bool IsDone();
	void GetResult(float* Result_);
	void Done(float Result_);
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class ULowEntryLatentActionInteger : public UObject
{
public:
	bool                                               Finished;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U4M1[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Result;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KeepAliveCount;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K09F[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger");
		return ptr;
	}



	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int* Result_);
	bool IsDone();
	void GetResult(int* Result_);
	void Done(int Result_);
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionNone
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class ULowEntryLatentActionNone : public UObject
{
public:
	bool                                               Finished;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NUVL[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                KeepAliveCount;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionNone");
		return ptr;
	}



	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	bool IsDone();
	void Done();
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionObject
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class ULowEntryLatentActionObject : public UObject
{
public:
	bool                                               Finished;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T4O8[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     Result;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KeepAliveCount;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7V9J[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionObject");
		return ptr;
	}



	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UObject** Result_);
	bool IsDone();
	void GetResult(class UObject** Result_);
	void Done(class UObject* Result_);
};

// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionString
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class ULowEntryLatentActionString : public UObject
{
public:
	bool                                               Finished;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P54U[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Result;                                                    // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KeepAliveCount;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RDFG[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLatentActionString");
		return ptr;
	}



	void WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FString* Result_);
	bool IsDone();
	void GetResult(struct FString* Result_);
	void Done(const struct FString& Result_);
};

// Class LowEntryExtendedStandardLibrary.LowEntryLong
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class ULowEntryLong : public UObject
{
public:
	TArray<unsigned char>                              Bytes;                                                     // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryLong");
		return ptr;
	}



	void SetBytes(TArray<unsigned char> ByteArray, int Index, int Length);
	void LongBytes_Subtract(class ULowEntryLong* Value);
	bool LongBytes_LessThan(class ULowEntryLong* Value);
	bool LongBytes_GreaterThan(class ULowEntryLong* Value);
	bool LongBytes_Equals(class ULowEntryLong* Value);
	void LongBytes_Add(class ULowEntryLong* Value);
	void Integer_Subtract(int Value);
	bool Integer_LessThan(int Value);
	bool Integer_GreaterThan(int Value);
	bool Integer_Equals(int Value);
	void Integer_Add(int Value);
	TArray<unsigned char> GetBytes();
	bool Float_LessThan(float Value);
	bool Float_GreaterThan(float Value);
	bool DoubleBytes_LessThan(class ULowEntryDouble* Value);
	bool DoubleBytes_GreaterThan(class ULowEntryDouble* Value);
	class ULowEntryLong* CreateClone();
	struct FString CastToString();
	class ULowEntryDouble* CastToDoubleBytes();
};

// Class LowEntryExtendedStandardLibrary.LowEntryParsedHashcash
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class ULowEntryParsedHashcash : public UObject
{
public:
	bool                                               Valid;                                                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OZ8T[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Resource;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   Date;                                                      // 0x0040(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Bits;                                                      // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YGUC[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryExtendedStandardLibrary.LowEntryParsedHashcash");
		return ptr;
	}



	struct FString ToString();
	struct FString GetResource();
	struct FDateTime GetDate();
	int GetBits();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
