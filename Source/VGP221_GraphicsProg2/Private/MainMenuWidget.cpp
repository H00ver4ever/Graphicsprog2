#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (StartButton)
        StartButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnStartGameClicked);

    if (QuitButton)
        QuitButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnQuitClicked);
}

void UMainMenuWidget::OnStartGameClicked()
{
    UGameplayStatics::OpenLevel(GetWorld(), TEXT("MainLevel"));
}

void UMainMenuWidget::OnQuitClicked()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
}
