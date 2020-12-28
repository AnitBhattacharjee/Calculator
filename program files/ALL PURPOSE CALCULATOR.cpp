#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
using namespace std;
class scientific            /*this is the use of class*/
{

    public:
    void initial()
    {

        fstream objq;         /*declaring object of the class*/
    system("cls");
    cout<<"---------------------WELCOME TO ALL IN ONE CALCULATOR--------------------------- \n\n";

    cout<<"CHOOSE YOUR ACTION !!!\n\npress\n\n";
    cout<<"1. OPEN PREVIOUS WORKING SESSION...\n\n2. DELETE PREVIOUS HISTORY AND START FRESH...\n\n";
    int qwertyu;
    asqq:
    cin>>qwertyu;

    switch(qwertyu)
    {
        case 1:
            cout<<"\n\nYou choose to continue :)\n\n";
            objq.open("history.txt",ios::in|ios::app|ios::out);
            break;
        case 2:
            cout<<"\n\nYou choose to start new :)\n\n";
            objq.open("history.txt",ios::trunc|ios::in|ios::out);
            break;
        default:
            cout<<"error...\ntry again\n\n";
            goto asqq;
    }

    system("cls");
    cout<<"\n\nYou choose scientific calculator :)\n\n You can use operations like:\n  +     (add)\n  -     (subtract)\n  *     (multiply)\n  /     (divide)\n  c     (cosine)\n  s     (sine)\n  !     (factorial)\n  l     (logarithm)\n  ^     (exponential)\n  f     (floor)\n  #     (square root)\n  r     (remainder)\n  %     (percentage)";
                    cout<<"\n-----------------------------SCIENTIFIC CALCULATOR------------------------------\n";

    double n1,poww,n2;
    er:
    double p=0610;
    char a;
    cin>>n1;                        /*asking for first input from the user*/
    objq<<n1;
    we:
    system("cls");
    if(p!=0610)
    {
        n1=p;
    }
    cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<n1<<"  "<<endl;
    objq<<p<<endl;
    wee:
    if(p!=0610)
    {
        n1=p;
    }
    cin>>a;                         /*asking for which type of operation is to be used*/
    objq<<a;
    if(a=='+')                      /*addition*/
        {
            cin>>n2;
            objq<<n2;
            p=n2+n1;
            goto we;
        }
    else if(a=='-')                  /*subtract*/
        {
            cin>>n2;
            objq<<n2;
            p=n1-n2;
            goto we;
        }
    else if(a=='*')                   /*multiplication*/
        {
            cin>>n2;
            objq<<n2;
            p=n2*n1;
            goto we;
        }
    else if(a=='/')                 /*divide*/
        {
            cin>>n2;
            objq<<n2;
            p=n1/n2;
            goto we;
        }
    else if(a=='l'||a=='L')          /*logarithm*/
    {
        tt:
        system("cls");
        cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"Enter the base: \n\n1. Natural Base\n2. Custom Base\n3. Clear screen \n\n"<<"  "<<endl;
        int kk;
        cin>>kk;
        if(kk==1)
        {
            system("cls");
            p=log(n1);
            cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"To Base e :\t"<<p<<"  "<<endl;
            objq<<p<<endl;
            goto wee;
        }
        else if(kk==2)
        {
            double h,yu,g;
            system("cls");
            cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"  "<<endl;
            cout<<"Enter the Base:\t";
            cin>>yu;
            h=log(n1);
            g=log(yu);
            p=h/g;
            system("cls");
            cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"To Base "<<yu<<" :\t"<<p<<"  "<<endl;
           objq<<p<<endl;
            goto wee;
        }
        else if(kk==3)
        {
            goto we;
        }
        else
        {
            goto tt;
        }
    }
    else if(a=='!')                /*factorial*/
    {
        p=1;
        system("cls");
        cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"  "<<endl;
        for(int i=1;i<=n1;i++)
        {
            p=p*i;
        }
        goto we;
    }
    else if(a=='^')              /* power */
    {
        system("cls");
        cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"  "<<endl;
        cin>>poww;
        p=pow(n1,poww);
        goto we;
    }
    else if(a=='f')             /* floor */
    {
        p=floor(n1);
        goto we;
    }
    else if(a=='#')              /*square root*/
    {
        p=sqrt(n1);
        goto we;
    }
    else if(a=='r')              /*remainder*/
    {
        int qq,tempp;
        cin>>qq;
        objq<<qq;
        tempp=n1;
        p=tempp%qq;
        goto we;
    }
    else if(a=='%')             /*percentage*/
    {
        double temmpp;
        temmpp=n1/100;
        system("cls");
        cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<temmpp<<"  "<<endl;
        objq<<p<<endl;
        goto wee;
    }
    else if(a=='s'||a=='S')     /*sine*/
    {

        ttt:
        system("cls");
        cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"Select one of the options: \n\n1. DEGREE\n2. RADIAN\n3. Clear screen \n\n"<<"  "<<endl;
        int kk;
        cin>>kk;
        if(kk==1)
        {
            system("cls");
            p=sin(n1);
            cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"Sin("<<n1<< "o) :\t"<<p<<"  "<<endl;
            objq<<p<<endl;
            goto wee;
        }
        else if(kk==2)
        {
            system("cls");
            p=sin(n1*(3.14/180));
            cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"Sin("<<n1<< "rad) :\t"<<p<<"  "<<endl;
            objq<<p<<endl;
            goto wee;
        }
        else if(kk==3)
        {
            goto we;
        }
        else
        {
            goto ttt;
        }
    }
    else if(a=='c'||a=='C')       /*cosine*/
    {
        tty:
        system("cls");
        cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"Select one of the options: \n\n1. DEGREE\n2. RADIAN\n3. Clear screen \n\n"<<"  "<<endl;
        int kk;
        cin>>kk;
        if(kk==1)
        {
            system("cls");
            p=cos(n1);
            cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"Cos("<<n1<< "o) :\t"<<p<<"  "<<endl;
            objq<<p<<endl;
            goto wee;
        }
        else if(kk==2)
        {
            system("cls");
            p=cos(n1*(3.14/180));
            cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"Cos("<<n1<< "rad) :\t"<<p<<"  "<<endl;
            objq<<p<<endl;
            goto wee;
        }
        else if(kk==3)
        {
            goto we;
        }
        else
        {
            goto tty;
        }
    }
    else if(a=='t'||a=='T')        /*tangent*/
    {
        float temp1,temp2;
        ttu:
        system("cls");
        cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"Select one of the options: \n\n1. DEGREE\n2. RADIAN\n3. Clear screen \n\n"<<"  "<<endl;
        int kk;
        cin>>kk;
        if(kk==1)
        {

            system("cls");
            temp1=cos(n1);
            temp2=sin(n1);
            p=temp2/temp1;
            cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"Tan("<<n1<< "o) :\t"<<p<<"  "<<endl;
            objq<<p<<endl;
            goto wee;
        }
        else if(kk==2)
        {
            system("cls");
            temp1=cos(n1*(3.14/180));
            temp2=sin(n1*(3.14/180));
            p=temp2/temp1;
            cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"Tan("<<n1<< "rad) :\t"<<p<<"  "<<endl;
            objq<<p<<endl;
            goto wee;
        }
        else if(kk==3)
        {
            goto we;
        }
        else
        {
            goto ttu;
        }
    }
    else if(a=='=')         /*does all operations and returns to the first screen*/
    {


        system("cls");
        cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"  "<<endl;
        cout<<" "<<n1;
        n1=0;
        cout<<"\n\n";
        system("pause");
        system("cls");
        cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"  "<<endl;
        goto er;
    }
    else if(a=='~')             /*clears the screens and returns to the original screen*/
    {
        cc:
        n1=0;
        system("cls");
        cout<<"\n-------------------------------SCIENTIFIC CALCULATOR----------------------------\npress E to exit\npress ~ to clear the screen\npress A for HELP\n\n\n"<<"  "<<endl;
        goto er;
    }
    else if(a=='h'||a=='H')     /*shows the history of the operations*/
        {
            system("cls");
            cout<<"\n\n\n\t\tHISTORY\n\n\n\n";
            char yy;
            while(!objq.eof())
            {
                objq>>yy;
                cout<<yy;
            }
            system("pause");
            goto we;
        }
    else if(a=='e'||a=='E')         /*to exit the program*/
    {
        uu:
        system("cls");

        cout<<"\n\n\n\n\t\t\t    ARE YOU SURE!!!  \n\n\n\t\t\t    PRESS Y FOR YES\n\n\n\t\t\t        OR\n\n\n\t\t\t   PRESS N FOR NO... ";
        objq.close();
        char quit;
        cin>>quit;
        if(quit=='y'||quit=='Y')
        {
                exit(0);
        }
        else if(quit=='n'||quit=='N')
        {
            goto we;
        }
        else
        {
            goto uu;
        }
    }
    else if(a=='A'||a=='a')         /*to exit the program*/
    {
        system("cls");
        cout<<"\n\nYou choose scientific calculator :)\n\n You can use operations like:\n  +     (add)\n  -     (subtract)\n  *     (multiply)\n  /     (divide)\n  c     (cosine)\n  s     (sine)\n  !     (factorial)\n  l     (logarithm)\n  ^     (exponential)\n  f     (floor)\n  #     (square root)\n  r     (remainder)\n  %     (percentage)\n\n";
        system("pause");
        goto we;
    }
    else
    {
        cout<<"SYMBOL NOT RECOGNISED TRY AGAIN:\n";
        goto wee;
    }
}
};
class calc:public scientific                     /*use of inheritance*/
{
    public:
    int a,type;
    public:
        int calcu()
        {
                int type;

                scientific::initial();
        }
}obj;
main()                                           /*main function*/
{
    cout<<"---------------------WELCOME TO ALL IN ONE CALCULATOR--------------------------- \n\n";

        system("pause");

                obj.calcu();

}
