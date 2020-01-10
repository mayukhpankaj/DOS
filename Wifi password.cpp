#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{   char pass[20];
    cout<<"\t\t\tWiFi PASSWORD FINDER ver 0.1"<<endl;
    cout<<"\t\t\t\t by Mayukh Pankaj"<<endl;//2 feb 2018

    cout<<"\n\n press any button to continue ";
    getch();
    system("netsh wlan show profile");

    cout<<" Enter WiFi name to hack: ";
    cin>>pass;
    char cmnd[200]="netsh wlan show profile ";

    strcat(cmnd,pass);
    strcat(cmnd," key=clear");

    cout<<cmnd;

    system(cmnd);

    cout<<"You have loggined previously then you can find the password in SECURITY SETTINGS->KEY CONTENT.";
    getch();

    return(0);
}
