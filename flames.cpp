# include <iostream>
# include <string.h>
using namespace std;
int main()
{
  cout << endl << endl << "RELATIONSHIP CALCULATOR\n\n";
  char name[2][20],ch,minstrlen;
  cout << "ENTER YOUR NAME         :";
  cin >> name[0];
  //cout << int(name[0][0]);
  //cout << strlen(name[0]);
  cout << "ENTER YOUR PARTNER NAME :";
  cin >> name[1];
  char partner[20];
  strcpy(partner,name[1]);
  for(int i=0;i<2;i++)
  {
    for(int k=0;k<strlen(name[i]);k++)
      for(int j=0;j<strlen(name[i])-1;j++)
      {
        if(int(name[i][j]) > int(name[i][j+1]))
        {
          ch = name[i][j];
          name[i][j] = name[i][j+1];
          name[i][j+1] = ch;
        }
      }
  }
  //cout << name[0] <<  endl;
  //cout << name[1] << endl;
  int count = strlen(name[0]) + strlen(name[1]);
  if(strlen(name[0]) < strlen(name[1]))
    minstrlen=strlen(name[0]);
  else
    minstrlen=strlen(name[1]);
  int i=0,j=0;
  while(i<minstrlen && j<minstrlen)
  {
    if(int(name[0][i]) == int(name[1][j]))
    {
      i++;
      j++;
      count -= 2;
      continue;
    }
    if(int(name[0][i]) < int(name[1][j]))
    {
      i++;
      continue;
    }
    else
    {
      j++;
    }
 }
  //cout << count;
  char fl[]="FLAMES";
  char flames[7];
  int t,f;
  for(int k=6;k>1;k--)
  {
    f = count%k;
    //cout << f <<  endl;
    if(f == 0)
    {
      fl[k-1] = '\0';
      //cout << fl << endl;
      continue;
    }
    if(f-1 == 0)
    {
      int i=0;
      while(i<k)
      {
        fl[i]=fl[i+1];
        i++;
      }
      //cout << fl << endl;
      continue;
    }
    f--;
    t = f+1;
    i=0;
    while(t!=f)
    {
      flames[i]=fl[t];
      t = (t+1)%k;
      i++;
    }
    flames[i]='\0';
    strcpy(fl,flames);
    //cout << fl << endl;
  }
  //cout << fl << endl;
  switch(fl[0])
  {
    case 'F':cout << endl << partner << " is your FRIEND..." << endl << endl;
             break;
    case 'L':cout << endl << partner << " LOVES you..." << endl << endl;
             break;
    case 'A':cout << endl << partner << " ATTRACTED towards you..." << endl << endl;
             break;
    case 'M':cout << endl << "You will get MARRIED to " << partner << endl << endl;
             break;
    case 'E':cout << endl << partner << " is your ENEMY.." << endl << endl;
             break;
    case 'S':cout << endl << partner << " is your SOULMATE.." << endl << endl;
  }
  return 0;
}
