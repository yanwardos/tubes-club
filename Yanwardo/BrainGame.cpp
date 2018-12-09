#include<iostream>
using namespace std;


////dataPermainan
struct dataRuntime{
	int level;
	int noScene;
	int noPertanyaan;
	int nyawa;
	int skor;
	bool lanjut;
};

//Manifest untuk Level
struct manifestLevel{
	int intervalRandomPertanyaan;
	int mutuPertanyaan;
	int passingScore;
};

//yanwardo sitanggang florensius
//Manifest untuk Mode <easy, medium, hard>
struct manifestMode{
	int panjangScene;
	char daftarKarakter[];
	int waktuIngat;
	int waktuJawab;
	int nyawa;
};




//LIST
//data_scene
struct listScene{
	int nomor;
	int panjang;
	string scene;
	listScene *next;
};
struct kepalaScene{
	listScene *first;
};

//data_Pertanyaan
struct listPertanyaan{
	int nomor;
	int mutu;
	string pertanyaan;	
	string jawaban;
	listPertanyaan *next; 
};
struct kepalaPertanyaan{
	listPertanyaan *first;
};

/*format pertanyaan
mutu 1:
berapa jumlah * pada scene x?

mutu 2:
berapa jumlah * pada scene x dan y?

berapa jumlah * pada scene x, y, dan z?

*/


struct data{
	string nomor;
	int angka;
};
int main(){
	manifestLevel x[3];
	
	
	manifestMode MODE[3];
	
	MODE[0].panjangScene=7;
	MODE[0].daftarKarakter="@%*))";
	MODE[0].nyawa= ;
	MODE[0].waktuIngat= ;
	MODE[0].waktuJawab= ;
	
	MODE[1].panjangScene=7;
	MODE[1].daftarKarakter="";
	MODE[1].nyawa= ;
	MODE[1].waktuIngat= ;
	MODE[1].waktuJawab= ;
	
	MODE[2].panjangScene=7;
	MODE[2].daftarKarakter="";
	MODE[2].nyawa= ;
	MODE[2].waktuIngat= ;
	MODE[2].waktuJawab= ;
	
	
	
	
	data haha;
	data *alamatHaha;
	
	
	haha.angka=5;
	haha.nomor="sesuatu";
	
	
	return 0;
}

