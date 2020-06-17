#define  MYTEST 1


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

#ifdef MYTEST 
//½âÎöMyActor 
UCLASS()
class INSIDEBLUEPRINT_API AMyActor : public AActor
{
	//GENERATED_BODY()
	//1.  -->
	//CURRENT_FILE_ID__LINE_GENRATED_BODY
	//2.  -->
	//InsideBlueprint_Source_InsideBlueprint_MyActor_h_12_GENERATED_BODY_LEGACY
	//3.  -->
//	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
//public: \
//		InsideBlueprint_Source_InsideBlueprint_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
//		InsideBlueprint_Source_InsideBlueprint_MyActor_h_12_SPARSE_DATA \
//		InsideBlueprint_Source_InsideBlueprint_MyActor_h_12_RPC_WRAPPERS \
//		InsideBlueprint_Source_InsideBlueprint_MyActor_h_12_INCLASS \
//		InsideBlueprint_Source_InsideBlueprint_MyActor_h_12_STANDARD_CONSTRUCTORS \
//public: \
//		PRAGMA_ENABLE_DEPRECATION_WARNINGS

	//4.  -->
	//4.1--->		InsideBlueprint_Source_InsideBlueprint_MyActor_h_12_INCLASS \
	
private: 
	static void StaticRegisterNativesAMyActor(); 
	friend struct Z_Construct_UClass_AMyActor_Statics; 
public: 
	//DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InsideBlueprint"), NO_API) 

#pragma region DECLARE_CLASS
//#define DECLARE_CLASS( TClass, TSuperClass, TStaticFlags, TStaticCastFlags, TPackage, TRequiredAPI  ) 
private: 
    AMyActor& operator=(AMyActor&&);   
    AMyActor& operator=(const AMyActor&);   
    NO_API static UClass* GetPrivateStaticClass();
public: 
	/** Bitwise union of #EClassFlags pertaining to this class.*/ 
        enum {
        StaticClassFlags = COMPILED_IN_FLAGS(0 | CLASS_Config)}; 
	/** Typedef for the base class ({{ typedef-type }}) */ 
	typedef AActor Super;
	/** Typedef for {{ typedef-type }}. */ 
	typedef AMyActor ThisClass;
	/** Returns a UClass object representing this class at runtime */ 
	inline static UClass* StaticClass() 
	{ 
		return GetPrivateStaticClass(); 
	} 
	/** Returns the package this class belongs in */ 
	inline static const TCHAR* StaticPackage() 
	{ 
		return TEXT("/Script/InsideBlueprint");
	} 
	/** Returns the static cast flags for this class */ 
	inline static EClassCastFlags StaticClassCastFlags() 
	{ 
		return CASTCLASS_None;
	} 
	/** For internal use only; use StaticConstructObject() to create new objects. */ 
	inline void* operator new(const size_t InSize, EInternal InInternalOnly, UObject* InOuter = (UObject*)GetTransientPackage(), FName InName = NAME_None, EObjectFlags InSetFlags = RF_NoFlags) \
	{ 
		return StaticAllocateObject(StaticClass(), InOuter, InName, InSetFlags); 
	} 
	/** For internal use only; use StaticConstructObject() to create new objects. */ 
	inline void* operator new( const size_t InSize, EInternal* InMem ) 
	{ 
		return (void*)InMem; 
	}
#pragma endregion


   // DECLARE_SERIALIZER(AMyActor)		
#pragma region DECLARE_SERIALIZER
#define DECLARE_SERIALIZER( AMyActor ) 
	friend FArchive &operator<<( FArchive& Ar, AMyActor*& Res ) 
	{ 
		return Ar << (UObject*&)Res; 
	} 
	friend void operator<<(FStructuredArchive::FSlot InSlot, AMyActor*& Res) 
	{ 
		InSlot << (UObject*&)Res; 
	}
#pragma endregion






    //4.2----> InsideBlueprint_Source_InsideBlueprint_MyActor_h_12_STANDARD_CONSTRUCTORS

    /** Standard constructor, called after all reflected properties have been initialized */ 
        NO_API AMyActor(const FObjectInitializer& ObjectInitializer); 
        DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) 
        DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); 
    DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); 
private: 
        /** Private move- and copy-constructors, should never be used */ 
        NO_API AMyActor(AMyActor&&); 
        NO_API AMyActor(const AMyActor&); 
public:

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


public:
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};










#endif