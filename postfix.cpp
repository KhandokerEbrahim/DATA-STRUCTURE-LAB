# DATA-STRUCTURE-LAB
#include<bits/stdc++.h>
using namespace std;
int ara[1000],n,i;

 int top=0;
char s[10];
void  push(int n)
{

       top=top+1;

       ara[top] = n;

}
void pop()
{



       ara[top] = 0;
       top=top-1;


}
void  post_fix()
{
     cout << " Enter post fix extression"<<endl;
     cin >> s;
     int i;
     for(i=0;i<strlen(s);i++)
     {
         if(s[i]>='0'   && s[i]<='9')
         {
             push(s[i]-='0');
         }
         else{
            if(s[i]=='+')
            {
                int temp = ara[top-1]+ara[top];
              pop() ;
              pop();
              push(temp);
            }
            else if(s[i]=='-')
            {
                int temp = ara[top-1]-ara[top];
              pop() ;
              pop();
              push(temp);
            }
            else if(s[i]=='*')
            {
                int temp =ara[top-1] * ara[top];
              pop() ;
              pop();
              push(temp);
            }
            else if(s[i]=='/')
            {
                int temp = ara[top-1]/ara[top];
              pop() ;
              pop();
              push(temp);
            }
         }
     }
     cout <<ara[top];
}
int main ()
{
    post_fix();

}


