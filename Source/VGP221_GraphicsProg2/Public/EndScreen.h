// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Kismet/KismetSystemLibrary.h"
#include "EndScreen.generated.h"


/**
 * 
 */
UCLASS()
class VGP221_GRAPHICSPROG2_API UEndScreen : public UUserWidget
{
	GENERATED_BODY()

protected:

    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    UButton* MenuButton;

    UPROPERTY(meta = (BindWidget))
    UButton* QuitButton;

private:

    UFUNCTION()
    void OnMenuButtonClicked();

    UFUNCTION()
    void OnQuitClicked();
};
	

