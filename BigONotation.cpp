#include <iostream>
using namespace std;

//O(1) Constant Time
int main(){
	int x=3, y=3, z;
	
	z=x*y;
	cout << z;
return 0;
}



//O(N) Linear Time
int main(){
	int n=5;
	for (int i=1; i<n; i++){
		cout<<i<<" ";
	}
}


//O(N^2) Quadratic Time
int main(){
	int n=3;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout<<i<<","<<j<<"\n";
		}
	cout<<endl;
	}
}


//O(log N) Logarithmic Time
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


//O(2^N) Exponential Time
int fibonacci(int n) {
	if (n == 0 || n ==1){
    		return n;
  	} else {
    		return (fibonacci(n-1) + fibonacci(n-2));
  }
}

int main() {
  
	int n, i, j = 0;

  	cout << "Masukkan batas jumlah bilangan fibonacci: ";
  	cin >> n;

  	cout << "Hasil bilangan fibonacci: \n";
  	for (i = 1; i <= n; i++){
    	cout << "fibonacci ke-"<< i <<": " << fibonacci(j) << endl;
    	j++;
  	}
return 0;
}

