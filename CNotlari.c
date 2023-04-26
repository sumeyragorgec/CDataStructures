#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Abstract Data Types: �zel veri saklama yap�s� + soyut veri yap�s� 
/*
* her d���m sonras�n� i�aret etmek zorunda 
* iki temel de�er 1-data 2- pointer: Bir sonraki d���m� i�aret eder 
* son d���m null i�aret eder 
* ba�l� liste �e�itleri :
* 1) T�m elemanlar sonrakini i�aret eder, son d���m null'� i�aret eder.
* 2) Dairesel ba�l� liste : SOn d���m ilk d���m ile ba�lan�r.
* 3) Doubly Linked List : �ki pointer tutar biri �nceki d���m� biri sonraki d���m� i�aret eder 
* Traverse i�lemi : �lk d���mden ba�layarak gezinme 

* BA�LI L�STELER�N AVANTAJLARI
* Dinamiktir
* Bellekten tasarruf sa�lar, ihtiya� kadar yer a�ar
* ELeman ekleme ve silme i�lemleri kolay, dizilerde yapt���m�z zaman t�m indeksleri de�i�tirmemiz gerekir 
* Random eri�im yok, en ba�tan ba�lamam�z gerek.
* Ekstra haf�za gerektirir, fazladan pointer tutmak zorunda kal�r�z.
* malloc nedir?
* (geriDondurulecekVeriTipi *) malloc(ayr�lacakAlan* sizeof (veritipi))
*/


/*d���m yap�s�*/
struct node {
	int data;
	struct node *sonraki;
};


int main(int argc, char *argv[]) {
	struct node *first = NULL ; // initial value = null
	struct node *second= (struct node*)malloc(sizeof(struct node));
	first = (struct node*)malloc(sizeof(struct node));// ilk d���me haf�zadan yer ay�rd�m 
	first->data=57;
	first->sonraki=second;
	second->data=58;
	second->sonraki=NULL;
	printf("DATAS => first : %d second : %d", first->data , second->data);
	
	return 0;
}

/*
malloc en �nemli nokta yer ayr�lmadan kullan�lamaz !
*/
