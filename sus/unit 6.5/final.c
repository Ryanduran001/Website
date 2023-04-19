#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
typedef struct
{
    string user;
    string password;
}
login;

bool checkpassword(string user, string pass);
login logins[3];
int main(void)
{
    logins[0].user = "Maresh";
    logins[0].password = "123";
    logins[1].user = "Jim";
    logins[1].password = "Jim_again";
    logins[2].user = "Bryan";
    logins[2].password = "cs50";
    string user = get_string("Username: ");
    string pass = get_string("Password: ");
    if(checkpassword(user, pass))
    {
        printf("Access Granted");
    }
    else
    {
        printf("Acces Denied");
    }
    printf("\n");


}

bool checkpassword(string user, string pass)
{
    for(int i = 0; i < 3; i++)
    {
        if(strcmp(user, logins[i].user) == 0)
        {
            if(strcmp(pass, logins[i].password) == 0)
            {
                return true;
            }
        }
    }
    return false;
}