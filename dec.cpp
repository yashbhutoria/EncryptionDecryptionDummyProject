#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  char ch,hc;
  FILE *f1,*f2;
  f1=fopen("ENC.TXT","r");
  f2=fopen("DEC.YSH","w");
  if(f1==NULL||f2==NULL) {
    cout<<"\nFatal Error";
  }

  while(1){
    ch=fgetc(f1);
    if(ch==EOF)
      break;
    hc=ch-10;
    fputc(hc,f2);
  }
  cout<<"\nTEXT DECRYPTED !";
}
