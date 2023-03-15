#include<iostream>  
using namespace std;  
int main ()  
{    
    int myarray[23] = { 68,97,109,106,97,110,77,117,114,103,106,101,115,107,105,73,78,75,73,49,48,51,53 };   
    //Damjan Murgjeski INKI1035 so ascii
       
    cout<<"Input list is \n";
    for(int i=0;i<23;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }    
    for(int k=1; k<23; k++)   
    {  
        int temp = myarray[k];  
        int j= k-1;  
        while(j>=0 && temp <= myarray[j])  
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<23;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }  
}