#include<iostream>
using namespace std;
#include<string>
int main()
{
    //bit stuffing
    string s1;
    cout<<"At sender: "<<endl;
    cout<<"Enter the message to transmit: ";
    getline(cin,s1);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='0' || s1[i]=='1')
        {
            continue;
        }
        else
        {
            cout<<"Invalid message";
            return 0;
        }
    }
    int count=0;
    string s2;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='1')
        {
            count++;
        }
        else
        {
            count=0;
        }
        s2.push_back(s1[i]);
        if(count==5)
        {
            s2.push_back('0');
            count=0;
        }
    }
    string stx = "01111110";
    s2.insert(0,stx);
    s2.append(stx);
    cout<<"The message sent is: "<<s2<<endl;
    cout<<"At receiver: "<<endl;
    string s3;
    cout<<"Enter the message received: ";
    getline(cin,s3);
    int ind1=s3.find(stx)+8;
    int ind2=s3.length()-2*ind1;
    string s4 = s3.substr(ind1,ind2);
    int count1=0;
    string s5;
    for(int i=0;i<s4.length();i++)
    {
        if(s4[i]=='1')
        {
            count1++;
        }
        else
        {
            count1=0;
        }
        if(count1==5)
        {
            count1=0;
            i++;
            s5.push_back('1');
        }
        else
        {
            s5.push_back(s4[i]);
        }
    }
    cout<<"The message received is: "<<s5<<endl;
    return 0;
}
