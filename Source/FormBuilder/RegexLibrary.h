// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Internationalization/Regex.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RegexLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FORMBUILDER_API URegexLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = "Regex")
	static bool MatchRegex(FString pattern, FString textToMatch);
};
