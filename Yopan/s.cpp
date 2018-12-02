#include <iostream>
#include <stdlib.h>
using namespace std;

typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList {
	infotype 	info;
	address 	next;
} ElmtList;

typedef struct {
	address	first;
} List;


//SELEKTOR
#define First(L) (L).first
#define Next(P) (P)->next
#define Info(P) (P)->info


bool isEmpty (List L){
	return First(L)==NULL;
}

void createList (List *L){
	First(*L) = NULL;
}

address alokasi (infotype X){
	address NewElmt = address(malloc(sizeof(ElmtList)));
	if( NewElmt==NULL){
		return NULL;
	}

	Info(NewElmt)=X ;
	Next(NewElmt)=NULL;
	return NewElmt;

}

void dealokasi (address P){
	free(P);
}

void InsertFirst(List *L,infotype X){
    address baru=alokasi(X);
    address P=First(*L);
    if(isEmpty(*L)){
        First(*L)=baru;
        Next(baru)=First(*L);
    }
    else{
        P=First(*L);
        while(Next(P)!=First(*L)){
            P=Next(P);
        }
        Next(P)=baru;
        Next(baru)=First(*L);
        First(*L)=baru;
    }
}

void InsertAfter(address *prec,infotype X){
    address baru=alokasi(X);
    Next(*prec)=baru;
    Next(baru)=Next(*prec);
}

void InsertLast(List *L,infotype X){
    address baru=alokasi(X);
    address P;
    if(isEmpty(*L)){
        InsertFirst(L,X);
    }else{
        P=First(*L);
        while (Next(P)!=First(*L)){
              P=Next(P);
        }
        Next(P)=baru;
        Next(baru)=First(*L);
    }
}

void DeleteFirst(List *L){
     address P=First(*L);
    if(!isEmpty(*L)){
        while(Next(P)!=First(*L)){
            P=Next(P);
        }
        if(Next(P)==P){
            Next(P)=NULL;
            dealokasi(P);
        }
        address hapus=First(*L);
        Next(P)=Next(hapus);
        First(*L)=Next(hapus);
        P=NULL;
        dealokasi(hapus);
    }
}

void deleteAfter(List *L){
    address *prec;
    if(!isEmpty(*L)){
        address p=Next(*prec);
        Next(*prec)=Next(p);
        p=NULL;
        dealokasi(p);
    }
}

void DeleteLast(List *L){
    if(!isEmpty(*L)){
        address P=First(*L);
        address temp;
        while(Next(P)!=First(*L)){
            temp=P;
            P=Next(P);
        }
        if (P==First(*L)){
            DeleteFirst(L);
        }
        Next(temp)=First(*L);
        Next(P)=NULL;
        dealokasi(P);
    }
}


void Print(List L){
    if(!isEmpty(L)){
        address P=First(L);
        while(Next(P)!=First(L)){
            cout<<Info(P);
            P=Next(P);
        }
        cout<<Info(P);
    }
}
void brain(List L){

}


