// Fill out your copyright notice in the Description page of Project Settings.


#include "Library/IOLibrary.h"
#include "Misc/FileHelper.h"

FString UIOLibrary::ReadFile(const FString& FilePath)
{
	FString fileContent;
	FFileHelper::LoadFileToString(fileContent, *FilePath);
	return fileContent;
}

bool UIOLibrary::WriteFile(const FString& FilePath, const FString& Content)
{
	return FFileHelper::SaveStringToFile(Content, *FilePath);
}

FString UIOLibrary::GetProjectName()
{
	return FString(FApp::GetProjectName());
}

bool UIOLibrary::RegexTest(const FString& TestString, const FString& Pattern)
{
	FRegexPattern regexPattern(Pattern);
	FRegexMatcher regexMatcher(regexPattern, TestString);
	return regexMatcher.FindNext();
}

FString UIOLibrary::RegexMatch(const FString& TestString, const FString& Pattern)
{
	FRegexPattern regexPattern(Pattern);
	FRegexMatcher regexMatcher(regexPattern, TestString);

	if (regexMatcher.FindNext())
	{
		return regexMatcher.GetCaptureGroup(0);
	}

	return FString();
}

TArray<FString> UIOLibrary::RegexMatchAll(const FString& TestString, const FString& Pattern)
{
    TArray<FString> matches;

    FRegexPattern regexPattern(Pattern);
    FRegexMatcher regexMatcher(regexPattern, TestString);

    while (regexMatcher.FindNext())
    {
        // int32 index = 0;
        int32 index = 1;
        FString match;

        while (!(match = regexMatcher.GetCaptureGroup(index)).IsEmpty())
        {
            matches.Add(match);
            ++index;
        }
    }

    return matches;
}

FString UIOLibrary::RegexReplaceAll(const FString& TestString, const FString& Pattern, const FString& ReplaceString)
{
	TArray<FString> matches = RegexMatchAll(TestString, Pattern);

	FString result = TestString;

	for (const FString& match : matches)
	{
		result = result.Replace(*match, *ReplaceString);
	}

	return result;
}

FString UIOLibrary::ReplaceFirstMatch(FString SourceString, const FString& SearchString, const FString& ReplaceString)
{
	int32 index = SourceString.Find(SearchString);

	if (index != INDEX_NONE)
	{
		SourceString = SourceString.Left(index) + ReplaceString + SourceString.RightChop(index + SearchString.Len());
	}

	return SourceString;
}
