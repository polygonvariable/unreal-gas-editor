// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IOLibrary.generated.h"

/**
 * 
 */
UCLASS()
class GASPLUGIN_API UIOLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static FString ReadFile(const FString& FilePath);

	UFUNCTION(BlueprintCallable)
	static bool WriteFile(const FString& FilePath, const FString& Content);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static FString GetProjectName();

	UFUNCTION(BlueprintCallable)
	static bool RegexTest(const FString& TestString, const FString& Pattern);

	UFUNCTION(BlueprintCallable)
	static FString RegexMatch(const FString& TestString, const FString& Pattern);

	UFUNCTION(BlueprintCallable)
	static TArray<FString> RegexMatchAll(const FString& TestString, const FString& Pattern);

	UFUNCTION(BlueprintCallable)
	static FString RegexReplaceAll(const FString& TestString, const FString& Pattern, const FString& ReplaceString);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static FString ReplaceFirstMatch(FString SourceString, const FString& SearchString, const FString& ReplaceString);

	UFUNCTION(BlueprintCallable)
	static FString OpenFileDialog();

	UFUNCTION(BlueprintCallable)
	static FString OpenFolderDialog();

};
