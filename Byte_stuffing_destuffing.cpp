#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;
int main()
{
    cout<<"At Sender: "<<endl;
    //Byte stuffing-------------------------
    string s1;
    cout<<"Enter the message you want to send: ";
    getline(cin,s1);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='$' || s1[i]=='@')
        {
            s1.insert(i,"@");
            i++;
        }
    }
    s1.insert(0,"$");
    s1.push_back('$');
    cout<<"The message sent is: "<<s1<<endl;
    cout<<"At Receiver: "<<endl;
    //Byte destuffing----------------------
    cout<<"Enter the message you received: ";
    string s2;
    getline(cin,s2);
    int ind1=s2.find('$');
    int ind2=s2.rfind('$');
    string s3=s2.substr(ind1+1,s2.length()-(ind1+1)-(s2.length()-ind2));
    string s4;
    for(int i=0;i<s3.length();i++)
    {
        if(s3[i]!='@')
        {
            s4.push_back(s3[i]);
        }
    }
    cout<<"The message received is: "<<s4<<endl;
    return 0;
}
