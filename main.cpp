#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;
ifstream f1("input_albume.txt");
ifstream f2("input_muzicieni.txt");
class Instrument{
    char *numarIdentificare;
    char *nume;
    char *cheieMuzicala;
public:
    Instrument(char * =nullptr,char * =nullptr,char * =nullptr);
    Instrument(const Instrument &);
    virtual ~Instrument();
    Instrument& operator=(const Instrument&);
    char getnumarIdentificare();
    char *getnume() {return this->nume;};
    void afisare() { cout<<numarIdentificare<<" "<<nume<<" "<<cheieMuzicala; };
};
Instrument::Instrument(char *numarIdentificare,char *nume,char *cheieMuzicala){
    if(numarIdentificare!=nullptr){
        this->numarIdentificare = new char[strlen(numarIdentificare)+1];
        strcpy(this->numarIdentificare, numarIdentificare);
    }
     if(nume!=nullptr){
        this->nume = new char[strlen(nume)+1];
        strcpy(this->nume, nume);
    }
     if(cheieMuzicala!=nullptr){
        this->cheieMuzicala = new char[strlen(cheieMuzicala)+1];
        strcpy(this->cheieMuzicala, cheieMuzicala);
    }
}
Instrument::Instrument(const Instrument &i){
    if(i.numarIdentificare!=nullptr){
        this->numarIdentificare = new char[strlen(i.numarIdentificare)+1];
        strcpy(this->numarIdentificare, i.numarIdentificare);
    }
     if(i.nume!=nullptr){
        this->nume = new char[strlen(i.nume)+1];
        strcpy(this->nume, i.nume);
    }
     if(i.cheieMuzicala!=nullptr){
        this->cheieMuzicala = new char[strlen(i.cheieMuzicala)+1];
        strcpy(this->cheieMuzicala, i.cheieMuzicala);
    }
}
Instrument::~Instrument(){
    if(this->numarIdentificare!=nullptr) delete [] this->numarIdentificare;
     if(this->nume!=nullptr) delete [] this->nume;
    if(this->cheieMuzicala!=nullptr) delete [] this->cheieMuzicala;
}
Instrument& Instrument::operator=(const Instrument& i){
    if(&i==this) return *this;
    if(this->numarIdentificare!=nullptr) delete [] this->numarIdentificare;
    if(this->nume!=nullptr) delete [] this->nume;
    if(this->cheieMuzicala!=nullptr) delete [] this->cheieMuzicala;
    if(i.numarIdentificare != nullptr){
        this->numarIdentificare=new char[strlen(i.numarIdentificare)+1];
        strcpy(this->numarIdentificare, i.numarIdentificare);}
    if(i.nume != nullptr){
        this->nume=new char[strlen(i.nume)+1];
        strcpy(this->nume, i.nume);}
    if(i.cheieMuzicala != nullptr){
        this->cheieMuzicala=new char[strlen(i.cheieMuzicala)+1];
        strcpy(this->cheieMuzicala, i.cheieMuzicala);};
    return *this;
}
class InsPercutie : public Instrument{
public:
    InsPercutie(char *numarIdentificare=nullptr,char *nume=nullptr,char *cheieMuzicala=nullptr);
    InsPercutie(const InsPercutie &);
    virtual ~InsPercutie(){};
    InsPercutie& operator=(const InsPercutie&);
};
InsPercutie::InsPercutie(char *numarIdentificare,char *nume,char *cheieMuzicala):Instrument(numarIdentificare,nume,cheieMuzicala){}
InsPercutie::InsPercutie(const InsPercutie & i):Instrument(i){}
class InsCoarde : public Instrument{
public:
    InsCoarde(char *numarIdentificare=nullptr,char *nume=nullptr,char *cheieMuzicala=nullptr);
    InsCoarde(const InsCoarde &);
    virtual ~InsCoarde(){};
    InsCoarde& operator=(const InsCoarde&);
};
InsCoarde::InsCoarde(char *numarIdentificare,char *nume,char *cheieMuzicala):Instrument(numarIdentificare,nume,cheieMuzicala){}
InsCoarde::InsCoarde(const InsCoarde & i):Instrument(i){}
class InsSuflat : public Instrument{
public:
    InsSuflat(char *numarIdentificare=nullptr,char *nume=nullptr,char *cheieMuzicala=nullptr);
    InsSuflat(const InsSuflat &);
    virtual ~InsSuflat(){};
    InsSuflat& operator=(const InsSuflat&);
};
InsSuflat::InsSuflat(char *numarIdentificare,char *nume,char *cheieMuzicala):Instrument(numarIdentificare,nume,cheieMuzicala){}
InsSuflat::InsSuflat(const InsSuflat & i):Instrument(i){}
class Album{
    char *codAlbum;
    char *titlu;
    char *data;
    char *format;
public:
    Album(char * =nullptr,char * =nullptr,char * =nullptr,char * =nullptr);
    Album(const Album &);
    virtual ~Album();
    Album& operator=(const Album&);
    void afisare() { cout<<this->codAlbum<<" 2 "<<this->titlu<<" 3 "<<this->data<<" 4 "<<this->format; };
    char * getdata() { return this->data;};
    char * getcodAlbum() { return this->codAlbum;};
    char * getformat() { return this->format;};
    char * gettitlu() { return this->titlu;};
};
Album::Album(char *codAlbum,char *titlu,char *data,char *format){
    if(codAlbum!=nullptr){
        this->codAlbum = new char[strlen(codAlbum)+1];
        strcpy(this->codAlbum, codAlbum);
    }
     if(titlu!=nullptr){
        this->titlu = new char[strlen(titlu)+1];
        strcpy(this->titlu, titlu);
    }
     if(data!=nullptr){
        this->data = new char[strlen(data)+1];
        strcpy(this->data, data);
    }
      if(format!=nullptr){
        this->format = new char[strlen(format)+1];
        strcpy(this->format, format);
    }
}
Album::Album(const Album &i){
    if(i.codAlbum!=nullptr){
        this->codAlbum = new char[strlen(i.codAlbum)+1];
        strcpy(this->codAlbum, i.codAlbum);
    }
     if(i.titlu!=nullptr){
        this->titlu = new char[strlen(i.titlu)+1];
        strcpy(this->titlu, i.titlu);
    }
     if(i.data!=nullptr){
        this->data = new char[strlen(i.data)+1];
        strcpy(this->data, i.data);
    }
    if(i.format!=nullptr){
        this->format = new char[strlen(i.format)+1];
        strcpy(this->format, i.format);
    }
}
Album::~Album(){
     if(this->codAlbum!=nullptr) delete []this->codAlbum;
     if(this->titlu!=nullptr) delete []this->titlu;
     if(this->data!=nullptr) delete []this->data;
     if(this->format!=nullptr) delete []this->format;
}
Album& Album::operator=(const Album& i){
    if(&i==this) return *this;
    if(this->codAlbum!=nullptr) delete [] this->codAlbum;
    if(this->titlu!=nullptr) delete [] this->titlu;
    if(this->data!=nullptr) delete [] this->data;
    if(this->format!=nullptr) delete [] this->format;
    if(i.codAlbum!= nullptr){
            this->codAlbum=new char[strlen(i.codAlbum)+1];
            strcpy(this->codAlbum, i.codAlbum);}
    if(i.titlu!= nullptr){
            this->titlu=new char[strlen(i.titlu)+1];
            strcpy(this->titlu, i.titlu);}
    if(i.data!= nullptr) {
            this->data=new char[strlen(i.data)+1];
               strcpy(this->data, i.data);}
    if(i.format!= nullptr){
            this->format=new char[strlen(i.format)+1];
            strcpy(this->format, i.format);}
    return *this;
}
class Muzician{
    char *CNP;
    char *nume;
    char *adresa;
    char *numarTelefon;
    int numarInstrumente;
    Album albm[20];
    Instrument instr[20];
    int numarAlbume;
public:
    Muzician(char * =nullptr,char * =nullptr,char * =nullptr,char * =nullptr,int =0, Album []={},Instrument []={},int =0);
    Muzician(const Muzician &);
    virtual ~Muzician();
    Muzician& operator=(const Muzician&);
    int getnumarAlbume() { return this->numarAlbume;};
    int getnumarInstrumente() { return this->numarInstrumente;};
    char * getnume() { return this->nume;};
    char * titlualbum(int j) { return this->albm[j].gettitlu();};
    Album getalbm(int j) {return this->albm[j];};
    Instrument getinstr(int j) { return this->instr[j];}
    void afisare() { cout<<CNP<<"  "<<nume<<"   "<<adresa<<"   "<<numarTelefon<<endl;

        cout<<endl<<"Instrumente("<<numarInstrumente<<"): "<<endl;
        for(int i=0;i<numarInstrumente;i++){
            instr[i].afisare();
            cout<<endl;
        }

        cout<<endl<<"Albume("<<numarAlbume<<"): "<<endl;
        for(int i=0;i<numarAlbume;i++){
            albm[i].afisare();
            cout<<endl;
        }
       }
};
Muzician::Muzician(char *CNP,char *nume,char *adresa,char *numarTelefon,int numarAlbume,Album albm[],Instrument instr[],int numarInstrumente){
    if(CNP!=nullptr){
        this->CNP = new char[strlen(CNP)+1];
        strcpy(this->CNP, CNP);
    }
     if(nume!=nullptr){
        this->nume = new char[strlen(nume)+1];
        strcpy(this->nume, nume);
    }
     if(adresa!=nullptr){
        this->adresa = new char[strlen(adresa)+1];
        strcpy(this->adresa, adresa);
    }
      if(numarTelefon!=nullptr){
        this->numarTelefon = new char[strlen(numarTelefon)+1];
        strcpy(this->numarTelefon, numarTelefon);
    }
    this->numarInstrumente=numarInstrumente;
    this->numarAlbume=numarAlbume;
    for(int i=0;i<numarInstrumente;i++) this->instr[i]=instr[i];
    for(int i=0;i<numarAlbume;i++) this->albm[i]=albm[i];
}
Muzician::Muzician(const Muzician &i){
    if(i.CNP!=nullptr){
        this->CNP = new char[strlen(i.CNP)+1];
        strcpy(this->CNP, i.CNP);
    }
     if(i.nume!=nullptr){
        this->nume = new char[strlen(i.nume)+1];
        strcpy(this->nume, i.nume);
    }
     if(i.adresa!=nullptr){
        this->adresa = new char[strlen(i.adresa)+1];
        strcpy(this->adresa, i.adresa);
    }
      if(i.numarTelefon!=nullptr){
        this->numarTelefon = new char[strlen(i.numarTelefon)+1];
        strcpy(this->numarTelefon, i.numarTelefon);
    }
    this->numarInstrumente=i.numarInstrumente;
    this->numarAlbume=i.numarAlbume;
    for(int j=0;j<i.numarInstrumente;j++)
        this->instr[j]=i.instr[j];
    for(int j=0;j<i.numarAlbume;j++)
        this->albm[j]=i.albm[j];
}
Muzician::~Muzician(){
     if(this->CNP!=nullptr) delete [] this->CNP;
     if(this->nume!=nullptr) delete [] this->nume;
     if(this->adresa!=nullptr) delete [] this->adresa;
     if(this->numarTelefon!=nullptr) delete [] this->numarTelefon;
}
Muzician& Muzician::operator=(const Muzician& i){
    if(&i==this) return *this;
    if(this->CNP!=nullptr) delete [] this->CNP;
    if(this->nume!=nullptr) delete [] this->nume;
    if(this->adresa!=nullptr) delete [] this->adresa;
    if(this->numarTelefon!=nullptr) delete [] this->numarTelefon;
    if(i.CNP!= nullptr){
        this->CNP=new char[strlen(i.CNP)+1];
        strcpy(this->CNP, i.CNP);
    }
    if(i.nume!= nullptr){
        this->nume=new char[strlen(i.nume)+1];
        strcpy(this->nume, i.nume);
    }
    if(i.adresa!= nullptr){
         this->adresa=new char[strlen(i.adresa)+1];
         strcpy(this->adresa, i.adresa);
    }
    if(i.numarTelefon!= nullptr){
        this->numarTelefon=new char[strlen(i.numarTelefon)+1];
        strcpy(this->numarTelefon, i.numarTelefon);
    }
    this->numarInstrumente=i.numarInstrumente;
    this->numarAlbume=i.numarAlbume;
    for(int j=0;j<i.numarInstrumente;j++) this->instr[j]=i.instr[j];
    for(int j=0;j<i.numarAlbume;j++) this->albm[j]=i.albm[j];
    return *this;
}
int meniu(){
     int alegere;
     cout<<"Selectati ce doriti sa afiseze programul :\n";
     cout<<"1 : Numarul albumelor aparute intr-un anumit an\n2 : Albumele inregistrate pe un anumit format\n3 : Toate albumele inregistrate (ordine cronologica)\n4 : Lista albumelor scoase de un anumit artist\n5 : Instrumentele folosite pentru un anumit album\n\n";
     cout<<"0 : Exit";
     cout<<"\n";
     cin>>alegere;
     cout<<"\n";
     return alegere;

}
void fct1(Album albume[],int n){
    char alegere[5];
    int nr=0;
    cout<<"Alegeti un an:\n";
    cin>>alegere;
    for (int i=1;i<=n;i++){
        if(alegere[0]==albume[i].getdata()[6] &&alegere[1]==albume[i].getdata()[7] && alegere[2]==albume[i].getdata()[8] && alegere[3]==albume[i].getdata()[9] )
            nr++;
    }
    cout<<"\nIn anul "<<alegere<<" au iesit "<<nr<<" albume";
}
void fct2(Album albume[],int n){
    cout<<"Alegeti un format (CD/DVD):\n";
    char alegere[10];
    int nr=0;
    cin>>alegere;
    if(strcmp(alegere,"CD")!=0 && strcmp(alegere,"DVD")!=0){
        cout<<"Nu ati introdus un format valid";
        return;}
    cout<<endl;
    cout<<"Urmatoarele albume au un format "<<alegere<<endl;
    for (int i=1;i<=n;i++){
        if (strncmp(albume[i].getformat(),alegere,2)==0)
            cout<<albume[i].gettitlu()<<endl,nr++;
    }
    if(nr==0)
        cout<<"Ne pare rau ,nu exista albume inregistrate pe acest format\n";
}
void fct3(Album albume[],int m){
    int ok=0,sw=0;
    do{
            ok=0;
        for(int i=1;i<m;i++){
            sw=0;
            if(albume[i].getdata()[8]>albume[i+1].getdata()[8])
                sw=1;
            else   if(albume[i].getdata()[8]==albume[i+1].getdata()[8] )
                if(albume[i].getdata()[9]>albume[i+1].getdata()[9])
                    sw=1;
                else if(albume[i].getdata()[9]==albume[i+1].getdata()[9])
                    if(albume[i].getdata()[3]>albume[i+1].getdata()[3])
                        sw=1;
                    else if(albume[i].getdata()[3]==albume[i+1].getdata()[3])
                        if(albume[i].getdata()[4]>albume[i+1].getdata()[4])
                            sw=1;
                        else if(albume[i].getdata()[4]==albume[i+1].getdata()[4])
                            if(albume[i].getdata()[0]>albume[i+1].getdata()[0])
                                sw=1;
                            else if(albume[i].getdata()[0]==albume[i+1].getdata()[0])
                                if(albume[i].getdata()[1]>albume[i+1].getdata()[1])
                                    sw=1;
            if(sw==1){
                Album aux(albume[i]);
                albume[i]=albume[i+1];
                albume[i+1]=aux;
                ok=1;

            }
        }
    }while(ok!=0);

    for(int i=1;i<=m;i++)
        {cout<<albume[i].gettitlu();
            cout<<" lansat la data de "<<albume[i].getdata()<<endl;
        }
}
void fct4(Muzician muzicieni[],int m){
    cout<<"Alegeti un muzician :\n";
    int alegere;
    for(int i=1;i<=m;i++){
        cout<<i<<". "<<muzicieni[i].getnume()<<endl;
    }
    cin>>alegere;
    cout<<"\nAlbume scoase de \n"<<muzicieni[alegere].getnume()<<endl;
    for (int j=0;j<muzicieni[alegere].getnumarAlbume();j++)
        cout<<" - "<<muzicieni[alegere].titlualbum(j)<<endl;
        cout<<"\n";

}
void fct5(Muzician muzicieni[],int n,Album albume[],int m)
{
    cout<<"Alegeti un album:\n";
    int al;
    char cod[100];
    for(int i=1;i<=m;i++)
        cout<<i<<" "<<albume[i].gettitlu()<<endl;
    cin>>al;
    strcpy(cod,albume[al].getcodAlbum());
    cout<<"Instrumentele folosite in acest album sunt :\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<muzicieni[i].getnumarAlbume();j++){

            if(strncmp(muzicieni[i].getalbm(j).getcodAlbum(),cod,6)==0){

                for(int k=0;k<muzicieni[i].getnumarInstrumente();k++)
                   cout<<muzicieni[i].getinstr(k).getnume()<<endl;
   return;
            }
        }
    }

}
int main()
{
    int alegere=meniu();
    system("cls");
    Muzician muzicieni[50];
    Album albume[50];
    //--------------------Citire albume---------------------//

    int j = 0, m = 0;  // m = numarul albumelor citite / j = linia care se citeste
    char linie[50],str1[50],str2[50],str3[50],str4[50],str5[50],str6[50],str7[50],str8[50],str9[50],str10[50],str11[50],str12[50];
    // in linie se stocheaza toate caracterele de pe linia citita

    while(f1.getline( linie , 100)){
        j++;
        if (j==1){
            m++;
            strcpy(str1,(linie));
        }
        else if(j==2){
            strcpy(str2,linie);
        }
        else if(j==3){
            strcpy(str3,linie);
        }
        else if(j==4){
            strcpy(str4,linie);
            Album auxalbum(str1,str2,str3,str4);
            albume[m]=auxalbum;
            j=-1;
        }
    }
    //cout<<endl<<"Nr.Alb="<<m<<endl;
   /* for(int ii=1;ii<=m;ii++){
        cout<<"<++"<<endl;
        albume[ii].afisare();
    }
*/
    int i=0,n=0,nr;  // n = numarul muzicienilor cititi / i = linia care se citeste
    int ct=0;

    Instrument instr[20];
    Album auxa[20];
    int nrIntrari, nrAlbume, contor, contor2=0;
    f2>>nrIntrari;
    f2.ignore();
    n=0;
    char sp[5]="\n";
   // while(nrIntrari){
        char spatiu[5];
        f2.getline(spatiu,100);
        while(f2.getline(linie, 100)){
            i++;
            if (i==1){
                n++;
                strcpy(str1,linie);
            }
            else if(i==2){
                strcpy(str2,linie);
            }
            else if(i==3){
                strcpy(str3,linie);
            }
            else if(i==4){
                strcpy(str4,linie);
            }
            else if(i==5){
                nr=0;
                for (int k=0;k<strlen(linie);k++){
                    if(linie[k]==',')
                        nr++;
                }
                //cout<<"---"<<nr<<endl;
            }
            else if(i==6)
            {
                //cout<<"mesaj";
                for (int k=1;k<=nr+1;k++){
                    strcpy(str5,linie);
                    f2.getline( linie ,100);
                    strcpy(str6,linie);
                    f2.getline( linie ,100);
                    strcpy(str7,linie);
                    f2.getline( linie ,100);
                    Instrument iii(str5,str6,str7);
                    instr[k-1]=iii;
                }
                //albume
                f2>>nrAlbume;
                f2.ignore();
                contor=0;
                for(int l=0; l<nrAlbume; l++){
                    f2.getline( linie ,100);
                    //cout<<"------: "<<linie<<endl;
                    for(j=1;j<=m;j++)
                        if(strncmp (linie,albume[j].getcodAlbum(),6)==0){
                            auxa[contor]=albume[j];
                            //auxa[contor].afisare();
                            contor++;
                        }
                }
                //afisare albume/muzician

               // cout<<endl<<"-----------------"<<endl;
                Muzician *M=new Muzician(str1,str2,str3,str4,nrAlbume,auxa,instr,nr+1);
                //cout<<endl<<"-----------------"<<endl;
                muzicieni[n]=*M;
               // cout<<endl<<"-----------------"<<endl;

                //muzicieni[n].afisare();
                i=0;
            }//if==6

        }//while/linii




        //nrIntrari--;
    //}//while/intrari

    if(alegere==0) return 0;
    if(alegere==1) fct1(albume,m);
    if(alegere==2) fct2(albume,m);
    if(alegere==3) fct3(albume,m);
    if(alegere==4) fct4(muzicieni,n);
    if(alegere==5) fct5(muzicieni, n,albume,m);
    return 0;

}
