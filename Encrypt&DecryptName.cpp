#include <iostream>
#include<string>
using namespace std;
string ReadName()
{
    string Name;
    cout << "Please enter your name " << endl;
    getline(cin, Name);
    return Name;
}
string EncryptName(string name , short EncryptionKey)
{
    for (int i = 0;i < name.length();i++)
    {
        name[i] = char(name[i] + EncryptionKey);
    }
    return name;
}
string DecryptName(string name, short EncryptionKey)
{
    for (int i = 0;i < name.length();i++)
    {
        name[i] = char(name[i] - EncryptionKey);
    }
    return name;
}
int main()
{
    const short EncryptionKey = 2;
    string Name = ReadName();
    string NameAfterEncryption = EncryptName(Name, EncryptionKey);
    string NameAfterDecryption = DecryptName(NameAfterEncryption, EncryptionKey);
    cout << "Name before Encryption " << Name << endl;
    cout << "Name after Encryption " << NameAfterEncryption << endl;
    cout << "Name after Decryption  " << NameAfterDecryption << endl;
    return 0;
}
