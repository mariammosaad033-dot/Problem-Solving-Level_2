#include <iostream>
using namespace std;
void PrintWordsFromAAAtoZZZ()
{
   
    for (int i = 65;i <= 90;i++)
    {
        for (int j = 65;j <= 90;j++)
        {
            for(int n=65;n<=90;n++)
            { 
                string  Word = "";

                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(n);

                cout << Word<<endl;
               
            }
            
        }
    }
}
int main()
{
    PrintWordsFromAAAtoZZZ();
    return 0;
}
