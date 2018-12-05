#include<iostream>
using namespace std;


////dataPermainan
struct dataPermainan{
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
	int jumlahKarakter;
	char daftarKarakter[];
	int waktuIngat;
	int waktuJawab;
	int nyawa;
};


//LIST
//data_scene
struct data_Scene{
	int nomor;
	string scene;
	data_Scene *next;
};
struct kepalaScene{
	data_Scene *first;
};

//data_Pertanyaan
struct data_Pertanyaan{
	int nomor;
	string pertanyaan;	
	data_Pertanyaan *next; 
};
struct kepalaPertanyaan{
	data_Pertanyaan *first;
};





int main(){
	manifestLevel x[3];
	
	x{
	mutuPertanyaan = 5;
	};
	
	return 0;
}

