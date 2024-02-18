// Test project


#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetConroller(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
