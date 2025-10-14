#include <stdio.h>
int main() 
{
    int username, password, otp;
    int twoFactor;   // 1 = Enabled, 0 = Disabled

    // Step 1: Username check
    printf("Enter username (e.g., 101): ");
    scanf("%d", &username);

    if (username == 101) 
    {  // valid username
        // Step 2: Password check
        printf("Enter password (e.g., 1234): ");
        scanf("%d", &password);

        if (password == 1234) 
        {  // valid password
            // Step 3: Two-factor check
            printf("Is two-factor authentication enabled? (1=Yes, 0=No): ");
            scanf("%d", &twoFactor);

            if (twoFactor == 1) 
            {
                // Step 4: OTP check
                printf("Enter OTP (e.g., 9999): ");
                scanf("%d", &otp);

                if (otp == 9999) 
                {
                    printf("Access Granted: Login Successful with 2FA\n");
                } 
                else 
                {
                    printf("Access Denied: Incorrect OTP\n");
                }
            } 
            else 
            {
                printf("Access Granted: Login Successful without 2FA\n");
            }
        } 
        else 
        {
            printf("Access Denied: Incorrect Password\n");
        }
    } 
    else 
    {
        printf("Access Denied: Invalid Username\n");
    }

    return 0;
}
