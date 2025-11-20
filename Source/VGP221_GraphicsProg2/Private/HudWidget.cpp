#include "HudWidget.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/SBoxPanel.h"

TSharedRef<SWidget> UHudWidget::RebuildWidget()
{
    FSlateFontInfo textFont = FCoreStyle::Get().GetFontStyle("EmbassedText");
    return SNew(SVerticalBox)

        + SVerticalBox::Slot()
        .Padding(10)
        [
            SAssignNew(TimerTextBlock, STextBlock)
                .Text(FText::FromString("Timer: 0"))
                .Font(textFont)
        ]

        + SVerticalBox::Slot()
        .Padding(10)
        [
            SAssignNew(HitCounterTextBlock, STextBlock)
                .Text(FText::FromString("Hits: 0"))
                .Font(textFont)
        ];
}

void UHudWidget::UpdateTimer(float Time)
{
    if (TimerTextBlock.IsValid())
    {
        TimerTextBlock->SetText(FText::FromString(FString::Printf(TEXT("Time: %.1f"), Time)));
    }
}

void UHudWidget::UpdateHits(int32 Count)
{
    if (HitCounterTextBlock.IsValid())
    {
        HitCounterTextBlock->SetText(FText::FromString(FString::Printf(TEXT("Hits: %d"), Count)));
    }
}