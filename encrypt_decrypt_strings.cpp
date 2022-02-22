//---------------------Encrypt and decrypt strings------------------//
//-----------------------Made By - Vishal singh--------------------//

                  //  Algorithm used : Caesar cypher  //


#include<iostream>
#include<cstdlib>   // for random values
#include<string>
#include<time.h>

using namespace std;

void encrypt_s(string);
void decrypt_s(string);

int main()
{
    string str;
    int ch;

    cout<<"\nEnter String : ";
    getline(cin,str);

    cout<<"\n\n1.Encrypt";
    cout<<"\n2.Decrypt\n";
    cin>>ch;

    if(ch==1)
        encrypt_s(str);
    else
        decrypt_s(str);

    return 0;
}

void encrypt_s(string s)
{
    system("clear");        // change 'clear' to 'cls' if you are using windows

    srand(time(0));                 //to change random value everytime
    int key = rand()%30+1;            //generate random number from 1 to 30
    cout<<"\nOriginal string : "<<s;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
           s[i] -= key;
    }

    cout<<"\n\nYour Key : "<<key;
    cout<<"\nEncrypted string : "<<s;
    cout<<"\n\n-----------------------------------------------------";
    cout<<"\n!!!Key is used to decrypt the strings\n";


}

void decrypt_s(string s)
{
    system("clear");        // change 'clear' to 'cls' if you are using windows

    int key;
    cout<<"\nEnter key : ";
    cin>>key;

    cout<<"\n\nEncrypted string : "<<s;

    for(int i=0;i<s.length();i++)
    {

        if(s[i]!=' ')
           s[i] += key;
    }

    cout<<"\n\nOriginal string : "<<s<<endl;

}
