#include <stdio.h>

int main()
{
    enum Company {GOOGGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company xerox, google, ebay;
    xerox = XEROX;
    google = GOOGGLE;
    ebay = EBAY;

    printf("The value of xerox is: %d\n", xerox);
    printf("The value of xerox is: %d\n", google);
    printf("The value of xerox is: %d", ebay);
}
