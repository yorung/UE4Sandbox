// Fill out your copyright notice in the Description page of Project Settings.

#include "CrashTestGameModeBase.h"

ACrashTestGameModeBase::ACrashTestGameModeBase()
{
}

void ACrashTestGameModeBase::BeginPlay()
{
	*((uint32*)0x4) = 3;
}
