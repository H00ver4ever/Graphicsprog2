#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

class UButton;

UCLASS()
class VGP221_GRAPHICSPROG2_API UMainMenuWidget : public UUserWidget
{
    GENERATED_BODY()

protected:

    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    UButton* StartButton;

    UPROPERTY(meta = (BindWidget))
    UButton* QuitButton;

private:

    UFUNCTION()
    void OnStartGameClicked();

    UFUNCTION()
    void OnQuitClicked();
};

