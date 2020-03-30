// © 2019, Peter Marcinov. All rights reserved.

#include "RegexLibrary.h"


bool URegexLibrary::MatchRegex(FString pattern, FString textToMatch)
{
	FRegexPattern frp = FRegexPattern::FRegexPattern(pattern);
	FRegexMatcher frm = FRegexMatcher::FRegexMatcher(frp, textToMatch);
	bool isMatch = frm.FindNext();
	return isMatch;
}