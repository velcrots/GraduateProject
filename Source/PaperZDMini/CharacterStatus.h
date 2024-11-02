// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterStatus.generated.h"

/**
 * 
 */
class PAPERZDMINI_API CharacterStatus
{
public:
	CharacterStatus();
	~CharacterStatus();
};


/** Please add a struct description */
USTRUCT(Atomic, BlueprintType)
struct FMyCharacterStatus
{
	GENERATED_USTRUCT_BODY()
public:
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="UserId", MakeStructureDefaultValue="0"))
	int32 UserId;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Name", MakeStructureDefaultValue="홍길동"))
	FString Name;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="MilitaryRank", MakeStructureDefaultValue="병장"))
	FString MilitaryRank;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="STR", MakeStructureDefaultValue="5000"))
	int32 STR;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="DEX", MakeStructureDefaultValue="5000"))
	int32 DEX;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="INT", MakeStructureDefaultValue="5000"))
	int32 INT;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="HP", MakeStructureDefaultValue="5000"))
	int32 HP;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="SP", MakeStructureDefaultValue="5000"))
	int32 SP;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="BestScore", MakeStructureDefaultValue="100000"))
	int32 BestScore;
};
