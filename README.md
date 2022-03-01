# BigONotation

#include <iostream>
using namespace std;

//O(1)
int main(){
	int x=3, y=3, z;
	
	z=x*y;
	cout << z;
return 0;
}

//O(n)
int main(){
	int n=5;
	for (int i=1; i<n; i++){
		cout<<i<<" ";
	}
}

//O(n^2)
int main(){
	int n=3;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout<<i<<","<<j<<"\n";
		}
	cout<<endl;
	}
}


//O(2^n)
int faktorial (int A);

int main(){
	
	int r,hasil;
	
	cout<<"Masukan Nilai = ";
	cin>>r;
	
	hasil=faktorial(r);
	cout<<"Faktorial "<<r<<"!= "<<hasil<<endl;
}

int faktorial (int A){
	if (A==1)
		return(A);
	else
		return (A*faktorial(A-1));
}

//O(logn)
int main(){
	int n=3;
	for (int i=1; i<n; i=i*2){
		cout<<"halo :"<<i<<endl;
	}
}
