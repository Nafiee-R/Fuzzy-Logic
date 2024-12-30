#include <iostream>
#include <conio>
#include <iomanip>

float pwrendah(float x);
float pwsedang(float x);
float pwtinggi(float x);
float pmrendah(float x);
float pmsedang(float x);
float pmtinggi(float x);
float lirendah(float x);
float lisedang(float x);
float litinggi(float x);
float hgturun(float x);
float hgnaik(float x);
float min(float x, float y, float z);

void main(){
    int i,plh;
    float off,bid,lj,sum,zA,zt;
	 float a[27],z[27];
    cout<<"Adam Havenia Pratama(181221006)\t\tMuhamad Fikri Ardani(181221008)"<<endl;
    cout<<"Gading Wisnu Kusuma(181221082)\t\tMuh Fath Rajihan N(181221084)\n"<<endl;
    cout<<" PROJECT UAS KEL-3 LOGIKA FUZZY "<<endl;
    cout<<"PREDIKSI HARGA SAHAM BANK MANDIRI"<<endl;
    cout<<"================================="<<endl;
    prdct :
    cout<<endl;
    cout<<"Offer (Volume)\t\t= ";cin>>off;
    cout<<"Bid (Volume)\t\t= ";cin>>bid;
    cout<<"Laju Inflasi (bulan)\t= ";cin>>lj;
    cout<<endl;

    // Nilai keanggotaan (fuzzyfikasi)
    cout<<"\tNilai Keanggotaan"<<endl;
    cout<<"================================"<<endl;
    cout<<"Offer Rendah\t: "<<pwrendah(off)<<endl;
    cout<<"Offer Sedang\t: "<<pwsedang(off)<<endl;
    cout<<"Offer Tinggi\t: "<<pwtinggi(off)<<endl;
    cout<<"Bid Rendah\t: "<<pmrendah(bid)<<endl;
    cout<<"Bid Sedang\t: "<<pmsedang(bid)<<endl;
    cout<<"Bid Tinggi\t: "<<pmtinggi(bid)<<endl;
    cout<<"Inflasi Rendah\t: "<<lirendah(lj)<<endl;
    cout<<"Inflasi Sedang\t: "<<lisedang(lj)<<endl;
    cout<<"Inflasi Tinggi\t: "<<litinggi(lj)<<endl;
    cout<<endl;

    //Rules (inferensi)
    // R1 pwrendah n pmrendah n lirendah = hgnaik
    a[0]=min(pwrendah(off), pmrendah(bid), lirendah(lj));
    z[0]=hgnaik(a[0]);
    // R2 pwrendah n pmrendah n lisedang = hgturun
    a[1]=min(pwrendah(off), pmrendah(bid), lisedang(lj));
    z[1]=hgturun(a[1]);
    // R3 pwrendah n pmrendah n ljtinggi = hgturun
    a[2]=min(pwrendah(off), pmrendah(bid), litinggi(lj));
    z[2]=hgturun(a[2]);
    // R4 pwrendah n pmsedang n ljrendah = hgnaik
    a[3]=min(pwrendah(off), pmsedang(bid), lirendah(lj));
    z[3]=hgnaik(a[3]);
    // R5 pwrendah n pmsedang n ljsedang = hgturun
    a[4]=min(pwrendah(off), pmsedang(bid), lisedang(lj));
    z[4]=hgturun(a[4]);
    // R6 pwrendah n pmsedang n ljtinggi = hgturun
    a[5]=min(pwrendah(off), pmsedang(bid), litinggi(lj));
    z[5]=hgturun(a[5]);
    // R7 pwrendah n pmtinggi n ljrendah = hgnaik
    a[6]=min(pwrendah(off), pmtinggi(bid), lirendah(lj));
    z[6]=hgnaik(a[6]);
    // R8 pwrendah n pmtinggi n ljsedang = hgturun
    a[7]=min(pwrendah(off), pmtinggi(bid), lisedang(lj));
    z[7]=hgturun(a[7]);
    // R9 pwrendah n pmtinggi n ljtinggi = hgturun
    a[8]=min(pwrendah(off), pmtinggi(bid), litinggi(lj));
    z[8]=hgturun(a[8]);
    // R10 pwsedang n pmrendah n ljrendah = hgnaik
    a[9]=min(pwsedang(off), pmrendah(bid), lirendah(lj));
    z[9]=hgnaik(a[9]);
    // R11 pwsedang n pmrendah n ljsedang = hgturun
    a[10]=min(pwsedang(off), pmrendah(bid), lisedang(lj));
    z[10]=hgturun(a[10]);
    // R12 pwsedang n pmrendah n ljtinggi = hgturun
    a[11]=min(pwsedang(off), pmrendah(bid), litinggi(lj));
    z[11]=hgturun(a[11]);
    // R13 pwsedang n pmsedang n ljrendah = hgnaik
    a[12]=min(pwsedang(off), pmsedang(bid), lirendah(lj));
    z[12]=hgnaik(a[12]);
    // R14 pwsedang n pmsedang n ljsedang = hgturun
    a[13]=min(pwsedang(off), pmsedang(bid), lisedang(lj));
    z[13]=hgturun(a[13]);
    // R15 pwsedang n pmsedang n ljtinggi = hgturun
    a[14]=min(pwsedang(off), pmsedang(bid), litinggi(lj));
    z[14]=hgturun(a[14]);
    // R16 pwsedang n pmtinggi n ljrendah = hgnaik
    a[15]=min(pwsedang(off), pmtinggi(bid), lirendah(lj));
    z[15]=hgnaik(a[15]);
    // R17 pwsedang n pmtinggi n ljsedang = hgturun
    a[16]=min(pwsedang(off), pmtinggi(bid), lisedang(lj));
    z[16]=hgturun(a[16]);
    // R18 pwsedang n pmtinggi n ljtinggi = hgturun
    a[17]=min(pwsedang(off), pmtinggi(bid), litinggi(lj));
    z[17]=hgturun(a[17]);
    // R19 pwtinggi n pmrendah n ljrendah = hgnaik
    a[18]=min(pwtinggi(off), pmrendah(bid), lirendah(lj));
    z[18]=hgnaik(a[18]);
    // R20 pwtinggi n pmrendah n ljsedang = hgturun
    a[19]=min(pwtinggi(off), pmrendah(bid), lisedang(lj));
    z[19]=hgturun(a[19]);
    // R21 pwtinggi n pmrendah n ljtinggi = hgturun
    a[20]=min(pwtinggi(off), pmrendah(bid), litinggi(lj));
    z[20]=hgturun(a[20]);
    //R22 pwtinggi n pmsedang n ljrendah = hgnaik
    a[21]=min(pwtinggi(off), pmsedang(bid), lirendah(lj));
    z[21]=hgnaik(a[21]);
    // R23 pwtinggi n pmsedang n ljsedang = hgturun
    a[22]=min(pwtinggi(off), pmsedang(bid), lisedang(lj));
    z[22]=hgturun(a[22]);
    // R24 pwtinggi n pmsedang n ljtinggi = hgturun
    a[23]=min(pwtinggi(off), pmsedang(bid), litinggi(lj));
    z[23]=hgturun(a[23]);
    // R25 pwtinggi n pmtinggi n ljrendah = hgnaik
    a[24]=min(pwtinggi(off), pmtinggi(bid), lirendah(lj));
    z[24]=hgnaik(a[24]);
    // R26 pwtinggi n pmtinggi n ljsedang = hgturun
    a[25]=min(pwtinggi(off), pmtinggi(bid), lisedang(lj));
    z[25]=hgturun(a[25]);
    // R27 pwtinggi n pmtinggi n ljtinggi = hgturun
    a[26]=min(pwtinggi(off), pmtinggi(bid), litinggi(lj));
    z[26]=hgturun(a[26]);


    //rincian rules fuzzy
    cout<<"\t\tATURAN FUZZY"<<endl;
    	for(i=0;i<=48;i++){
      	cout<<"=";
      }cout<<endl;
    cout<<"RULE"<<setw(13)<<"A"<<setw(14)<<"Z"<<setw(18)<<"(A*Z)"<<endl;
    for(i=0;i<=26;i++){
      if(i<=8){
      	cout<<"R"<<(i+1)<<setw(15)<<a[i]<<setw(15)<<z[i]<<setw(15)<<(a[i]*z[i])<<endl;
    	}else{
         cout<<"R"<<(i+1)<<setw(14)<<a[i]<<setw(15)<<z[i]<<setw(15)<<(a[i]*z[i])<<endl;
      }
    }

    //defuzzyfikasi
    sum =0;
    zA = 0;
    	for(i=0;i<=26;i++){
      	sum += (a[i]*z[i]);
    	}
    		for(i=0;i<=26;i++){
      		zA += a[i];
    		}

    zt = sum/zA;

    for(i=0;i<=48;i++){
      	cout<<"=";
      }cout<<endl;
    cout<<setw(5)<<"Maka, prediksi saham anda sebesar Rp"<<zt<<endl;
    for(i=0;i<=48;i++){
      	cout<<"=";
      }cout<<endl;
    cout<<"\n1. Iya\n2. Tidak\nPrediksi lagi(1/2) ? ";cin>>plh;
    	if(plh==1){
      	goto prdct;
      }else{
      	cout<<"\n"<<setw(25)<<"SEE YOU"<<endl;
         for(i=0;i<=48;i++){
      		cout<<"=";
      	}cout<<endl;
      }

    getch();
}

float pwrendah(float x){

	if(x<=42250){
   	return 1;
   } else if(x>=42250 && x<=215750){
   	return (215750-x)/(215750-42250);
   } else {
   	return 0;
   }
}

float pwsedang(float x){

	if(x>=42250 && x<=215750){
   	return (x-42250)/(215750-42250);
   } else if(x>=215750 && x<=630525){
   	return (630525-x)/(630525-215750);
   } else {
   	return 0;
   }
}

float pwtinggi(float x){
	if(x<=215750){
   	return 0;
   } else if(x>=215750 && x<=630525){
   	return (x-215750)/(630525-215750);
   } else {
   	return 1;
   }
}

float pmrendah(float x){
	if(x<=140800){
   	return 1;
   } else if(x>=140800 && x<=479950){
   	return (479950-x)/(479950-140800);
   } else {
   	return 0;
   }
}

float pmsedang(float x){
	if(x>=140800 && x<=479950){
   	return (x-140800)/(479950-140800);
   } else if(x>=479950 && x<=1588900){
   	return (1588900-x)/(1588900-479950);
   } else {
   	return 0;
   }
}

float pmtinggi(float x){
	if(x<=479950){
   	return 0;
   } else if(x>=479950 && x<=1588900){
   	return (x-479950)/(1588900-479950);
   } else {
   	return 1;
   }
}

float lirendah(float x){
	if(x<=2){
   	return 1;
   } else if(x>=2 && x<=4){
   	return (4-x)/(4-2);
   } else {
   	return 0;
   }
}

float lisedang(float x){
	if(x>=2 && x<=4){
   	return (x-2)/(4-2);
   } else if(x>=4 && x<=6){
   	return (6-x)/(6-4);
   } else {
   	return 0;
   }
}

float litinggi(float x){
	if(x<=4){
   	return 0;
   } else if(x>=4 && x<=6){
   	return (x-4)/(6-4);
   } else {
   	return 1;
   }
}

float hgturun(float miu){
	if(miu==1){
   	return 5650;
   }else if(miu>=0 && miu<=1){
   	return 6125-((6125-5650)*miu);
   }else {
   	return 6125;
   }
}

float hgnaik(float miu){
	if(miu==0){
   	return 5650;
   }else if(miu>=0 && miu<=1){
   	return 5650+((6125-5650))*miu;
   }else {
   	return 6125;
   }
}

float min(float x, float y, float z){
    float hasil=x;
    if(y<hasil){
    	hasil=y;
    }
    if(z<hasil){
    	hasil=z;
    }
    return hasil;
}
