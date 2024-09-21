#include <stdio.h>
void main()
{
    float tsale, cms;
    printf("Enter Your Total Sales: ");
    scanf("%f", &tsale);
    if (tsale < 100)
    {
        printf("No Commission on sales");
    }
    else if (tsale >= 100 && tsale <= 500)
    {
        cms = 0.1 * tsale;
        printf("Commission on sales= %f", cms);
    }
    else
    {
        cms = 100 + (0.08 * (tsale - 500));
        printf("Commission on sales= %f", cms);
    }
}
