# DATA-STRUCTURE-LAB
#include<bits/stdc++.h>
using namespace std;
int ara[1000],n,i;
 int s;
 int top=0;
// char s[10];
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

int main ()
{
    int n,a;
    cin >> n;
    push(n);  cout <<ara[top ]<<" "<<top<<endl;
    cin >> n;
    push(n);
    cin >> n;
    push(n);cout <<ara[top ]<<" "<<top<<endl;
    cin >> n;
    push(n);cout <<ara[top ]<<" "<<top<<endl;
    cin >> n;
    push(n);cout <<ara[top ]<<" "<<top<<endl;
    cin >> n;
    push(n);cout <<ara[top ]<<" "<<top<<endl;
        cin >> n;
    push(n);cout <<ara[top ]<<" "<<top<<endl;
        cin >> n;
    push(n);cout <<ara[top ]<<" "<<top<<endl;
        cin >> n;
      push(n);cout <<ara[top ]<<" "<<top<<endl;
        cin >> n;
      push(n);cout <<ara[top ]<<" "<<top<<endl;



    pop();cout <<ara[top ]<<" "<<top<<endl;
    pop();cout <<ara[top ]<<" "<<top<<endl;
    pop();cout <<ara[top ]<<" "<<top<<endl;


}

