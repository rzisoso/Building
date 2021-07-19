// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortniteStruct.generated.h"

/**
 * 
 */

USTRUCT()
struct FStateValue
{
	GENERATED_BODY()
	int CurrentValue;
	int MinValue = 0;
	int MaxValue = 100;
};

UCLASS()
class BUILDING_API UFortniteStruct : public UObject
{
	GENERATED_BODY()
	
};
