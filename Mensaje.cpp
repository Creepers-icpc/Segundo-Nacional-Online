#include <iostream>

using namespace std;

int main()
{

    int casos;
    cin>>casos;
    for(int j=0;j<casos;j++)
    {
        int n,repe=0;
    cin>>n;
    char mensaje[n];
    cin>>mensaje;
    for(int i=0;i<n;i++)
    {
        if(mensaje[i]=='('||mensaje[i]=='c')
        {
            mensaje[i]='C';
        }
        if(mensaje[i]=='o'||mensaje[i]=='0')
        {
            mensaje[i]='O';
        }
        if(mensaje[i]=='d')
        {
            mensaje[i]='D';
        }
        if(mensaje[i]=='e'||mensaje[i]=='3')
        {
            mensaje[i]='E';
        }
        if(mensaje[i]=='r')
        {
            mensaje[i]='R';
        }
        if(mensaje[i]=='a'||mensaje[i]=='@')
        {
            mensaje[i]='A';
        }

    }
    for(int i=0;i<n;i++)
    {
        if(mensaje[i]=='C'&&mensaje[i+1]=='O'&&mensaje[i+2]=='D'&&mensaje[i+3]=='E'&&mensaje[i+4]=='R'&&mensaje[i+5]=='O'&&mensaje[i+6]=='A'&&mensaje[i+7]=='D')
        {
            repe++;
        }

    }
    cout<<"Caso #"<<j+1<<": "<<repe<<endl;
    }

    return 0;
}
