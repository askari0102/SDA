#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};
node *head, *tail;

void init(){
	head = NULL;
	tail = NULL;
}
int kosong(){
	if(tail == NULL)
	return 1;
	else
	return 0;
}
void tambahDepan(int databaru){
	node *baru;
	baru = new node;
	baru->data = databaru;
	baru->next = NULL;
	if(kosong()==1){
		head = tail = baru;
		tail -> next = NULL;
		
	}
	else{
		baru->next = head;
		head = baru;
	}
	cout << "Data Masuk\n";
}
void tambahBelakang(int databaru){
	node *baru, *bantu;
	baru = new node;
	baru->data = databaru;
	baru->next = NULL;
	if(kosong()==1){
		head = baru;
		tail = baru;
		tail->next = NULL;	
	}
	else{
		tail->next = baru;
		tail = baru;
	}
	cout << "Data Masuk\n";


}

void tampil(){
	node *bantu;
	bantu = head;
	if(kosong()==0){
		while(bantu!=NULL){
			cout << bantu->data<<" ";
			bantu=bantu->next;
		}
	}	else cout << "Masih Kosong\n";
}
void ubahDepan(int data){
	head->data=data;
}
void ubahBelakang(int data){
	tail->data=data;
}
void hapusDepan(){
	node *hapus;
	int d;
	if(kosong()==0){
		if(head!=tail){
			hapus = head;
			d = hapus->data;
			head = head->next;
			delete hapus;
		}
		else{
			d = tail->data;
			head=tail=NULL;
		}
		cout << d << "Terhapus";
	}	else cout << "Masih Kosong\n";
}
void hapusBelakang(){
	node *bantu, *hapus;
	int d;
	if(kosong()==0){
		bantu = head;
		if(head!=tail){
			while(bantu->next!=tail){
				bantu = bantu->next;
			}
			hapus = tail;
			tail = bantu;
			d = hapus->data;
			delete hapus;
			tail->next = NULL;
		} else {
			d = tail->data;
			head=tail=NULL;			
		}
	cout << d <<" Terhapus\n";
		}
		else cout << "Masih Kosong\n";
}
void clear(){
	node *bantu, *hapus;
	bantu = head;
	while(bantu!=NULL){
		hapus = bantu;
		bantu = bantu->next;
		delete hapus;
	}
	head = NULL;
	cout << "CLEAR";
}	

int main(){
	int pil, databaru;
	
	do{
		cout << endl << endl;
		cout << "===========================" << endl;
		cout << "=						   =" << endl;
		cout << "= 1. Tambah Depan		   =" << endl;
		cout << "= 2. Tambah Tengah		   =" << endl;
		cout << "= 3. Tambah Belakang	   =" << endl;
		cout << "= 4. Ubah Depan		   =" << endl;
		cout << "= 5. Ubah Belakang		   =" << endl;
		cout << "= 6.  Depan		       =" << endl;
	}
}
