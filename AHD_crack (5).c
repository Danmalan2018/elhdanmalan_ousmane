#define _XOPEN_SOURCE

#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <unistd.h> // for the crypt fonction


   int main(int argc, string argv[])
{
    if (argc == 2)
    {
       printf("Usage: crack <hash>+50abdc");
       return 1;
    }
{



    const int letters_count = 53;  // bouble alper


    string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv[1];

    char salt[3];   ///le debut du decriptage qui sera de 3
    memcpy(salt, hash, 2);
    salt[2] = '\0';  /// recuperation du salt('mettre une variable')

    char key_candidate[5] = "\0\0\0\0\0";






    {
    for (int four = 0; four < letters_count; four++)
    {
       for (int tree = 0; tree < letters_count; tree++)
    {
       for (int two = 0; two < letters_count; two++)

    {

       for (int one = 1; one < letters_count; one++)
    {
      key_candidate[0] = letters[one];
      key_candidate[1] = letters[two];
      key_candidate[2] = letters[tree];
      key_candidate[3] = letters[four];


     if (strcmp(crypt(key_candidate, salt), hash) == 0)

                        {
                            printf("%s", key_candidate);
                            return 0;
                         }
     }
     }
     }
     }
 }

    printf("Password couldn't be cracked!");


    return 1;
}
}