/*Program to explain Dynamic construtor*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
Class string
{
      char *name;
      int length;
 public:
        string()
        {
            length=0;
            name=new char[length+1];
        }     
        string(char *s)
        {
           length=strlen(s);
           name=new char[length+1];
           strcpy(name,s); 
        }
        void display(void)
        {
            count<<name<<endl;
        }
        void join(string &a,string &b);
};
void string::join(string &a,string &b )
{
    length=a.length+b.length;
    delete name;
    name=new char[length+1];
    strcpy(name,a.name);
    strcat(name,b.name);
}
void main()
{
    char*first="v.k.";
    string name1(first),name2("G.U.I");
    string name3("DUNDAGE"),s1,s2,s3;
    s1.join(name1,name2);

public:
       string()
       {
           length=0;
           name=new char [length+1];
       }
       string(char *s)
       {
           length=strlen(s);
           name=new char[length+1];
           strcpy(name,s);
       }
       void display(void)
       {
           cout<<name<<endl;
       }
       void join(string &a,string &b);
}
void string::join(string &a,string &b)
{
    length=a.length+b.length;
    delete name;
    name=new char[length+1];
    strcpy(name,a.name);
    strcat(name,b.name);
}
void main()
{
    char*first="V.K.";
    string name1(first),name2("G.U.I");
    string name3("DUNDAGE"),s1,s2,s3;
    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();
    name2.display();
    name.display();
    s1.display();
    s2.display();
    
}