#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isAnagram(string linia1x, string linia2x){
       	
       		if(linia1x.length() != linia2x.length() ) 
			   return false; 
			   
			   for (int i=0; i<linia1x.length(); i++) 
 			{
     			if (linia1x[i] = linia2x[i])
				 
        		 return true;
        	
}
}
string stringSort(string s)
{
	string napis(s);
	int dlugosc = napis.length();

	for(int i=0; i<dlugosc-1; i++)
   	{
        for(int j=0; j<dlugosc-1; j++)
        {
           if(napis[j]>napis[j+1])
           {
                char litera = napis[j];
                napis[j] = napis[j+1];
                napis[j+1] = litera;
           }
}
}
return napis;
}
int main(int argc, char** argv) {

		ifstream plik1;
        ofstream plik2;
        
        string linia1;
        string linia2;

        string linia1x;
        string linia2x;
           
        plik1.open("wyr.txt");
   		plik2.open("wyr2.txt");
   		
   		plik2<<"["<<endl;
   		
    		while(!plik1.eof()){	
		   
		   	getline(plik1,linia1);  

   			for(int i=0;i<2;i++){
			   
        getline(plik1,linia2);
        

        linia1x = stringSort(linia1);
        linia2x = stringSort(linia2);
        
   		 if(isAnagram(linia1x,linia2x))
   		 	{			
   			cout<<"{\"slowo\": \""<<linia1<<"\", \"anagram\":"<<"\""<<linia1x<<"\"},";
			cout<<"{\"slowo\": \""<<linia2<<"\", \"anagram\":"<<"\""<<linia2x<<"\"}"<<endl;
			}
			
			linia2 = linia1;
	}
	}
   		plik2<<"]";
   		
   		plik1.close();
    	plik2.close();
   
return 0;
}

