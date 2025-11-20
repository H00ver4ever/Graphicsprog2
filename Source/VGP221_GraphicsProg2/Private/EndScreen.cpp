// Fill out your copyright notice in the Description page of Project Settings.


#include "EndScreen.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UEndScreen::NativeConstruct()
{
    Super::NativeConstruct();

    if (MenuButton)
        MenuButton->OnClicked.AddDynamic(this, &UEndScreen::OnMenuButtonClicked);

    if (QuitButton)
        QuitButton->OnClicked.AddDynamic(this, &UEndScreen::OnQuitClicked);
}

void UEndScreen::OnMenuButtonClicked()
{
    UGameplayStatics::OpenLevel(GetWorld(), TEXT("MainMenu"));
}

void UEndScreen::OnQuitClicked()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
}
