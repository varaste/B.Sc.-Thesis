#include<iostream>
#include<string>
using namespace std;
#include<conio.h>
#include<iostream>
#include<vector>
#include<string.h>
#include <windows.h>
HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE); //Color for text
HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE); //Color for text
int main()
{
     
string prod[100],nullprod[100];
char a[10];
int n,i;
	SetConsoleTextAttribute(hstdout, 0x0a);

cout<<"\nenter the no of productions : ";
cin>>n;
	SetConsoleTextAttribute(hstdout, 0x0c);

cout<<"\n\nenter the CFG productions\n";
for(i=0;i<n;i++)
cin>>prod[i];

int k=0,tflag=1;
for(i=0;i<n;i++)
{
        if(prod[i][3]=='0')
        {                    
                      a[k]=prod[i][0];
                      k++;
        }
}


int flag;
for(i=0;i<n;i++)
{
if(prod[i][3]=='0')
continue;

int count = 0;
for(int j=3;prod[i][j]!='\0';j++)
{
 if(prod[i][j]>=65 && prod[i][j]<=90)
 {  
 
 for(int o=0;o<k;o++)
 {
 if(prod[i][j]==a[o])
 count++;
 }                 
 }        

}


if(count==(prod[i].size()-3))
{tflag=1;
 for(int q=0;q<k;q++)
        {
                           if(prod[i][0]==a[q])
                           tflag=0;
                           }
                       if(tflag==1)
                       { 
a[k]=prod[i][0];
k++;
}
}

}


int l=0,j;
for(i=0;i<n;i++)
{
if(prod[i][3]=='0')
continue;

nullprod[l++]=prod[i];
for(j=3;prod[i][j]!='\0';j++)
{
if(k==1 && prod[i][j]==a[0])
{
 int length = prod[i].size();
 nullprod[l]+=prod[i].substr(0,j);
 nullprod[l]+=prod[i].substr(j+1,length-1);     
 if(nullprod[l].size()==3)
 {nullprod[l].clear();
  l--;}
 l++;
}

if(k==2 && prod[i][j]==a[0])
{
 int length = prod[i].size();
 nullprod[l]+=prod[i].substr(0,j);
 nullprod[l]+=prod[i].substr(j+1,length-1);     
  if(nullprod[l].size()==3)
  {nullprod[l].clear();
  l--;}
 l++;
}

if(k==2 && prod[i][j]==a[1])
{
 int length = prod[i].size();
 nullprod[l]+=prod[i].substr(0,j);
 nullprod[l]+=prod[i].substr(j+1,length-1);     
 if(nullprod[l].size()==3)
 {nullprod[l].clear();
  l--;}
 l++;
}

if(k==2 && prod[i][j]==a[0])
{
 string tempstr1,tempstr2;
 int length = prod[i].size();
 tempstr1+=prod[i].substr(0,j);
 tempstr1+=prod[i].substr(j+1,length-1);  
 int flag =0;
 for(int p =3;prod[i][p]!='\0';p++)
 {
 if(tempstr1[p]==a[1])
 {
 flag=1;
 int length = tempstr1.size();
 tempstr2+=tempstr1.substr(0,p);
 tempstr2+=tempstr1.substr(p+1,length-1);   
}
}
if(flag==1)
 {nullprod[l]+=tempstr2;     
 if(nullprod[l].size()==3)
 {nullprod[l].clear();
  l--;}
 l++;}
}

if(k==3 && prod[i][j]==a[0])
{
 int length = prod[i].size();
 nullprod[l]+=prod[i].substr(0,j);
 nullprod[l]+=prod[i].substr(j+1,length-1);     
 if(nullprod[l].size()==3)
 {nullprod[l].clear();
  l--;}
 l++;
}
if(k==3 && prod[i][j]==a[1])
{
 int length = prod[i].size();
 nullprod[l]+=prod[i].substr(0,j);
 nullprod[l]+=prod[i].substr(j+1,length-1);     
 if(nullprod[l].size()==3)
 {nullprod[l].clear();
  l--;}
 l++;
}
if(k==3 && prod[i][j]==a[2])
{
 int length = prod[i].size();
 nullprod[l]+=prod[i].substr(0,j);
 nullprod[l]+=prod[i].substr(j+1,length-1);     
 if(nullprod[l].size()==3)
 {nullprod[l].clear();
  l--;}
 l++;
}


if(k==3 && prod[i][j]==a[1])
{
 string tempstr1,tempstr2;
 int length = prod[i].size();
 tempstr1+=prod[i].substr(0,j);
 tempstr1+=prod[i].substr(j+1,length-1);  
 int flag =0;
 for(int p =3;prod[i][p]!='\0';p++)
 {
 if(tempstr1[p]==a[2])
 {
 flag=1;
 int length = tempstr1.size();
 tempstr2+=tempstr1.substr(0,p);
 tempstr2+=tempstr1.substr(p+1,length-1);   
}
}
if(flag==1)
 {nullprod[l]+=tempstr2;     
 if(nullprod[l].size()==3)
 {nullprod[l].clear();
  l--;}
 l++;}
}

if(k==3 && prod[i][j]==a[0])
{
 string tempstr1,tempstr2;
 int length = prod[i].size();
 tempstr1+=prod[i].substr(0,j);
 tempstr1+=prod[i].substr(j+1,length-1);  
 int flag =0;
 for(int p =3;prod[i][p]!='\0';p++)
 {
 if(tempstr1[p]==a[2])
 {
 flag=1;
 int length = tempstr1.size();
 tempstr2+=tempstr1.substr(0,p);
 tempstr2+=tempstr1.substr(p+1,length-1);   
}
}
if(flag==1)
 {nullprod[l]+=tempstr2;     
 if(nullprod[l].size()==3)
 {nullprod[l].clear();
  l--;}
 l++;}
}


if(k==3 && prod[i][j]==a[0])
{
string tempstr1,tempstr2;
 int length = prod[i].size();
 tempstr1+=prod[i].substr(0,j);
 tempstr1+=prod[i].substr(j+1,length-1);  
 int flag =0;
 for(int p =3;prod[i][p]!='\0';p++)
 {
 if(tempstr1[p]==a[1])
 {
 flag=1;
 int length = tempstr1.size();
 tempstr2+=tempstr1.substr(0,p);
 tempstr2+=tempstr1.substr(p+1,length-1);   
}
}
if(flag==1)
 {nullprod[l]+=tempstr2;     
 if(nullprod[l].size()==3)
 {nullprod[l].clear();
  l--;}
 l++;}
}


if(k==3 && prod[i][j]==a[0])
{
 string tempstr1,tempstr2,tempstr3;
 int length = prod[i].size();
 tempstr1+=prod[i].substr(0,j);
 tempstr1+=prod[i].substr(j+1,length-1);  
 int flag =0;
 for(int p =3;prod[i][p]!='\0';p++)
 {
 if(tempstr1[p]==a[1])
 {
 flag++;
 int length = tempstr1.size();
 tempstr2+=tempstr1.substr(0,p);
 tempstr2+=tempstr1.substr(p+1,length-1);   
}
}

 for(int p =3;prod[i][p]!='\0';p++)
 {
 if(tempstr2[p]==a[2])
 {
 flag++;
 int length = tempstr2.size();
 tempstr3+=tempstr2.substr(0,p);
 tempstr3+=tempstr2.substr(p+1,length-1);   
}
}

if(flag==2)
 {nullprod[l]+=tempstr3;     
 if(nullprod[l].size()==3)
 {nullprod[l].clear();
  l--;}
 l++;}
}


}      
}
	SetConsoleTextAttribute(hstdout, 0x09);

cout<<"\n\nThe new productions without NULL productions are :-\n";
for(i=0;i<l;i++)
cout<<nullprod[i]<<endl;



//unit productions

for(i=0;i<l;i++)
{
                if(nullprod[i].size()==4 && nullprod[i][3]>=65 && nullprod[i][3]<=90)
                {int ttflag=0;
                                         for(j=0;j<l;j++)
                                         {
                                                         if(nullprod[i][3]==nullprod[j][0])
                                                         {int counter=0;
                                                                                          for(int jj=3;jj<nullprod[j].size();jj++)
                                                                                          {
                                                                                                                       if(nullprod[j][jj]>=97 && nullprod[j][jj]<=122)
                                                                                                                       counter++;
                                                                                          }
                                                                                          if(counter==nullprod[j].size()-3)
                                                                                          {
                                                                                                                 ttflag++;
                                                                                                                 nullprod[l]+=nullprod[i].substr(0,3);
                                                                                                                 nullprod[l]+=nullprod[j].substr(3);
                                                                                                                 l++;                                                                                                                          
                                                                                          }
                                                         }
                                         }
                if(ttflag!=0)
                {
                             for(int jj=i;jj<l;jj++)
                             nullprod[jj]=nullprod[jj+1];
                             l--;
                             i--;
                             }
                
                }
}

	SetConsoleTextAttribute(hstdout, 0x0e);

cout<<"\n\nThe new productions without UNIT productions are :-\n";
for(i=0;i<l;i++)
cout<<nullprod[i]<<endl;


//USELESS productions

char deletedval;

for(i=0;i<l;i++)
{int counter=0;
                if(nullprod[i][0]!='S')
                {
                                       for(j=0;j<l;j++)
                                       {
                                                       if(nullprod[i][0]!=nullprod[j][0])
                                                       {
                                                          for(int jj=3;jj<nullprod[j].size();jj++)
                                                          {
                                                                                              if(nullprod[j][jj]==nullprod[i][0])
                                                                                              counter++;
                                                          }                              
                                                       }
                                         }
                                         if(counter==0)
                                         {
                                                       for(int ii=i;ii<l;ii++)
                                                       nullprod[ii]=nullprod[ii+1];
                                                       l--;
                                                        i--;
                                          }
                       }
      }
	SetConsoleTextAttribute(hstdout, 0xb);

cout<<"\n\nThe new productions without non reachable productions are :-\n";
for(i=0;i<l;i++)
cout<<nullprod[i]<<endl;

//non generative states

for(int i=0;i<l;i++)
{
        for(j=3;j<nullprod[i].size();j++)
        {
                                        if(nullprod[i][0]==nullprod[i][j])
                                        {int fcount=0;
                                                                          for(int ii=0;ii<l;ii++)
                                                                          {
                                                                                  if(nullprod[ii][0]==nullprod[i][0])
                                                                                  {int count=0;
                                                                                             for(int jj=3;jj<nullprod[ii].size();jj++)
                                                                                             {
                                                                                                     if(nullprod[ii][jj]<97 || nullprod[ii][jj] >122)
                                                                                                     {
                                                                                                                    count++;        
                                                                                                                            }
                                                                                                     }  
                                                                                                     if(count == 0)
                                                                                                     fcount++;                     
                                                                                                                    }
                                                                                  }
                                         if(fcount==0)
                                        {
                                         deletedval= nullprod[i][0];             
                                         for(int u=i;u<l;u++)
                                         nullprod[u]=nullprod[u+1];
                                         l--;
                                         i--;
                                        
                                                                                  
                                                                          }
                                        }
                                       
                                                         
                                         }
                                       
        }
        
        
        
                                        for(int uu=0;uu<l;uu++)
                                         {
                                                 for(int pp=3;pp<nullprod[uu].size();pp++)
                                         {
                                          if(deletedval==nullprod[uu][pp])
                                          {
                                                for(int u=uu;u<l;u++)
                                                nullprod[u]=nullprod[u+1];
                                                l--;
                                                uu--;                          
                                          }                                        
                                         }
                                         }
        
        cout<<"\n\n\n"<<deletedval<<"\n\n\n";
        	SetConsoleTextAttribute(hstdout, 0x0d);

cout<<"\n\nThe new productions without non generative productions are :-\n";
for(i=0;i<l;i++)
cout<<nullprod[i]<<endl;


getch();
return 0;
}
