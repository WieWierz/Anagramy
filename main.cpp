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
        string linia3;
        
        string linia1x;
        string linia2x;
        string linia3x;
        
        string jeden;
        string dwa;
        string trzy;
        
        plik1.open("wyr.txt");
   		plik2.open("wyr2.txt");
   		
   		getline(plik1,linia1);
        getline(plik1,linia2);
        getline(plik1,linia3);

        linia1x = stringSort(linia1);
        linia2x = stringSort(linia2);
        linia3x = stringSort(linia3);
   		
   	//	plik2<<linia1x<<endl<<linia2x<<endl<<linia3x<<endl;
   	//	plik2<<linia1<<endl<<linia2<<endl<<linia3<<endl;
   		plik2<<"["<<endl;
   		
   		 if(isAnagram(linia1x,linia2x))
   		 	{			
   			plik2<<"{\"slowo\": \""<<linia1<<"\", \"anagram\":"<<"\""<<linia1x<<"\"}";
			plik2<<"{\"slowo\": \""<<linia2<<"\", \"anagram\":"<<"\""<<linia2x<<"\"}"<<endl;
			}
		
		if(isAnagram(linia2x,linia3x))
   		 	{
   			plik2<<"{\"slowo\": \""<<linia2<<"\", \"anagram\":"<<"\""<<linia2x<<"\"}";
   			plik2<<"{\"slowo\": \""<<linia3<<"\", \"anagram\":"<<"\""<<linia3x<<"\"}"<<endl;
   			cout<<"dziala";
   			}
			 		
   		plik2<<"]";
   		
   		plik1.close();
    	plik2.close();
   
return 0;
}

